__int64 __fastcall sub_5E1E00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 112);
  if ( *(_QWORD *)v1 )
  {
    qfree(*(void **)v1);
    **(_QWORD **)(a1 + 112) = 0;
    v1 = *(_QWORD *)(a1 + 112);
  }
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 120) = v1;
  *(_QWORD *)(v1 + 40) &= 0xFFFFFFFFFFFF0E1FLL;
  if ( *(_BYTE *)(a1 + 754) )
  {
    v2 = *(_QWORD *)(a1 + 112);
    v3 = *(unsigned int *)(a1 + 160);
    *(_BYTE *)(a1 + 754) = 0;
    *(_QWORD *)(v2 + 40) = v3;
  }
  return 0;
}
