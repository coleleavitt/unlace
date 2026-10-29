bool sub_1005410()
{
  __int64 addr; // rax
  bool result; // al
  unsigned __int64 v2; // rax

  addr = __tls_get_addr();
  result = *(_QWORD *)(addr + 264)
        && (v2 = abs64(sub_22727C0(&stru_2C4D838) - *(_QWORD *)(addr + 264)), v2 <= 0x800000)
        && v2 > (unsigned __int64)&loc_7BFFFF;
  return result;
}

