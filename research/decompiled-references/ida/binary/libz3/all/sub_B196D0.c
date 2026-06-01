__int64 __fastcall sub_B196D0(__int64 a1, char a2, unsigned int a3, unsigned int *a4, unsigned int **a5)
{
  unsigned int *v6; // rbp
  unsigned int *v7; // r13
  unsigned int *v8; // rax
  unsigned int *v9; // rsi
  unsigned int v10; // r15d
  int v11; // r14d
  int v12; // ebx
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  __int64 *v16; // r14
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  _DWORD *v19; // rdx
  _DWORD *v20; // rbp
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // edx
  unsigned int *v26; // r13
  unsigned int v27; // edx
  int v28; // ebp
  unsigned int v29; // edx
  unsigned int *v30; // rsi
  unsigned int v31; // eax
  unsigned int v32; // r13d
  int v33; // r14d
  unsigned int *v34; // rbx
  int j; // ebp
  unsigned int v36; // r14d
  __int64 v37; // r13
  bool v38; // zf
  unsigned int v39; // edi
  unsigned int v40; // r8d
  int v41; // esi
  int v42; // eax
  int v44; // [rsp+8h] [rbp-A0h]
  __int64 v45; // [rsp+10h] [rbp-98h]
  unsigned int i; // [rsp+2Ch] [rbp-7Ch]
  unsigned int *v48; // [rsp+30h] [rbp-78h]
  int v50; // [rsp+3Ch] [rbp-6Ch]
  unsigned int *v51; // [rsp+48h] [rbp-60h] BYREF
  unsigned int *v52; // [rsp+50h] [rbp-58h] BYREF
  _DWORD *v53; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v54[18]; // [rsp+60h] [rbp-48h] BYREF

  if ( a2 )
    return sub_B17FC0(a1, 1, a3, a4, a5, 1u);
  if ( a3 )
  {
    v6 = &a4[a3];
    v7 = a4;
    v8 = nullptr;
    do
    {
      v9 = v7++;
      v51 = v8;
      sub_B0E5E0(&v51, v9);
      v8 = v51;
    }
    while ( v6 != v7 );
    v48 = v51;
  }
  else
  {
    v48 = nullptr;
  }
  ++*(_DWORD *)(a1 + 20);
  v10 = sub_B036D0(*(__int64 **)(a1 + 8));
  for ( i = 0; i < a3; i += 2 )
  {
    v25 = 2;
    if ( a3 - i <= 2 )
      v25 = a3 - i;
    v50 = v25;
    v26 = &v48[i];
    if ( a3 - i == 1 )
      goto LABEL_16;
    v12 = dword_1C7ED20;
    v27 = v26[1];
    v28 = dword_1C7ED20;
    if ( v27 != dword_1C7ED24 )
    {
      v28 = v27 ^ 1;
      if ( v27 == dword_1C7ED20 )
        v28 = dword_1C7ED24;
    }
    v29 = *v26;
    if ( dword_1C7ED24 == *v26 )
    {
      v11 = dword_1C7ED20;
    }
    else
    {
      if ( v29 == dword_1C7ED20 )
      {
        v11 = dword_1C7ED24;
        if ( dword_1C7ED24 == v10 )
          goto LABEL_16;
        goto LABEL_11;
      }
      v11 = v29 ^ 1;
    }
    if ( dword_1C7ED24 == v10 )
      goto LABEL_13;
LABEL_11:
    if ( v10 != dword_1C7ED20 )
    {
      v12 = v10 ^ 1;
LABEL_13:
      if ( dword_1C7ED24 != v11 && dword_1C7ED24 != v28 && dword_1C7ED24 != v12 )
      {
        *(_QWORD *)(a1 + 24) = _mm_add_epi32(
                                 _mm_loadl_epi64((const __m128i *)(a1 + 24)),
                                 _mm_loadl_epi64((const __m128i *)&qword_18B5FF0)).m128i_u64[0];
        v13 = (_DWORD *)sub_186B270(0x10u);
        v13[2] = v12;
        v13[3] = v11;
        *(_QWORD *)v13 = 0x200000002LL;
        v14 = (_DWORD *)sub_186B300(v13, 0x14u);
        *v14 = 3;
        v15 = v14;
        v16 = *(__int64 **)(a1 + 8);
        v14[v14[1]++ + 2] = v28;
        v17 = (_DWORD *)sub_186B270(0x10u);
        v17[2] = v15[2];
        v17[3] = v15[3];
        *(_QWORD *)v17 = 0x200000002LL;
        v18 = (_DWORD *)sub_186B300(v17, 0x14u);
        v19 = v18 + 2;
        *v18 = 3;
        v20 = v18;
        v21 = v15[4];
        v22 = (unsigned int)v18[1];
        v23 = v16[2];
        v53 = v19;
        v19[v22] = v21;
        v24 = *v16;
        ++v20[1];
        v44 = v24;
        sub_B0D9D0(v23, &v53);
        sub_B68F30(v44, 3);
        sub_186B220(v20);
        sub_186B220(v15);
      }
    }
LABEL_16:
    v54[0] = sub_B160F0(a1, v50, v26);
    sub_B0E290(a5, v54);
  }
  v30 = *a5;
  if ( *a5 )
  {
    v31 = *(v30 - 1);
    v32 = 0;
    if ( v31 <= 1 )
    {
      v34 = nullptr;
    }
    else
    {
      do
        v33 = v32++;
      while ( 1 << v32 < v31 );
      v34 = nullptr;
      if ( v32 )
      {
        for ( j = 0; ; ++j )
        {
          ++*(_DWORD *)(a1 + 20);
          v54[0] = sub_B036D0(*(__int64 **)(a1 + 8));
          v52 = v34;
          sub_B0E290(&v52, v54);
          v34 = v52;
          if ( v33 == j )
            break;
        }
        v30 = *a5;
        if ( !*a5 )
        {
LABEL_56:
          if ( v34 )
            sub_186B220(v34 - 2);
          goto LABEL_58;
        }
        v31 = *(v30 - 1);
      }
    }
    v36 = 0;
    while ( v36 < v31 )
    {
      if ( v32 )
      {
        v45 = v32;
        do
        {
          v37 = 0;
          while ( 1 )
          {
            v39 = v34[v37];
            v42 = dword_1C7ED20;
            if ( (v36 & (1 << v37)) == 0 )
            {
              if ( dword_1C7ED24 == v39 )
              {
                v39 = dword_1C7ED20;
              }
              else
              {
                v38 = dword_1C7ED20 == v39;
                v39 ^= 1u;
                if ( v38 )
                  v39 = dword_1C7ED24;
              }
            }
            v40 = v30[v36];
            v41 = dword_1C7ED20;
            if ( v40 != dword_1C7ED24 )
            {
              v41 = v40 ^ 1;
              if ( v40 == dword_1C7ED20 )
                v41 = dword_1C7ED24;
            }
            if ( v10 != dword_1C7ED24 )
            {
              v42 = dword_1C7ED24;
              if ( v10 != dword_1C7ED20 )
                v42 = v10 ^ 1;
            }
            v54[1] = v41;
            v54[2] = v39;
            v54[0] = v42;
            sub_B0DC80(a1, v54);
            if ( ++v37 == v45 )
              break;
            v30 = *a5;
          }
          ++v36;
          v30 = *a5;
        }
        while ( *a5 && v36 < *(v30 - 1) );
        goto LABEL_56;
      }
      ++v36;
      if ( !v30 )
        goto LABEL_56;
      v31 = *(v30 - 1);
    }
    goto LABEL_56;
  }
LABEL_58:
  if ( v48 )
    sub_186B220(v48 - 2);
  return v10;
}

