__int64 __fastcall ClpSimplexDual::changeBound(ClpSimplexDual *this, int a2)
{
  __int64 v2; // r12
  double *v3; // rdx
  double *v4; // rax
  double v5; // xmm4_8
  double v6; // xmm3_8
  double v7; // xmm0_8
  double v9; // xmm1_8
  double v10; // [rsp+8h] [rbp-30h]
  double v11; // [rsp+10h] [rbp-28h]
  double v12; // [rsp+18h] [rbp-20h]

  v2 = 8LL * a2;
  v12 = *(double *)(*((_QWORD *)this + 123) + v2);
  v11 = *(double *)(*((_QWORD *)this + 126) + v2);
  v10 = *(double *)(*((_QWORD *)this + 150) + v2);
  ClpSimplexDual::originalBound(this, a2);
  v3 = (double *)(v2 + *((_QWORD *)this + 123));
  v4 = (double *)(v2 + *((_QWORD *)this + 126));
  v5 = *v3;
  v6 = *v4;
  *v3 = v12;
  *v4 = v11;
  if ( v12 == v10 )
  {
    v7 = v12 + *((double *)this + 98);
    if ( v6 <= v7 )
      return 0;
    *v4 = v7;
    *(_BYTE *)(*((_QWORD *)this + 33) + a2) = *(_BYTE *)(*((_QWORD *)this + 33) + a2) & 0xE7 | 0x10;
    ++*((_DWORD *)this + 334);
    return 1;
  }
  else
  {
    if ( v11 != v10 )
      return 0;
    v9 = v11 - *((double *)this + 98);
    if ( v9 <= v5 )
      return 0;
    *v3 = v9;
    *(_BYTE *)(*((_QWORD *)this + 33) + a2) = *(_BYTE *)(*((_QWORD *)this + 33) + a2) & 0xE7 | 8;
    ++*((_DWORD *)this + 334);
    return 1;
  }
}

