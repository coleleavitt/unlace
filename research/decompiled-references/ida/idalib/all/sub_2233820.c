__int64 __fastcall sub_2233820(_QWORD *a1, __int64 a2)
{
  int v2; // r12d
  __int64 addr; // rbp
  int v4; // eax
  char *v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx

  *a1 = &unk_2C75CB8;
  v2 = dword_2C8F608;
  addr = __tls_get_addr(&stru_2C77838);
  v4 = *(_DWORD *)(addr + 288);
  if ( v2 != v4 && v4 )
  {
    v5 = (char *)sub_227D6D0(&stru_2C77838, a2);
    sub_22335B0(v5);
    *(_DWORD *)(addr + 288) = v2;
  }
  result = __tls_get_addr(&stru_2C77838);
  v7 = *(_QWORD *)(result + 296);
  *(_QWORD *)(result + 296) = a1;
  a1[1] = v7;
  return result;
}
