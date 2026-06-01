__int64 __fastcall set_interr_throws(char a1)
{
  __int64 addr; // rax
  unsigned int v2; // edx

  addr = __tls_get_addr(&stru_2C77838);
  v2 = *(unsigned __int8 *)(addr + 260);
  *(_BYTE *)(addr + 260) = a1;
  return v2;
}
