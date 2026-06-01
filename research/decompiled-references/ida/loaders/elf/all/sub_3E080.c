__int64 __fastcall sub_3E080(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rax

  v3 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 76) )
    goto LABEL_2;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 24) - v5;
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 < v6 )
  {
    v14 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 56) < v6 )
    {
      v15 = qvector_reserve(a1 + 40, v14, v6, 16);
      v7 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) = v15;
      v14 = v15;
    }
    memset((void *)(v14 + 16 * v7), 0, 16 * (v6 - v7));
    *(_QWORD *)(a1 + 48) = v6;
    v5 = *(_QWORD *)(a1 + 64);
  }
  else if ( v6 != v7 )
  {
    *(_QWORD *)(a1 + 48) = v6;
  }
  v8 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 72) = 0;
  if ( v8 && (v5 && !is_mul_ok(v8, v5) || !is_mul_ok(v6, v8)) )
    goto LABEL_23;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = qlseek(*(_QWORD *)(v9 + 472), 0, 1);
  v11 = *(_QWORD *)(v9 + 480);
  v12 = v10 - v11;
  if ( qlseek(*(_QWORD *)(v9 + 472), v11 + *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 32) * *(_QWORD *)(a1 + 64), 0) == -1 )
  {
    qlseek(*(_QWORD *)(v9 + 472), v12 + *(_QWORD *)(v9 + 480), 0);
LABEL_23:
    *(_DWORD *)(a1 + 76) = 0;
    return 0;
  }
  v13 = 0;
  while ( sub_3E020(a1, (_OWORD *)(*(_QWORD *)(a1 + 40) + 16 * v13)) )
  {
    if ( v6 == ++v13 )
      goto LABEL_16;
  }
  LODWORD(v6) = v13;
LABEL_16:
  qlseek(*(_QWORD *)(v9 + 472), v12 + *(_QWORD *)(v9 + 480), 0);
  *(_DWORD *)(a1 + 76) = v6;
  if ( !(_DWORD)v6 )
    return 0;
  *(_QWORD *)(a1 + 64) += (unsigned int)v6;
  v3 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v3 < (unsigned int)v6 )
  {
LABEL_2:
    *a2 = *(_QWORD *)(a1 + 40) + 16 * v3;
    ++*(_DWORD *)(a1 + 72);
    return 1;
  }
  return 0;
}

