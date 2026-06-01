__int64 __fastcall sub_56C4D0(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_56C3B0(0xFFFFu, a1, 0, a3);
  *(_BYTE *)(result + 44) = (4 * (a2 & 1)) | *(_BYTE *)(result + 44) & 0xFB;
  return result;
}
