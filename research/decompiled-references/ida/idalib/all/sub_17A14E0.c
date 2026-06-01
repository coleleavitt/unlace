void __fastcall sub_17A14E0(__int64 a1, __int64 a2, double a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int16 *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 i; // rdi
  unsigned __int64 v14; // rax
  __int16 v15; // dx

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = (unsigned __int16 *)sub_BFB9F0(a2);
          v10 = *v7;
          LOWORD(v10) = v10 & 0x1FF;
          if ( (_WORD)v10 == 71 )
          {
            v11 = (unsigned __int64)v7;
LABEL_3:
            sub_17A0370(a1, v11, a3);
            return;
          }
          if ( (_WORD)v10 != 128 )
            break;
          sub_17A0E80(a1, *((_QWORD *)v7 + 3), a3, v5, v6, v8, v9);
          sub_17A14E0(a1, *((_QWORD *)v7 + 4));
          a2 = *((_QWORD *)v7 + 5);
        }
        if ( (_WORD)v10 != 129 )
          break;
        sub_17A0E80(a1, *((_QWORD *)v7 + 4), a3, v5, v6, v8, v9);
        a2 = *((_QWORD *)v7 + 6);
      }
      if ( (_WORD)v10 != 26 )
        break;
      a2 = *((_QWORD *)v7 + 2);
      if ( !a2 )
        return;
    }
    v12 = (unsigned int)(v10 + 394);
    LOWORD(v12) = (v10 + 394) & 0x1FF;
    if ( (unsigned __int16)v12 > 1u )
      break;
    if ( ((v7[1] >> 3) & 0x3F) != 0x20 )
      goto LABEL_20;
    sub_17A0E80(a1, *((_QWORD *)v7 + 2), a3, v12, v6, v8, v9);
    a2 = *((_QWORD *)v7 + 3);
  }
  if ( (_WORD)v10 == 46 )
  {
    if ( !*(_BYTE *)(a1 + 28) || !(unsigned __int8)sub_17A0B20(a1, (unsigned __int64)v7, 0, v6, v8, v9, a3) )
    {
      for ( i = (unsigned __int64)v7; ; i = *(_QWORD *)(v14 + 16) )
      {
        v14 = sub_BFBAE0(i);
        v15 = *(_WORD *)v14 & 0x1FF;
        if ( v15 != 46 )
          break;
        if ( (*(_BYTE *)(*(_QWORD *)(v14 + 24) + 28LL) & 0x7Fu) - 49 > 2 )
          return;
      }
      if ( v15 == 71 )
      {
        v11 = v14;
        goto LABEL_3;
      }
    }
  }
  else
  {
LABEL_20:
    sub_17A0E80(a1, (unsigned __int64)v7, a3, v12, v6, v8, v9);
  }
}
