__int64 __fastcall sub_40DF30(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  std::ios_base *v5; // rbx
  _QWORD *v6; // r14
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v19; // [rsp+18h] [rbp-60h] BYREF
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned int *v21; // [rsp+28h] [rbp-50h] BYREF
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h]

  v4 = sub_B00C00(*(_QWORD *)(a1 + 152), &qword_1C7F4C8, &qword_18D6CD0);
  v5 = (std::ios_base *)v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 48);
  v6 = (_QWORD *)sub_3FCD00(*(_QWORD **)(a1 + 264), *(_DWORD *)(a1 + 272), a3)[1];
  v20 = *(_QWORD *)(a1 + 152);
  sub_40B100((__int64)&v22, (__int64)v6, (a2 < 0xFFFF) + a2, v7, v8, v9);
  v10 = v23;
  v11 = v22;
  if ( v22 == *(_QWORD *)(*(_QWORD *)(a1 + 152) + 856LL) )
  {
    v13 = 1;
    sub_3FCDF0(v22, v23);
    v21 = nullptr;
    sub_2334C0(&v20);
    if ( !v5 )
      return v13;
  }
  else
  {
    v21 = nullptr;
    sub_40DDF0(v6, a1 + 264, a2, (__int64)&v20);
    v12 = sub_15E1A70(*(_QWORD *)(a1 + 152));
    v19 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    sub_407600(&v21, &v19);
    v13 = (unsigned int)v21;
    v14 = *(_QWORD *)(a1 + 152);
    v15 = sub_15E1AF0(v14);
    v16 = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    sub_E5EBF0(v5, v15);
    LOBYTE(v13) = (unsigned int)sub_E60CB0(v5, 0, 0) == -1;
    sub_3FCDF0(v16, v14);
    sub_3FCDF0(v11, v10);
    sub_2334C0(&v20);
  }
  if ( (*((_DWORD *)v5 + 12))-- == 1 )
  {
    (**(void (__fastcall ***)(std::ios_base *))v5)(v5);
    sub_186B220(v5);
  }
  return v13;
}

