__int64 __fastcall sub_8400C0(__int64 a1)
{
  *(_QWORD *)a1 = &off_2BFBE18;
  return qsem_free(*(void **)(a1 + 16));
}
