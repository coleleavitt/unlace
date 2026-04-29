__int64 __fastcall sub_1122B0(__int64 **a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v9; // rdi
  char v10; // r14
  __int64 v11; // rax
  __int64 *v12; // r12
  int *v13; // r15
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax

  if ( *(_DWORD *)(a2 + 76) != 4 || *(_BYTE *)(*(_QWORD *)(a2 + 56) + 64LL) != 7 )
    return 0;
  v5 = *(_QWORD *)(a2 + 64);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (unsigned int)a3[18];
  if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 64) )
    goto LABEL_25;
  v9 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8 * v7);
  if ( *a3 == 43 )
  {
    v10 = 0;
    v9 = *(_QWORD *)(a2 + 8);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8 * v7);
  }
  else
  {
    v10 = 1;
    if ( *a3 != 44 )
      return 0;
  }
  v11 = sub_1120C0(v9, 1);
  v12 = (__int64 *)v11;
  if ( *(_DWORD *)(v11 + 76) != 4 )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(v11 + 56) + 64LL) != 7 )
    return 0;
  v3 = *(_QWORD *)(v11 + 352);
  if ( v3 != 1 )
    return 0;
  if ( sub_330DE0(v11) != 1 )
    return 0;
  v13 = (int *)v12[7];
  if ( (unsigned int)(*v13 - 43) > 9 )
    return 0;
  v14 = sub_1120C0(v6, 0);
  v15 = *v13;
  if ( *v13 == 43 )
  {
    v16 = v12[8];
    v17 = (unsigned int)v13[18];
    if ( (unsigned int)v17 < *(_DWORD *)(v16 + 64) )
    {
      if ( v14 == sub_1120C0(*(_QWORD *)(*(_QWORD *)(v16 + 528) + 8 * v17), 0) )
      {
        if ( v10 )
          v3 = 3;
        goto LABEL_17;
      }
      v15 = *v13;
      goto LABEL_14;
    }
LABEL_25:
    sub_111110();
  }
LABEL_14:
  if ( v15 == 44 && v14 == sub_1120C0(v12[1], 0) )
  {
    v3 = v10 == 0 ? 2 : 4;
LABEL_17:
    *a1 = v12;
    return v3;
  }
  return 0;
}
