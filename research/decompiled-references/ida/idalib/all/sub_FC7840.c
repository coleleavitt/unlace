__int64 __fastcall sub_FC7840(unsigned __int8 *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int8 *v5; // rbx
  _BYTE *v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // r9
  _BYTE *v18; // rax
  __int64 (__fastcall ***v20)(); // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  _BYTE *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 i; // rdx
  __int64 *v30; // [rsp+0h] [rbp-D8h]
  unsigned int *v31; // [rsp+8h] [rbp-D0h]
  unsigned int **v32; // [rsp+10h] [rbp-C8h]
  unsigned int v33; // [rsp+2Ch] [rbp-ACh] BYREF
  unsigned __int8 *v34; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int *v35; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-98h] BYREF
  __int64 v37; // [rsp+48h] [rbp-90h]
  int v38; // [rsp+50h] [rbp-88h]
  __int16 v39; // [rsp+54h] [rbp-84h]
  char v40; // [rsp+56h] [rbp-82h]
  __int64 (__fastcall **v41)(); // [rsp+60h] [rbp-78h] BYREF
  int v42; // [rsp+68h] [rbp-70h]
  __int128 v43; // [rsp+70h] [rbp-68h]
  _BYTE *v44; // [rsp+80h] [rbp-58h]
  char v45; // [rsp+88h] [rbp-50h]
  int v46; // [rsp+8Ch] [rbp-4Ch]
  _QWORD *v47; // [rsp+90h] [rbp-48h]

  v4 = a2 + a3[1];
  if ( v4 > a3[2] )
    sub_2236E10(a3, a3 + 3, v4, 1);
  v34 = a1;
  v43 = 0;
  v42 = 2;
  v45 = 0;
  v46 = 1;
  v44 = nullptr;
  v41 = &off_2BEBEE0;
  v47 = a3;
  sub_227B8B0(&v41, 0, 0, 0);
  v5 = &a1[a2];
  if ( a1 != &a1[a2] )
  {
    v30 = &v36;
    v31 = &v33;
    v32 = &v35;
    do
    {
      while ( 1 )
      {
        v7 = *a1;
        if ( (*(_WORD *)&byte_2411740[2 * v7] & 0x3EF) == 0 )
          break;
        v6 = v44;
        if ( (unsigned __int64)v44 >= *((_QWORD *)&v43 + 1) )
        {
          sub_227BA10(&v41, v7);
        }
        else
        {
          ++v44;
          *v6 = v7;
        }
LABEL_7:
        a1 = v34 + 1;
        v34 = a1;
        if ( v5 == a1 )
          goto LABEL_38;
      }
      if ( !(unsigned __int8)sub_22187D0(a1, v5) )
      {
        if ( *((_BYTE **)&v43 + 1) == v44 )
        {
          v20 = (__int64 (__fastcall ***)())sub_227BF10(&v41, "<", 1);
        }
        else
        {
          *v44 = 60;
          v20 = &v41;
          ++v44;
        }
        v21 = *v34;
        v38 = 2;
        v37 = 0;
        v36 = v21;
        v39 = 257;
        v40 = 0;
        v22 = sub_227CEF0(v20, v30, v21, v8, v9, v10, v30, v31, v32);
        v23 = *(_BYTE **)(v22 + 32);
        if ( *(_BYTE **)(v22 + 24) == v23 )
        {
          sub_227BF10(v22, ">", 1);
        }
        else
        {
          *v23 = 62;
          ++*(_QWORD *)(v22 + 32);
        }
        goto LABEL_7;
      }
      v11 = (unsigned __int64)v34;
      v35 = v31;
      v12 = (unsigned int)sub_2218990(*v34);
      sub_2218E30(&v34, v11 + v12, v32, v35 + 1, 0);
      if ( (unsigned __int8)sub_2254860(v33) || (unsigned __int8)sub_22548C0(v33) )
      {
        v13 = a3[1];
        if ( (unsigned __int64)(v12 + v13) > a3[2] )
        {
          sub_2236E10(a3, a3 + 3, v12 + v13, 1);
          v13 = a3[1];
        }
        v14 = *a3 + v13;
        if ( v12 )
        {
          if ( (v14 >= v11 + 16 || v11 >= *a3 + v13 + 16) && (unsigned __int64)(v12 - 1) > 0xE )
          {
            v15 = 0;
            do
            {
              *(__m128i *)(v14 + v15) = _mm_loadu_si128((const __m128i *)(v11 + v15));
              v15 += 16;
            }
            while ( v15 != (v12 & 0xFFFFFFF0) );
            v16 = v12 - (v12 & 0xFFFFFFFFFFFFFFF0LL);
            v17 = (_BYTE *)(v11 + (v12 & 0xFFFFFFFFFFFFFFF0LL));
            v18 = (_BYTE *)((v12 & 0xFFFFFFFFFFFFFFF0LL) + v14);
            if ( v12 != (v12 & 0xFFFFFFFFFFFFFFF0LL) )
            {
              *v18 = *v17;
              if ( v16 != 1 )
              {
                v18[1] = v17[1];
                if ( v16 != 2 )
                {
                  v18[2] = v17[2];
                  if ( v16 != 3 )
                  {
                    v18[3] = v17[3];
                    if ( v16 != 4 )
                    {
                      v18[4] = v17[4];
                      if ( v16 != 5 )
                      {
                        v18[5] = v17[5];
                        if ( v16 != 6 )
                        {
                          v18[6] = v17[6];
                          if ( v16 != 7 )
                          {
                            v18[7] = v17[7];
                            if ( v16 != 8 )
                            {
                              v18[8] = v17[8];
                              if ( v16 != 9 )
                              {
                                v18[9] = v17[9];
                                if ( v16 != 10 )
                                {
                                  v18[10] = v17[10];
                                  if ( v16 != 11 )
                                  {
                                    v18[11] = v17[11];
                                    if ( v16 != 12 )
                                    {
                                      v18[12] = v17[12];
                                      if ( v16 != 13 )
                                      {
                                        v18[13] = v17[13];
                                        if ( v16 != 14 )
                                          v18[14] = v17[14];
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            for ( i = 0; i != v12; ++i )
              *(_BYTE *)(v14 + i) = *(_BYTE *)(v11 + i);
          }
          v13 = a3[1];
        }
        a3[1] = v12 + v13;
      }
      else
      {
        v24 = sub_995540((__int64)&v41, "<U+");
        v37 = 0;
        v38 = 4;
        v36 = v33;
        v39 = 257;
        v40 = 0;
        v28 = sub_227CEF0(v24, v30, 257, v25, v26, v27, v30, v31, v32);
        sub_995540(v28, ">");
      }
      a1 = v34;
    }
    while ( v5 != v34 );
  }
LABEL_38:
  v41 = (__int64 (__fastcall **)())&unk_2C76288;
  return sub_227B7A0(&v41);
}
