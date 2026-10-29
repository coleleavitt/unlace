/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42DF70
// Address: 0x000000000042DF70

//----- (000000000042DF70) ----------------------------------------------------
__int64 __fastcall sub_42DF70(__int64 a1)
{
  char *v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r12
  char *v6; // rsi
  int v7; // edx
  __int64 v8; // rax
  char *v10; // rax

  v1 = *(char **)(a1 + 392);
  v2 = *(_QWORD *)(a1 + 368) + 16LL * *(_QWORD *)(a1 + 376) - 16;
  v3 = *(_QWORD *)(a1 + 400);
  v4 = *(_QWORD *)v2;
  v5 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(a1 + 408) < (unsigned __int64)(v3 + 1) )
  {
    v10 = (char *)sub_481540(a1 + 392, v1, v3 + 1, 0x10u);
    *(_QWORD *)(a1 + 392) = v10;
    v1 = v10;
    v3 = *(_QWORD *)(a1 + 400);
  }
  v6 = &v1[16 * v3];
  *(_QWORD *)v6 = v4;
  *((_QWORD *)v6 + 1) = v5;
  v7 = *(_DWORD *)(a1 + 208);
  ++*(_QWORD *)(a1 + 400);
  sub_438BA0(*(__int64 **)(a1 + 200), (unsigned int)(*(_DWORD *)(v2 + 4) - 4), v7 - *(_DWORD *)(v2 + 4));
  v8 = *(_QWORD *)(a1 + 376);
  if ( v8 )
    *(_QWORD *)(a1 + 376) = v8 - 1;
  return 0;
}
