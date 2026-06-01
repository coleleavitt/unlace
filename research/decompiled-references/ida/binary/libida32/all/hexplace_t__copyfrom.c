__int64 __fastcall hexplace_t__copyfrom(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a1[2] = a2[2];
  a1[3] = a2[3];
  result = (unsigned int)a2[4];
  a1[4] = result;
  return result;
}

