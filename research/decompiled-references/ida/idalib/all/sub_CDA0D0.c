__int64 __fastcall sub_CDA0D0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r8
  __int64 v6; // r13
  char v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // rdi
  _QWORD v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = a2;
  v6 = *a1;
  v7 = *(_BYTE *)(*a1 + 1440);
  *(_BYTE *)(*a1 + 1440) = (*(_WORD *)a3 & 0x1FF) == 111;
  v8 = *a1;
  v9 = *(unsigned int *)(a2 + 8);
  v10 = *(unsigned int *)(*a1 + 1384);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 1388) )
  {
    sub_2237220(v8 + 1376, v8 + 1392, v10 + 1, 16);
    v10 = *(unsigned int *)(v8 + 1384);
    v3 = a2;
  }
  v11 = (_QWORD *)(*(_QWORD *)(v8 + 1376) + 16 * v10);
  v11[1] = v9;
  *v11 = 1;
  v12 = *a1;
  ++*(_DWORD *)(v8 + 1384);
  v13 = *(unsigned int *)(v3 + 8);
  v19[0] = a3 | 4;
  if ( (unsigned __int8)sub_D06280(v12, v13, v19) && (unsigned __int8)sub_CD6B90(*a1, a3, v14, v15, v16) )
  {
    v18 = *a1;
    v19[0] = a1[1] | 4;
    result = sub_D07CE0(v18, v19);
  }
  else
  {
    result = 0;
  }
  --*(_DWORD *)(v8 + 1384);
  *(_BYTE *)(v6 + 1440) = v7;
  return result;
}
