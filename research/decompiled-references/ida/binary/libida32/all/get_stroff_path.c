__int64 __fastcall get_stroff_path(_DWORD *a1, _DWORD *a2, unsigned int a3, char a4)
{
  unsigned __int64 v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rax
  __int64 result; // rax

  v5 = a4 & 0xF;
  v6 = *(_QWORD **)(qword_2CA1698 + 1480);
  v7 = -32770;
  if ( _bittest64(&v7, v5) )
    return sub_3C37D0(v6, (__int64)a1, a2, a3, 0x10u);
  result = sub_3C38F0(*(__int64 **)(qword_2CA1698 + 1480), a3, a1, a2);
  if ( !(_DWORD)result )
  {
    if ( (_DWORD)v5 )
      return sub_3C37D0(v6, (__int64)a1, a2, a3, 0x10u);
  }
  return result;
}

