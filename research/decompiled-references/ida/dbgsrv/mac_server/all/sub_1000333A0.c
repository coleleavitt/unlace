/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000333A0
// Address: 0x00000001000333A0

//----- (00000001000333A0) ----------------------------------------------------
__int64 __fastcall sub_1000333A0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // r15
  char *v5; // rax
  __int64 v6; // rcx
  char *v7; // rax
  __int64 v8; // rcx
  int v10; // [rsp+Ch] [rbp-54h]

  if ( *(_QWORD *)a1 > a2 || 32LL * *(_QWORD *)(a1 + 16) + *(_QWORD *)a1 <= a2 )
  {
    sub_1000360E0((char **)a1, *(_QWORD *)(a1 + 8) + 1LL);
    v7 = *(char **)a1;
    v8 = 32LL * *(_QWORD *)(a1 + 8);
    *(_DWORD *)&v7[v8] = *(_DWORD *)a2;
    *(_QWORD *)&v7[v8 + 8] = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)&v7[v8 + 16] = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)&v7[v8 + 24] = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0;
  }
  else
  {
    v10 = *(_DWORD *)a2;
    v2 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0;
    v3 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    v4 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0;
    sub_1000360E0((char **)a1, *(_QWORD *)(a1 + 8) + 1LL);
    v5 = *(char **)a1;
    v6 = 32LL * *(_QWORD *)(a1 + 8);
    *(_DWORD *)&v5[v6] = v10;
    *(_QWORD *)&v5[v6 + 8] = v2;
    *(_QWORD *)&v5[v6 + 16] = v3;
    *(_QWORD *)&v5[v6 + 24] = v4;
  }
  ++*(_QWORD *)(a1 + 8);
  return __stack_chk_guard;
}
