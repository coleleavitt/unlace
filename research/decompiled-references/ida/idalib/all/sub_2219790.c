void __fastcall sub_2219790(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 addr; // rax
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rax
  _BYTE *v10; // rdi

  v2 = *(__int64 **)(a1 + 8);
  addr = __tls_get_addr(&stru_2C77838);
  v4 = *(_QWORD *)(addr + 272);
  *(_QWORD *)(addr + 272) = a1;
  if ( v2 )
  {
    do
    {
      v5 = *v2;
      v6 = (__int64 *)v2[4];
      *((_BYTE *)v2 + 16) = 1;
      (*(void (__fastcall **)(__int64 *))(v5 + 16))(v2);
      v7 = *v2;
      v8 = v2;
      v2 = v6;
      (*(void (__fastcall **)(__int64 *))(v7 + 8))(v8);
    }
    while ( v6 );
  }
  v9 = __tls_get_addr(&stru_2C77838);
  v10 = *(_BYTE **)a1;
  *(_QWORD *)(v9 + 272) = v4;
  if ( v10 )
  {
    if ( (v10[216] & 2) == 0 )
      *(_QWORD *)(v9 + 280) = *(_QWORD *)v10;
    operator delete(v10, 0xE0u);
  }
}
