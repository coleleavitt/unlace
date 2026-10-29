__int64 __fastcall sub_A73430(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  void *v8; // rbx
  unsigned int v10; // eax
  _DWORD *v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  bool v15; // bl
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  _QWORD v19[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(__int64 **)(a1 + 64);
  v20[0] = 1;
  v19[0] = 0;
  v5 = *v4;
  v19[1] = 0;
  v20[1] = 0;
  v6 = sub_B39350(a2, *(unsigned int *)(v5 + 8));
  if ( v6 == -1
    || !(unsigned __int8)sub_FFAE60(v4[63])
    || (v10 = sub_FF9FB0(v4[63], v6), v7 = sub_FFBF50(v4[63], v10, v19), !(_BYTE)v7)
    || (unsigned __int8)sub_A72E00(*a2) && ((v20[0] & 0x100000000LL) != 0 || LODWORD(v20[0]) != 1) )
  {
    v7 = 0;
  }
  else
  {
    v11 = *(_DWORD **)(sub_15D1F10(*a2) + 24);
    v15 = 0;
    if ( v11 && *v11 == 5 )
      v15 = v11[1] == 1;
    v16 = v4[3];
    if ( !v16 )
    {
      sub_16669E0(v4 + 2);
      v16 = v4[3];
    }
    v17 = sub_166A700(v16, (unsigned int)v19, v15, v12, v13, v14);
    v18 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    sub_A72BE0(*a3, a3[1]);
    *a3 = v18;
  }
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v8, v20);
  return v7;
}

