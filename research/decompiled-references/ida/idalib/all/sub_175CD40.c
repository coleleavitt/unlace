_QWORD *__fastcall sub_175CD40(__int64 **a1, int a2, int a3, double a4)
{
  __int64 *v6; // r13
  __int64 v7; // rdi
  unsigned __int8 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 *v12; // rdi
  _BOOL4 v13; // r15d
  unsigned __int64 v14; // r13
  int v15; // eax
  _QWORD *result; // rax
  __int64 *v17; // rbx
  unsigned __int64 v18; // rbp
  __int64 v19; // rcx
  unsigned __int64 *v20; // rcx
  __int64 *v21; // rbx
  __int64 v22; // rax
  _QWORD *v23; // [rsp+8h] [rbp-50h]
  unsigned __int64 v24[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = *a1;
  v7 = *a1[1];
  v8 = ((*(_BYTE *)(v7 + 96) >> 5) & 3) == 1;
  v9 = sub_B73640(v7);
  v10 = sub_175C980(v6, v9, v8, a4);
  if ( v10 == 1 )
  {
    v21 = a1[3];
    v22 = *((unsigned int *)v21 + 4);
    if ( v22 + 1 > (unsigned __int64)*((unsigned int *)v21 + 5) )
    {
      sub_2237220(v21 + 1, v21 + 3, v22 + 1, 16);
      v22 = *((unsigned int *)v21 + 4);
    }
    result = (_QWORD *)(v21[1] + 16 * v22);
    *result = 1;
    result[1] = 0;
    ++*((_DWORD *)v21 + 4);
  }
  else
  {
    v24[0] = v10 & 0xFFFFFFFFFFFFFFFELL;
    v11 = **a1;
    v12 = (__int64 *)*a1[2];
    v13 = (*(_BYTE *)((*v12 & 0xFFFFFFFFFFFFFFF8LL) + 96) & 0x60) != 0;
    v14 = *(_QWORD *)(*a1[1] + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(*a1[1] + 40) & 7) != 0 )
      LODWORD(v14) = 0;
    v15 = sub_C94E40(v12);
    result = (_QWORD *)sub_1A2D1F0(v11, *(_DWORD *)(*a1[2] + 8), v15 == 3, a2, a3, v14, v13, (__int64)v24);
    v17 = a1[3];
    v18 = v24[0];
    v19 = *((unsigned int *)v17 + 4);
    if ( v19 + 1 > (unsigned __int64)*((unsigned int *)v17 + 5) )
    {
      v23 = result;
      sub_2237220(v17 + 1, v17 + 3, v19 + 1, 16);
      v19 = *((unsigned int *)v17 + 4);
      result = v23;
    }
    v20 = (unsigned __int64 *)(v17[1] + 16 * v19);
    *v20 = v18;
    v20[1] = (unsigned __int64)result;
    ++*((_DWORD *)v17 + 4);
  }
  return result;
}
