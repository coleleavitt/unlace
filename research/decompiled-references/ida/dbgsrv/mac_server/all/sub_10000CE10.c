/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000CE10
// Address: 0x000000010000CE10

//----- (000000010000CE10) ----------------------------------------------------
unsigned __int64 __fastcall sub_10000CE10(__int64 a1, __int128 *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // r13
  unsigned __int64 result; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r14
  __int128 *v12; // r12
  __int128 *v13; // r15
  __int64 v14; // rbx
  __int128 *v15; // r14
  __int128 *v16; // r13
  __int64 v17; // r15
  __int128 *v18; // rax
  __int128 *v19; // r14
  char v20; // dl
  char v21; // r13
  unsigned __int64 v22; // r12
  __int64 v23; // r15
  unsigned __int64 v24; // rbx
  __int64 v25; // r12
  unsigned __int64 v26; // rbx
  unsigned __int64 *v27; // r12
  unsigned __int64 v28; // r13
  __int64 v31; // [rsp+20h] [rbp-50h]
  __int64 v32; // [rsp+28h] [rbp-48h]
  __int128 *v33; // [rsp+30h] [rbp-40h]

  v5 = a3;
LABEL_2:
  v33 = a2 - 5;
LABEL_3:
  v7 = 1 - a4;
  while ( 2 )
  {
    v8 = (__int64)a2 - a1;
    result = 0xCCCCCCCCCCCCCCCDLL;
    v10 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)a2 - a1) >> 4);
    switch ( v10 )
    {
      case 0uLL:
      case 1uLL:
        return result;
      case 2uLL:
        result = *(_QWORD *)a1;
        if ( *((_QWORD *)a2 - 10) <= *(_QWORD *)a1 )
        {
          if ( *((_QWORD *)a2 - 10) < *(_QWORD *)a1 )
            return sub_10000E260((__int128 *)a1, v33);
          result = *((_QWORD *)a2 - 9);
          if ( result < *(_QWORD *)(a1 + 8) )
            return sub_10000E260((__int128 *)a1, v33);
        }
        return result;
      case 3uLL:
        return sub_10000D720((__int128 *)a1, (__int128 *)(a1 + 80), (__int64)v33);
      case 4uLL:
        return sub_10000E400(a1, a1 + 80, a1 + 160, (__int64)v33);
      case 5uLL:
        return sub_10000E490(a1, a1 + 80, a1 + 160, a1 + 240, (__int64)v33);
      default:
        if ( v8 <= 1919 )
        {
          if ( (a5 & 1) != 0 )
            return sub_10000D200(a1, (__int64)a2);
          else
            return sub_10000D4C0(a1, (__int64)a2);
        }
        v32 = a1;
        if ( v7 != 1 )
        {
          v11 = v10 >> 1;
          v12 = (__int128 *)(a1 + 80 * v11);
          v31 = v7;
          if ( (unsigned __int64)v8 < 0x2801 )
          {
            sub_10000D720((__int128 *)(a1 + 80 * v11), (__int128 *)a1, (__int64)v33);
          }
          else
          {
            v13 = (__int128 *)a1;
            sub_10000D720((__int128 *)a1, (__int128 *)(a1 + 80 * v11), (__int64)v33);
            v14 = 5 * v11;
            v15 = &v13[5 * v11 - 5];
            sub_10000D720(v13 + 5, v15, (__int64)(a2 - 10));
            v16 = &v13[v14 + 5];
            v5 = a3;
            sub_10000D720(v13 + 10, v16, (__int64)(a2 - 15));
            sub_10000D720(v15, v12, (__int64)v16);
            sub_10000E260(v13, v12);
          }
          if ( (a5 & 1) == 0
            && (*(_QWORD *)(v32 - 80) > *(_QWORD *)v32
             || *(_QWORD *)(v32 - 80) >= *(_QWORD *)v32 && *(_QWORD *)(v32 - 72) >= *(_QWORD *)(v32 + 8)) )
          {
            v22 = sub_10000D7F0((__int128 *)v32, (unsigned __int64)a2);
LABEL_17:
            v7 = v31 + 1;
            a1 = v22;
            continue;
          }
          v17 = v32;
          v18 = sub_10000DB50((__int128 *)v32, a2);
          v19 = v18;
          if ( (v20 & 1) == 0 )
          {
LABEL_21:
            sub_10000CE10(v17, v19, v5, -v31, a5 & 1);
            a5 = 0;
            a1 = (__int64)(v19 + 5);
            a4 = -v31;
            goto LABEL_3;
          }
          v21 = sub_10000DEB0(v32, (__int64)v18);
          v22 = (unsigned __int64)(v19 + 5);
          result = sub_10000DEB0((__int64)(v19 + 5), (__int64)a2);
          if ( !(_BYTE)result )
          {
            v17 = v32;
            if ( v21 )
              goto LABEL_17;
            goto LABEL_21;
          }
          a4 = -v31;
          a2 = v19;
          a1 = v32;
          if ( v21 )
            return result;
          goto LABEL_2;
        }
        if ( (__int128 *)a1 != a2 )
        {
          v23 = v5;
          v24 = (v10 - 2) >> 1;
          v25 = 5 * v24;
          v26 = v24 + 1;
          v27 = (unsigned __int64 *)(a1 + 16 * v25);
          do
          {
            sub_10000E560(a1, v23, v10, v27);
            a1 = v32;
            v27 -= 10;
            --v26;
          }
          while ( v26 );
          v28 = 0xCCCCCCCCCCCCCCCDLL * ((unsigned __int64)v8 >> 4);
          do
          {
            sub_10000E860(a1, (__int64)a2, v23, v28);
            a1 = v32;
            a2 -= 5;
            result = v28 - 1;
          }
          while ( v28-- > 2 );
        }
        return result;
    }
  }
}
// 10000CF6E: variable 'v20' is possibly undefined
