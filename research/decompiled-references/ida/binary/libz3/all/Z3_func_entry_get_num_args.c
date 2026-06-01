__int64 __fastcall Z3_func_entry_get_num_args(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax
  __int64 v4; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29BB70();
    v4 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 1520) = 0;
    result = *(unsigned int *)(v4 + 8);
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL);
  }
  return result;
}

