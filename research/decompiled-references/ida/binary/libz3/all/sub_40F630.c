__int64 __fastcall sub_40F630(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  char v6; // r15
  unsigned int v8; // r13d
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // r9d
  __int64 result; // rax
  __int64 v19; // r14
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // [rsp+0h] [rbp-38h]

  v6 = a3;
  v8 = *(_DWORD *)(a2 + 96);
  sub_407990((_QWORD *)a2, a2, a3, a4, a5, a6);
  v9 = *(_QWORD *)(a2 + 16);
  sub_408BB0(*(_QWORD *)(a1 + 16), a1, a2, v10, v11, v12);
  if ( v8 > 0xFFFE )
  {
    ++*(_DWORD *)(a1 + 332);
    sub_407990((_QWORD *)a2, a1, v13, v14, v15, v16);
    if ( *(_WORD *)(*(_QWORD *)(a2 + 16) + 4LL) != 2 )
      sub_428900(*(_QWORD *)(a1 + 120), v9, v25, v26, v27, v17, v28);
  }
  else
  {
    sub_407990((_QWORD *)a2, a1, v13, v14, v15, v16);
    if ( *(_WORD *)(*(_QWORD *)(a2 + 16) + 4LL) != 2 )
    {
      while ( 1 )
      {
        v24 = *(_DWORD *)(a1 + 208);
        if ( v8 < v24 )
          break;
        v23 = *(_QWORD *)(a1 + 120);
        *(_DWORD *)(a1 + 208) = v24 + 1;
        sub_428A80(v23);
      }
      sub_429BB0(*(_QWORD *)(a1 + 120), v9, v8);
    }
  }
  result = *(_QWORD *)(a1 + 56);
  if ( result )
  {
    v19 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v19 )
    {
      if ( v8 <= 0xFFFE )
        ++v8;
      v20 = 8 * v19;
      v21 = 0;
      while ( 1 )
      {
        v22 = *(_QWORD *)(result + v21);
        v21 += 8;
        result = sub_40F240(v22, a1, (_QWORD *)a2, v8, v6, v17);
        if ( v20 == v21 )
          break;
        result = *(_QWORD *)(a1 + 56);
      }
    }
  }
  return result;
}

