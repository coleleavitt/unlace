void __fastcall sub_4D80(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  _BYTE *v6; // r9
  __int64 v7; // r8
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rsi
  char v11; // di
  char *v12; // rax

  if ( !(_DWORD)a3 )
    return;
  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = 0;
  v8 = (int)a3;
  v9 = (unsigned __int64)(a4 + 1024);
  v10 = a4 + 1023;
  while ( v7 )
  {
    if ( (unsigned __int64)a4 >= v9 )
      goto LABEL_26;
    *a4 = 44;
    if ( (unsigned __int64)(a4 + 1) >= v9 )
    {
      v6[1023] = 0;
      a4 = v6 + 1023;
      break;
    }
    a3 = *(unsigned int *)(v5 + 4);
    v11 = *(_BYTE *)(v4 + v7);
    ++a4;
    if ( (_DWORD)a3 != 7 )
    {
LABEL_9:
      if ( (_DWORD)a3 == 12 )
      {
        v12 = sub_4280(v11);
      }
      else
      {
        v12 = "?";
        if ( !(_DWORD)a3 )
          v12 = sub_3D90(v11);
      }
      goto LABEL_12;
    }
LABEL_21:
    v12 = sub_3FF0(v11);
LABEL_12:
    if ( a4 == v10 )
    {
LABEL_18:
      ++v7;
      v6[1023] = 0;
      a4 = v10;
      if ( v7 == v8 )
        return;
    }
    else
    {
      while ( 1 )
      {
        a3 = (unsigned __int8)*v12++;
        *a4 = a3;
        if ( !(_BYTE)a3 )
          break;
        if ( ++a4 == v10 )
          goto LABEL_18;
      }
      if ( ++v7 == v8 )
        return;
    }
  }
  if ( (unsigned __int64)a4 < v9 )
  {
    a3 = *(unsigned int *)(v5 + 4);
    v11 = *(_BYTE *)(v4 + v7);
    if ( (_DWORD)a3 != 7 )
      goto LABEL_9;
    goto LABEL_21;
  }
  if ( under_debugger )
    goto LABEL_28;
  interr(520, v10, a3, a4, v7, v6);
LABEL_26:
  if ( under_debugger )
LABEL_28:
    BUG();
  interr(518, v10, a3, a4, v7, v6);
  sub_4ED0();
}
