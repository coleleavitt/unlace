__int64 __fastcall c_ekk_Set(__int64 a1, int a2)
{
  __int64 result; // rax

  result = a2 >> 5;
  *(_DWORD *)(a1 + 4 * result) |= 1 << a2;
  return result;
}

