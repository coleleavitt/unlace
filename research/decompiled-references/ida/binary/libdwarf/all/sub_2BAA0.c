__int64 __fastcall sub_2BAA0(__int64 a1, const char *a2, int a3, char a4, _BYTE *a5, _QWORD *a6)
{
  char *v10; // rax
  __int64 result; // rax

  v10 = strdup(a2);
  *(_DWORD *)(a1 + 64) = a3;
  *(_QWORD *)(a1 + 80) = v10;
  *(_BYTE *)(a1 + 71) = a4;
  if ( a5 )
    *a5 = a4;
  *(_BYTE *)(a1 + 68) = 1;
  result = dwarf_add_debuglink_global_path();
  if ( (_DWORD)result == 1 )
  {
    if ( a6 )
    {
      result = dwarf_dealloc_error(a1, *a6);
      *a6 = 0;
    }
  }
  return result;
}

