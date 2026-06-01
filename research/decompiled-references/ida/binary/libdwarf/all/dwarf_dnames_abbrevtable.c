__int64 __fastcall dwarf_dnames_abbrevtable(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 *a9)
{
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax

  if ( !a1 || !a7 || !a8 || a2 >= *(_QWORD *)(a1 + 320) )
    return 0xFFFFFFFFLL;
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 312) + 80 * a2);
  if ( a3 )
    *a3 = v10[1];
  if ( a4 )
    *a4 = v10[2];
  if ( a5 )
    *a5 = v10[3];
  v11 = v10[4];
  if ( a9 )
    *a9 = v11;
  if ( v11 <= a6 )
    a6 = v11;
  v12 = 0;
  if ( a6 )
  {
    do
    {
      *(_WORD *)(a7 + 2 * v12) = *((_WORD *)v10 + v12 + 20);
      *(_WORD *)(a8 + 2 * v12) = *((_WORD *)v10 + v12 + 30);
      ++v12;
    }
    while ( a6 != v12 );
  }
  return 0;
}

