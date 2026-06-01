__int64 __fastcall sub_A73780(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  void *v8; // rbx
  unsigned int v10; // eax
  unsigned __int8 v11; // al
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  unsigned __int8 v16; // bl
  __int64 v17; // rax
  __int64 v18; // rbx
  char v19; // [rsp+7h] [rbp-61h] BYREF
  _BYTE v20[8]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(__int64 **)(a1 + 64);
  v22[0] = 1;
  v21[0] = 0;
  v5 = *v4;
  v21[1] = 0;
  v22[1] = 0;
  v6 = sub_B39350(a2, *(unsigned int *)(v5 + 8));
  if ( v6 == -1
    || !(unsigned __int8)sub_FFAE60(v4[63])
    || (v10 = sub_FF9FB0(v4[63], v6), v7 = sub_FFB810(v4[63], v10, v20, v21, &v19), !(_BYTE)v7)
    || v19 )
  {
    v7 = 0;
  }
  else
  {
    v11 = sub_A72E00(*a2);
    v15 = v4[3];
    v16 = v11;
    if ( !v15 )
    {
      sub_16669E0(v4 + 2);
      v15 = v4[3];
    }
    v17 = sub_166A700(v15, (unsigned int)v21, v16, v12, v13, v14);
    v18 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
    sub_A72BE0(*a3, a3[1]);
    *a3 = v18;
  }
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v21);
  sub_182CBA0(v8, v22);
  return v7;
}

