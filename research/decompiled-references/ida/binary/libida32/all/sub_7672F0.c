_BOOL8 __fastcall sub_7672F0(_QWORD *a1)
{
  int v1; // edx
  _BOOL8 result; // rax

  v1 = sub_766070(a1, 1);
  result = 1;
  if ( !v1 )
  {
    sub_761900(a1, (_BYTE *)&dword_0 + 1);
    return (unsigned int)sub_767230((__int64)a1, 0, 0) != 0;
  }
  return result;
}

