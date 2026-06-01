__int64 __fastcall base_dirtree_widget_t::find_first_direntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx

  result = 0;
  if ( *(_QWORD *)a4 == *(_QWORD *)(a1 + 32) && *(_BYTE *)(a4 + 8) == *(_BYTE *)(a1 + 40) )
  {
    if ( *(int *)a2 >= 0 && *(int *)(a2 + 4) >= 0 && *(_QWORD *)(a2 + 16) )
    {
      v5 = *(_QWORD *)(a2 + 8);
      v6 = (unsigned int)v5;
      v7 = HIDWORD(v5);
      if ( v7 == 0xFFFFFFFFLL )
        v7 = -1;
    }
    else
    {
      v6 = -1;
      v7 = -1;
    }
    *(_QWORD *)(a1 + 56) = v6;
    *(_QWORD *)(a1 + 48) = v7;
    return 2;
  }
  return result;
}
