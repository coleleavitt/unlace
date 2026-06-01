/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4088D4
// Address: 0x00000000004088D4

//----- (00000000004088D4) ----------------------------------------------------
unsigned __int64 __fastcall sub_4088D4(__int64 a1)
{
  int v1; // eax
  char v3; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( (unsigned __int64 *)(a1 - 24) != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 - 8), 0xFFFFFFFF);
    }
    else
    {
      v1 = *(_DWORD *)(a1 - 8);
      *(_DWORD *)(a1 - 8) = v1 - 1;
    }
    if ( v1 <= 0 )
      std::string::_Rep::_M_destroy(a1 - 24, &v3);
  }
  return v4 - __readfsqword(0x28u);
}
// 405510: using guessed type __int64 __fastcall std::string::_Rep::_M_destroy(_QWORD, _QWORD);
// 4C96C0: using guessed type unsigned __int64 std::string::_Rep::_S_empty_rep_storage[4];
