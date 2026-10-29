__int64 __fastcall sub_1DFE280(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)a1;
  result = (*(_DWORD *)a1 - 3) & 0xFFFFFFFD;
  LOBYTE(result) = v1 <= 1 || ((v1 - 3) & 0xFFFFFFFD) == 0;
  if ( !(_BYTE)result && (v1 & 0xFFFFFFFB) == 2 )
    return *(unsigned __int8 *)(a1 + 597);
  return result;
}
