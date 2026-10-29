__int64 __fastcall sub_6462F0(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v6; // rdi
  int v7; // ecx
  __int64 v8; // rsi
  _DWORD *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // r13d
  unsigned int v12; // r13d
  __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // rdx
  __int64 result; // rax
  __int64 v17; // r13
  __int64 v18; // rsi
  unsigned int v19; // esi

  if ( *(_DWORD *)(a1 + 12) || *(_DWORD *)(a1 + 16) )
  {
    v6 = *(_DWORD **)a1;
    v7 = 0;
    v8 = *(unsigned int *)(a1 + 8);
    v9 = *(_DWORD **)a1;
    v10 = *(_QWORD *)a1 + 16 * v8;
    if ( *(_QWORD *)a1 == v10 )
      goto LABEL_19;
    do
    {
      while ( v9[1] )
      {
        v9[1] = 0;
        v9 += 4;
        if ( (_DWORD *)v10 == v9 )
          goto LABEL_8;
      }
      v9 += 4;
      ++v7;
    }
    while ( (_DWORD *)v10 != v9 );
LABEL_8:
    if ( (unsigned int)v8 <= 0x10 || 3 * (int)v8 >= (unsigned int)(4 * v7) )
      goto LABEL_19;
    if ( v6 )
    {
      sub_186B220(v6);
      v11 = *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = 0;
      v12 = v11 >> 1;
      *(_DWORD *)(a1 + 8) = v12;
      v13 = sub_186B270(16LL * v12);
      if ( !v12 )
      {
LABEL_18:
        *(_QWORD *)a1 = v13;
LABEL_19:
        *(_QWORD *)(a1 + 12) = 0;
        goto LABEL_20;
      }
      if ( v12 == 1 )
      {
        v15 = (_QWORD *)v13;
LABEL_17:
        *v15 = 0;
        goto LABEL_18;
      }
    }
    else
    {
      v19 = (unsigned int)v8 >> 1;
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = v19;
      v12 = v19;
      v13 = sub_186B270(16LL * v19);
    }
    v14 = (_QWORD *)v13;
    do
    {
      *v14 = 0;
      v14 += 4;
      *(v14 - 2) = 0;
    }
    while ( (_QWORD *)(v13 + 32LL * (v12 >> 1)) != v14 );
    if ( (v12 & 1) == 0 )
      goto LABEL_18;
    v15 = (_QWORD *)(v13 + 16LL * (v12 & 0x7FFFFFFE));
    goto LABEL_17;
  }
LABEL_20:
  sub_148BC40(a1, *(_QWORD *)(a2 + 40), 1);
  result = *(unsigned int *)(a2 + 56);
  if ( (_DWORD)result )
  {
    v17 = a2 + 8 * result;
    do
    {
      v18 = *(_QWORD *)(a2 + 80);
      a2 += 8;
      result = sub_148BC40(a1, v18 & 0xFFFFFFFFFFFFFFF8LL, a3);
    }
    while ( a2 != v17 );
  }
  return result;
}

