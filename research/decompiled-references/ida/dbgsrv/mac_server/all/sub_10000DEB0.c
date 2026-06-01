/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000DEB0
// Address: 0x000000010000DEB0

//----- (000000010000DEB0) ----------------------------------------------------
__int64 __fastcall sub_10000DEB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  __int128 *v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r13
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  __int64 i; // r15
  __int64 v12; // rbx
  __int128 v13; // xmm1
  void *v14; // rdi
  __int128 v15; // xmm1
  void *v16; // rdi
  _QWORD *v17; // r15
  void *v18; // rdi
  void *v19; // rdi
  __int128 v21; // [rsp+0h] [rbp-B0h]
  __int128 v22; // [rsp+10h] [rbp-A0h]
  __int64 v23; // [rsp+28h] [rbp-88h]
  __int64 v24; // [rsp+30h] [rbp-80h]
  __int64 v25; // [rsp+38h] [rbp-78h]
  unsigned __int64 v27; // [rsp+60h] [rbp-50h]
  int v28; // [rsp+6Ch] [rbp-44h]
  __int64 v29; // [rsp+70h] [rbp-40h]
  __int16 v30; // [rsp+78h] [rbp-38h]

  v3 = a2;
  LOBYTE(v2) = 1;
  switch ( 0xCCCCCCCCCCCCCCCDLL * ((a2 - a1) >> 4) )
  {
    case 0uLL:
    case 1uLL:
      return (unsigned int)v2;
    case 2uLL:
      v4 = (__int128 *)(a2 - 80);
      if ( *(_QWORD *)(v3 - 80) <= *(_QWORD *)a1
        && (*(_QWORD *)(v3 - 80) < *(_QWORD *)a1 || *(_QWORD *)(v3 - 72) < *(_QWORD *)(a1 + 8)) )
      {
        sub_10000E260((__int128 *)a1, v4);
      }
      break;
    case 3uLL:
      sub_10000D720((__int128 *)a1, (__int128 *)(a1 + 80), a2 - 80);
      break;
    case 4uLL:
      sub_10000E400(a1, a1 + 80, a1 + 160, a2 - 80);
      break;
    case 5uLL:
      sub_10000E490(a1, a1 + 80, a1 + 160, a1 + 240, a2 - 80);
      break;
    default:
      v5 = a1 + 160;
      LODWORD(v2) = a1;
      sub_10000D720((__int128 *)a1, (__int128 *)(a1 + 80), a1 + 160);
      v6 = a1 + 240;
      if ( a1 + 240 == a2 )
      {
LABEL_32:
        LOBYTE(v2) = 1;
      }
      else
      {
        v7 = 0;
        v8 = -160;
        while ( 1 )
        {
          v10 = *(_QWORD *)v6;
          if ( *(_QWORD *)v6 <= *(_QWORD *)v5
            && (*(_QWORD *)v6 < *(_QWORD *)v5 || *(_QWORD *)(v6 + 8) < *(_QWORD *)(v5 + 8)) )
          {
            v27 = *(_QWORD *)(v6 + 8);
            v28 = v7;
            v23 = *(_QWORD *)(v6 + 16);
            *(_QWORD *)(v6 + 16) = 0;
            v21 = *(_OWORD *)(v6 + 24);
            *(_OWORD *)(v6 + 24) = 0;
            v25 = *(_QWORD *)(v6 + 40);
            *(_QWORD *)(v6 + 40) = 0;
            v22 = *(_OWORD *)(v6 + 48);
            *(_OWORD *)(v6 + 48) = 0;
            v30 = *(_WORD *)(v6 + 72);
            v29 = *(_QWORD *)(v6 + 64);
            v24 = v8;
            for ( i = v8; ; i += 80 )
            {
              *(_OWORD *)(v5 + 80) = *(_OWORD *)v5;
              v12 = *(_QWORD *)(v5 + 16);
              *(_QWORD *)(v5 + 16) = 0;
              v13 = *(_OWORD *)(v5 + 24);
              *(_OWORD *)(v5 + 24) = 0;
              v14 = *(void **)(v5 + 96);
              if ( v14 )
              {
                *(_QWORD *)(v5 + 104) = 0;
                qfree(v14);
              }
              *(_QWORD *)(v5 + 96) = v12;
              *(_OWORD *)(v5 + 104) = v13;
              v2 = *(_QWORD *)(v5 + 40);
              *(_QWORD *)(v5 + 40) = 0;
              v15 = *(_OWORD *)(v5 + 48);
              *(_OWORD *)(v5 + 48) = 0;
              v16 = *(void **)(v5 + 120);
              if ( v16 )
              {
                *(_QWORD *)(v5 + 128) = 0;
                qfree(v16);
              }
              *(_QWORD *)(v5 + 120) = v2;
              *(_OWORD *)(v5 + 128) = v15;
              *(_QWORD *)(v5 + 144) = *(_QWORD *)(v5 + 64);
              *(_WORD *)(v5 + 152) = *(_WORD *)(v5 + 72);
              if ( !i )
                break;
              if ( v10 > *(_QWORD *)(v5 - 80) || v10 >= *(_QWORD *)(v5 - 80) && v27 >= *(_QWORD *)(v5 - 72) )
              {
                v17 = (_QWORD *)v5;
                goto LABEL_27;
              }
              v5 -= 80;
            }
            v17 = (_QWORD *)a1;
LABEL_27:
            *v17 = v10;
            v17[1] = v27;
            v18 = (void *)v17[2];
            if ( v18 )
            {
              v17[3] = 0;
              qfree(v18);
            }
            v17[2] = v23;
            *(_OWORD *)(v17 + 3) = v21;
            v19 = (void *)v17[5];
            if ( v19 )
            {
              v17[6] = 0;
              qfree(v19);
            }
            v9 = v5 + 64;
            v17[5] = v25;
            *((_OWORD *)v17 + 3) = v22;
            *(_WORD *)(v9 + 8) = v30;
            *(_QWORD *)v9 = v29;
            v7 = v28 + 1;
            v3 = a2;
            v8 = v24;
            if ( v28 == 7 )
              break;
          }
          v5 = v6;
          v8 -= 80;
          v6 += 80;
          if ( v6 == v3 )
            goto LABEL_32;
        }
        LOBYTE(v2) = v6 + 80 == a2;
      }
      break;
  }
  return (unsigned int)v2;
}
// 10000E208: variable 'v2' is possibly undefined
