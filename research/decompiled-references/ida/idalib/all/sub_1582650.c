unsigned __int64 __fastcall sub_1582650(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  void *v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 result; // rax
  int v7; // edx
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rbx
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // r14d
  __int64 v15; // rax
  _DWORD v16[12]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a2;
  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(void **)a1;
  v5 = v3 + 1;
  result = *(_QWORD *)a1 + 32 * v3;
  if ( v5 > *(unsigned int *)(a1 + 12) )
  {
    v8 = a1 + 16;
    if ( (unsigned __int64)v4 > a2 || result <= a2 )
    {
      v13 = sub_2237400(a1, a1 + 16, v5, 32, v16);
      sub_15825A0(a1, v13);
      v14 = v16[0];
      if ( *(_QWORD *)a1 != v8 )
        free(*(void **)a1);
      v15 = *(unsigned int *)(a1 + 8);
      *(_QWORD *)a1 = v13;
      *(_DWORD *)(a1 + 12) = v14;
      result = v13 + 32 * v15;
    }
    else
    {
      v9 = a2 - (_QWORD)v4;
      v10 = sub_2237400(a1, a1 + 16, v5, 32, v16);
      sub_15825A0(a1, v10);
      v11 = v16[0];
      if ( *(_QWORD *)a1 != v8 )
        free(*(void **)a1);
      v12 = *(unsigned int *)(a1 + 8);
      *(_QWORD *)a1 = v10;
      v2 = v10 + v9;
      *(_DWORD *)(a1 + 12) = v11;
      result = v10 + 32 * v12;
    }
  }
  v7 = *(_DWORD *)v2;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_DWORD *)result = v7;
  *(_DWORD *)(result + 24) = *(_DWORD *)(v2 + 24);
  *(_QWORD *)(result + 16) = *(_QWORD *)(v2 + 16);
  *(_QWORD *)(result + 8) = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = 0;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
