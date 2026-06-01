__int64 __fastcall GUIDGenerator::CreateGUIDFromRand(GUIDGenerator *a1)
{
  __int64 result; // rax
  char v2; // cl
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  result = GUIDGenerator::InitOnce(a1);
  for ( i = 0; i <= 0xF; ++i )
  {
    v2 = rand();
    result = (__int64)a1 + i;
    *((_BYTE *)a1 + i) = v2;
  }
  return result;
}

