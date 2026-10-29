__int64 __fastcall c_ekk_Unset(__int64 a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)~(1 << a2);
  *(_DWORD *)(a1 + 4LL * (a2 >> 5)) &= result;
  return result;
}

