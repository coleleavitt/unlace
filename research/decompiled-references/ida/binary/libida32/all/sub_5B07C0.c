__int64 __fastcall sub_5B07C0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int *v5; // rsi
  unsigned int v8; // r14d
  unsigned int *v9; // rax
  unsigned int *v11; // rax

  if ( !a2 )
    return 0;
  v5 = *(unsigned int **)a2;
  if ( v5 )
    sub_4EC940((__int64)(a1 + 203), v5);
  *(_QWORD *)a2 = a3;
  *(_DWORD *)(a2 + 8) = -1;
  *(_QWORD *)(a2 + 12) = 0xFFFFFFFF00000000LL;
  v8 = sub_5ACDD0(a1, a3, 1);
  if ( !(_BYTE)v8 )
  {
    *(_QWORD *)a2 = 0;
    v11 = sub_4EE820((__int64)(a1 + 194), a4);
    if ( v11 )
      *(_QWORD *)(a2 + 12) = *(_QWORD *)v11;
    goto LABEL_17;
  }
  if ( a4 == -1 )
  {
    a4 = *(_DWORD *)a3;
  }
  else if ( a4 < *(_DWORD *)a3 )
  {
    goto LABEL_7;
  }
  if ( a4 < *(_DWORD *)(a3 + 4) )
    goto LABEL_9;
LABEL_7:
  v9 = sub_5AE770(a1, a3, a4);
  if ( !v9 )
  {
LABEL_17:
    v8 = 0;
    goto LABEL_9;
  }
  *(_DWORD *)(a2 + 8) = ((__int64)v9 - *(_QWORD *)(a3 + 112)) >> 3;
LABEL_9:
  if ( *(_QWORD *)a2 )
    sub_4EE7B0((__int64)(a1 + 203), *(unsigned int **)a2);
  return v8;
}

