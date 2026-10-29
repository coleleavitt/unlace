void __fastcall sub_DCADA0(__int64 a1)
{
  _DWORD *v2; // rdi
  int v3; // edx
  __int64 v4; // rsi
  __int64 v5; // rcx
  _DWORD *v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rdx
  unsigned int v11; // esi

  if ( *(_DWORD *)(a1 + 12) || *(_DWORD *)(a1 + 16) )
  {
    v2 = *(_DWORD **)a1;
    v3 = 0;
    v4 = *(unsigned int *)(a1 + 8);
    v5 = *(_QWORD *)a1 + 24 * v4;
    v6 = *(_DWORD **)a1;
    if ( *(_QWORD *)a1 == v5 )
      goto LABEL_15;
    do
    {
      while ( v6[1] )
      {
        v6[1] = 0;
        v6 += 6;
        if ( (_DWORD *)v5 == v6 )
          goto LABEL_8;
      }
      v6 += 6;
      ++v3;
    }
    while ( (_DWORD *)v5 != v6 );
LABEL_8:
    if ( (unsigned int)v4 <= 0x10 || 3 * (int)v4 >= (unsigned int)(4 * v3) )
      goto LABEL_15;
    if ( v2 )
    {
      sub_186B220(v2);
      v7 = *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = 0;
      v7 >>= 1;
      v8 = v7;
      *(_DWORD *)(a1 + 8) = v7;
      v9 = sub_186B270(24LL * v7);
      if ( !v7 )
      {
LABEL_14:
        *(_QWORD *)a1 = v9;
LABEL_15:
        *(_QWORD *)(a1 + 12) = 0;
        return;
      }
    }
    else
    {
      v11 = (unsigned int)v4 >> 1;
      *(_QWORD *)a1 = 0;
      v8 = v11;
      *(_DWORD *)(a1 + 8) = v11;
      v9 = sub_186B270(24LL * v11);
    }
    v10 = (_QWORD *)v9;
    do
    {
      *v10 = 0;
      v10 += 3;
      *(v10 - 2) = 0;
    }
    while ( v10 != (_QWORD *)(v9 + 24 * v8) );
    goto LABEL_14;
  }
}

