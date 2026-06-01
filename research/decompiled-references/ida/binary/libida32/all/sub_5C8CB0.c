__int64 __fastcall sub_5C8CB0(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned __int64 v2; // r12
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax

  v1 = *(__int64 **)(a1 + 120);
  if ( !v1 )
  {
    v1 = *(__int64 **)(a1 + 128);
    if ( !v1 )
      v1 = *(__int64 **)(a1 + 104);
  }
  v1[20] = 0;
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 <= 1 )
    goto LABEL_3;
  v8 = v1[19];
  if ( v1[21] < v2 )
  {
    v10 = qvector_reserve(v1 + 19, v8, *(_QWORD *)(a1 + 48), 1);
    v1[19] = v10;
    v8 = v10;
  }
  v1[20] = v2;
  *(_BYTE *)(v8 + v2 - 1) = 0;
  memcpy((void *)v1[19], *(const void **)(a1 + 40), v2 - 1);
  v4 = v1[20];
  if ( v4 )
  {
    v3 = v1[19];
    v6 = v4 - 1;
    v5 = v4 + 1;
    if ( v1[21] < (unsigned __int64)(v4 + 1) )
      goto LABEL_9;
  }
  else
  {
LABEL_3:
    v3 = v1[19];
    v4 = 1;
    v5 = 2;
    v6 = 0;
    if ( (unsigned __int64)v1[21] < 2 )
    {
LABEL_9:
      v9 = qvector_reserve(v1 + 19, v3, v5, 1);
      v1[19] = v9;
      v3 = v9;
    }
  }
  v1[20] = v5;
  *(_BYTE *)(v3 + v6) = 40;
  *(_BYTE *)(v1[19] + v4) = 0;
  return 0;
}

