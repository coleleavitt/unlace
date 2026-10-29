__int64 __fastcall sub_14AEAE0(const __m128i *a1, int a2, int *a3, _DWORD *a4, __int64 a5, __m128i a6, __m128 a7)
{
  __int64 v8; // r13
  __int64 *v9; // rdi
  __int16 v10; // ax
  __int64 *v11; // rdi
  unsigned __int32 v12; // r13d
  __int64 *v13; // rdi
  __int32 v14; // ebx
  __int64 *v15; // rdi
  __int64 v16; // rbp
  __int32 v17; // r12d
  size_t v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  __int8 v27; // [rsp+7h] [rbp-F1h]
  unsigned int v31; // [rsp+24h] [rbp-D4h]
  __int64 v32; // [rsp+28h] [rbp-D0h]
  _OWORD v33[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+50h] [rbp-A8h] BYREF
  char v35; // [rsp+68h] [rbp-90h]
  unsigned __int8 *v36[17]; // [rsp+70h] [rbp-88h] BYREF

  v8 = sub_18957D0(*(_QWORD *)(a1[6].m128i_i64[0] + 736));
  v27 = a1[129].m128i_i8[1];
  a1[129].m128i_i8[1] = v8 != 0;
  if ( v8 )
    sub_1A865F0(*(_QWORD *)(a1[6].m128i_i64[0] + 736), v8);
  v9 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v9, a1[1].m128i_i32);
  v10 = a1[2].m128i_i16[0];
  if ( v10 == 3 )
  {
    v23 = a1->m128i_i64[1];
    if ( *(_QWORD *)(v23 + 760) )
    {
      *(_BYTE *)(v23 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v23 + 48) + 6LL) = 1;
    }
    v21 = 0;
    a1[2].m128i_i16[0] = 1;
    sub_170AA80(*(_QWORD *)(a1[6].m128i_i64[0] + 656), *(_QWORD *)(a1[6].m128i_i64[0] + 608));
  }
  else
  {
    v31 = a1[2].m128i_u32[2];
    if ( v10 == 146 )
    {
      v32 = v8;
      do
      {
        v11 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v11, a1[1].m128i_i32);
        v12 = a1[2].m128i_u32[2];
        sub_1564820(v36, a1, v12, 1918);
        BYTE4(v33[1]) = 0;
        *(_QWORD *)((char *)v33 + 12) = 0;
        *((_QWORD *)&v33[1] + 1) = (char *)&v34 + 8;
        *(_QWORD *)&v34 = 0;
        BYTE8(v34) = 0;
        v35 = 0;
        LODWORD(v33[0]) = v12;
        DWORD1(v33[0]) = v12;
        BYTE8(v33[0]) = 1;
        if ( v12 )
        {
          sub_14A2370((__int64 *)v36, (unsigned __int64)v33);
          if ( *((__int128 **)&v33[1] + 1) != (__int128 *)((char *)&v34 + 8) )
            operator delete(*((void **)&v33[1] + 1));
        }
        sub_AEA040((__int64)v36);
        v10 = a1[2].m128i_i16[0];
      }
      while ( v10 == 146 );
      v8 = v32;
    }
    if ( v10 == 138 )
    {
      if ( *a3 )
      {
        v24 = sub_154F1B0(a3);
        sub_1564820(v36, a1, v31, 1897);
        sub_AE9DF0(v36, 0, 2u);
        *(_QWORD *)&v33[0] = v24;
        BYTE8(v33[0]) = 1;
        sub_AEC610((__int64 *)v36, (__int64 *)v33);
        BYTE4(v33[1]) = 0;
        *(_QWORD *)((char *)v33 + 12) = 0;
        BYTE8(v34) = 0;
        *((_QWORD *)&v33[1] + 1) = (char *)&v34 + 8;
        *(_QWORD *)&v34 = 0;
        v35 = 0;
        *(_QWORD *)&v33[0] = v24;
        BYTE8(v33[0]) = 1;
        if ( (_DWORD)v24 )
        {
          if ( HIDWORD(v24) )
          {
            sub_14A2370((__int64 *)v36, (unsigned __int64)v33);
            if ( *((__int128 **)&v33[1] + 1) != (__int128 *)((char *)&v34 + 8) )
              operator delete(*((void **)&v33[1] + 1));
          }
        }
        sub_AEA040((__int64)v36);
      }
      v13 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v13, a1[1].m128i_i32);
      v14 = a1[2].m128i_i32[2];
      if ( a1[2].m128i_i16[0] == 3 )
      {
        v25 = a1->m128i_i64[1];
        if ( *(_QWORD *)(v25 + 760) )
        {
          *(_BYTE *)(v25 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v25 + 48) + 6LL) = 1;
        }
        v26 = a1[6].m128i_i64[0];
        v20 = 0;
        a1[2].m128i_i16[0] = 1;
        sub_1705790(*(_QWORD *)(v26 + 656), *(_QWORD *)(v26 + 608));
      }
      else
      {
        memset(v33, 0, sizeof(v33));
        v34 = 0;
        sub_14D0170((_DWORD)a1, (unsigned int)v33, 0, 0, 0, 0, 0, 0, 1, 0, 0);
        if ( a1[2].m128i_i16[0] == 5 )
        {
          if ( LODWORD(v33[0]) && DWORD1(v33[0]) && (v20 = *((_QWORD *)&v33[0] + 1)) == 0 )
          {
            LOWORD(v36[0]) = 63;
            sub_15680D0(a1, v36, 1, 0);
          }
          else
          {
            v15 = (__int64 *)a1->m128i_i64[1];
            v16 = a1[1].m128i_i64[1];
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v15, a1[1].m128i_i32);
            v17 = a1[2].m128i_i32[2];
            if ( a1[2].m128i_i16[0] == 189 )
            {
              sub_1490230(a1, a5, 0, 0, (__m128i)0LL, a7);
              *a4 = a1[1].m128i_i32[0];
              v18 = j__strlen(&byte_22F0C30);
              v19 = 1641;
            }
            else
            {
              *a4 = a1[1].m128i_i32[0];
              v18 = j__strlen(&byte_22F0C30);
              v19 = 1644;
            }
            if ( (unsigned __int8)sub_1569A00(a1, 63, v19, &byte_22F0C30, v18) )
            {
              LOWORD(v36[0]) = 63;
              sub_15680D0(a1, v36, 1, 0);
            }
            v20 = sub_1860BE0(
                    a1[6].m128i_i64[0],
                    *(_QWORD *)(a1[6].m128i_i64[0] + 608),
                    v31,
                    v14,
                    (unsigned int)v33,
                    v17,
                    v16,
                    a5);
          }
        }
        else
        {
          sub_1564840(v36, a1, &a1[1], 18);
          sub_AEA040((__int64)v36);
          LOWORD(v36[0]) = 63;
          v20 = 0;
          sub_15680D0(a1, v36, 1, 0);
        }
        if ( HIDWORD(v33[1]) )
          free(*(void **)&v33[1]);
      }
      v21 = sub_17A2530(a1[6].m128i_i64[0], v20, 0);
    }
    else
    {
      v21 = sub_14ADBA0((__int64)a1, a2, a3, v31, a4, a5, a6, a7, 3u);
    }
  }
  if ( v8 )
    sub_1A86610(*(_QWORD *)(a1[6].m128i_i64[0] + 736), v8);
  a1[129].m128i_i8[1] = v27;
  return v21;
}
