__int64 __fastcall sub_205F870(__int64 a1, __int64 a2, void *a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r12
  int v10; // eax
  int v11; // edx
  void *v13; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-50h]
  __int64 v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a1;
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 8) - 17 <= 1 )
    a1 = **(_QWORD **)(a1 + 16);
  v5 = sub_20C2F60(a1);
  v7 = sub_21F90D0(a1, a2, v6);
  v8 = v7;
  if ( a3 )
  {
    v13 = a3;
    v14 = 64;
    if ( v5 == v7 )
      sub_21FFC40(v15, v7, 0);
    else
      sub_21FD1F0(v15, v5, 0);
    if ( v15[0] == v8 )
      sub_2200650(v15, 0, (unsigned __int8)a2, &v13);
    else
      sub_21F9270(v15, 0, (unsigned __int8)a2, &v13);
    if ( v14 > 0x40 && v13 )
      operator delete[](v13);
  }
  else
  {
    if ( v5 == v7 )
      sub_21FFC40(v15, v7, 0);
    else
      sub_21FD1F0(v15, v5, 0);
    if ( v15[0] == v8 )
      sub_2200650(v15, 0, (unsigned __int8)a2, 0);
    else
      sub_21F9270(v15, 0, (unsigned __int8)a2, 0);
  }
  v9 = sub_2055C80(*(_QWORD **)v4, v15);
  v10 = *(unsigned __int8 *)(v4 + 8);
  if ( (unsigned int)(v10 - 17) <= 1 )
  {
    v11 = *(_DWORD *)(v4 + 32);
    BYTE4(v13) = (_BYTE)v10 == 18;
    LODWORD(v13) = v11;
    v9 = sub_205EF10((__int64)v13, v9);
  }
  sub_9955A0(v15);
  return v9;
}
