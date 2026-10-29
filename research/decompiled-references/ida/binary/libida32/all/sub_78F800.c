__int64 __fastcall sub_78F800(__int64 a1, __int64 a2, const void *a3, unsigned __int64 *a4, char a5)
{
  unsigned __int64 v5; // rax
  char *v10; // r14
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v15; // rdx
  size_t v16; // r14
  __int64 v17; // rax
  const char *v18; // rdx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  void *v30; // rdi
  __int64 v31; // [rsp+8h] [rbp-80h]
  unsigned __int64 v32; // [rsp+8h] [rbp-80h]
  unsigned __int64 v33; // [rsp+8h] [rbp-80h]
  unsigned __int64 v34; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int128 v36; // [rsp+18h] [rbp-70h]
  __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  __int128 v38; // [rsp+38h] [rbp-50h]
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 5984) & 1) == 0 )
  {
    if ( !under_debugger )
      interr(1226);
    BUG();
  }
  v5 = *a4;
  v36 = 0;
  v10 = nullptr;
  ptr = nullptr;
  if ( v5 )
  {
    v15 = 0x8000;
    if ( v5 <= 0x8000 )
      v15 = v5;
    v16 = v15;
    v31 = v15 + 1;
    ptr = (void *)qvector_reserve(&ptr, 0, v15 + 1, 1);
    *(_QWORD *)&v36 = v31;
    memmove(ptr, a3, v16);
    *((_BYTE *)ptr + v16) = 0;
    v10 = (char *)ptr;
  }
  v11 = sub_78DD30(a1 + 5912, v10);
  if ( v11 != a1 + 5920 )
  {
    v12 = *(_DWORD *)(v11 + 40);
LABEL_5:
    *(_BYTE *)a2 = 0;
    *(_DWORD *)(a2 + 1) = _byteswap_ulong(v12);
    *a4 = 5;
    goto LABEL_6;
  }
  if ( a5 )
  {
    v17 = *(_QWORD *)(a1 + 5968);
    if ( v17 )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(a1 + 5960) + 4 * v17 - 4);
      *(_QWORD *)(a1 + 5968) = v17 - 1;
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 5896);
      v20 = (unsigned int)(v19 + 1);
      v12 = v19;
      if ( v20 != v19 )
      {
        v37 = 0;
        v38 = 0;
        if ( v20 < v19 )
        {
          v28 = (unsigned int)(v19 + 1);
          do
          {
            v29 = *(_QWORD *)(a1 + 5888) + 24 * v28;
            v30 = *(void **)v29;
            if ( *(_QWORD *)v29 )
            {
              *(_QWORD *)(v29 + 8) = 0;
              v32 = v20;
              qfree(v30);
              v20 = v32;
            }
            ++v28;
          }
          while ( v28 < v19 );
        }
        else
        {
          v21 = *(_QWORD *)(a1 + 5888);
          v22 = *(_QWORD *)(a1 + 5904);
          v23 = a1 + 5888;
          if ( (unsigned __int64)&v37 < v21 || (unsigned __int64)&v37 >= v21 + 24 * v22 )
          {
            if ( v22 < v20 )
            {
              v33 = (unsigned int)(v19 + 1);
              *(_QWORD *)(a1 + 5888) = qvector_reserve(v23, v21, v20, 24);
              v19 = *(_QWORD *)(a1 + 5896);
              v20 = v33;
            }
            if ( v19 < v20 )
            {
              v26 = 24 * v19;
              do
              {
                ++v19;
                v27 = v26 + *(_QWORD *)(a1 + 5888);
                v26 += 24;
                *(_QWORD *)v27 = 0;
                *(_OWORD *)(v27 + 8) = 0;
              }
              while ( v20 != v19 );
            }
          }
          else
          {
            if ( v22 < v20 )
            {
              v34 = (unsigned int)(v19 + 1);
              *(_QWORD *)(a1 + 5888) = qvector_reserve(v23, v21, v20, 24);
              v19 = *(_QWORD *)(a1 + 5896);
              v20 = v34;
            }
            if ( v19 < v20 )
            {
              v24 = 24 * v19;
              do
              {
                ++v19;
                v25 = v24 + *(_QWORD *)(a1 + 5888);
                v24 += 24;
                *(_QWORD *)v25 = 0;
                *(_OWORD *)(v25 + 8) = 0;
              }
              while ( v20 != v19 );
            }
          }
        }
        *(_QWORD *)(a1 + 5896) = v20;
      }
    }
    v18 = haystack;
    if ( (_QWORD)v36 )
      v18 = (const char *)ptr;
    sub_78DE50(2, v12, v18);
    sub_78F560(a1, v12, (__int64)&ptr);
    v10 = (char *)ptr;
    goto LABEL_5;
  }
  a2 = 0;
LABEL_6:
  if ( v10 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v10);
  }
  return a2;
}

