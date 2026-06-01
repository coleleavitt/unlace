/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4812A1
// Address: 0x004812A1

//----- (004812A1) --------------------------------------------------------
HANDLE sub_4812A1()
{
  HANDLE result; // eax

  result = CreateFileW(L"CONOUT$", 0x40000000u, 3u, nullptr, 3u, 0, nullptr);
  hConsoleOutput = result;
  return result;
}
