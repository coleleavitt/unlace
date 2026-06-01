__int64 __fastcall sub_B5E580(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v5; // r12
  __int64 v6; // r14
  char v7; // al
  bool v8; // dl
  char v9; // cl
  int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned __int8 v14; // al
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rsi
  unsigned __int8 v18; // al
  __int64 v19; // rsi
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al
  char v23; // [rsp+Fh] [rbp-49h]
  unsigned __int8 v24; // [rsp+17h] [rbp-41h] BYREF
  _BYTE v25[64]; // [rsp+18h] [rbp-40h] BYREF

  v24 = v24 & 0xC0 | 0x16;
  v5 = a2 + 24 * a3;
  if ( a2 != v5 )
  {
    v6 = a2;
    v23 = a4 & 4;
    while ( 1 )
    {
      switch ( *(_DWORD *)v6 & 0x7FFFFFFF )
      {
        case 0:
        case 4:
        case 8:
          goto LABEL_7;
        case 1:
          if ( v23 )
          {
            v7 = sub_F40350(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL));
            v8 = 1;
            v9 = 2;
            v10 = v7 & 7;
          }
          else
          {
            v4 = sub_F3FB80(a1);
            v10 = v4 & 7;
            v9 = ((unsigned __int8)v4 >> 3) & 3;
            v8 = (v4 & 0x20) != 0;
          }
          v4 = (32 * v8) | (8 * (v9 & 3)) & 0xDF | v10 & 0xFFFFFFDF | v4 & 0xFFFFFFC0;
          sub_B4E730(&v24, v4);
          goto LABEL_7;
        case 2:
          v17 = *(_QWORD *)(v6 + 16);
          v16 = a4;
          goto LABEL_13;
        case 3:
          v6 += 24;
          v21 = sub_F3FB80(a1);
          sub_B4E730(&v24, v21);
          if ( v5 != v6 )
            continue;
          return v24;
        case 5:
          v19 = *(_QWORD *)(v6 + 8);
          v6 += 24;
          v20 = sub_A2D810(a1, v19, a4);
          sub_B4E730(&v24, v20);
          if ( v5 != v6 )
            continue;
          return v24;
        case 6:
        case 7:
          sub_EFED50(v25, *(_QWORD *)(v6 + 8));
          v15 = sub_EFEE90(v25, 1);
          if ( v15 )
          {
            v16 = a4;
            v17 = v15;
LABEL_13:
            v6 += 24;
            v18 = sub_B5D9A0(a1, v17, v16);
            sub_B4E730(&v24, v18);
            if ( v5 == v6 )
              return v24;
          }
          else
          {
LABEL_7:
            v6 += 24;
            if ( v5 == v6 )
              return v24;
          }
          break;
        case 9:
          v12 = *(unsigned int *)(v6 + 4);
          v13 = *(_QWORD *)(v6 + 8);
          v6 += 24;
          v14 = sub_B5E580(a1, v13, v12, a4);
          sub_B4E730(&v24, v14);
          if ( v5 != v6 )
            continue;
          return v24;
      }
    }
  }
  return v24;
}

