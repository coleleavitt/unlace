__int64 sub_22909B0()
{
  struct mallinfo v1; // [rsp+0h] [rbp-38h] BYREF

  mallinfo(&v1);
  return v1.uordblks;
}
