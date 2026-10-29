__int64 __fastcall sub_8E1A60(__int64 a1)
{
  char *v2; // rdi
  int v3; // ecx
  unsigned int v4; // esi
  char *v5; // rax
  char *v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // r12
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  __int64 result; // rax
  unsigned int v15; // esi

  if ( *(_DWORD *)(a1 + 36) || *(_DWORD *)(a1 + 40) )
  {
    v2 = *(char **)(a1 + 24);
    v3 = 0;
    v4 = *(_DWORD *)(a1 + 32);
    v5 = v2;
    v6 = &v2[48 * v4];
    if ( v2 == v6 )
      goto LABEL_21;
    do
    {
      while ( *(_QWORD *)v5 )
      {
        *(_QWORD *)v5 = 0;
        v5 += 48;
        if ( v6 == v5 )
          goto LABEL_8;
      }
      v5 += 48;
      ++v3;
    }
    while ( v6 != v5 );
LABEL_8:
    if ( v4 <= 0x10 || 3 * v4 >= 4 * v3 )
      goto LABEL_21;
    if ( v2 )
    {
      sub_186B220(v2);
      v7 = *(_DWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 24) = 0;
      v7 >>= 1;
      v8 = v7;
      *(_DWORD *)(a1 + 32) = v7;
      v9 = (_QWORD *)sub_186B270(48LL * v7);
      if ( !v7 )
      {
LABEL_20:
        *(_QWORD *)(a1 + 24) = v9;
LABEL_21:
        *(_QWORD *)(a1 + 36) = 0;
        goto LABEL_22;
      }
    }
    else
    {
      v15 = v4 >> 1;
      *(_QWORD *)(a1 + 24) = 0;
      v8 = v15;
      *(_DWORD *)(a1 + 32) = v15;
      v9 = (_QWORD *)sub_186B270(48LL * v15);
    }
    v10 = v9;
    v11 = &v9[6 * v8];
    if ( ((48 * (_DWORD)v8) & 0x10) == 0 || (v10 = v9 + 6, *v9 = 0, v11 != v9 + 6) )
    {
      do
      {
        *v10 = 0;
        v10 += 12;
        *(v10 - 6) = 0;
      }
      while ( v11 != v10 );
    }
    v12 = v9;
    if ( ((48 * (_BYTE)v8) & 0x10) == 0 || (v12 = v9 + 6, v9[1] = 0, v11 != v9 + 6) )
    {
      do
      {
        v12[1] = 0;
        v12 += 12;
        *(v12 - 5) = 0;
      }
      while ( v11 != v12 );
    }
    v13 = v9;
    do
    {
      v13[4] = 0;
      v13 += 6;
      *((_OWORD *)v13 - 2) = 0;
      *((_DWORD *)v13 - 2) = 0;
    }
    while ( v11 != v13 );
    goto LABEL_20;
  }
LABEL_22:
  result = *(_QWORD *)(a1 + 48);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  *(_DWORD *)a1 = 0;
  return result;
}

