__int64 __fastcall sub_4B1E40(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  int v4; // ecx
  __int64 v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 result; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  if ( !*(_DWORD *)(a1 + 44) && !*(_DWORD *)(a1 + 48) )
    goto LABEL_23;
  v3 = *(_QWORD **)(a1 + 32);
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 40);
  v6 = v3;
  v7 = &v3[4 * v5];
  if ( v3 != v7 )
  {
    do
    {
      while ( *v6 )
      {
        *v6 = 0;
        v6 += 4;
        if ( v7 == v6 )
          goto LABEL_10;
      }
      v6 += 4;
      ++v4;
    }
    while ( v7 != v6 );
LABEL_10:
    if ( (unsigned int)v5 > 0x10 && 3 * (int)v5 < (unsigned int)(4 * v4) )
    {
      if ( v3 )
      {
        sub_186B220(v3);
        v8 = *(_DWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 32) = 0;
        v9 = v8 >> 1;
        *(_DWORD *)(a1 + 40) = v9;
        v10 = sub_186B270(32LL * v9);
        if ( !v9 )
          goto LABEL_21;
        if ( v9 - 1 <= 2 )
        {
          v12 = v9;
          v13 = v10;
          goto LABEL_18;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 32) = 0;
        v9 = (unsigned int)v5 >> 1;
        *(_DWORD *)(a1 + 40) = (unsigned int)v5 >> 1;
        v10 = sub_186B270(32LL * ((unsigned int)v5 >> 1));
      }
      v11 = v10;
      do
      {
        *(_DWORD *)(v11 + 24) = 0;
        v11 += 128;
        *(_OWORD *)(v11 - 128) = 0;
        *(_OWORD *)(v11 - 96) = 0;
        *(_OWORD *)(v11 - 64) = 0;
        *(_OWORD *)(v11 - 32) = 0;
        *(_DWORD *)(v11 - 72) = 0;
        *(_DWORD *)(v11 - 40) = 0;
        *(_DWORD *)(v11 - 8) = 0;
      }
      while ( v11 != v10 + ((unsigned __int64)(v9 >> 2) << 7) );
      v12 = v9 & 3;
      v13 = v10 + 32LL * (v9 & 0x7FFFFFFC);
      if ( (v9 & 3) != 0 )
      {
LABEL_18:
        *(_DWORD *)(v13 + 24) = 0;
        *(_OWORD *)v13 = 0;
        if ( v12 != 1 )
        {
          *(_DWORD *)(v13 + 56) = 0;
          *(_OWORD *)(v13 + 32) = 0;
          if ( v12 != 2 )
          {
            *(_DWORD *)(v13 + 88) = 0;
            *(_OWORD *)(v13 + 64) = 0;
          }
        }
      }
LABEL_21:
      *(_QWORD *)(a1 + 32) = v10;
    }
  }
  *(_QWORD *)(a1 + 44) = 0;
LABEL_23:
  result = *(_QWORD *)(a1 + 24);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v15 = *(_QWORD **)(a1 + 16);
  if ( v15 )
  {
    result = *((unsigned int *)v15 - 1);
    v16 = &v15[result];
    if ( v15 >= v16 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = *(_QWORD *)(a1 + 8);
          if ( (*(_DWORD *)(v17 + 8))-- == 1 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_32;
      }
      result = sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( v15 < v16 );
LABEL_32:
    v15 = *(_QWORD **)(a1 + 16);
    if ( v15 )
LABEL_33:
      *((_DWORD *)v15 - 1) = 0;
  }
  return result;
}

