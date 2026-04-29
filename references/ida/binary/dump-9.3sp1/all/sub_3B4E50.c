__int64 __fastcall sub_3B4E50(__int64 a1, unsigned __int64 *a2, char a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // r12
  _QWORD *v16; // rbp
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  __m128i *v21; // r14
  __int64 v22; // r13
  __m128i *v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __m128i *v26; // r13
  __int64 v27; // rdi
  __int64 v29; // [rsp+0h] [rbp-108h]
  unsigned __int64 v30; // [rsp+0h] [rbp-108h]
  _QWORD v31[3]; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+28h] [rbp-E0h]
  __int128 v33; // [rsp+30h] [rbp-D8h]
  __int64 v34; // [rsp+40h] [rbp-C8h]
  __int128 v35; // [rsp+48h] [rbp-C0h]
  int v36; // [rsp+58h] [rbp-B0h]
  __int64 (__fastcall **v37)(); // [rsp+60h] [rbp-A8h] BYREF
  int v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h]
  __int128 v40; // [rsp+78h] [rbp-90h]
  __int64 v41; // [rsp+88h] [rbp-80h]
  __int128 v42; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v43; // [rsp+A0h] [rbp-68h]
  __int64 v44; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v45; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v46; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v47; // [rsp+C8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  result = 0;
  if ( !a2 )
    return 0;
  if ( !*(_BYTE *)(a1 + 64) )
    return result;
  v6 = *a2;
  sub_3B1EC0(a1, v6, 1);
  v38 = 2;
  v39 = 0;
  v41 = 0;
  v37 = off_4E72E8;
  v43 = a2;
  v44 = a1;
  v45 = nullptr;
  v40 = 0;
  v42 = 0;
  v46 = 0;
  sub_2581E0((__int64)a2, v6, v7);
  sub_38B9C0((__int64)a2, &v45, 0, (__m128)0LL);
  v31[1] = 4;
  v31[0] = &off_4E7328;
  v31[2] = &v37;
  v32 = 0;
  v34 = 0;
  v36 = -1;
  v33 = 0;
  v35 = 0;
  sub_3ACCA0(v31);
  v8 = 0;
  if ( (_QWORD)v35 )
  {
    do
    {
      v36 = v8 - 1;
      visit_subtypes();
      ++v8;
      v9 = v35;
    }
    while ( v8 < (unsigned __int64)v35 );
    v10 = v34;
    v31[0] = &off_4E7328;
    if ( !v34 )
      goto LABEL_10;
    if ( (_QWORD)v35 )
    {
      v11 = 0;
      do
      {
        ++v11;
        clear_tinfo_t();
        v10 = v34;
      }
      while ( v9 != v11 );
    }
  }
  else
  {
    v10 = v34;
    v31[0] = &off_4E7328;
    if ( !v34 )
      goto LABEL_10;
  }
  *(_QWORD *)&v35 = 0;
  qfree(v10);
LABEL_10:
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  sub_255A80((__int64 *)&v37, (__int64)(a2 + 2), 0);
  v14 = *((_QWORD *)&v46 + 1);
  if ( *((_QWORD *)&v46 + 1) )
  {
    if ( a3 )
    {
      v15 = *(_QWORD **)a1;
      if ( *(_QWORD *)a1 )
      {
        if ( *(_QWORD *)(a1 + 8) )
        {
          v16 = (_QWORD *)v15[1];
          if ( v15 != v16 )
          {
            v30 = *a2;
            do
            {
              v17 = (_QWORD *)v16[6];
              if ( !v17 )
                goto LABEL_25;
              v18 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
              if ( v18 )
              {
                if ( (*(_BYTE *)(*v17 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
                  goto LABEL_25;
                while ( 1 )
                {
                  v19 = *(_QWORD *)(v18 + 24);
                  v20 = v18 + 24;
                  if ( v30 >= v19 )
                  {
                    if ( v19 >= v30 )
                    {
                      if ( (_QWORD *)v18 != v17 )
                        goto LABEL_30;
                      goto LABEL_25;
                    }
                    v18 = *(_QWORD *)(v18 + 16);
                  }
                  else
                  {
                    v18 = *(_QWORD *)(v18 + 8);
                  }
                  if ( (*(_BYTE *)v18 & 2) != 0 )
                    goto LABEL_25;
                }
              }
              v20 = 24;
LABEL_30:
              v21 = *(__m128i **)(v20 + 8);
              v22 = 40LL * *(_QWORD *)(v20 + 16);
              v23 = (__m128i *)((char *)v21 + v22);
              if ( &v21->m128i_i8[v22] != (__int8 *)v21 )
              {
                v24 = 0xCCCCCCCCCCCCCCCDLL * (v22 >> 3);
                if ( v24 )
                {
                  _BitScanReverse64(&v25, v24);
                  sub_3B4BD0((__int64)v21, v23, 2LL * (int)v25, 0xCCCCCCCCCCCCCCCDLL, v12, v13);
                  if ( v22 > 640 )
                  {
                    v26 = v21 + 40;
                    sub_3A9A30(v21, v21 + 40);
                    if ( v23 != &v21[40] )
                    {
                      do
                      {
                        v27 = (__int64)v26;
                        v26 = (__m128i *)((char *)v26 + 40);
                        sub_3A98C0(v27);
                      }
                      while ( v23 != v26 );
                    }
                    goto LABEL_25;
                  }
                }
                else
                {
                  sub_3B4BD0((__int64)v21, v23, -2, 0xCCCCCCCCCCCCCCCDLL, v12, v13);
                }
                sub_3A9A30(v21, v23);
              }
LABEL_25:
              v16 = sub_3B1650(v16);
            }
            while ( v15 != v16 );
            v14 = *((_QWORD *)&v46 + 1);
          }
        }
      }
    }
  }
  v29 = v14;
  v37 = off_4E72E8;
  sub_391150((__int64 *)&v45);
  v37 = (__int64 (__fastcall **)())&off_4DCE40;
  sub_7A480(&v37);
  return v29;
}
