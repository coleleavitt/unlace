unsigned __int64 __fastcall sub_4DC3F0(__int64 **a1, __int64 a2, __int64 a3, double a4)
{
  __int64 eah; // rax
  int v5; // eax
  __int64 v6; // rax
  unsigned __int8 v8[40]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  eah = get_eah(a1, a2, a3);
  qsnprintf(v8, 32, "%0*a", 2 * *(_DWORD *)(eah + 24), a4);
  v6 = sub_4DC0B0(a1, v8, v5, 0);
  *(_DWORD *)(v6 + 8) = 5;
  *(_QWORD *)v6 = a2;
  return v9 - __readfsqword(0x28u);
}
