__int64 __fastcall sub_3B4E50(__int64 a1, unsigned __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // r14d
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // r12
  _QWORD *v21; // rbp
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  __m128i *v26; // r14
  __int64 v27; // r13
  __m128i *v28; // rbx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __m128i *v31; // r13
  __int64 v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-108h]
  __int64 v34; // [rsp+0h] [rbp-108h]
  unsigned __int64 v35; // [rsp+0h] [rbp-108h]
  __int64 *v36; // [rsp+8h] [rbp-100h]
  _QWORD v37[3]; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+28h] [rbp-E0h]
  __int128 v39; // [rsp+30h] [rbp-D8h]
  __int64 v40; // [rsp+40h] [rbp-C8h]
  __int128 v41; // [rsp+48h] [rbp-C0h]
  int v42; // [rsp+58h] [rbp-B0h]
  __int64 (__fastcall **v43)(); // [rsp+60h] [rbp-A8h] BYREF
  int v44; // [rsp+68h] [rbp-A0h]
  __int64 v45; // [rsp+70h] [rbp-98h]
  __int128 v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+88h] [rbp-80h]
  __int128 v48; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v49; // [rsp+A0h] [rbp-68h]
  __int64 v50; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v51; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+C8h] [rbp-40h]

  LODWORD(v33) = a3;
  v53 = __readfsqword(0x28u);
  result = 0;
  if ( !a2 )
    return 0;
  if ( !*(_BYTE *)(a1 + 64) )
    return result;
  v8 = *a2;
  sub_3B1EC0(a1, v8, 1, a4, a5);
  v44 = 2;
  v45 = 0;
  v47 = 0;
  v43 = off_4E72E8;
  v49 = a2;
  v50 = a1;
  v51 = nullptr;
  v46 = 0;
  v48 = 0;
  v52 = 0;
  sub_2581E0((__int64)a2, v8, v9);
  sub_38B9C0((__int64)a2, &v51, 0, (__m128)0LL);
  v37[1] = 4;
  v37[0] = &off_4E7328;
  v36 = (__int64 *)&v43;
  v37[2] = &v43;
  v38 = 0;
  v40 = 0;
  v42 = -1;
  v39 = 0;
  v41 = 0;
  sub_3ACCA0(v37);
  v11 = 0;
  v12 = 0;
  if ( (_QWORD)v41 )
  {
    do
    {
      v42 = v12 - 1;
      visit_subtypes(v37, 0, v40 + 8 * v11, 0, 0, v10, v33, v36);
      ++v12;
      v13 = v41;
      v11 = v12;
    }
    while ( v12 < (unsigned __int64)v41 );
    v14 = v40;
    v37[0] = &off_4E7328;
    if ( !v40 )
      goto LABEL_10;
    if ( (_QWORD)v41 )
    {
      v15 = 0;
      do
      {
        v16 = v14 + 8 * v15++;
        clear_tinfo_t(v16);
        v14 = v40;
      }
      while ( v13 != v15 );
    }
  }
  else
  {
    v14 = v40;
    v37[0] = &off_4E7328;
    if ( !v40 )
      goto LABEL_10;
  }
  *(_QWORD *)&v41 = 0;
  qfree(v14);
LABEL_10:
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  sub_255A80(v36, (__int64)(a2 + 2), 0);
  v19 = *((_QWORD *)&v52 + 1);
  if ( *((_QWORD *)&v52 + 1) )
  {
    if ( (_BYTE)v33 )
    {
      v20 = *(_QWORD **)a1;
      if ( *(_QWORD *)a1 )
      {
        if ( *(_QWORD *)(a1 + 8) )
        {
          v21 = (_QWORD *)v20[1];
          if ( v20 != v21 )
          {
            v35 = *a2;
            do
            {
              v22 = (_QWORD *)v21[6];
              if ( !v22 )
                goto LABEL_25;
              v23 = *v22 & 0xFFFFFFFFFFFFFFFCLL;
              if ( v23 )
              {
                if ( (*(_BYTE *)(*v22 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
                  goto LABEL_25;
                while ( 1 )
                {
                  v24 = *(_QWORD *)(v23 + 24);
                  v25 = v23 + 24;
                  if ( v35 >= v24 )
                  {
                    if ( v24 >= v35 )
                    {
                      if ( (_QWORD *)v23 != v22 )
                        goto LABEL_30;
                      goto LABEL_25;
                    }
                    v23 = *(_QWORD *)(v23 + 16);
                  }
                  else
                  {
                    v23 = *(_QWORD *)(v23 + 8);
                  }
                  if ( (*(_BYTE *)v23 & 2) != 0 )
                    goto LABEL_25;
                }
              }
              v25 = 24;
LABEL_30:
              v26 = *(__m128i **)(v25 + 8);
              v27 = 40LL * *(_QWORD *)(v25 + 16);
              v28 = (__m128i *)((char *)v26 + v27);
              if ( &v26->m128i_i8[v27] != (__int8 *)v26 )
              {
                v29 = 0xCCCCCCCCCCCCCCCDLL * (v27 >> 3);
                if ( v29 )
                {
                  _BitScanReverse64(&v30, v29);
                  sub_3B4BD0((__int64)v26, v28, 2LL * (int)v30, 0xCCCCCCCCCCCCCCCDLL, v17, v18);
                  if ( v27 > 640 )
                  {
                    v31 = v26 + 40;
                    sub_3A9A30(v26, v26 + 40);
                    if ( v28 != &v26[40] )
                    {
                      do
                      {
                        v32 = (__int64)v31;
                        v31 = (__m128i *)((char *)v31 + 40);
                        sub_3A98C0(v32);
                      }
                      while ( v28 != v31 );
                    }
                    goto LABEL_25;
                  }
                }
                else
                {
                  sub_3B4BD0((__int64)v26, v28, -2, 0xCCCCCCCCCCCCCCCDLL, v17, v18);
                }
                sub_3A9A30(v26, v28);
              }
LABEL_25:
              v21 = sub_3B1650(v21);
            }
            while ( v20 != v21 );
            v19 = *((_QWORD *)&v52 + 1);
          }
        }
      }
    }
  }
  v34 = v19;
  v43 = off_4E72E8;
  sub_391150((__int64 *)&v51);
  v43 = (__int64 (__fastcall **)())&off_4DCE40;
  sub_7A480(v36);
  return v34;
}
