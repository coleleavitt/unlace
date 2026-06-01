__int64 __fastcall dwarf_machine_architecture_a(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        _DWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _BYTE *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12)
{
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
    return 0xFFFFFFFFLL;
  if ( a2 )
    *a2 = *(_BYTE *)(a1 + 69);
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 280);
  if ( a4 )
    *a4 = *(unsigned __int8 *)(a1 + 8360);
  if ( a5 )
    *a5 = *(_QWORD *)(a1 + 248);
  if ( a6 )
    *a6 = *(_QWORD *)(a1 + 256);
  if ( a7 )
    *a7 = *(_QWORD *)(a1 + 272);
  if ( a8 )
    *a8 = *(_BYTE *)(a1 + 71);
  if ( a9 )
    *a9 = *(_QWORD *)(a1 + 264);
  if ( a10 )
    *a10 = *(unsigned int *)(a1 + 8352);
  if ( a11 )
    *a11 = *(unsigned int *)(a1 + 8356);
  if ( a12 )
    *a12 = *(unsigned int *)(a1 + 200);
  return 0;
}

