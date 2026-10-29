__int64 __fastcall sub_5692F0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  void (__fastcall ***v5)(_QWORD); // r13
  __int64 v6; // rdi
  unsigned int v7; // esi
  char *v8; // rbp
  __int64 v9; // rdx
  int v10; // ecx
  char *v11; // rbx
  char *v12; // r13
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rbp
  _QWORD *v16; // rdx
  unsigned int v17; // esi

  result = *(_QWORD *)(a1 + 160);
  v3 = result;
  v4 = result + 24LL * *(unsigned int *)(a1 + 168);
  if ( result == v4 )
  {
    if ( *(_DWORD *)(a1 + 172) )
      goto LABEL_30;
  }
  else
  {
    while ( *(_DWORD *)(v3 + 4) != 2 )
    {
      v3 += 24;
      if ( v4 == v3 )
        goto LABEL_36;
    }
    if ( v4 == v3 )
    {
LABEL_36:
      if ( !*(_DWORD *)(a1 + 172) )
        goto LABEL_14;
      v6 = *(unsigned int *)(a1 + 168);
      v8 = (char *)result;
      v7 = *(_DWORD *)(a1 + 168);
      v9 = result + 24 * v6;
      goto LABEL_16;
    }
    do
    {
      v5 = *(void (__fastcall ****)(_QWORD))(v3 + 16);
      if ( v5 )
      {
        (**v5)(*(_QWORD *)(v3 + 16));
        sub_186B220(v5);
      }
      result = v3 + 24;
      if ( v4 == v3 + 24 )
        break;
      while ( 1 )
      {
        v3 = result;
        if ( *(_DWORD *)(result + 4) == 2 )
          break;
        result += 24;
        if ( v4 == result )
          goto LABEL_13;
      }
    }
    while ( v4 != result );
LABEL_13:
    if ( *(_DWORD *)(a1 + 172) )
      goto LABEL_15;
  }
LABEL_14:
  if ( !*(_DWORD *)(a1 + 176) )
    return result;
LABEL_15:
  v6 = *(unsigned int *)(a1 + 168);
  result = *(_QWORD *)(a1 + 160);
  v7 = *(_DWORD *)(a1 + 168);
  v8 = (char *)result;
  v9 = result + 24 * v6;
  if ( result != v9 )
  {
LABEL_16:
    v10 = 0;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 24;
        if ( result == v9 )
          goto LABEL_20;
      }
      result += 24;
      ++v10;
    }
    while ( result != v9 );
LABEL_20:
    if ( v7 <= 0x10 )
      goto LABEL_30;
    result = 3 * v7;
    if ( (unsigned int)result >= 4 * v10 )
      goto LABEL_30;
    if ( v8 )
    {
      v11 = v8;
      v12 = &v8[24 * v6];
      do
      {
        while ( 1 )
        {
          v13 = *((_QWORD *)v11 + 1);
          if ( !v13 )
            break;
          v11 += 24;
          sub_186B220((void *)(v13 - 8));
          if ( v12 == v11 )
            goto LABEL_26;
        }
        v11 += 24;
      }
      while ( v12 != v11 );
LABEL_26:
      sub_186B220(v8);
      v14 = *(_DWORD *)(a1 + 168);
      *(_QWORD *)(a1 + 160) = 0;
      v14 >>= 1;
      v15 = v14;
      *(_DWORD *)(a1 + 168) = v14;
      result = sub_186B270(24LL * v14);
      if ( !v14 )
        goto LABEL_29;
    }
    else
    {
      *(_QWORD *)(a1 + 160) = 0;
      v17 = v7 >> 1;
      v15 = v17;
      *(_DWORD *)(a1 + 168) = v17;
      result = sub_186B270(24LL * v17);
    }
    v16 = (_QWORD *)result;
    do
    {
      *v16 = 0;
      v16 += 3;
      *(v16 - 2) = 0;
    }
    while ( v16 != (_QWORD *)(result + 24 * v15) );
LABEL_29:
    *(_QWORD *)(a1 + 160) = result;
  }
LABEL_30:
  *(_QWORD *)(a1 + 172) = 0;
  return result;
}

