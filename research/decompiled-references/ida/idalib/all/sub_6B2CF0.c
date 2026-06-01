__int64 __fastcall sub_6B2CF0(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // ebp
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  __int64 v8; // rax
  char v9; // r15
  __int64 v10; // rsi
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // rax

  if ( a1 && a2 <= 0x7FFE )
  {
    v2 = a2 + 1;
    v3 = a1[1];
    if ( (int)(a2 + 1) <= 127 )
    {
      if ( !v3 )
        goto LABEL_5;
      goto LABEL_7;
    }
    v9 = v2 | 0x80;
    if ( v3 )
    {
      v12 = v3 + 1;
      v11 = a1[1];
      v10 = *a1;
      --v3;
      if ( a1[2] >= v12 )
        goto LABEL_11;
    }
    else
    {
      v10 = *a1;
      v11 = 1;
      v12 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_11;
    }
    v13 = qvector_reserve(a1, v10, v12, 1);
    *a1 = v13;
    v10 = v13;
LABEL_11:
    a1[1] = v12;
    v2 >>= 7;
    *(_BYTE *)(v10 + v3) = v9;
    *(_BYTE *)(*a1 + v11) = 0;
    v3 = a1[1];
    if ( !v3 )
    {
LABEL_5:
      v4 = *a1;
      v5 = 1;
      v6 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
      {
LABEL_6:
        a1[1] = v6;
        *(_BYTE *)(v4 + v3) = v2;
        *(_BYTE *)(*a1 + v5) = 0;
        return 1;
      }
LABEL_8:
      v8 = qvector_reserve(a1, v4, v6, 1);
      *a1 = v8;
      v4 = v8;
      goto LABEL_6;
    }
LABEL_7:
    v6 = v3 + 1;
    v5 = v3;
    v4 = *a1;
    --v3;
    if ( a1[2] >= v6 )
      goto LABEL_6;
    goto LABEL_8;
  }
  return 0;
}
