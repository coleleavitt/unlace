void __fastcall sub_186F530(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // bl
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 *v9; // rbp
  __int16 v10; // si
  unsigned __int64 v11; // rsi
  __int16 v12; // ax

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v3 = a3;
          v4 = sub_BFB9F0(a2);
          v9 = (unsigned __int64 *)v4;
          v10 = *(_WORD *)v4 & 0x1FF;
          if ( v10 == 46 )
          {
            sub_186EA30((__int64)a1, v4, 0, v3, v7, v8);
            return;
          }
          if ( v10 != 128 )
            break;
          sub_186F230(a1, *(_QWORD *)(v4 + 24), v5, v6, v7, v8);
          sub_186F530(a1, v9[4], v3);
          a2 = v9[5];
          a3 = v3;
        }
        if ( v10 != 129 )
          break;
        sub_186F230(a1, *(_QWORD *)(v4 + 32), v5, v6, v7, v8);
        a2 = v9[6];
        a3 = v3;
      }
      if ( v10 != 26 )
        break;
      a3 = v3;
      a2 = *(_QWORD *)(v4 + 16);
    }
    if ( ((v10 + 394) & 0x1FFu) > 1 )
    {
LABEL_10:
      v11 = (unsigned __int64)v9;
      goto LABEL_11;
    }
    v12 = (*(_WORD *)(v4 + 2) >> 3) & 0x3F;
    if ( (unsigned __int8)v12 <= 1u )
      break;
    if ( (_BYTE)v12 != 32 )
      goto LABEL_10;
    sub_186F230(a1, v9[2], v5, v6, v7, v8);
    a3 = v3;
    a2 = v9[3];
  }
  sub_186F530(a1, v9[2], v3);
  v11 = v9[3];
LABEL_11:
  sub_186F230(a1, v11, v5, v6, v7, v8);
}
