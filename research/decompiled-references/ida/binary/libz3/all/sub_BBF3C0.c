__int64 __fastcall sub_BBF3C0(
        _QWORD *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        double a7)
{
  __int64 result; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+14h] [rbp-54h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-50h] BYREF
  unsigned int v16[3]; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned int *v17[8]; // [rsp+28h] [rbp-40h] BYREF

  result = (unsigned int)dword_1C7ED94;
  v16[0] = a3;
  v15 = a4;
  v14 = a5;
  v13 = a6;
  v17[0] = nullptr;
  if ( dword_1C7ED94 != a2 && a3 != dword_1C7ED94 && a4 != dword_1C7ED94 && a5 != dword_1C7ED94 && a6 != dword_1C7ED94 )
  {
    if ( a2 != -2 && a2 != dword_1C7ED90 )
    {
      v12 = sub_186B270(0x10u);
      v17[0] = (unsigned int *)(v12 + 8);
      *(_DWORD *)(v12 + 8) = a2;
      *(_QWORD *)v12 = 0x100000002LL;
    }
    if ( a3 != -2 && a3 != dword_1C7ED90 )
      sub_BB4940(v17, v16);
    if ( a4 != -2 && a4 != dword_1C7ED90 )
      sub_BB4940(v17, &v15);
    if ( a5 != -2 && a5 != dword_1C7ED90 )
      sub_BB4940(v17, &v14);
    if ( a6 != -2 && a6 != dword_1C7ED90 )
      sub_BB4940(v17, &v13);
    result = sub_BBF120(a1, v17, a7);
    if ( v17[0] )
      return sub_186B220(v17[0] - 2);
  }
  return result;
}

