__int64 __fastcall sub_3CCE40(int a1)
{
  void *v1; // rbx
  __int64 idati; // rax
  __int64 tlc_for_til; // r12
  __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  void *v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[1] = (void *)__readfsqword(0x28u);
  v1 = (void *)operator new(0x40u);
  sub_3A4010((__int64)v1, 0, 0, 0);
  idati = get_idati(v1);
  tlc_for_til = create_tlc_for_til(idati, 0);
  v10[0] = v1;
  v4 = qalloc_or_throw(200);
  v9 = tlc_for_til;
  sub_3A42C0(v4, (__int64)"Local Types", 0xA5u, a1, &v9, (__int64)v10);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v5 = (__int64 *)v10[0];
  if ( v10[0] )
  {
    v6 = *((_QWORD *)v10[0] + 3);
    if ( v6 )
    {
      *((_QWORD *)v10[0] + 4) = 0;
      qfree(v6, "Local Types");
    }
    v7 = *v5;
    if ( *v5 )
    {
      v5[1] = 0;
      qfree(v7, "Local Types");
    }
    operator delete(v5, 0x40u);
  }
  return v4;
}
