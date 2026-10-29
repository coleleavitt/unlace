__int16 __fastcall sub_204CD60(__int64 a1, __int64 a2)
{
  __int16 result; // ax

  LOBYTE(result) = *(_DWORD *)(a2 + 8) >> 8 == 1;
  HIBYTE(result) = 1;
  return result;
}
