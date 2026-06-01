__int64 __fastcall get_stroff_path(__int64 *a1, __int64 *a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int8 **v6; // r14
  __int64 v7; // rax
  __int64 result; // rax

  v5 = a4 & 0xF;
  v6 = *(unsigned __int8 ***)(qword_2CCB598 + 1672);
  v7 = -32770;
  if ( _bittest64(&v7, v5) )
    return sub_3C8AA0(v6, (__int64)a1, a2, a3, 16);
  result = sub_3C8BB0(*(_QWORD *)(qword_2CCB598 + 1672), a3, a1, a2);
  if ( !(_DWORD)result )
  {
    if ( (_DWORD)v5 )
      return sub_3C8AA0(v6, (__int64)a1, a2, a3, 16);
  }
  return result;
}
