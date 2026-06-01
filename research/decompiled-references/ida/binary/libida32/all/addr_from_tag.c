unsigned __int64 __fastcall addr_from_tag(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rax
  char v8; // [rsp+0h] [rbp-28h]
  __int64 v9; // [rsp+Fh] [rbp-19h] BYREF
  char v10; // [rsp+17h] [rbp-11h]
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v6 = *(_QWORD *)(a2 + 2);
  v11 = __readfsqword(0x28u);
  v10 = 0;
  v9 = v6;
  qsscanf((int)&v9, (int)"%a", a1, a4, a5, a6, v8);
  return v11 - __readfsqword(0x28u);
}

