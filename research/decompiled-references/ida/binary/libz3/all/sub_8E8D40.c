__int64 __fastcall sub_8E8D40(__int64 a1, __int64 *a2, int a3)
{
  __int64 result; // rax
  int v5; // ebp
  _BYTE *v6; // rbx
  void (__fastcall *v7)(_BYTE *); // rax

  result = *a2;
  if ( *a2 )
  {
    v5 = *(_DWORD *)(result - 4);
    if ( a3 != v5 )
      goto LABEL_3;
LABEL_6:
    *(_DWORD *)(result - 4) = a3;
    return result;
  }
  v5 = 0;
  if ( !a3 )
    return result;
  do
  {
LABEL_3:
    while ( 1 )
    {
      v6 = *(_BYTE **)(result + 8LL * (unsigned int)--v5);
      (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, *(_QWORD *)(a1 + 104));
      v7 = **(void (__fastcall ***)(_BYTE *))v6;
      if ( (v6[8] & 2) == 0 )
        break;
      v7(v6);
      result = *a2;
      if ( a3 == v5 )
        goto LABEL_5;
    }
    v7(v6);
    sub_186B220(v6);
    result = *a2;
  }
  while ( a3 != v5 );
LABEL_5:
  if ( result )
    goto LABEL_6;
  return result;
}

