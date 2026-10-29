__int64 __fastcall sub_1D36730(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r14
  int v5; // eax
  int v6; // r12d
  __int64 v7; // rdx
  int v8; // ebp
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // [rsp+18h] [rbp-40h]

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 544);
  *(_QWORD *)(v3 + 544) = *(_QWORD *)a1;
  v5 = *(_DWORD *)(v3 + 40);
  v6 = *(_DWORD *)(v3 + 80);
  v7 = *(_QWORD *)(v3 + 9944);
  v8 = *(_DWORD *)(v3 + 2632);
  *(_QWORD *)(v3 + 9944) = 0;
  *(_DWORD *)(v3 + 80) = v5;
  v9 = *(_QWORD *)(v3 + 512);
  v12 = v7;
  *(_DWORD *)(v3 + 2632) = *(_DWORD *)(v3 + 3688);
  v10 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v3 + 512) = 0;
  result = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, __int64))(a1 + 16))(
             *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
             *(_QWORD *)v10,
             *(unsigned int *)(v10 + 8),
             v2);
  if ( v4 )
  {
    *(_QWORD *)(v3 + 544) = v4;
    *(_QWORD *)(v3 + 512) = v9;
    *(_QWORD *)(v3 + 9944) = v12;
    *(_DWORD *)(v3 + 80) = v6;
    *(_DWORD *)(v3 + 2632) = v8;
  }
  return result;
}
