void __fastcall sub_BC0000(__int64 a1, char *a2, __int64 a3, double a4)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v10[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v11; // [rsp+30h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(v7 + 8) & 7LL | (*(__int64 *)(v7 + 8) >> 3) & 1 )
    v7 = sub_F64F00(v6);
  v9 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  v11 = 257;
  sub_F74830(&v9, a2, a3, v10, 0);
  v8 = sub_B8C330(a1);
  sub_A51C30((_DWORD *)(a1 + 64), a2, a3, *(_QWORD *)(a1 + 48), v8, a4);
}
