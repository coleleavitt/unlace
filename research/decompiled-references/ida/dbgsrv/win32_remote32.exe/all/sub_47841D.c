/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47841D
// Address: 0x0047841D

//----- (0047841D) --------------------------------------------------------
void *sub_47841D()
{
  DWORD LastError; // esi
  DWORD v1; // eax
  LPVOID v2; // eax
  void *v3; // edi
  void *v4; // ebx
  void *v5; // eax

  LastError = GetLastError();
  v1 = dword_4B6020;
  if ( dword_4B6020 == -1 )
    goto LABEL_7;
  v2 = sub_478F9E(dword_4B6020);
  v3 = v2;
  if ( !v2 )
  {
    v1 = dword_4B6020;
LABEL_7:
    if ( !sub_478FDD(v1, (void *)0xFFFFFFFF) )
      goto LABEL_4;
    v5 = sub_4791B9(1u, 0x364u);
    v3 = v5;
    if ( !v5 )
    {
      v4 = nullptr;
      sub_478FDD(dword_4B6020, nullptr);
      sub_479216(nullptr);
      goto LABEL_5;
    }
    if ( !sub_478FDD(dword_4B6020, v5) )
    {
      v4 = nullptr;
      sub_478FDD(dword_4B6020, nullptr);
      sub_479216(v3);
      goto LABEL_5;
    }
    sub_4780F4((int)v3, (char)&dword_4B7A54);
    sub_479216(nullptr);
LABEL_13:
    v4 = v3;
    goto LABEL_14;
  }
  if ( v2 != (LPVOID)-1 )
    goto LABEL_13;
LABEL_4:
  v4 = nullptr;
LABEL_5:
  v3 = nullptr;
LABEL_14:
  SetLastError(LastError);
  return v3 != nullptr ? v4 : nullptr;
}
// 4B6020: using guessed type int dword_4B6020;
// 4B7A54: using guessed type int dword_4B7A54;
