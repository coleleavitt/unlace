__int64 (__fastcall **__fastcall sub_B725E0(__int64 a1, __int64 a2, __int64 a3, char a4))()
{
  __int64 (__fastcall **result)(); // rax

  *(_QWORD *)(a1 + 16) = a3;
  result = off_1C57620;
  *(_BYTE *)(a1 + 8) = (2 * (a4 & 1)) | *(_BYTE *)(a1 + 8) & 0xFC;
  *(_QWORD *)a1 = off_1C57620;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  return result;
}

