/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FEA0
// Address: 0x000000000009FEA0

//----- (000000000009FEA0) ----------------------------------------------------
__int64 __fastcall sub_9FEA0(__int64 a1)
{
  char *v2; // r15
  __int64 v3; // r12
  __int64 i; // rbx
  void *v5; // rdi
  void *v6; // rdi

  *(_QWORD *)(a1 + 488) = 0;
  sub_385C0((__int64 *)(a1 + 376), 0);
  sub_38B70((__int64 *)(a1 + 48), 0);
  if ( *(_QWORD *)(a1 + 80) )
  {
    v2 = *(char **)(a1 + 96);
    v3 = 8LL * *(_QWORD *)(a1 + 104);
    if ( v3 )
    {
      for ( i = 0; i != v3; i += 8 )
        qfree(*(void **)&v2[i]);
      v2 = *(char **)(a1 + 96);
    }
    if ( v2 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      qfree(v2);
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 112) = 0;
    }
    v5 = *(void **)(a1 + 72);
    if ( v5 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v5);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
  }
  v6 = *(void **)(a1 + 352);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 360) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 352) = 0;
    *(_QWORD *)(a1 + 368) = 0;
  }
  sub_38680(a1 + 328, *(_QWORD **)(a1 + 336));
  *(_QWORD *)(a1 + 328) = a1 + 336;
  *(_OWORD *)(a1 + 336) = 0;
  sub_38540(a1 + 504, *(_QWORD **)(a1 + 512));
  *(_QWORD *)(a1 + 504) = a1 + 512;
  *(_OWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 528) = 0;
  *(_BYTE *)(a1 + 733) = 0;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 600LL))(a1);
}
