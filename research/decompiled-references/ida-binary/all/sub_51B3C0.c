__int64 __fastcall sub_51B3C0(__int64 *a1)
{
  _DWORD *v1; // rsi
  int v2; // ecx
  _DWORD *v3; // rax
  __int64 v4; // rdx
  double v5; // xmm1_8
  unsigned __int64 v6; // rbp
  double v7; // xmm2_8
  __int64 v8; // r13
  double v9; // xmm0_8
  __int64 v10; // rsi
  double v11; // xmm0_8
  __int64 v12; // rax
  double v13; // xmm0_8
  double v14; // xmm1_8
  __int64 v15; // rsi
  unsigned int v16; // ebx
  __int64 v18; // rax
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v20; // [rsp+38h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-38h]
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  QT::QSplitter::sizes((QT::QSplitter *)&ptr);
  if ( (int)v21 <= 0 )
    goto LABEL_21;
  v1 = v20;
  v2 = 0;
  v3 = v20;
  do
    v2 += *v3++;
  while ( &v20[(unsigned int)(v21 - 1) + 1] != v3 );
  if ( !v2 )
  {
LABEL_21:
    v16 = 0;
    goto LABEL_15;
  }
  v4 = a1[1];
  if ( (_DWORD)v21 == 1 )
  {
    v13 = 1.0;
  }
  else
  {
    v5 = 0.0;
    v6 = 0;
    v7 = (double)v2;
    v8 = 4LL * (unsigned int)(v21 - 2);
    while ( 1 )
    {
      v9 = (double)(int)v1[v6 / 4];
      v10 = *a1;
      v11 = v9 / v7;
      v5 = v5 + v11;
      if ( a1[2] < (unsigned __int64)(v4 + 1) )
      {
        v12 = qvector_reserve(a1, v10, v4 + 1, 8);
        v4 = a1[1];
        *a1 = v12;
        v10 = v12;
      }
      *(double *)(v10 + 8 * v4) = v11;
      v4 = a1[1] + 1;
      a1[1] = v4;
      if ( v8 == v6 )
        break;
      v1 = v20;
      v6 += 4LL;
    }
    v13 = 1.0 - v5;
    v14 = 0.0;
    if ( v13 <= 0.0 )
      goto LABEL_12;
  }
  v14 = v13;
LABEL_12:
  v15 = *a1;
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v18 = qvector_reserve(a1, v15, v4 + 1, 8);
    v4 = a1[1];
    *a1 = v18;
    v15 = v18;
  }
  *(double *)(v15 + 8 * v4) = v14;
  ++a1[1];
  v16 = 1;
LABEL_15:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v16;
}
