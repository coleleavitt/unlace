bool __fastcall sub_39B3C0(__int64 a1, __int64 a2, int a3)
{
  _BYTE *v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  bool v6; // si
  bool result; // al

  v3 = *(_BYTE **)(a2 + 8);
  v4 = *(_QWORD *)(a1 + 1344);
  v5 = (unsigned __int64)&v3[*(unsigned int *)(a2 + 4)];
  if ( (unsigned __int64)v3 >= v5 )
  {
    result = 0;
    if ( !a3 )
      result = 0;
    *(_BYTE *)(v4 + 120) = 0;
  }
  else
  {
    v6 = *v3 != 0;
    result = (unsigned __int64)(v3 + 1) < v5 && v3[1] != 0;
    if ( !a3 )
      result = v6;
    *(_BYTE *)(v4 + 120) = result;
  }
  return result;
}

