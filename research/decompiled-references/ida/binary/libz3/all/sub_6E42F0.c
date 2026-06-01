__int64 __fastcall sub_6E42F0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( !a3 )
    return *(_QWORD *)(*(_QWORD *)v3 + 864LL);
  v7 = (unsigned int)(a3 - 1);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v7);
  if ( (a3 & 1) != 0 )
  {
    v4 = sub_6E1010(v8, v9);
    if ( !(_DWORD)v7 )
      return v4;
  }
  else
  {
    v10 = sub_6E0F30(v8);
    v4 = sub_6E1010(v3, v10);
  }
  v11 = sub_6E42F0(a1, a2, (unsigned int)v7);
  v17 = sub_6E15B0(v3, v9, v12, v13, v14, v15);
  v18 = v11;
  v16 = sub_6E3580(v3, 2, &v17);
  v17 = v4;
  v18 = v16;
  return sub_6E1880(v3, 2, &v17);
}

