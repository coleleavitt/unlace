__int64 __fastcall sub_220A8F0(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // r9d
  int v7; // eax
  unsigned __int64 **v8; // r11
  int v9; // r10d
  bool *v10; // [rsp+8h] [rbp-20h]

  v4 = *(unsigned int *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)(a3 + 8) > 0x40u )
  {
    v10 = a4;
    v7 = sub_2206780((__int64 *)a3);
    a4 = v10;
    if ( (unsigned int)(v9 - v7) <= 0x40 && v4 >= **v8 )
      v5 = **v8;
  }
  else if ( v4 >= *(_QWORD *)a3 )
  {
    v5 = *(_QWORD *)a3;
  }
  sub_220A790(a1, a2, v5, a4);
  return a1;
}
