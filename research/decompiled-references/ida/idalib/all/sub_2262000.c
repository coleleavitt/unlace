__int64 __fastcall sub_2262000(__int64 a1, double *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 result; // rax
  _BYTE *v7; // r15
  __int64 v8; // r14
  _BYTE *v9; // r13
  int v10; // r12d
  __int64 v11; // rbx
  char *v12; // rax
  __int64 *v13; // r14
  __int64 *i; // rbx
  __int64 v15; // rdx
  _BYTE *v16; // r13
  int v17; // r12d
  __int64 v18; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = a4;
  result = *(unsigned int *)(a3 + 8);
  v7 = *(_BYTE **)(a3 + 16);
  v8 = *(_QWORD *)(a3 + 24);
  if ( (_DWORD)result == 1 )
  {
    v16 = *(_BYTE **)(a3 + 48);
    v17 = *(_DWORD *)(a3 + 80);
    v19 = *(_QWORD *)(a3 + 56);
    v11 = operator new(0x58u);
    *(_DWORD *)(v11 + 8) = 1;
    *(_QWORD *)v11 = &off_2BEB750;
    *(_QWORD *)(v11 + 16) = v11 + 32;
    sub_2259A00((_QWORD *)(v11 + 16), v7, (__int64)&v7[v8]);
    *(_QWORD *)v11 = &off_2BEB790;
    *(_QWORD *)(v11 + 48) = v11 + 64;
    sub_2259A00((_QWORD *)(v11 + 48), v16, (__int64)&v16[v19]);
    *(_DWORD *)(v11 + 80) = v17;
    v12 = (char *)&unk_2BEB7A0;
LABEL_5:
    *(_QWORD *)v11 = v12 + 16;
    v20[0] = v11;
    result = (__int64)sub_2261BB0(v4 + 48, v20);
    if ( v20[0] )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20[0] + 8LL))(v20[0]);
    return result;
  }
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != 2 )
      return result;
    v9 = *(_BYTE **)(a3 + 48);
    v10 = *(_DWORD *)(a3 + 80);
    v18 = *(_QWORD *)(a3 + 56);
    v11 = operator new(0x58u);
    *(_DWORD *)(v11 + 8) = 2;
    *(_QWORD *)v11 = &off_2BEB750;
    *(_QWORD *)(v11 + 16) = v11 + 32;
    sub_2259A00((_QWORD *)(v11 + 16), v7, (__int64)&v7[v8]);
    *(_QWORD *)v11 = &off_2BEB790;
    *(_QWORD *)(v11 + 48) = v11 + 64;
    sub_2259A00((_QWORD *)(v11 + 48), v9, (__int64)&v9[v18]);
    *(_DWORD *)(v11 + 80) = v10;
    v12 = (char *)&unk_2BEB7C0;
    goto LABEL_5;
  }
  if ( v8 )
  {
    result = sub_2261BF0(a2, *(double **)(a3 + 16), *(_QWORD *)(a3 + 24), a4);
    v4 = result;
  }
  v13 = *(__int64 **)(a3 + 56);
  for ( i = *(__int64 **)(a3 + 48); v13 != i; result = sub_2262000(a1, a2, v15, v4) )
    v15 = *i++;
  return result;
}
