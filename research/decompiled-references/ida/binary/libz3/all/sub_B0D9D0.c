__int64 __fastcall sub_B0D9D0(__int64 a1, _QWORD *a2)
{
  char **exception; // rbp
  __int64 v3; // r15
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rbp
  char v7; // dl
  char v8; // al
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // r13
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r12
  __int64 v22; // r12
  __int64 v23; // rdi
  unsigned int v25; // ebx
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  unsigned int v30; // [rsp+8h] [rbp-90h]
  __int64 v31; // [rsp+8h] [rbp-90h]
  __int64 v32[4]; // [rsp+10h] [rbp-88h] BYREF
  __int64 *v33; // [rsp+30h] [rbp-68h] BYREF
  char v34; // [rsp+38h] [rbp-60h]
  int v35; // [rsp+3Ch] [rbp-5Ch]
  __int64 v36; // [rsp+40h] [rbp-58h]
  int v37; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+50h] [rbp-48h]

  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  if ( *a2 )
    v4 = *(unsigned int *)(*a2 - 4LL);
  else
    v4 = 0;
  v5 = *(_DWORD *)(a1 + 8);
  sub_B727F0(&v33, *(_QWORD *)(a1 + 16), v4);
  v37 = v5;
  v38 = 0;
  v33 = (__int64 *)&off_1C57830;
  v6 = sub_180C100(v3 + 8400, 40);
  v7 = v34;
  v8 = *(_BYTE *)(v6 + 8);
  *(_QWORD *)(v6 + 32) = 0;
  *(_BYTE *)(v6 + 8) = v7 & 3 | v8 & 0xFC;
  *(_DWORD *)(v6 + 12) = v35;
  v9 = v36;
  *(_QWORD *)v6 = qword_1C6F870;
  *(_QWORD *)(v6 + 16) = v9;
  *(_DWORD *)(v6 + 24) = v37;
  if ( v38 )
  {
    v10 = *(_DWORD *)(v38 - 4);
    v30 = *(_DWORD *)(v38 - 8);
    v11 = sub_186B270(16LL * v30 + 8) + 8;
    *(_QWORD *)(v11 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), _mm_cvtsi32_si128(v10)).m128i_u64[0];
    *(_QWORD *)(v6 + 32) = v11;
    v12 = v38;
    v31 = v11;
    if ( !v38 || (v13 = v11, v14 = v38 + 16LL * *(unsigned int *)(v38 - 4), v38 == v14) )
    {
      *(_QWORD *)v6 = &off_1C57830;
      goto LABEL_9;
    }
    do
    {
      sub_15D0E50(v13, v12);
      v12 += 16;
      v13 += 16;
    }
    while ( v12 != v14 );
    v31 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)v6 = &off_1C57830;
    if ( v31 )
    {
LABEL_9:
      if ( *(_DWORD *)(v31 - 4) )
      {
        v15 = *(_QWORD **)(v3 + 8600);
        if ( v15 )
        {
          v16 = *((_DWORD *)v15 - 1);
          if ( v16 == *((_DWORD *)v15 - 2) )
          {
            v25 = (3 * v16 + 1) >> 1;
            v26 = 8 * v25 + 8;
            if ( 8 * v16 + 8 >= (unsigned int)v26 || v16 >= v25 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_B035D0(v32, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v32);
              sub_233E40((__int64)v32);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v27 = (unsigned int *)sub_186B300(v15 - 1, v26);
            v28 = v27[1];
            v15 = v27 + 2;
            *(_QWORD *)(v3 + 8600) = v27 + 2;
            *v27 = v25;
            LODWORD(v27) = v28;
            v19 = &v15[v28];
            v18 = (_DWORD)v27 + 1;
          }
          else
          {
            v17 = v16;
            v18 = v16 + 1;
            v19 = &v15[v17];
          }
        }
        else
        {
          v29 = (_QWORD *)sub_186B270(0x18u);
          v15 = v29 + 1;
          *v29 = 2;
          v18 = 1;
          *(_QWORD *)(v3 + 8600) = v15;
          v19 = v15;
        }
        *v19 = v6;
        *((_DWORD *)v15 - 1) = v18;
      }
    }
  }
  else
  {
    *(_QWORD *)v6 = &off_1C57830;
  }
  v20 = v38;
  v33 = qword_1C6F870;
  if ( v38 )
  {
    v21 = *(unsigned int *)(v38 - 4);
    if ( (_DWORD)v21 )
    {
      v22 = v38 + 16 * v21;
      do
      {
        v23 = v20;
        v20 += 16;
        sub_15D0DF0(v23);
      }
      while ( v20 != v22 );
      v20 = v38;
    }
    sub_186B220((void *)(v20 - 8));
  }
  return v6;
}

