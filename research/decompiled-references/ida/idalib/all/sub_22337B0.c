void __fastcall sub_22337B0(_QWORD *a1, __int64 a2)
{
  __int64 addr; // rbp
  int v3; // r12d
  int v4; // eax
  char *v5; // rax

  *a1 = &unk_2C75CB8;
  addr = __tls_get_addr(&stru_2C77838);
  *(_QWORD *)(addr + 296) = a1[1];
  v3 = dword_2C8F608;
  v4 = *(_DWORD *)(addr + 288);
  if ( dword_2C8F608 != v4 && v4 )
  {
    v5 = (char *)sub_227D6D0(&stru_2C77838, a2);
    sub_22335B0(v5);
    *(_DWORD *)(addr + 288) = v3;
  }
  operator delete(a1, 0x18u);
}
