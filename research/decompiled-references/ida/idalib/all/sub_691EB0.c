unsigned __int64 __fastcall sub_691EB0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rdi
  char v12; // [rsp+7h] [rbp-59h] BYREF
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  void *v14[2]; // [rsp+10h] [rbp-50h]
  int v15[2]; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+28h] [rbp-38h]
  unsigned __int64 v17; // [rsp+30h] [rbp-30h]

  v3 = *a1;
  v17 = __readfsqword(0x28u);
  LODWORD(v16) = -1;
  *(_QWORD *)v15 = 0;
  v4 = *(__int64 (**)(void))(v3 + 24);
  v12 = 0;
  ptr = nullptr;
  *(_OWORD *)v14 = 0;
  if ( (char *)v4 == (char *)sub_6909F0 )
  {
    v5 = a1[1];
    v6 = v5 + 8;
    if ( *(__int64 *)(v5 + 32) < 0 )
      sub_690720(v5 + 8);
  }
  else
  {
    v6 = v4();
  }
  sub_691680(a1, &v12, &ptr, v6);
  sub_6917F0((__int64)a1, a2, v6, v7, v8, v9);
  sub_691770(a1, &v12, &ptr, v6);
  v10 = ptr;
  *(_BYTE *)(a1[1] + 144) = 1;
  if ( v10 )
  {
    v14[0] = nullptr;
    qfree(v10);
  }
  return v17 - __readfsqword(0x28u);
}
