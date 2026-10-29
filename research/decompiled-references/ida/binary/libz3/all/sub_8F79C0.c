void __fastcall sub_8F79C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rdi
  int v12; // esi
  int v13; // eax
  int v14; // edi

  v11 = *(_QWORD *)(a1 + 104);
  if ( *(_DWORD *)(a1 + 8632) == 1 && !*(_BYTE *)(v11 + 4) || !(unsigned __int8)sub_18290A0(v11) )
  {
    *(_DWORD *)(a1 + 10308) = 3;
    return;
  }
  if ( *(_BYTE *)(a1 + 10320) || (v12 = *(_DWORD *)(a1 + 9464), v13 = *(_DWORD *)(a1 + 9468), v12 == v13) )
  {
    v14 = a1 + 216;
    if ( a3 )
    {
LABEL_8:
      sub_C13430(v14, a7, a8, a9);
      return;
    }
  }
  else
  {
    sub_8F7780(a1, v12 - v13);
    v14 = a1 + 216;
    if ( a3 )
      goto LABEL_8;
  }
  sub_C13740(v14);
}

