/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004F720
// Address: 0x000000014004F720

//----- (000000014004F720) ----------------------------------------------------
__int64 __fastcall sub_14004F720(__int64 a1, int a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // rbx
  int v6; // edi

  v4 = 0;
  if ( !sub_14005EF30((const CHAR *)(a1 + 8)) )
    return v4;
  if ( a2 == 1 )
  {
    v5 = sub_1400639D0((struct _exception *)(a1 + 8), 0);
    v6 = sub_1400692E0((__int64)v5);
    sub_140063970(v5);
    LOBYTE(v4) = *(_DWORD *)(a1 + 1128) == v6;
    return v4;
  }
  return 1;
}
