__int64 __fastcall sub_619CC0(_QWORD *a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  int v8; // ebx
  __int64 v10; // rsi
  int *v11; // rax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  int v20; // r12d
  __int64 v22; // rsi
  int *v23; // rax
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // [rsp+20h] [rbp-B8h]
  __m128i v49; // [rsp+40h] [rbp-98h] BYREF
  __m128i v50; // [rsp+50h] [rbp-88h] BYREF
  __m128i v51; // [rsp+60h] [rbp-78h] BYREF
  __m128i v52; // [rsp+70h] [rbp-68h] BYREF
  __m128i v53; // [rsp+80h] [rbp-58h] BYREF
  __m128i v54[4]; // [rsp+90h] [rbp-48h] BYREF

  v47 = a2;
  if ( (_DWORD)a2 == a4 )
    return 0;
  if ( !a6 )
  {
    v20 = a2;
    while ( 1 )
    {
      v22 = (unsigned int)(v20 + 1);
      if ( v20 < 0 )
        v22 = ~(v20 + (unsigned int)((__int64)(*(_QWORD *)(a3 + 144) - *(_QWORD *)(a3 + 136)) >> 3));
      v23 = (int *)sub_11EE2A0(a3, v22);
      v24 = (__int64)v23;
      if ( v23 )
      {
        v25 = *v23;
        switch ( v25 )
        {
          case 1:
            sub_639FE0(&v53, v24, *a1);
            v30 = sub_619180(
                    (__int64)a1,
                    v24,
                    v26,
                    v27,
                    v28,
                    v29,
                    (__int128)_mm_load_si128(&v53),
                    (__int128)_mm_load_si128(v54));
            goto LABEL_18;
          case 2:
            sub_639FA0(&v51, v24, *a1);
            v30 = sub_619180(
                    (__int64)a1,
                    v24,
                    v35,
                    v36,
                    v37,
                    v38,
                    (__int128)_mm_load_si128(&v51),
                    (__int128)_mm_load_si128(&v52));
            goto LABEL_18;
          case 3:
            sub_63A0E0(&v49, v24, *a1);
            v30 = sub_619180(
                    (__int64)a1,
                    v24,
                    v39,
                    v40,
                    v41,
                    v42,
                    (__int128)_mm_load_si128(&v49),
                    (__int128)_mm_load_si128(&v50));
LABEL_18:
            if ( v30 )
              return 1;
            break;
        }
      }
      if ( a4 == ++v20 )
        return 0;
    }
  }
  v8 = a2;
  do
  {
    v47 = (unsigned int)v8 | v47 & 0xFFFFFFFF00000000LL;
    if ( (unsigned __int8)sub_11EE3F0(a5, (unsigned int)v47, a3, a6) )
    {
      v10 = (unsigned int)(v8 + 1);
      if ( v8 < 0 )
        v10 = ~(v8 + (unsigned int)((__int64)(*(_QWORD *)(a3 + 144) - *(_QWORD *)(a3 + 136)) >> 3));
      v11 = (int *)sub_11EE2A0(a3, v10);
      v12 = (__int64)v11;
      if ( v11 )
      {
        v13 = *v11;
        switch ( v13 )
        {
          case 1:
            sub_639FE0(&v53, v12, *a1);
            v18 = sub_619180(
                    (__int64)a1,
                    v12,
                    v14,
                    v15,
                    v16,
                    v17,
                    (__int128)_mm_load_si128(&v53),
                    (__int128)_mm_load_si128(v54));
            break;
          case 2:
            sub_639FA0(&v51, v12, *a1);
            v18 = sub_619180(
                    (__int64)a1,
                    v12,
                    v31,
                    v32,
                    v33,
                    v34,
                    (__int128)_mm_load_si128(&v51),
                    (__int128)_mm_load_si128(&v52));
            break;
          case 3:
            sub_63A0E0(&v49, v12, *a1);
            v18 = sub_619180(
                    (__int64)a1,
                    v12,
                    v43,
                    v44,
                    v45,
                    v46,
                    (__int128)_mm_load_si128(&v49),
                    (__int128)_mm_load_si128(&v50));
            break;
          default:
            goto LABEL_21;
        }
        if ( v18 )
          return 1;
      }
    }
LABEL_21:
    ++v8;
  }
  while ( v8 != a4 );
  return 0;
}

