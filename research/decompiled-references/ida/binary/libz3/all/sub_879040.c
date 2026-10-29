__int64 __fastcall sub_879040(__int64 a1)
{
  __int64 result; // rax
  char *v3; // rdi
  int v4; // ecx
  __int64 v5; // rsi
  char *v6; // rdx
  unsigned int v7; // ebp
  unsigned int v8; // ebp
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx
  unsigned int v11; // esi

  for ( result = *(_QWORD *)(a1 + 32); result; result = *(_QWORD *)(a1 + 32) )
    sub_878D20(a1, *(_QWORD **)(result + 8));
  if ( *(_DWORD *)(a1 + 20) || *(_DWORD *)(a1 + 24) )
  {
    v3 = *(char **)(a1 + 8);
    v4 = 0;
    v5 = *(unsigned int *)(a1 + 16);
    result = (__int64)v3;
    v6 = &v3[16 * v5];
    if ( v3 == v6 )
      goto LABEL_21;
    do
    {
      while ( *(_DWORD *)(result + 4) )
      {
        *(_DWORD *)(result + 4) = 0;
        result += 16;
        if ( v6 == (char *)result )
          goto LABEL_10;
      }
      result += 16;
      ++v4;
    }
    while ( v6 != (char *)result );
LABEL_10:
    if ( (unsigned int)v5 <= 0x10 )
      goto LABEL_21;
    result = (unsigned int)(3 * v5);
    if ( (unsigned int)result >= 4 * v4 )
      goto LABEL_21;
    if ( v3 )
    {
      sub_186B220(v3);
      v7 = *(_DWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v8 = v7 >> 1;
      *(_DWORD *)(a1 + 16) = v8;
      result = sub_186B270(16LL * v8);
      if ( !v8 )
      {
LABEL_20:
        *(_QWORD *)(a1 + 8) = result;
LABEL_21:
        *(_QWORD *)(a1 + 20) = 0;
        goto LABEL_22;
      }
      if ( v8 == 1 )
      {
        v10 = (_QWORD *)result;
LABEL_19:
        *v10 = 0;
        goto LABEL_20;
      }
    }
    else
    {
      v11 = (unsigned int)v5 >> 1;
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 16) = v11;
      v8 = v11;
      result = sub_186B270(16LL * v11);
    }
    v9 = (_QWORD *)result;
    do
    {
      *v9 = 0;
      v9 += 4;
      *(v9 - 2) = 0;
    }
    while ( v9 != (_QWORD *)(result + 32LL * (v8 >> 1)) );
    if ( (v8 & 1) == 0 )
      goto LABEL_20;
    v10 = (_QWORD *)(result + 16LL * (v8 & 0x7FFFFFFE));
    goto LABEL_19;
  }
LABEL_22:
  *(_QWORD *)(a1 + 32) = 0;
  return result;
}

