__int64 __fastcall sub_1382E0(__int64 a1, double a2, __m128 a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  __int64 i; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdi
  void (*v18)(); // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax

  if ( *(int *)(a1 + 312) <= 1 )
  {
    sub_66FA0(a1, 1u, (__int64)"before preoptimize");
    nullsub_182();
    for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
      sub_B62C0(i, 1, v6, v7, v8, v9);
    sub_A6DC0(a1);
    sub_A7130(a1, 1, v11, v12, v13, v14);
    *(_DWORD *)a1 |= 0x200u;
    sub_66FA0(a1, 1u, (__int64)"after preoptimize");
    if ( (unsigned int)sub_A0950(a1) )
      sub_66FA0(a1, 1u, (__int64)"after combined operand propagation");
    v15 = *(_QWORD *)(a1 + 928);
    if ( !v15 )
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1504) + 312LL))(*(_QWORD *)(a1 + 1504), a1);
      *(_QWORD *)(a1 + 928) = v23;
      v15 = v23;
    }
    v16 = sub_19FD50(v15);
    *(_QWORD *)(a1 + 936) = v16;
    v17 = v16;
    v18 = *(void (**)())(*(_QWORD *)v16 + 16LL);
    if ( v18 != nullsub_75 )
      ((void (__fastcall *)(__int64))v18)(v17);
    v4 = sub_33E140(*(_QWORD *)(a1 + 1496), 4u, a1);
    if ( !v4 )
      v4 = sub_330F20(a1, 2, v19, v20, v21, v22);
  }
  else
  {
    *(_DWORD *)a1 |= 0x200u;
    v4 = 0;
  }
  sub_321ED0(a1, 1, a2, a3);
  return v4;
}
