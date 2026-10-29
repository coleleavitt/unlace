__int64 __fastcall sub_C43140(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbp
  __int64 result; // rax
  char *v5; // rdi
  int v6; // ecx
  __int64 v7; // rsi
  char *v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // r12
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rdx
  unsigned int v14; // esi

  v2 = (_QWORD *)sub_186B270(8u);
  v3 = *(_QWORD **)(a1 + 736);
  *v2 = 0;
  *(_QWORD *)(a1 + 736) = v2;
  if ( v3 )
  {
    if ( *v3 )
      sub_186B220((void *)(*v3 - 8LL));
    sub_186B220(v3);
  }
  if ( *(_DWORD *)(a1 + 756) || (result = *(unsigned int *)(a1 + 760), (_DWORD)result) )
  {
    v5 = *(char **)(a1 + 744);
    v6 = 0;
    v7 = *(unsigned int *)(a1 + 752);
    v8 = &v5[24 * v7];
    result = *(_QWORD *)(a1 + 744);
    if ( v5 == v8 )
      goto LABEL_22;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 24;
        if ( v8 == (char *)result )
          goto LABEL_12;
      }
      result += 24;
      ++v6;
    }
    while ( v8 != (char *)result );
LABEL_12:
    if ( (unsigned int)v7 <= 0x10 )
      goto LABEL_22;
    result = (unsigned int)(3 * v7);
    if ( (unsigned int)result >= 4 * v6 )
      goto LABEL_22;
    if ( v5 )
    {
      sub_186B220(v5);
      v9 = *(_DWORD *)(a1 + 752);
      *(_QWORD *)(a1 + 744) = 0;
      v9 >>= 1;
      v10 = v9;
      *(_DWORD *)(a1 + 752) = v9;
      result = sub_186B270(24LL * v9);
      if ( !v9 )
      {
LABEL_21:
        *(_QWORD *)(a1 + 744) = result;
LABEL_22:
        *(_QWORD *)(a1 + 756) = 0;
        return result;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 744) = 0;
      v14 = (unsigned int)v7 >> 1;
      v10 = v14;
      *(_DWORD *)(a1 + 752) = v14;
      result = sub_186B270(24LL * v14);
    }
    v11 = (_QWORD *)(result + 24 * v10);
    v12 = (_QWORD *)result;
    do
    {
      *v12 = 0;
      v12 += 3;
      *(v12 - 2) = 0;
    }
    while ( v12 != v11 );
    v13 = result;
    if ( ((24 * (_BYTE)v10) & 8) == 0
      || (v13 = result + 24, *(_QWORD *)(result + 16) = 0, (_QWORD *)(result + 24) != v11) )
    {
      do
      {
        *(_QWORD *)(v13 + 16) = 0;
        v13 += 48;
        *(_QWORD *)(v13 - 8) = 0;
      }
      while ( (_QWORD *)v13 != v11 );
    }
    goto LABEL_21;
  }
  return result;
}

