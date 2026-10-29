__int64 __fastcall sub_E75180(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *v6; // rdi
  __int64 (*v7)(void); // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // edx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // [rsp+4h] [rbp-84h] BYREF
  char v13; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 *v14[15]; // [rsp+10h] [rbp-78h] BYREF

  sub_FA3370(v14, **(_QWORD **)(a2 + 24), a3, 2520);
  sub_E74100(v14, *(_QWORD *)(a2 + 8) == 0);
  sub_AC84E0(v14, *(_BYTE **)a2, *(_QWORD *)(a2 + 8));
  v6 = *(_DWORD **)(a2 + 16);
  v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 16LL);
  if ( (char *)v7 == (char *)sub_B82370 )
  {
    LODWORD(v8) = v6[6];
    v9 = v6[12];
  }
  else
  {
    v11 = v7();
    v9 = v11;
    v8 = HIDWORD(v11);
  }
  v12 = __PAIR64__(v8, v9);
  v13 = 1;
  sub_AC88D0((__int64 *)v14, (__int64 *)&v12);
  sub_E74100(v14, a4);
  sub_FA33B0(a1, v14);
  sub_AC6300((__int64)v14);
  return a1;
}

