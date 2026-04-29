__int64 __fastcall sub_3B4E50(__int64 a1, unsigned __int64 *a2, char a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // r14d
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // r12
  _QWORD *v14; // rbp
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __m128i *v19; // r14
  __int64 v20; // r13
  __m128i *v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __m128i *v24; // r13
  __int64 v25; // rdi
  __int64 v27; // [rsp+0h] [rbp-108h]
  unsigned __int64 v28; // [rsp+0h] [rbp-108h]
  _QWORD v29[3]; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-E0h]
  __int128 v31; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+40h] [rbp-C8h]
  __int128 v33; // [rsp+48h] [rbp-C0h]
  int v34; // [rsp+58h] [rbp-B0h]
  __int64 (__fastcall **v35)(); // [rsp+60h] [rbp-A8h] BYREF
  int v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h]
  __int128 v38; // [rsp+78h] [rbp-90h]
  __int64 v39; // [rsp+88h] [rbp-80h]
  __int128 v40; // [rsp+90h] [rbp-78h]
  unsigned __int64 *v41; // [rsp+A0h] [rbp-68h]
  __int64 v42; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v43; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+C8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  result = 0;
  if ( !a2 )
    return 0;
  if ( !*(_BYTE *)(a1 + 64) )
    return result;
  v5 = *a2;
  sub_3B1EC0(a1, v5, 1);
  v36 = 2;
  v37 = 0;
  v39 = 0;
  v35 = off_4E72E8;
  v41 = a2;
  v42 = a1;
  v43 = nullptr;
  v38 = 0;
  v40 = 0;
  v44 = 0;
  sub_2581E0((__int64)a2, v5, v6);
  sub_38B9C0((__int64)a2, &v43, 0, (__m128)0LL);
  v29[1] = 4;
  v29[0] = &off_4E7328;
  v29[2] = &v35;
  v30 = 0;
  v32 = 0;
  v34 = -1;
  v31 = 0;
  v33 = 0;
  sub_3ACCA0(v29);
  v7 = 0;
  if ( (_QWORD)v33 )
  {
    do
    {
      v34 = v7 - 1;
      visit_subtypes();
      ++v7;
      v8 = v33;
    }
    while ( v7 < (unsigned __int64)v33 );
    v29[0] = &off_4E7328;
    if ( !v32 )
      goto LABEL_10;
    if ( (_QWORD)v33 )
    {
      v9 = 0;
      do
      {
        ++v9;
        clear_tinfo_t();
      }
      while ( v8 != v9 );
    }
  }
  else
  {
    v29[0] = &off_4E7328;
    if ( !v32 )
      goto LABEL_10;
  }
  *(_QWORD *)&v33 = 0;
  qfree();
LABEL_10:
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  sub_255A80((__int64 *)&v35, (__int64)(a2 + 2), 0);
  v12 = *((_QWORD *)&v44 + 1);
  if ( *((_QWORD *)&v44 + 1) )
  {
    if ( a3 )
    {
      v13 = *(_QWORD **)a1;
      if ( *(_QWORD *)a1 )
      {
        if ( *(_QWORD *)(a1 + 8) )
        {
          v14 = (_QWORD *)v13[1];
          if ( v13 != v14 )
          {
            v28 = *a2;
            do
            {
              v15 = (_QWORD *)v14[6];
              if ( !v15 )
                goto LABEL_25;
              v16 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
              if ( v16 )
              {
                if ( (*(_BYTE *)(*v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
                  goto LABEL_25;
                while ( 1 )
                {
                  v17 = *(_QWORD *)(v16 + 24);
                  v18 = v16 + 24;
                  if ( v28 >= v17 )
                  {
                    if ( v17 >= v28 )
                    {
                      if ( (_QWORD *)v16 != v15 )
                        goto LABEL_30;
                      goto LABEL_25;
                    }
                    v16 = *(_QWORD *)(v16 + 16);
                  }
                  else
                  {
                    v16 = *(_QWORD *)(v16 + 8);
                  }
                  if ( (*(_BYTE *)v16 & 2) != 0 )
                    goto LABEL_25;
                }
              }
              v18 = 24;
LABEL_30:
              v19 = *(__m128i **)(v18 + 8);
              v20 = 40LL * *(_QWORD *)(v18 + 16);
              v21 = (__m128i *)((char *)v19 + v20);
              if ( &v19->m128i_i8[v20] != (__int8 *)v19 )
              {
                v22 = 0xCCCCCCCCCCCCCCCDLL * (v20 >> 3);
                if ( v22 )
                {
                  _BitScanReverse64(&v23, v22);
                  sub_3B4BD0((__int64)v19, v21, 2LL * (int)v23, 0xCCCCCCCCCCCCCCCDLL, v10, v11);
                  if ( v20 > 640 )
                  {
                    v24 = v19 + 40;
                    sub_3A9A30(v19, v19 + 40);
                    if ( v21 != &v19[40] )
                    {
                      do
                      {
                        v25 = (__int64)v24;
                        v24 = (__m128i *)((char *)v24 + 40);
                        sub_3A98C0(v25);
                      }
                      while ( v21 != v24 );
                    }
                    goto LABEL_25;
                  }
                }
                else
                {
                  sub_3B4BD0((__int64)v19, v21, -2, 0xCCCCCCCCCCCCCCCDLL, v10, v11);
                }
                sub_3A9A30(v19, v21);
              }
LABEL_25:
              v14 = sub_3B1650(v14);
            }
            while ( v13 != v14 );
            v12 = *((_QWORD *)&v44 + 1);
          }
        }
      }
    }
  }
  v27 = v12;
  v35 = off_4E72E8;
  sub_391150((__int64 *)&v43);
  v35 = (__int64 (__fastcall **)())&off_4DCE40;
  sub_7A480(&v35);
  return v27;
}
