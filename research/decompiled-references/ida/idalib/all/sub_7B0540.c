__int64 __fastcall sub_7B0540(__int64 a1, __int64 a2, const void *a3, unsigned __int64 *a4, char a5)
{
  unsigned __int64 v5; // rax
  char *v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  __int64 v15; // rdx
  size_t v16; // r13
  unsigned __int64 v17; // r14
  const char *v18; // rdx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 i; // r15
  __int64 v31; // rax
  void *v32; // rdi
  __int64 v33; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int128 v35; // [rsp+18h] [rbp-70h]
  __int64 v36; // [rsp+30h] [rbp-58h] BYREF
  __int128 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 6016) & 1) == 0 )
  {
    if ( !under_debugger )
      interr(1226);
    BUG();
  }
  v5 = *a4;
  v35 = 0;
  v10 = nullptr;
  ptr = nullptr;
  if ( v5 )
  {
    v15 = 0x8000;
    if ( v5 <= 0x8000 )
      v15 = v5;
    v16 = v15;
    v33 = v15 + 1;
    ptr = (void *)qvector_reserve(&ptr, 0, v15 + 1, 1);
    *(_QWORD *)&v35 = v33;
    memmove(ptr, a3, v16);
    *((_BYTE *)ptr + v16) = 0;
    v10 = (char *)ptr;
  }
  v11 = sub_7AE3D0(a1 + 5944, v10);
  if ( v11 != a1 + 5952 )
  {
    v12 = *(int *)(v11 + 40);
LABEL_5:
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 1) = swap64(v12);
    v10 = (char *)ptr;
    *a4 = 9;
    goto LABEL_6;
  }
  if ( a5 )
  {
    v17 = *(_QWORD *)(a1 + 6000);
    if ( v17 )
    {
      v12 = *(int *)(*(_QWORD *)(a1 + 5992) + 4 * v17 - 4);
      *(_QWORD *)(a1 + 6000) = v17 - 1;
LABEL_15:
      v18 = haystack;
      if ( (_QWORD)v35 )
        v18 = (const char *)ptr;
      sub_7AE4F0(2, v12, v18);
      sub_7B02D0((_QWORD *)a1, v12, (__int64)&ptr);
      goto LABEL_5;
    }
    v12 = *(_QWORD *)(a1 + 5928);
    v36 = 0;
    v37 = 0;
    v19 = v12 + 1;
    if ( v12 == -1 )
    {
      for ( i = 0; i != -1; ++i )
      {
        v31 = *(_QWORD *)(a1 + 5920) + 24 * i;
        v32 = *(void **)v31;
        if ( *(_QWORD *)v31 )
        {
          *(_QWORD *)(v31 + 8) = 0;
          qfree(v32);
        }
      }
      goto LABEL_27;
    }
    v20 = *(_QWORD *)(a1 + 5920);
    v21 = *(_QWORD *)(a1 + 5936);
    v22 = a1 + 5920;
    if ( (unsigned __int64)&v36 < v20 )
    {
      v23 = v12;
      if ( v21 >= v19 )
        goto LABEL_30;
    }
    else
    {
      v23 = v12;
      if ( (unsigned __int64)&v36 < v20 + 24 * v21 )
      {
        if ( v21 < v19 )
        {
          *(_QWORD *)(a1 + 5920) = qvector_reserve(v22, v20, v12 + 1, 24);
          v23 = *(_QWORD *)(a1 + 5928);
        }
        if ( v23 < v19 )
        {
          v24 = 24 * v23;
          do
          {
            v25 = v24 + *(_QWORD *)(a1 + 5920);
            v24 += 24;
            *(_QWORD *)v25 = 0;
            *(_OWORD *)(v25 + 8) = 0;
            v26 = v23++;
          }
          while ( v12 != v26 );
        }
        goto LABEL_26;
      }
      if ( v21 >= v19 )
        goto LABEL_41;
    }
    *(_QWORD *)(a1 + 5920) = qvector_reserve(v22, v20, v12 + 1, 24);
    v23 = *(_QWORD *)(a1 + 5928);
LABEL_41:
    if ( v23 >= v19 )
    {
LABEL_26:
      v17 = v12 + 1;
LABEL_27:
      *(_QWORD *)(a1 + 5928) = v17;
      goto LABEL_15;
    }
    v20 = *(_QWORD *)(a1 + 5920);
LABEL_30:
    v27 = 24 * v23;
    while ( 1 )
    {
      v28 = v20 + v27;
      v27 += 24;
      *(_QWORD *)v28 = 0;
      *(_OWORD *)(v28 + 8) = 0;
      v29 = v23++;
      if ( v12 == v29 )
        break;
      v20 = *(_QWORD *)(a1 + 5920);
    }
    goto LABEL_26;
  }
  a2 = 0;
LABEL_6:
  if ( v10 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v10);
  }
  return a2;
}
