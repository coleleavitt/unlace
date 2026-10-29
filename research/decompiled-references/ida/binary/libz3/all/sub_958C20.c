__int64 __fastcall sub_958C20(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  __int64 v4; // rsi
  char *v5; // rdx
  char *v6; // rax
  unsigned int v7; // ebp
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // edx
  char *v15; // rdi
  int v16; // ecx
  __int64 v17; // rsi
  char *v18; // rax
  char *v19; // rdx
  unsigned int v20; // ebp
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 result; // rax
  unsigned int v25; // esi
  unsigned int v26; // esi

  if ( *(_DWORD *)(a1 + 36) || *(_DWORD *)(a1 + 40) )
  {
    v2 = *(char **)(a1 + 24);
    v3 = 0;
    v4 = *(unsigned int *)(a1 + 32);
    v5 = &v2[24 * v4];
    v6 = *(char **)(a1 + 24);
    if ( v2 == v5 )
      goto LABEL_20;
    do
    {
      while ( *(_QWORD *)v6 )
      {
        *(_QWORD *)v6 = 0;
        v6 += 24;
        if ( v5 == v6 )
          goto LABEL_8;
      }
      v6 += 24;
      ++v3;
    }
    while ( v5 != v6 );
LABEL_8:
    if ( (unsigned int)v4 <= 0x10 || 3 * (int)v4 >= (unsigned int)(4 * v3) )
      goto LABEL_20;
    if ( v2 )
    {
      sub_186B220(v2);
      v7 = *(_DWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 24) = 0;
      v8 = v7 >> 1;
      *(_DWORD *)(a1 + 32) = v8;
      v9 = sub_186B270(24LL * v8);
      if ( !v8 )
        goto LABEL_19;
      if ( v8 - 1 <= 2 )
      {
        v11 = v8;
        v12 = v9;
        goto LABEL_16;
      }
    }
    else
    {
      v26 = (unsigned int)v4 >> 1;
      *(_QWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 32) = v26;
      v8 = v26;
      v9 = sub_186B270(24LL * v26);
    }
    v10 = v9;
    do
    {
      *(_DWORD *)(v10 + 20) = 0;
      v10 += 96;
      *(_OWORD *)(v10 - 96) = 0;
      *(_OWORD *)(v10 - 72) = 0;
      *(_OWORD *)(v10 - 48) = 0;
      *(_OWORD *)(v10 - 24) = 0;
      *(_DWORD *)(v10 - 52) = 0;
      *(_DWORD *)(v10 - 28) = 0;
      *(_DWORD *)(v10 - 4) = 0;
    }
    while ( v10 != v9 + 96LL * (v8 >> 2) );
    v11 = v8 & 3;
    v12 = v9 + 24LL * (v8 & 0x7FFFFFFC);
    if ( (v8 & 3) != 0 )
    {
LABEL_16:
      *(_QWORD *)(v12 + 16) = 0;
      *(_OWORD *)v12 = 0;
      if ( v11 != 1 )
      {
        *(_QWORD *)(v12 + 40) = 0;
        *(_OWORD *)(v12 + 24) = 0;
        if ( v11 != 2 )
        {
          *(_QWORD *)(v12 + 64) = 0;
          *(_OWORD *)(v12 + 48) = 0;
        }
      }
    }
LABEL_19:
    *(_QWORD *)(a1 + 24) = v9;
LABEL_20:
    *(_QWORD *)(a1 + 36) = 0;
  }
  sub_957CC0(a1);
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  v14 = *(_DWORD *)(a1 + 140);
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  if ( v14 || *(_DWORD *)(a1 + 144) )
  {
    v15 = *(char **)(a1 + 128);
    v16 = 0;
    v17 = *(unsigned int *)(a1 + 136);
    v18 = v15;
    v19 = &v15[32 * v17];
    if ( v15 == v19 )
      goto LABEL_37;
    do
    {
      while ( *(_QWORD *)v18 )
      {
        *(_QWORD *)v18 = 0;
        v18 += 32;
        if ( v19 == v18 )
          goto LABEL_30;
      }
      v18 += 32;
      ++v16;
    }
    while ( v19 != v18 );
LABEL_30:
    if ( (unsigned int)v17 <= 0x10 || 3 * (int)v17 >= (unsigned int)(4 * v16) )
      goto LABEL_37;
    if ( v15 )
    {
      sub_186B220(v15);
      v20 = *(_DWORD *)(a1 + 136);
      *(_QWORD *)(a1 + 128) = 0;
      v20 >>= 1;
      v21 = v20;
      *(_DWORD *)(a1 + 136) = v20;
      v22 = sub_186B270(32LL * v20);
      if ( !v20 )
      {
LABEL_36:
        *(_QWORD *)(a1 + 128) = v22;
LABEL_37:
        *(_QWORD *)(a1 + 140) = 0;
        goto LABEL_38;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 128) = 0;
      v25 = (unsigned int)v17 >> 1;
      v21 = v25;
      *(_DWORD *)(a1 + 136) = v25;
      v22 = sub_186B270(32LL * v25);
    }
    v23 = v22;
    do
    {
      *(_QWORD *)(v23 + 16) = 0;
      v23 += 32;
      *(_OWORD *)(v23 - 32) = 0;
      *(_DWORD *)(v23 - 4) = 0;
    }
    while ( v23 != v22 + 32 * v21 );
    goto LABEL_36;
  }
LABEL_38:
  sub_958AA0(a1);
  result = *(_QWORD *)(a1 + 160);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  return result;
}

