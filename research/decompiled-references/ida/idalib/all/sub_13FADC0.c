_QWORD *__fastcall sub_13FADC0(__int64 *a1, const void ***a2)
{
  __int64 v2; // r12
  const void *v3; // r13
  size_t v4; // rbx
  __int64 v5; // r15
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r9d
  __int64 *v13; // r8
  _QWORD *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // rax
  _QWORD *result; // rax
  unsigned int v20; // [rsp+Ch] [rbp-5Ch]
  __int64 *v21; // [rsp+10h] [rbp-58h]
  _QWORD *v22; // [rsp+18h] [rbp-50h]
  __int64 *v23[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *a1;
  v3 = **a2;
  v4 = (size_t)(*a2)[1];
  v5 = *a1 + 640;
  v6 = sub_2244B30(v3, v4);
  v7 = (unsigned int)sub_2244CB0(v5, v3, v4, v6);
  v9 = (__int64 *)(*(_QWORD *)(v2 + 640) + 8 * v7);
  if ( *v9 )
  {
    if ( *v9 != -8 )
    {
      sub_13FAD80(v23, v9, 0);
      v10 = v23[0];
      goto LABEL_8;
    }
    --*(_DWORD *)(v2 + 656);
  }
  v21 = v9;
  v20 = v7;
  v11 = sub_22300B0(v4 + 41, 8, v7, v8, v9, v7);
  v12 = v20;
  v13 = v21;
  v14 = (_QWORD *)v11;
  if ( v4 )
  {
    v22 = (_QWORD *)v11;
    memcpy((void *)(v11 + 40), v3, v4);
    v14 = v22;
    v13 = v21;
    v12 = v20;
  }
  *((_BYTE *)v14 + v4 + 40) = 0;
  v14[1] = v14 + 3;
  *v14 = v4;
  v14[2] = 0x100000000LL;
  *v13 = (__int64)v14;
  ++*(_DWORD *)(v2 + 652);
  v15 = sub_22450D0(v5, v12);
  sub_13FAD80(v23, (__int64 *)(*(_QWORD *)(v2 + 640) + 8LL * v15), 0);
  v10 = v23[0];
LABEL_8:
  v16 = *v10;
  v17 = a1[1];
  v18 = *(unsigned int *)(*v10 + 16);
  if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(v16 + 20) )
  {
    sub_2237220(v16 + 8, v16 + 24, v18 + 1, 16);
    v18 = *(unsigned int *)(v16 + 16);
  }
  result = (_QWORD *)(*(_QWORD *)(v16 + 8) + 16 * v18);
  *result = v17;
  result[1] = a2;
  ++*(_DWORD *)(v16 + 16);
  return result;
}
