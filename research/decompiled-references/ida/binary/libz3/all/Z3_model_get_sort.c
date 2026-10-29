__int64 __fastcall Z3_model_get_sort(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // bl
  __int64 result; // rax
  __int64 v6; // [rsp+8h] [rbp-30h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29B6C0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a3 >= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 24) + 24LL))(*(_QWORD *)(a2 + 24)) )
  {
    sub_24EA30(a1, 2u, nullptr);
    if ( !v4 )
      return 0;
    sub_2BB620(0);
    result = 0;
    goto LABEL_9;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 24) + 32LL))(*(_QWORD *)(a2 + 24), a3);
  if ( v4 )
  {
    v6 = result;
    sub_2BB620(result);
    result = v6;
LABEL_9:
    byte_1C7EBA0 = 1;
  }
  return result;
}

