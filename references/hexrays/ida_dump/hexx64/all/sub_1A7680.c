__int64 __fastcall sub_1A7680(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r12
  int tinfo_size; // eax
  int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 *v12; // rdx
  __int64 *i; // rax
  __int64 v14; // rdi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // r15
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  char v31; // al
  char v32; // al
  __int64 *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rbp
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  char v50; // [rsp+8h] [rbp-168h]
  char v51; // [rsp+1Fh] [rbp-151h]
  __int64 v54; // [rsp+40h] [rbp-130h]
  __int64 *v55; // [rsp+48h] [rbp-128h]
  int v56; // [rsp+50h] [rbp-120h]
  __int64 v57; // [rsp+58h] [rbp-118h] BYREF
  __int128 v58; // [rsp+60h] [rbp-110h]
  __m128i v59; // [rsp+78h] [rbp-F8h] BYREF
  __m128i v60; // [rsp+88h] [rbp-E8h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-C8h] BYREF
  int v62; // [rsp+B0h] [rbp-C0h]
  __m128i v63; // [rsp+B8h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-A8h]
  int v65; // [rsp+D0h] [rbp-A0h]
  __int64 (__fastcall **v66)(); // [rsp+D8h] [rbp-98h]
  __int64 v67; // [rsp+E0h] [rbp-90h]
  int v68; // [rsp+E8h] [rbp-88h]
  __int128 v69; // [rsp+F0h] [rbp-80h]
  __int64 v70; // [rsp+100h] [rbp-70h]
  __int64 v71; // [rsp+108h] [rbp-68h]
  __int128 v72; // [rsp+110h] [rbp-60h]
  __int64 v73; // [rsp+120h] [rbp-50h]
  unsigned __int64 v74; // [rsp+130h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v3 = *(__int64 **)(a1 + 8);
  v58 = 0;
  v57 = 0;
  if ( !v3 )
    return 0;
  if ( !*(_QWORD *)(a1 + 16) )
    return 0;
  v4 = (__int64 *)v3[1];
  if ( v3 == v4 )
    return 0;
  do
  {
    v55 = v4 + 3;
    if ( !*((_BYTE *)v4 + 96) )
    {
      v5 = *((int *)v4 + 10);
      v6 = v4[3];
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)a1 + 248LL), 0);
      v8 = *(_QWORD *)(a1 + 72) - 1;
      if ( v8 >= 0 )
      {
        v9 = v6 + v5;
        v10 = *(_QWORD *)(a1 + 64) + 40LL * (unsigned int)v8;
        while ( 1 )
        {
          v11 = *(_QWORD *)v10;
          if ( v6 >= *(_QWORD *)v10 && v9 <= tinfo_size + v11 )
            break;
          --v8;
          v10 -= 40;
          if ( v8 == -1 )
            goto LABEL_10;
        }
        if ( v10 )
        {
          v21 = *v55;
          v22 = v4[4];
          v59 = 0u;
          v54 = v22;
          v23 = *(_QWORD *)(a3 + 64);
          memset(&v60, 0, 24);
          v56 = v21;
          v24 = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(v23 + 1496) + 248LL), 0);
          sub_122B20(v59.m128i_i64, v11 + *(_QWORD *)(*(_QWORD *)(a3 + 64) + 1440LL), v24);
          v25 = *(_QWORD *)(a2 + 128);
          if ( (int)v25 <= 0 )
            goto LABEL_48;
          v26 = 0;
