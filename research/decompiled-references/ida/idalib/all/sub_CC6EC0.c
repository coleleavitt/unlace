__int64 __fastcall sub_CC6EC0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r8
  __int64 v6; // r13
  char v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = a2;
  v6 = *a1;
  v7 = *(_BYTE *)(*a1 + 664);
  *(_BYTE *)(*a1 + 664) = (*(_WORD *)a3 & 0x1FF) == 111;
  v8 = *a1;
  v9 = *(unsigned int *)(a2 + 8);
  v10 = *(unsigned int *)(*a1 + 608);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 612) )
  {
    sub_2237220(v8 + 600, v8 + 616, v10 + 1, 16);
    v10 = *(unsigned int *)(v8 + 608);
    v3 = a2;
  }
  v11 = (_QWORD *)(*(_QWORD *)(v8 + 600) + 16 * v10);
  v11[1] = v9;
  *v11 = 1;
  v12 = *a1;
  ++*(_DWORD *)(v8 + 608);
  v13 = *(_DWORD *)(v3 + 8);
  v19[0] = a3 | 4;
  if ( (unsigned __int8)sub_CA4B10(v12, v13, v19) && (unsigned __int8)sub_CC3960(*a1, a3, v14, v15, v16) )
  {
    v18 = *a1;
    v19[0] = a1[1] | 4;
    result = sub_CA2800(v18, v19);
  }
  else
  {
    result = 0;
  }
  --*(_DWORD *)(v8 + 608);
  *(_BYTE *)(v6 + 664) = v7;
  return result;
}
