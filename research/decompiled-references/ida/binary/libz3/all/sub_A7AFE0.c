__int64 __fastcall sub_A7AFE0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v8; // rsi
  unsigned int v9; // ebp
  unsigned int v10; // ebp
  void *v11; // rbx
  unsigned int v13; // eax
  _DWORD *v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  bool v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbx
  _QWORD v22[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v23[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *a1;
  v23[0] = 1;
  v8 = *(unsigned int *)(v6 + 8);
  v22[0] = 0;
  v22[1] = 0;
  v23[1] = 0;
  v9 = sub_B39350(a2, v8);
  if ( v9 == -1
    || !(unsigned __int8)sub_FFAE60(a1[63])
    || (v13 = sub_FF9FB0(a1[63], v9), v10 = sub_FFBF50(a1[63], v13, v22), !(_BYTE)v10)
    || (unsigned __int8)sub_A72E00(*a2) && ((v23[0] & 0x100000000LL) != 0 || LODWORD(v23[0]) != 1) )
  {
    v10 = 0;
  }
  else
  {
    v14 = *(_DWORD **)(sub_15D1F10(*a2) + 24);
    v18 = 0;
    if ( v14 && *v14 == 5 )
      v18 = v14[1] == 1;
    v19 = a1[3];
    if ( !v19 )
    {
      sub_16669E0(a1 + 2);
      v19 = a1[3];
    }
    v20 = sub_166A700(v19, (unsigned int)v22, v18, v15, v16, v17);
    v21 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    sub_A72BE0(*a3, a3[1]);
    *a3 = v21;
  }
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v22);
  sub_182CBA0(v11, v23);
  return v10;
}

