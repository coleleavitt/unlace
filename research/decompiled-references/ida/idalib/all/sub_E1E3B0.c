void __fastcall sub_E1E3B0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rdx
  void (__fastcall *v5)(__int64, __int64); // rax

  if ( !*(_QWORD *)(a1 + 8) && *(_BYTE *)(a1 + 26) )
  {
    if ( *(_BYTE *)(a1 + 27) )
    {
      v4 = *(_QWORD *)(a1 + 32);
      v5 = *(void (__fastcall **)(__int64, __int64))(v4 + 72);
      if ( v5 )
        v5(a1, a1 + *(unsigned int *)(v4 + 24) + 40);
      *(_BYTE *)(a1 + 27) = 0;
    }
    v1 = *(_QWORD *)(a1 - 16);
    v2 = *(_QWORD *)(a1 - 8);
    if ( v1 )
    {
      *(_QWORD *)(v1 + 16) = v2;
      v2 = *(_QWORD *)(a1 - 8);
    }
    if ( v2 )
      *(_QWORD *)(v2 + 8) = v1;
    v3 = *(_QWORD **)(a1 - 24);
    if ( a1 - 24 == *v3 )
      *v3 = v2;
    free((void *)(a1 - 24));
  }
}
