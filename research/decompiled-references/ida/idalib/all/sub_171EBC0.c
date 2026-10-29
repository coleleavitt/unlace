void __fastcall sub_171EBC0(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  unsigned int v4; // r12d
  size_t v5; // rax

  *(_BYTE *)(a1 + 24) = 0;
  if ( *(_BYTE *)(a2 + 24) )
  {
    v3 = (void *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    v4 = *(_DWORD *)(a2 + 8);
    *(_QWORD *)a1 = v3;
    if ( v4 && a1 != a2 )
    {
      v5 = 8;
      if ( v4 == 1 || (sub_2237220(a1, v3, v4, 8), v3 = *(void **)a1, (v5 = 8LL * *(unsigned int *)(a2 + 8)) != 0) )
        memcpy(v3, *(const void **)a2, v5);
      *(_DWORD *)(a1 + 8) = v4;
    }
    *(_BYTE *)(a1 + 24) = 1;
  }
}
