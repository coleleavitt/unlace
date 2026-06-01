__int64 __fastcall sub_16D4590(__int64 a1, __int64 a2, unsigned int a3, double a4, double a5)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 *v8; // r14
  __int64 v9; // r12
  unsigned int v10; // eax
  unsigned int v12; // [rsp+Ch] [rbp-3Ch]

  v6 = sub_BFD550(*(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFFELL) + 32));
  v7 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFFFFELL) + 16);
  v8 = (unsigned __int64 *)((a2 & 0xFFFFFFFFFFFFFFFELL)
                          + 8 * (((*(_BYTE *)((a2 & 0xFFFFFFFFFFFFFFFELL) + 2) & 8) != 0) + 1LL)
                          + 32);
  v12 = *(_DWORD *)((a2 & 0xFFFFFFFFFFFFFFFELL) + 20);
  v9 = sub_EEC8C0(v6, a2, a4);
  v10 = sub_BF6D70(a2 & 0xFFFFFFFFFFFFFFFELL);
  return sub_16D2BC0(a1, ((unsigned __int64)v12 << 32) | v10, v9, v12, v8, v7, a4, a5, a3, 0);
}
