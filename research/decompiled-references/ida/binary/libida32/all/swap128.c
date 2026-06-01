__int64 __fastcall swap128(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 result; // rax

  v1 = swap64(a1[1]);
  result = swap64(*a1);
  *a1 = v1;
  a1[1] = result;
  return result;
}

