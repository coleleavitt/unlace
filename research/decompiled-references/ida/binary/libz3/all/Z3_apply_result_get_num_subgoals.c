__int64 __fastcall Z3_apply_result_get_num_subgoals(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29D4E0();
    *(_DWORD *)(a1 + 1520) = 0;
    result = *(unsigned int *)(a2 + 32);
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return *(unsigned int *)(a2 + 32);
  }
  return result;
}

