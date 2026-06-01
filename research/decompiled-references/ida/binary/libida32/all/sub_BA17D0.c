unsigned __int64 __fastcall sub_BA17D0(_QWORD *a1, __int64 a2)
{
  __int64 (*v3)(); // rax
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 *i; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  unsigned __int64 v14; // rdi
  __int64 (*v15)(void); // rax

  v3 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v3 == sub_9DD400 )
    v4 = sub_B4CD20(a2);
  else
    v4 = ((__int64 (__fastcall *)(__int64))v3)(a2);
  v5 = *(_QWORD *)(sub_B685F0((__int64)a1) + 18360);
  if ( v5 )
  {
    a2 = a1[9];
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 80LL))(v5, a2, 1);
  }
  v6 = a1[10];
  if ( !v6 )
    v6 = sub_B9F7C0(a1);
  v7 = *(__int64 **)(v6 + 120);
  for ( i = &v7[*(unsigned int *)(v6 + 128)]; i != v7; ++v7 )
  {
    v13 = *v7;
    v14 = *(_QWORD *)(*(_QWORD *)(*v7 + 104) + 192LL) & 0xFFFFFFFFFFFFFFF8LL;
    v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 32LL);
    if ( v15 == sub_9DD400 )
    {
      if ( sub_B4CD20(v14) == v4 )
        return sub_BA1250(v13, a2, v9, v10, v11, v12);
    }
    else if ( v15() == v4 )
    {
      return sub_BA1250(v13, a2, v9, v10, v11, v12);
    }
  }
  return 0;
}

