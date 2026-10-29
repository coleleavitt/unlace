unsigned __int64 __fastcall sub_183B880(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v9; // rax

  if ( a3 )
  {
    v6 = *a3;
    if ( (_DWORD)v6 && a3[1] )
    {
      if ( !*((_QWORD *)a3 + 1) )
        return 0;
      goto LABEL_4;
    }
    if ( *((_QWORD *)a3 + 1) )
    {
LABEL_4:
      v7 = sub_16A2930(a1, (__int64)a3, 1, v6, a5, a6);
      if ( v7 && (*(_BYTE *)(v7 + 8) & 0x7Fu) - 59 <= 2 )
        return v7 - 64;
      else
        return 0;
    }
  }
  v9 = *(_QWORD *)(a1 + 544);
  if ( !v9 || (*(_BYTE *)(v9 + 8) & 0x7Fu) - 59 > 2 )
    return 0;
  return v9 - 64;
}
