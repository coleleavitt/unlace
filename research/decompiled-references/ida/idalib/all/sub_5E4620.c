__int64 __fastcall sub_5E4620(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int16 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int16 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v15; // rax

  v1 = *(_QWORD *)(a1 + 400);
  v3 = *(_QWORD *)(a1 + 392);
  v4 = v3 + 16 * v1 - 16;
  v5 = *(_QWORD *)v4;
  v6 = *(_WORD *)(v4 + 8);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 400) = v1 - 1;
    v7 = v3 + 16 * (v1 - 1) - 16;
    v8 = *(_QWORD *)v7;
    v9 = *(_WORD *)(v7 + 8);
    if ( v1 == 1 )
    {
      v11 = *(_QWORD *)v7;
    }
    else
    {
      v10 = v1 - 2;
      *(_QWORD *)(a1 + 400) = v1 - 2;
      v11 = *(_QWORD *)(v3 + 16 * (v1 - 2) - 16);
      if ( v1 != 2 )
      {
        v12 = v1 - 3;
        *(_QWORD *)(a1 + 400) = v12;
        goto LABEL_5;
      }
    }
  }
  else
  {
    v8 = *(_QWORD *)v4;
    v11 = *(_QWORD *)v4;
    v9 = *(_WORD *)(v4 + 8);
  }
  v10 = 1;
  v12 = 0;
LABEL_5:
  --*(_DWORD *)(a1 + 740);
  if ( v11 )
  {
    v6 = v9;
    v5 = v8;
  }
  if ( *(_QWORD *)(a1 + 408) < v10 )
  {
    v15 = qvector_reserve(a1 + 392, v3, v10, 16);
    *(_QWORD *)(a1 + 392) = v15;
    v3 = v15;
    v12 = *(_QWORD *)(a1 + 400);
  }
  v13 = 16 * v12 + v3;
  *(_QWORD *)v13 = v5;
  *(_WORD *)(v13 + 8) = v6;
  ++*(_QWORD *)(a1 + 400);
  return 0;
}
