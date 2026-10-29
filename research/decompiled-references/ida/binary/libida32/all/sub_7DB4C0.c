__int64 __fastcall sub_7DB4C0(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r13
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  v1 = a1[1];
  if ( v1 )
  {
    v2 = v1 + 8;
    v3 = v1 + 9;
    v4 = *a1;
    --v1;
    if ( a1[2] >= v3 )
      goto LABEL_3;
  }
  else
  {
    v4 = *a1;
    v3 = 10;
    v2 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_3;
  }
  v11 = qvector_reserve(a1, v4, v3, 1);
  *a1 = v11;
  v4 = v11;
LABEL_3:
  a1[1] = v3;
  *(_BYTE *)(v4 + v2) = 0;
  v5 = *a1 + v1;
  *(_QWORD *)v5 = 0x42445F4E41454C43LL;
  *(_BYTE *)(v5 + 8) = 32;
  sub_7ACD80(a1, 1);
  v6 = a1[1];
  if ( !v6 )
  {
    v9 = *a1;
    v8 = 1;
    v7 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_5;
LABEL_9:
    v12 = qvector_reserve(a1, v9, v7, 1);
    *a1 = v12;
    v9 = v12;
    goto LABEL_5;
  }
  v7 = v6 + 1;
  v8 = a1[1];
  v9 = *a1;
  --v6;
  if ( a1[2] < v7 )
    goto LABEL_9;
LABEL_5:
  a1[1] = v7;
  *(_BYTE *)(v9 + v6) = 59;
  *(_BYTE *)(*a1 + v8) = 0;
  return 1;
}

