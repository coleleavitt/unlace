void __fastcall sub_DFDFB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char *v3; // rbp
  __int64 v4; // r13
  char v5; // al
  void (__fastcall *v6)(__int64, __int64, char *, __int64); // r8
  size_t v7; // rdx
  void (__fastcall *v8)(__int64, __int64, __int64); // rax

  v2 = *(_QWORD *)(a2 + 32);
  if ( *(_QWORD *)(a2 + 8) )
  {
    v3 = (char *)malloc(*(unsigned int *)(v2 + 28) + 64LL);
    sub_DFA770((__int64)v3, (__int64 *)(a1 + 32), a2);
    v4 = *((_QWORD *)v3 + 7);
    memset(v3 + 64, 0, *(unsigned int *)(v4 + 28));
    v5 = *(_BYTE *)(a2 + 27);
    if ( v5 )
    {
      v6 = *(void (__fastcall **)(__int64, __int64, char *, __int64))(v2 + 80);
      if ( v6 )
      {
        v6(a2, a2 + *(unsigned int *)(*(_QWORD *)(a2 + 32) + 24LL) + 40, &v3[*(unsigned int *)(v4 + 24) + 64], v2);
        v7 = *(unsigned int *)(v2 + 24);
        if ( (_DWORD)v7 )
          memcpy(v3 + 64, (const void *)(a2 + 40), v7);
        v5 = *(_BYTE *)(a2 + 27);
      }
    }
    v3[51] = v5;
    *(_BYTE *)(a2 + 27) = 0;
  }
  else if ( *(_BYTE *)(a2 + 27) )
  {
    v8 = *(void (__fastcall **)(__int64, __int64, __int64))(v2 + 72);
    if ( v8 )
      v8(a2, a2 + *(unsigned int *)(v2 + 24) + 40, v2);
    *(_BYTE *)(a2 + 27) = 0;
  }
}

