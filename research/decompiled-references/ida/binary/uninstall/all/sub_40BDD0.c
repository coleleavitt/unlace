__int64 sub_40BDD0(__int64 a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF

  va_start(va, a1);
  return sub_40BD50(a1, &va[0].gp_offset);
}

