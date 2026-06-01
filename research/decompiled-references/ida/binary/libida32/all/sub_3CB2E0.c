__int64 __fastcall sub_3CB2E0(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // ecx
  int v13; // eax
  __int64 v14; // rsi

  v4 = *(_QWORD *)(a1 + 1448);
  v6 = a1 + 1440;
  if ( !v4 )
    return a3;
  v7 = a2;
  v8 = v6;
  do
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v4 + 16);
      v10 = *(_QWORD *)(v4 + 24);
      if ( *(_DWORD *)(v4 + 32) < (unsigned int)v7 )
        break;
      v8 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v9 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v10 );
LABEL_6:
  v11 = a4 & 0xF;
  if ( v8 == v6 || (unsigned int)v7 < *(_DWORD *)(v8 + 32) )
    return a3;
  v13 = *(_DWORD *)(v8 + 36);
  if ( !v11 )
  {
    v14 = v13 & 0xFFEFFEFF;
LABEL_12:
    if ( (_DWORD)v14 != v13 )
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
  set_aflags(v7, v14, v10);
  return a3;
}

