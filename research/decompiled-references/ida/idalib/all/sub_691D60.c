unsigned __int64 __fastcall sub_691D60(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 (*v4)(void); // rdx
  __int64 v5; // r12
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *i; // r13
  void *v12; // rdi
  char v14; // [rsp+Fh] [rbp-69h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  void *v16[2]; // [rsp+18h] [rbp-60h]
  int v17[2]; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v1 = a1[1];
  if ( *(_QWORD *)(v1 + 56) )
  {
    v2 = *a1;
    v14 = 0;
    *(_QWORD *)v17 = 0;
    LODWORD(v18) = -1;
    v4 = *(__int64 (**)(void))(v2 + 24);
    ptr = nullptr;
    *(_OWORD *)v16 = 0;
    if ( (char *)v4 == (char *)sub_6909F0 )
    {
      v5 = v1 + 8;
      if ( *(__int64 *)(v1 + 32) < 0 )
        sub_690720(v1 + 8);
    }
    else
    {
      v5 = v4();
    }
    sub_691680(a1, &v14, &ptr, v5);
    v9 = a1[1];
    v10 = *(__int64 **)(v9 + 48);
    for ( i = &v10[*(_QWORD *)(v9 + 56)]; i != v10; ++v10 )
      sub_6917F0((__int64)a1, *v10, v5, v6, v7, v8);
    sub_691770(a1, &v14, &ptr, v5);
    v12 = ptr;
    *(_BYTE *)(a1[1] + 144) = 1;
    if ( v12 )
    {
      v16[0] = nullptr;
      qfree(v12);
    }
  }
  return v19 - __readfsqword(0x28u);
}
