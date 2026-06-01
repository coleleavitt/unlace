__int16 __fastcall sub_37D200(__int64 a1)
{
  const char *v1; // r13
  char *v2; // rbp
  __int64 v3; // r12
  signed __int64 v4; // r15
  __int64 v5; // rsi
  signed __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax

  v1 = *(const char **)(a1 + 184);
  v2 = strchr(v1, 10);
  if ( !v2 )
    v2 = (char *)&v1[strlen(v1)];
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2 - v1;
  if ( v3 )
  {
    --v3;
    v4 = v2 - v1 + v3;
  }
  v5 = *(_QWORD *)(a1 + 24);
  v6 = v4 + 1;
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve(a1 + 24, v5, v6, 1);
    v6 = v4 + 1;
    *(_QWORD *)(a1 + 24) = v8;
    v5 = v8;
  }
  *(_QWORD *)(a1 + 32) = v6;
  *(_BYTE *)(v5 + v4) = 0;
  LOWORD(v7) = (unsigned __int16)memmove((void *)(v3 + *(_QWORD *)(a1 + 24)), v1, v2 - v1);
  if ( *v2 )
  {
    ++v2;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 144);
    BYTE1(v7) = BYTE1(v7) & 0xFC | 2;
    *(_DWORD *)(a1 + 144) = v7;
  }
  *(_QWORD *)(a1 + 184) = v2;
  return v7;
}

