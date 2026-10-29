__int64 __fastcall sub_409790(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v9[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 2356) != a2 || !a5 )
    return 0;
  v8[0] = a4;
  v7 = sub_3B9110((_QWORD *)a1, a3);
  v9[1] = 0xFFFFFFFF00000000LL;
  v8[1] = v8[0] + a5;
  v9[0] = 0;
  v9[2] = 0;
  sub_408E00((__int64)v9, (__int64)v8);
  sub_409240((_QWORD *)(a1 + 2360), &v7, (unsigned __int16 *)v9, 169);
  return 1;
}

