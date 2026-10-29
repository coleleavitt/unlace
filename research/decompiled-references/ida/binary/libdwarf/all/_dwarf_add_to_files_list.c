__int64 __fastcall dwarf_add_to_files_list(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax

  v2 = *(_WORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 216) )
    **(_QWORD **)(a1 + 224) = a2;
  else
    *(_QWORD *)(a1 + 216) = a2;
  v3 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 224) = a2;
  v4 = 0;
  v5 = v3 + 1;
  *(_QWORD *)(a1 + 232) = v3 + 1;
  if ( v2 != 5 )
  {
    v5 = v3 + 2;
    v4 = 1;
  }
  *(_QWORD *)(a1 + 248) = v5;
  *(_QWORD *)(a1 + 240) = v4;
  return 0;
}

