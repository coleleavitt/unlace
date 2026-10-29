__int64 __fastcall sub_B0D730(__int64 a1)
{
  char **exception; // rbp
  __int64 v2; // r15
  int v3; // ebx
  __int64 v4; // rbp
  char v5; // dl
  char v6; // al
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // r13
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // r12
  __int64 v21; // rdi
  unsigned int v23; // ebx
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  unsigned int v28; // [rsp+8h] [rbp-A0h]
  __int64 v29; // [rsp+8h] [rbp-A0h]
  __int64 v30[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 *v31; // [rsp+40h] [rbp-68h] BYREF
  char v32; // [rsp+48h] [rbp-60h]
  int v33; // [rsp+4Ch] [rbp-5Ch]
  __int64 v34; // [rsp+50h] [rbp-58h]
  int v35; // [rsp+58h] [rbp-50h]
  __int64 v36; // [rsp+60h] [rbp-48h]

  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
    return 0;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 8);
  sub_B727F0(&v31, v2, 2);
  v35 = v3;
  v36 = 0;
  v31 = (__int64 *)&off_1C57830;
  v4 = sub_180C100(v2 + 8400, 40);
  v5 = v32;
  v6 = *(_BYTE *)(v4 + 8);
  *(_QWORD *)(v4 + 32) = 0;
  *(_BYTE *)(v4 + 8) = v5 & 3 | v6 & 0xFC;
  *(_DWORD *)(v4 + 12) = v33;
  v7 = v34;
  *(_QWORD *)v4 = qword_1C6F870;
  *(_QWORD *)(v4 + 16) = v7;
  *(_DWORD *)(v4 + 24) = v35;
  if ( v36 )
  {
    v8 = *(_DWORD *)(v36 - 4);
    v28 = *(_DWORD *)(v36 - 8);
    v9 = sub_186B270(16LL * v28 + 8) + 8;
    *(_QWORD *)(v9 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), _mm_cvtsi32_si128(v8)).m128i_u64[0];
    *(_QWORD *)(v4 + 32) = v9;
    v10 = v36;
    v29 = v9;
    if ( !v36 || (v11 = v9, v12 = v36 + 16LL * *(unsigned int *)(v36 - 4), v36 == v12) )
    {
      *(_QWORD *)v4 = &off_1C57830;
      goto LABEL_7;
    }
    do
    {
      sub_15D0E50(v11, v10);
      v10 += 16;
      v11 += 16;
    }
    while ( v10 != v12 );
    v29 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)v4 = &off_1C57830;
    if ( v29 )
    {
LABEL_7:
      if ( *(_DWORD *)(v29 - 4) )
      {
        v13 = *(_QWORD **)(v2 + 8600);
        if ( v13 )
        {
          v14 = *((_DWORD *)v13 - 1);
          if ( v14 == *((_DWORD *)v13 - 2) )
          {
            v23 = (3 * v14 + 1) >> 1;
            v24 = 8 * v23 + 8;
            if ( 8 * v14 + 8 >= (unsigned int)v24 || v14 >= v23 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_B035D0(v30, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v30);
              sub_233E40((__int64)v30);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v25 = (unsigned int *)sub_186B300(v13 - 1, v24);
            v26 = v25[1];
            v13 = v25 + 2;
            *(_QWORD *)(v2 + 8600) = v25 + 2;
            *v25 = v23;
            LODWORD(v25) = v26;
            v17 = &v13[v26];
            v16 = (_DWORD)v25 + 1;
          }
          else
          {
            v15 = v14;
            v16 = v14 + 1;
            v17 = &v13[v15];
          }
        }
        else
        {
          v27 = (_QWORD *)sub_186B270(0x18u);
          v13 = v27 + 1;
          *v27 = 2;
          v16 = 1;
          *(_QWORD *)(v2 + 8600) = v13;
          v17 = v13;
        }
        *v17 = v4;
        *((_DWORD *)v13 - 1) = v16;
      }
    }
  }
  else
  {
    *(_QWORD *)v4 = &off_1C57830;
  }
  v18 = v36;
  v31 = qword_1C6F870;
  if ( v36 )
  {
    v19 = *(unsigned int *)(v36 - 4);
    if ( (_DWORD)v19 )
    {
      v20 = v36 + 16 * v19;
      do
      {
        v21 = v18;
        v18 += 16;
        sub_15D0DF0(v21);
      }
      while ( v18 != v20 );
      v18 = v36;
    }
    sub_186B220((void *)(v18 - 8));
  }
  return v4;
}

