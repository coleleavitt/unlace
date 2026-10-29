bool sub_1029150()
{
  __int64 addr; // rax
  bool result; // al
  __int64 v2; // rax

  addr = __tls_get_addr(&stru_2C77838);
  result = *(_QWORD *)(addr + 264)
        && (v2 = abs64(sub_2296500() - *(_QWORD *)(addr + 264)), v2 <= (__int64)&loc_800000)
        && (unsigned __int64)v2 > 0x7BFFFF;
  return result;
}
