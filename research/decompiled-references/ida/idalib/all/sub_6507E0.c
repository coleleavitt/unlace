unsigned __int64 __fastcall sub_6507E0(__int64 *a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 v5; // r14
  __int64 v8; // r14
  __int64 v9; // rax
  _BYTE v10[4]; // [rsp+4h] [rbp-54h] BYREF
  int v11[2]; // [rsp+8h] [rbp-50h] BYREF
  char *v12; // [rsp+10h] [rbp-48h] BYREF
  char *v13; // [rsp+18h] [rbp-40h] BYREF
  char *v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *a1;
  v14[1] = (char *)__readfsqword(0x28u);
  if ( (unsigned __int8)must_journal(a1, a2, a3) && (!*a2 || *a2 == *(_QWORD *)(*(_QWORD *)(v5 + 1672) + 8LL)) )
  {
    v8 = *(_DWORD *)a3 >> 31;
    v9 = sub_6474E0(
           a3,
           (const char **)v11,
           (unsigned __int64)&v12,
           (unsigned __int64)&v13,
           (unsigned __int64)v14,
           (unsigned __int64)v10);
    sub_64A440(*a1, 143, (__int64)a2, v9, (char *)(a3 + 4), *(char **)v11, v12, v13, v14[0], v10[0], v9, v8);
  }
  return sub_6501A0((__int64)a1, (__int64)a2, a3, a4);
}
