__int64 __fastcall sub_3BE160(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned int v7; // ebx
  int v8; // r12d
  unsigned int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  _DWORD *v12; // rax

  v7 = a4;
  if ( (sub_3B9AA0(a1, a4, 4) & 0x600) == 0x200 )
    v7 = sub_3BD5D0(a1, v7);
  v8 = sub_3B9AA0(a1, v7, 4);
  if ( (~BYTE1(v8) & 6) == 0 && (v8 & 0x10000000) != 0 && (v12 = (_DWORD *)sub_5AFCE0(a1)) != nullptr && *v12 == v7 )
  {
    if ( a3 )
      *a3 = v12;
    return sub_4ECB80(a2, a1 + 1624, v12, a5);
  }
  else
  {
    if ( a3 )
      *a3 = 0;
    if ( (v8 & 0x800) == 0 )
      return -1;
    if ( a5 )
    {
      v11 = ea2node(v7);
      result = netnode_qsupstr(v11, a2, 1, 83);
      if ( result <= 0 )
        return result;
    }
    else
    {
      v9 = ea2node(v7);
      result = netnode_qsupstr(v9, a2, 0, 83);
      if ( result <= 0 )
        return result;
    }
    if ( a2 )
      return sub_3DA470(a2);
  }
  return result;
}

