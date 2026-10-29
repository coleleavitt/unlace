/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14007234C
// Address: 0x000000014007234C

//----- (000000014007234C) ----------------------------------------------------
char __fastcall sub_14007234C(__int64 a1)
{
  if ( (unsigned __int8)unknown_libname_49(a1, 0) )
  {
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
      && (unsigned int)unknown_libname_68((unsigned int)*(char *)(a1 + 65), *(_QWORD *)(a1 + 1128)) == -1 )
    {
      *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
    }
    return 1;
  }
  else
  {
    *errno() = 22;
    invalid_parameter_noinfo();
    return 0;
  }
}
// 140072430: using guessed type __int64 __fastcall unknown_libname_49(_QWORD, _QWORD);
// 140080634: using guessed type __int64 __fastcall unknown_libname_68(_QWORD, _QWORD);
