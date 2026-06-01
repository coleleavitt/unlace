__int64 __fastcall sub_1EA9070(__int64 *a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r9
  void *v4; // rcx
  __int64 v5; // r8
  int v6; // esi
  unsigned int v7; // edx
  __int64 v8; // rdi
  __int64 result; // rax
  int i; // eax
  __int64 v11; // rdi

  v2 = *((_DWORD *)a1 + 4);
  v3 = *a1;
  v4 = (void *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
  v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v2 )
    return 0;
  v6 = v2 - 1;
  v7 = (v2 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
  v8 = *(_QWORD *)(v3 + 8LL * v7);
  if ( v5 == v8 )
  {
LABEL_3:
    operator delete(v4, 0x38u);
    return 1;
  }
  result = 0;
  if ( v8 != -4096 )
  {
    for ( i = 1; ; ++i )
    {
      v7 = v6 & (i + v7);
      v11 = *(_QWORD *)(v3 + 8LL * v7);
      if ( v5 == v11 )
        break;
      if ( v11 == -4096 )
        return 0;
    }
    goto LABEL_3;
  }
  return result;
}
