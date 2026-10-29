__int64 __fastcall sub_57810(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  size_t v5; // rdi
  __int64 v6; // r14
  _BYTE *v7; // rax
  _BYTE *v8; // r12

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = a2 + 1;
  v6 = v3 - v4;
  if ( (unsigned __int64)(a2 + 1) < 0x1E )
    v5 = 30;
  v7 = malloc(v5);
  if ( v7 )
  {
    v8 = v7;
    if ( v6 )
    {
      memcpy(v7, *(const void **)a1, v3 - v4);
      if ( !*(_BYTE *)(a1 + 24) )
        goto LABEL_6;
    }
    else if ( !*(_BYTE *)(a1 + 24) )
    {
LABEL_6:
      *(_QWORD *)a1 = v8;
      v8[v6] = 0;
      *(_QWORD *)(a1 + 8) = a2;
      *(_QWORD *)(a1 + 16) = a2 + v4 - v3;
      *(_BYTE *)(a1 + 24) = 1;
      return 1;
    }
    free(*(void **)a1);
    goto LABEL_6;
  }
  return 0;
}

