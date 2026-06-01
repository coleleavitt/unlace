__int64 __fastcall sub_5C6960(__int64 a1, char *a2)
{
  __int64 v3; // rdi

  if ( !*(_QWORD *)(a1 + 48) )
    return set_qerrno(47, a2);
  v3 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)v3 != 67 || *(_BYTE *)(v3 + 1) )
  {
    a2 = "C++";
    if ( strcmp((const char *)v3, "C++") )
      return set_qerrno(47, a2);
  }
  *(_BYTE *)(a1 + 739) = 1;
  *(_QWORD *)(a1 + 208) = 0;
  return 0;
}

