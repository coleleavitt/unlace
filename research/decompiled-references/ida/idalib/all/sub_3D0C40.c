__int64 __fastcall sub_3D0C40(__int64 a1, void *a2, __int64 a3, char a4)
{
  _QWORD *v4; // rax
  _QWORD *v6; // r9
  _QWORD *v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // ecx
  int v13; // eax
  unsigned int v14; // esi

  v4 = *(_QWORD **)(a1 + 1496);
  v6 = (_QWORD *)(a1 + 1488);
  if ( !v4 )
    return a3;
  v8 = v6;
  do
  {
    while ( 1 )
    {
      v9 = v4[2];
      v10 = v4[3];
      if ( v4[4] < (unsigned __int64)a2 )
        break;
      v8 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v9 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v10 );
LABEL_6:
  v11 = a4 & 0xF;
  if ( v8 == v6 || (unsigned __int64)a2 < v8[4] )
    return a3;
  v13 = *((_DWORD *)v8 + 10);
  if ( !v11 )
  {
    v14 = v13 & 0xFFEFFEFF;
LABEL_12:
    if ( v14 != v13 )
    {
      if ( (v14 & 0x300) == 0 )
        a3 &= ~0x40000uLL;
      if ( (v14 & 0x300000) != 0 )
        goto LABEL_16;
      goto LABEL_20;
    }
    return a3;
  }
  if ( v11 != 15 )
  {
    v14 = v13 & 0xFFDFFDFF;
    goto LABEL_12;
  }
  v14 = v13 & 0xFFCFFCFF;
  if ( (v13 & 0x300300) == 0 )
    return a3;
  a3 &= ~0x40000uLL;
LABEL_20:
  a3 &= ~0x20000uLL;
LABEL_16:
  set_aflags(a2, v14);
  return a3;
}
