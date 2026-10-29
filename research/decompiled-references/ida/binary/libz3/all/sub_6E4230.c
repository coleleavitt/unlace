__int64 __fastcall sub_6E4230(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v4; // r13
  unsigned int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( !a3 )
    return *(_QWORD *)(*(_QWORD *)v3 + 864LL);
  v6 = a3 - 1;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL * (unsigned int)(a3 - 1));
  v4 = sub_6E1010(*(_QWORD *)(a1 + 8), v7);
  if ( v6 )
  {
    v8 = sub_6E4230(a1, a2, v6);
    v14 = sub_6E15B0(v3, v7, v9, v10, v11, v12);
    v15 = v8;
    v13 = sub_6E3580(v3, 2, &v14);
    v14 = v4;
    v15 = v13;
    return sub_6E1880(v3, 2, &v14);
  }
  return v4;
}

