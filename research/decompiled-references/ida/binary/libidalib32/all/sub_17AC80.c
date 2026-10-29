__int64 __fastcall sub_17AC80(__int64 *a1, __int64 a2, __int64 a3, const char *a4)
{
  size_t v7; // r13
  __int16 v9; // ax
  int v10; // r13d
  char v11; // dl
  unsigned int v12; // ebx
  _BYTE *v14; // rsi
  const char *v15; // rsi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r15
  char *v18; // rdi
  __int64 v19; // rax
  __int16 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 i; // rbx
  _QWORD *v29; // rcx
  void *v30; // rax
  const void *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-98h] BYREF
  __int128 v34; // [rsp+10h] [rbp-90h]
  __int64 v35; // [rsp+28h] [rbp-78h]
  __int128 v36; // [rsp+30h] [rbp-70h]
  __int16 v37; // [rsp+40h] [rbp-60h]
  int v38; // [rsp+44h] [rbp-5Ch]
  char v39; // [rsp+48h] [rbp-58h]
  __m128i v40; // [rsp+50h] [rbp-50h]
  unsigned __int64 v41; // [rsp+60h] [rbp-40h]

  v7 = *(_QWORD *)(a3 + 8);
  v41 = __readfsqword(0x28u);
  v36 = 0;
  v35 = 0;
  if ( v7 )
  {
    v30 = (void *)qalloc_or_throw();
    v31 = *(const void **)a3;
    *((_QWORD *)&v36 + 1) = v7;
    v35 = (__int64)v30;
    memcpy(v30, v31, v7);
    *(_QWORD *)&v36 = v7;
  }
  v9 = *(_WORD *)(a3 + 24);
  v10 = *(_DWORD *)(a3 + 28);
  v11 = *(_BYTE *)(a3 + 32);
  v37 = v9;
  v38 = v10;
  v39 = v11;
  v40 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  if ( v9 != 4 )
  {
    if ( v9 != 5 )
    {
      if ( v9 != 3 )
      {
        sub_17AB80(a2, a4, 1);
        v12 = 0;
        goto LABEL_7;
      }
      v24 = a1[1];
      v25 = a1[2];
      LOWORD(v33) = v10;
      v26 = *a1;
      if ( v25 < v24 + 1 )
      {
        v32 = qvector_reserve();
        *a1 = v32;
        v26 = v32;
        v24 = a1[1];
      }
      *(_WORD *)(v26 + 2 * v24) = v10;
      ++a1[1];
      goto LABEL_27;
    }
    v14 = (_BYTE *)v35;
    *(_QWORD *)&v36 = 0;
    if ( *((_QWORD *)&v36 + 1) <= 1u )
    {
      v35 = qvector_reserve();
      v14 = (_BYTE *)v35;
    }
    *(_QWORD *)&v36 = 2;
    *v14 = v10;
    *(_BYTE *)(v35 + 1) = 0;
  }
  v33 = 0;
  v15 = s1;
  v34 = 0;
  if ( (_QWORD)v36 )
    v15 = (const char *)v35;
  sub_19B7D0(&v33, v15, 0);
  if ( (_QWORD)v34 )
  {
    v16 = 0;
    do
    {
      v18 = (char *)s1;
      v19 = v33 + 24 * v16;
      if ( *(_QWORD *)(v19 + 8) )
        v18 = *(char **)v19;
      v20 = sub_19BE40(v18);
      if ( !v20 )
        sub_17AB80(a2, "Illegal hotkey", 0);
      v21 = a1[1];
      v22 = *a1;
      if ( a1[2] < (unsigned __int64)(v21 + 1) )
      {
        v23 = qvector_reserve();
        *a1 = v23;
        v22 = v23;
        v21 = a1[1];
      }
      *(_WORD *)(v22 + 2 * v21) = v20;
      v17 = v34;
      ++v16;
      ++a1[1];
    }
    while ( v16 < v17 );
    v27 = v33;
    if ( !v33 )
      goto LABEL_27;
    if ( v17 )
    {
      for ( i = 0; i != v17; ++i )
      {
        v29 = (_QWORD *)(v27 + 24 * i);
        if ( *v29 )
        {
          v29[1] = 0;
          qfree();
          v27 = v33;
        }
      }
    }
  }
  else if ( !v33 )
  {
    goto LABEL_27;
  }
  *(_QWORD *)&v34 = 0;
  qfree();
LABEL_27:
  v12 = 1;
LABEL_7:
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
  return v12;
}

