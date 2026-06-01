__int64 __fastcall sub_3901D0(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // r15
  __int16 v3; // r14
  unsigned __int8 v4; // r13
  int v5; // r9d
  __int64 (__fastcall *v6)(_QWORD); // rax
  int v7; // eax
  unsigned int v8; // r12d
  int v10; // eax
  int v11; // eax
  int v12; // edx
  unsigned __int8 v13; // [rsp+8h] [rbp-60h]
  int v14[2]; // [rsp+10h] [rbp-58h] BYREF
  int v15[2]; // [rsp+18h] [rbp-50h] BYREF
  int v16[2]; // [rsp+20h] [rbp-48h] BYREF
  int v17[2]; // [rsp+28h] [rbp-40h]

  *(_QWORD *)v17 = __readfsqword(0x28u);
  v2 = getinf_flag(44, 32);
  v3 = getinf(47);
  v4 = getinf(30);
  v13 = getinf(48);
  if ( (*(_BYTE *)(a1 + 40) & 0x20) == 0 )
    setinf_flag(44, 32, a2 ^ 1u);
  *(_QWORD *)v14 = 0;
  *(_QWORD *)v15 = 0;
  *(_QWORD *)v16 = 0;
  if ( a2 )
  {
    setinf(47, 0);
    setinf(48, 0);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 1074LL) & 0x40) != 0 )
      setinf(30, 0);
  }
  sub_3792E0(0x4Cu, 1, *(_QWORD *)(a1 + 8), a2, *(unsigned int *)(a1 + 40), v15);
  if ( (*(_BYTE *)(a1 + 40) & 0x20) != 0 )
    callui(47, (int)v14, (int)v16, (int)v15, (int)&callui, v5);
  v12 = *(_DWORD *)(a1 + 40);
  v8 = 0;
  if ( (v12 & 0x180) != 0 )
  {
    v10 = sub_55C9A0(a1, v15[0]);
    if ( v10 < 0 )
      goto LABEL_11;
    v8 = v10;
    if ( (*(_DWORD *)(a1 + 40) & 0x40) == 0 )
    {
LABEL_14:
      v11 = sub_38FFF0(a1);
      if ( v11 < 0 )
        goto LABEL_11;
      v8 += v11;
      v6 = *(__int64 (__fastcall **)(_QWORD))v16;
      if ( !*(_QWORD *)v16 )
        goto LABEL_11;
      goto LABEL_9;
    }
  }
  else if ( (v12 & 0x40) == 0 )
  {
    goto LABEL_14;
  }
  v6 = *(__int64 (__fastcall **)(_QWORD))v16;
  if ( !*(_QWORD *)v16 )
    goto LABEL_11;
LABEL_9:
  v7 = v6(*(_QWORD *)(a1 + 8));
  if ( v7 >= 0 )
    v8 += v7;
LABEL_11:
  sub_3792E0(0x4Cu, 0, *(_QWORD *)(a1 + 8), a2, *(unsigned int *)(a1 + 40), 0);
  setinf_flag(44, 32, v2);
  setinf(47, v3);
  setinf(30, v4);
  setinf(48, v13);
  return v8;
}
