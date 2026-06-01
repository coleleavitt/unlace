unsigned __int64 __fastcall sub_20A0E40(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD **v2; // rbx
  unsigned __int64 result; // rax
  _QWORD **v4; // r11

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_QWORD ***)v1;
  result = *(unsigned int *)(v1 + 8);
  v4 = (_QWORD **)(*(_QWORD *)v1 + 8 * result);
  while ( v2 != v4 )
  {
    while ( *--v4 )
    {
      result = sub_20A0850((__int64)v4, *v4);
      if ( v2 == v4 )
        goto LABEL_5;
    }
  }
LABEL_5:
  *(_DWORD *)(v1 + 8) = 0;
  return result;
}
