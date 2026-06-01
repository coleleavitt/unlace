void __fastcall qregfree(__int64 a1)
{
  __int64 *v1; // rbx

  v1 = *(__int64 **)(a1 + 24);
  sub_87BD90(v1);
  qfree(v1);
}

