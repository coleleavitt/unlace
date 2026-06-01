void __fastcall sub_D9EA60(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v4; // rcx
  double v5; // xmm0_8
  __int64 v6; // rsi
  double v7; // xmm1_8
  unsigned int v8; // eax
  unsigned int v9; // edi
  int v10; // edi
  double v11; // xmm0_8
  double v12; // xmm1_8
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  double v17; // xmm1_8
  unsigned int v18; // eax
  unsigned int v19; // edi
  int v20; // edi
  double v21; // xmm0_8
  double v22; // xmm1_8
  _QWORD *v23; // rax

  v2 = *(_QWORD **)a1;
  v4 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 == v4 )
  {
LABEL_33:
    v5 = 0.0;
  }
  else
  {
    while ( *v2 <= 1u )
    {
      v2 += 2;
      if ( (_QWORD *)v4 == v2 )
        goto LABEL_33;
    }
    v5 = 0.0;
    if ( (_QWORD *)v4 != v2 )
    {
      do
      {
        v6 = v2[1];
        v7 = INFINITY;
        v8 = *(_DWORD *)(v6 + 36);
        if ( (v8 & 0x10000) == 0 )
        {
          v9 = v8 >> 1;
          if ( (v8 & 1) != 0 )
            v10 = v8 * v9;
          else
            v10 = (v8 - 1) * v9;
          v7 = (double)v10;
        }
        v11 = v5 + v7;
        v12 = (double)(int)(*(_DWORD *)(v6 + 12) * v8);
        v13 = v2 + 2;
        v5 = v11 + v12;
        if ( (_QWORD *)v4 == v2 + 2 )
          break;
        while ( 1 )
        {
          v2 = v13;
          if ( *v13 > 1u )
            break;
          v13 += 2;
          if ( (_QWORD *)v4 == v13 )
            goto LABEL_15;
        }
      }
      while ( (_QWORD *)v4 != v13 );
    }
  }
LABEL_15:
  v14 = *(_QWORD **)a2;
  v15 = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 != v15 )
  {
    while ( *v14 <= 1u )
    {
      v14 += 2;
      if ( (_QWORD *)v15 == v14 )
        return;
    }
    if ( (_QWORD *)v15 != v14 )
    {
      do
      {
        v16 = v14[1];
        v17 = INFINITY;
        v18 = *(_DWORD *)(v16 + 36);
        if ( (v18 & 0x10000) == 0 )
        {
          v19 = v18 >> 1;
          if ( (v18 & 1) != 0 )
            v20 = v18 * v19;
          else
            v20 = (v18 - 1) * v19;
          v17 = (double)v20;
        }
        v21 = v5 + v17;
        v22 = (double)(int)(*(_DWORD *)(v16 + 12) * v18);
        v23 = v14 + 2;
        v5 = v21 + v22;
        if ( (_QWORD *)v15 == v14 + 2 )
          break;
        while ( 1 )
        {
          v14 = v23;
          if ( *v23 > 1u )
            break;
          v23 += 2;
          if ( (_QWORD *)v15 == v23 )
            return;
        }
      }
      while ( (_QWORD *)v15 != v23 );
    }
  }
}

