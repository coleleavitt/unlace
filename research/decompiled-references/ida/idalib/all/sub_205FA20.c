__int64 __fastcall sub_205FA20(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // r13
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // eax
  int v9; // edx
  char v11; // [rsp+1Fh] [rbp-69h] BYREF
  __int64 v12[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a1;
  v4 = *(_QWORD **)a1;
  v5 = sub_21F90B0(a1, a2);
  sub_21FBFD0(v13, a3);
  sub_22023D0(v12, v13, v5);
  sub_21F9830(v13);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 8) - 17 <= 1 )
    a1 = **(_QWORD **)(a1 + 16);
  v6 = sub_20C2F60(a1);
  sub_22028C0(v12, v6, 1, &v11);
  v7 = sub_2055C80(v4, v12);
  v8 = *(unsigned __int8 *)(v3 + 8);
  if ( (unsigned int)(v8 - 17) <= 1 )
  {
    v9 = *(_DWORD *)(v3 + 32);
    BYTE4(v13[0]) = (_BYTE)v8 == 18;
    LODWORD(v13[0]) = v9;
    v7 = sub_205EF10(v13[0], v7);
  }
  sub_9955A0(v12);
  return v7;
}