LABEL_33:
          while ( 1 )
          {
            v27 = *(_QWORD *)(a2 + 120) + (v26 << 7);
            if ( v11 == *(_QWORD *)(v27 + 72) )
            {
              v28 = *(_QWORD *)(v54 + 16);
              if ( v28 )
                break;
            }
            if ( (int)++v26 >= (int)v25 )
              goto LABEL_48;
          }
          v50 = 0;
          while ( 1 )
          {
            v29 = *(_QWORD **)(v27 + 96);
            v30 = &v29[*(_QWORD *)(v27 + 104)];
            if ( v29 != v30 )
            {
              while ( *v29 != v28 )
              {
                if ( v30 == ++v29 )
                  goto LABEL_41;
              }
              if ( v29 != v30 )
                break;
            }
LABEL_41:
            sub_124680((__int64)&v61, a3, v28, 1u);
            v51 = sub_64700(&v61, v59.m128i_i64);
            v31 = sub_3180C0(&v63, &v60);
            if ( v51 || v31 )
            {
              if ( v63.m128i_i64[0] )
              {
                v63.m128i_i64[1] = 0;
                qfree(v63.m128i_i64[0]);
              }
              qfree(v61);
              v25 = *(_QWORD *)(a2 + 128);
              goto LABEL_47;
            }
            if ( v63.m128i_i64[0] )
            {
              v63.m128i_i64[1] = 0;
              qfree(v63.m128i_i64[0]);
            }
            qfree(v61);
            v28 = *(_QWORD *)(v28 + 16);
            v32 = v50;
            v50 = 1;
            if ( (((unsigned __int8)v32 ^ 1) & (v28 != 0)) == 0 )
            {
              v25 = *(_QWORD *)(a2 + 128);
LABEL_47:
              if ( (int)++v26 < (int)v25 )
                goto LABEL_33;
LABEL_48:
              if ( v60.m128i_i64[0] )
              {
                v60.m128i_i64[1] = 0;
                qfree(v60.m128i_i64[0]);
              }
              qfree(v59.m128i_i64[0]);
              goto LABEL_10;
            }
          }
          if ( v60.m128i_i64[0] )
          {
            v60.m128i_i64[1] = 0;
            qfree(v60.m128i_i64[0]);
          }
          qfree(v59.m128i_i64[0]);
          if ( v27 )
          {
            if ( (*(_BYTE *)(v27 + 8) & 2) == 0 )
            {
              v59 = _mm_loadu_si128((const __m128i *)(v10 + 8));
              v60 = _mm_loadu_si128((const __m128i *)(v10 + 24));
              if ( (unsigned __int8)sub_199DA0(a1, (__int64)&v59, v56 - (int)v11, v4[6], *((_DWORD *)v4 + 10)) )
              {
                v36 = *(_QWORD *)(a1 + 48);
                v61 = 0;
                v62 = 0;
                v64 = -1;
                v65 = -1;
                v66 = off_4DBD70;
                v67 = -1;
                v63 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)off_4DBD70);
                v69 = -1;
                v68 = -1;
                v70 = -1;
                v71 = 0;
                v73 = 0;
                v72 = 0;
                (*(void (__fastcall **)(__int64, __int64 *, __m128i *))(*(_QWORD *)v36 + 56LL))(v36, &v61, &v59);
                if ( v65 < *(_DWORD *)(v27 + 40) || v68 < *(_DWORD *)(v27 + 64) )
                {
                  v46 = v71;
                  if ( !v71 )
                    goto LABEL_10;
                }
                else
                {
                  *(_DWORD *)(v27 + 40) = v65;
                  v37 = *(_QWORD *)(v27 + 96);
                  *(_DWORD *)(v27 + 64) = v68;
                  v38 = v4[4];
                  v39 = *(_QWORD *)(v27 + 104);
                  if ( *(_QWORD *)(v27 + 112) < (unsigned __int64)(v39 + 1) )
                  {
                    v47 = qvector_reserve(v27 + 96, v37, v39 + 1, 8);
                    *(_QWORD *)(v27 + 96) = v47;
                    v37 = v47;
                    v39 = *(_QWORD *)(v27 + 104);
                  }
                  *(_QWORD *)(v37 + 8 * v39) = v38;
                  ++*(_QWORD *)(v27 + 104);
                  v40 = *(_QWORD *)(a1 + 24);
                  v41 = v4[4];
                  v42 = *(_QWORD *)(a1 + 32);
                  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v42 + 1) )
                  {
                    v48 = qvector_reserve(a1 + 24, v40, v42 + 1, 8);
                    *(_QWORD *)(a1 + 24) = v48;
                    v40 = v48;
                    v42 = *(_QWORD *)(a1 + 32);
                  }
                  *(_QWORD *)(v40 + 8 * v42) = v41;
                  v43 = v57;
                  ++*(_QWORD *)(a1 + 32);
                  v44 = *v55;
                  v45 = v58;
                  if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
                  {
                    v57 = qvector_reserve(&v57, v43, v58 + 1, 8);
                    v43 = v57;
                    v45 = v58;
                  }
                  *(_QWORD *)(v43 + 8 * v45) = v44;
                  v46 = v71;
                  *(_QWORD *)&v58 = v58 + 1;
                  if ( !v71 )
                    goto LABEL_10;
                }
                *(_QWORD *)&v72 = 0;
                qfree(v46);
              }
            }
          }
        }
      }
    }
LABEL_10:
    if ( (*v4 & 2) == 0 )
    {
      v12 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v12 & 2) != 0 )
      {
        v33 = (__int64 *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
        v34 = *v33;
        if ( (*v33 & 2) == 0 )
        {
          while ( (__int64 *)v33[2] == v4 )
          {
            v4 = v33;
            v35 = v34 & 0xFFFFFFFFFFFFFFFCLL;
            v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v34 & 2) != 0 )
            {
              v4 = (__int64 *)v35;
              goto LABEL_15;
            }
            v33 = (__int64 *)v35;
          }
        }
        v4 = v33;
      }
      else
      {
        for ( i = (__int64 *)v12[1]; (*(_BYTE *)i & 2) == 0; i = (__int64 *)i[1] )
          v12 = i;
        v4 = v12;
      }
    }
LABEL_15:
    ;
  }
  while ( *(__int64 **)(a1 + 8) != v4 );
  v14 = v57;
  if ( !(_QWORD)v58 )
  {
    v15 = 0;
    goto LABEL_60;
  }
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v4 )
    {
      v17 = (__int64 *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v17 )
        break;
      if ( (*(_BYTE *)(*v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v18 = *(_QWORD *)(v14 + 8 * v16);
        while ( v18 < v17[3] )
        {
          v17 = (__int64 *)v17[1];
LABEL_24:
          if ( (*(_BYTE *)v17 & 2) != 0 )
            goto LABEL_25;
        }
        if ( v18 > v17[3] )
        {
          v17 = (__int64 *)v17[2];
          goto LABEL_24;
        }
        if ( v17 != v4 )
          break;
      }
    }
LABEL_25:
    ++v15;
    v19 = v58;
    v16 = (int)v15;
    if ( (int)v15 >= (unsigned __int64)v58 )
      goto LABEL_59;
LABEL_26:
    v4 = *(__int64 **)(a1 + 8);
  }
  sub_1A72E0((unsigned __int64 **)(a1 + 8), v17);
  ++v15;
  v19 = v58;
  v14 = v57;
  v16 = (int)v15;
  if ( (int)v15 < (unsigned __int64)v58 )
    goto LABEL_26;
LABEL_59:
  LOBYTE(v15) = v19 != 0;
LABEL_60:
  if ( v14 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v14);
  }
  return v15;
}
