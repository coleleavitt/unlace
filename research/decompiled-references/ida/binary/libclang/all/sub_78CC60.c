__int64 __fastcall sub_78CC60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  char v6; // bl
  unsigned __int8 v7; // r14
  char v8; // r15
  unsigned __int8 v9; // al
  __int64 v11; // rax
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // si
  bool v14; // cl
  unsigned __int8 v15; // al
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // al
  char v18; // al
  unsigned __int8 v20; // [rsp+27h] [rbp-51h]
  unsigned __int8 v21; // [rsp+37h] [rbp-41h] BYREF
  _BYTE v22[64]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a2 + 24 * a3;
  if ( v4 != a2 )
  {
    v5 = a2;
    v6 = 0;
    v7 = 2;
    v8 = 6;
    while ( 1 )
    {
      switch ( *(_DWORD *)v5 & 0x7FFFFFFF )
      {
        case 0:
        case 4:
        case 8:
          goto LABEL_6;
        case 1:
          if ( (a4 & 4) != 0 )
          {
            v18 = sub_B15EF0(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL));
            v14 = 1;
            v13 = 2;
            v12 = v18 & 7;
          }
          else
          {
            v20 = sub_B16640(a1);
            v12 = v20 & 7;
            v13 = (v20 >> 3) & 3;
            v14 = (v20 & 0x20) != 0;
          }
          v15 = (32 * v14) | (8 * (v13 & 3)) & 0xDF | v12 & 0xDF | v20 & 0xC0;
          v16 = v8;
          v20 = v15;
          if ( v12 == 4 )
          {
            v12 = v8;
          }
          else if ( v8 != 4 )
          {
            goto LABEL_17;
          }
          v8 = 1;
          if ( (unsigned __int8)(v12 - 2) <= 1u )
            goto LABEL_20;
          v16 = 4;
LABEL_17:
          if ( v12 <= v16 )
            v16 = v12;
          v8 = v16 & 7;
LABEL_20:
          if ( v7 < v13 || (v17 = v15 & 0x20, v7 == v13) && (v7 = v13, !v17) )
          {
LABEL_6:
            v5 += 24;
            if ( v4 == v5 )
              return v21 & 0xC0 | ((unsigned __int8)(32 * v6) | (unsigned __int8)(v8 | (8 * v7))) & 0x3Fu;
          }
          else
          {
            v5 += 24;
            v7 = v13;
            v6 = v17 >> 5;
            if ( v4 == v5 )
              return v21 & 0xC0 | ((unsigned __int8)(32 * v6) | (unsigned __int8)(v8 | (8 * v7))) & 0x3Fu;
          }
          break;
        case 2:
          v9 = sub_78C840(a1, *(_QWORD *)(v5 + 16), a4);
          goto LABEL_5;
        case 3:
          v9 = sub_B16640(a1);
          goto LABEL_5;
        case 5:
          v9 = sub_6A3980(a1, *(_QWORD *)(v5 + 8), a4);
          goto LABEL_5;
        case 6:
        case 7:
          sub_B03900(v22, *(_QWORD *)(v5 + 8));
          v11 = sub_B03A00(v22, 1);
          if ( !v11 )
            goto LABEL_6;
          v9 = sub_78C840(a1, v11, a4);
LABEL_5:
          v21 = (32 * (v6 & 1)) | (8 * (v7 & 3)) & 0xDF | v8 & 7 | v21 & 0xC0;
          sub_779E00(&v21, v9);
          v8 = v21 & 7;
          v6 = (v21 & 0x20) != 0;
          v7 = (v21 >> 3) & 3;
          goto LABEL_6;
        case 9:
          v9 = sub_78CC60(a1, *(_QWORD *)(v5 + 8), *(unsigned int *)(v5 + 4), a4);
          goto LABEL_5;
      }
    }
  }
  v6 = 0;
  v7 = 2;
  v8 = 6;
  return v21 & 0xC0 | ((unsigned __int8)(32 * v6) | (unsigned __int8)(v8 | (8 * v7))) & 0x3Fu;
}

