__int64 __fastcall sub_3D7180(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r15
  const char *v8; // rdi
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r12

  v4 = *(_QWORD *)(a1 + 48);
  v5 = v4 + 32LL * *(_QWORD *)(a1 + 56);
  if ( v5 != v4 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      v10 = *(_QWORD *)(v7 + 8);
      v11 = v7;
      if ( !v6 )
        break;
      v8 = haystack;
      v9 = *(const char **)a2;
      if ( v10 )
        goto LABEL_10;
LABEL_4:
      if ( !strcmp(v8, v9) || *(_DWORD *)(v7 + 24) == a3 )
        return v11;
      v7 += 32;
      if ( v5 == v7 )
        return 0;
    }
    if ( !v10 )
      return v11;
    v9 = haystack;
LABEL_10:
    v8 = *(const char **)v7;
    goto LABEL_4;
  }
  return 0;
}

