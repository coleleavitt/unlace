void __fastcall sub_1564F70(__int64 a1)
{
  __int64 v1; // rax
  void **v2; // rbp
  __int64 v3; // rax
  void **v4; // rdi

  sub_17E2560(*(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL));
  v1 = *(_QWORD *)(a1 + 96);
  v2 = *(void ***)(v1 + 608);
  *(_QWORD *)(v1 + 608) = *v2;
  v3 = *(unsigned int *)(a1 + 128);
  if ( (_DWORD)v3 == 16 )
  {
    if ( !*((_BYTE *)v2 + 452) )
      free(v2[54]);
    v4 = (void **)v2[46];
    if ( v4 != v2 + 48 )
      free(v4);
    if ( !*((_BYTE *)v2 + 100) )
      free(v2[10]);
    operator delete(v2, 0x208u);
  }
  else
  {
    *(_DWORD *)(a1 + 128) = v3 + 1;
    *(_QWORD *)(a1 + 8 * v3 + 136) = v2;
  }
}
