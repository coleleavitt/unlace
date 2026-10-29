/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47BF37
// Address: 0x0047BF37

//----- (0047BF37) --------------------------------------------------------
int sub_47BF37()
{
  int v0; // edi
  DWORD CurrentDirectoryW; // eax
  DWORD v3; // ebx
  WCHAR *v4; // eax
  unsigned __int16 *v5; // esi
  __m128i Buffer[32]; // [esp+4h] [ebp-210h] BYREF

  v0 = 0;
  sub_464890(Buffer, 0, 0x20Au);
  CurrentDirectoryW = GetCurrentDirectoryW(0x105u, (LPWSTR)Buffer);
  if ( CurrentDirectoryW <= 0x104 )
    return sub_47BF0C((unsigned __int16 *)Buffer);
  v3 = CurrentDirectoryW + 1;
  v4 = (WCHAR *)sub_4791B9(CurrentDirectoryW + 1, 2u);
  v5 = v4;
  if ( v4 && GetCurrentDirectoryW(v3, v4) )
    v0 = sub_47BF0C(v5);
  else
    *sub_46B984() = 12;
  sub_479216(v5);
  return v0;
}
