__int64 __fastcall sub_1C285E0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // r8
  _QWORD *v5; // r15
  __int64 v9; // rbx
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned int *v15; // rbx
  unsigned int *v16; // r15
  unsigned int v17; // r8d
  __int64 result; // rax
  unsigned int v19; // eax
  int v20; // eax
  __int64 *v21; // rsi
  __int64 *v22; // r15
  __int64 *v23[8]; // [rsp+0h] [rbp-40h] BYREF

  v4 = (_QWORD *)a3[2];
  if ( (*v4 & 0xFFFFFFF8) == 0 || v4[2] != 0x5F76637369725F5FLL )
    return 0;
  v5 = v4 + 3;
  v9 = (unsigned int)*v4 - 8LL;
  v10 = sub_2244B30(v4 + 3, v9);
  v11 = sub_2244E60(a1 + 176, v5, v9, v10);
  if ( v11 == -1
    || (v12 = *(_QWORD *)(a1 + 176),
        v13 = (__int64 *)(v12 + 8LL * v11),
        v13 == (__int64 *)(v12 + 8LL * *(unsigned int *)(a1 + 184))) )
  {
    v19 = sub_2244B30(v5, v9);
    v20 = sub_2244E60(a1 + 152, v5, v9, v19);
    if ( v20 == -1 )
      v21 = (__int64 *)(*(_QWORD *)(a1 + 152) + 8LL * *(unsigned int *)(a1 + 160));
    else
      v21 = (__int64 *)(*(_QWORD *)(a1 + 152) + 8LL * v20);
    sub_E37610(v23, v21, 1);
    v22 = v23[0];
    sub_E37610(v23, (__int64 *)(*(_QWORD *)(a1 + 152) + 8LL * *(unsigned int *)(a1 + 160)), 1);
    result = 0;
    if ( v23[0] != v22 )
    {
      sub_1C27B80(a1, a2, a3, a4, *(_DWORD *)(*v22 + 8), 0);
      return 1;
    }
  }
  else
  {
    v14 = *v13;
    v15 = *(unsigned int **)(v14 + 8);
    v16 = &v15[*(unsigned int *)(v14 + 16)];
    while ( v16 != v15 )
    {
      v17 = *v15++;
      sub_1C27B80(a1, a2, a3, a4, v17, 1);
    }
    sub_1A43500(a2);
    return 1;
  }
  return result;
}
