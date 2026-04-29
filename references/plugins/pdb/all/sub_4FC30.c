__int64 __fastcall sub_4FC30(__int64 a1, __int64 **a2, double a3, double a4, double a5)
{
  __int64 *v5; // rax
  __int64 (__fastcall *v6)(__int64, unsigned int *); // rax
  unsigned int *v7; // rax
  unsigned int v8; // eax
  __int64 (__fastcall *v10)(__int64, int *); // rax
  int *v11; // rax
  int v12; // r8d
  unsigned int v13; // [rsp+0h] [rbp-28h] BYREF
  int v14; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v5 = *a2;
  v15 = __readfsqword(0x28u);
  v6 = (__int64 (__fastcall *)(__int64, unsigned int *))v5[9];
  if ( v6 == sub_2DCF0 )
  {
    v7 = (unsigned int *)sub_2CEC0(a2[2], 0x8000, 0x400u, 0x4000000);
    if ( !v7 )
      return 0;
    v8 = *v7;
    v13 = v8;
  }
  else
  {
    if ( (unsigned int)v6((__int64)a2, &v13) )
      return 0;
    v8 = v13;
  }
  if ( v8 != 4 )
    return 0;
  v10 = (__int64 (__fastcall *)(__int64, int *))(*a2)[16];
  if ( v10 == sub_2DD20 )
  {
    v11 = (int *)sub_2CEC0(a2[2], (__int64)&stru_10000, 0x400u, 0x4000000);
    if ( !v11 )
      return 0;
    v12 = *v11;
    v14 = *v11;
  }
  else
  {
    if ( (unsigned int)v10((__int64)a2, &v14) )
      return 0;
    v12 = v14;
  }
  sub_4F830(*(_QWORD *)(a1 + 96), a1 + 16, a2, a3, a4, a5, v13, v12, 0);
  *(_BYTE *)(a1 + 104) = 1;
  return 1;
}
