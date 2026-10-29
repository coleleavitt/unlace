__int64 __fastcall sub_18DE0(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 result; // rax
  unsigned int v9; // ebp
  unsigned int v10; // ebp

  v6 = a1 + 80;
  v7 = sub_3BD30(a1 + 80, 8);
  if ( v7 )
  {
    v10 = v7;
    if ( !(unsigned __int8)sub_3FD90(a4, v7) )
      *a2 = sub_3BD50(v6, v10);
  }
  result = sub_3BD30(v6, 12);
  v9 = result;
  if ( (_DWORD)result )
  {
    result = sub_3FD90(a4, (unsigned int)result);
    if ( !(_BYTE)result )
    {
      result = sub_3BD50(v6, v9);
      *a3 = result;
    }
  }
  return result;
}

