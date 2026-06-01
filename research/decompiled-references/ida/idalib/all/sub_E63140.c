__int64 __fastcall sub_E63140(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v4; // [rsp+Ch] [rbp-6Ch] BYREF
  void *v5[4]; // [rsp+10h] [rbp-68h] BYREF
  __m128 v6[4]; // [rsp+30h] [rbp-48h] BYREF

  v2 = HIDWORD(a2);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  if ( (a2 & 0x300000000LL) != 0
    && (v4 = a2 & 3, sub_E59B60((void ***)v5, "FPContractMode"), sub_E62F70(v6, a1, (__int64)v5, &v4), v5[0]) )
  {
    sub_E58590((void **)v5[0]);
    if ( (a2 & 0x400000000LL) == 0 )
      goto LABEL_3;
  }
  else if ( (a2 & 0x400000000LL) == 0 )
  {
    goto LABEL_3;
  }
  v4 = ((unsigned int)a2 >> 2) & 1;
  sub_E59B60((void ***)v5, "RoundingMath");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_3:
    if ( (a2 & 0x3800000000LL) == 0 )
      goto LABEL_4;
    goto LABEL_22;
  }
  sub_E58590((void **)v5[0]);
  if ( (a2 & 0x3800000000LL) == 0 )
    goto LABEL_4;
LABEL_22:
  v4 = ((unsigned int)a2 >> 3) & 7;
  sub_E59B60((void ***)v5, "ConstRoundingMode");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_4:
    if ( (a2 & 0xC000000000LL) == 0 )
      goto LABEL_5;
    goto LABEL_24;
  }
  sub_E58590((void **)v5[0]);
  if ( (a2 & 0xC000000000LL) == 0 )
    goto LABEL_5;
LABEL_24:
  v4 = (unsigned __int8)a2 >> 6;
  sub_E59B60((void ***)v5, "SpecifiedExceptionMode");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_5:
    if ( (v2 & 0x100) == 0 )
      goto LABEL_6;
    goto LABEL_26;
  }
  sub_E58590((void **)v5[0]);
  if ( (v2 & 0x100) == 0 )
    goto LABEL_6;
LABEL_26:
  v4 = ((unsigned int)a2 >> 8) & 1;
  sub_E59B60((void ***)v5, "AllowFEnvAccess");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_6:
    if ( (v2 & 0x200) == 0 )
      goto LABEL_7;
    goto LABEL_28;
  }
  sub_E58590((void **)v5[0]);
  if ( (v2 & 0x200) == 0 )
    goto LABEL_7;
LABEL_28:
  v4 = ((unsigned int)a2 >> 9) & 1;
  sub_E59B60((void ***)v5, "AllowFPReassociate");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_7:
    if ( (v2 & 0x400) == 0 )
      goto LABEL_8;
    goto LABEL_30;
  }
  sub_E58590((void **)v5[0]);
  if ( (v2 & 0x400) == 0 )
    goto LABEL_8;
LABEL_30:
  v4 = ((unsigned int)a2 >> 10) & 1;
  sub_E59B60((void ***)v5, "NoHonorNaNs");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_8:
    if ( (v2 & 0x800) == 0 )
      goto LABEL_9;
    goto LABEL_32;
  }
  sub_E58590((void **)v5[0]);
  if ( (v2 & 0x800) == 0 )
    goto LABEL_9;
LABEL_32:
  v4 = ((unsigned int)a2 >> 11) & 1;
  sub_E59B60((void ***)v5, "NoHonorInfs");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_9:
    if ( (v2 & 0x1000) == 0 )
      goto LABEL_10;
    goto LABEL_34;
  }
  sub_E58590((void **)v5[0]);
  if ( (v2 & 0x1000) == 0 )
    goto LABEL_10;
LABEL_34:
  v4 = ((unsigned int)a2 >> 12) & 1;
  sub_E59B60((void ***)v5, "NoSignedZero");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_10:
    if ( (v2 & 0x2000) == 0 )
      goto LABEL_11;
    goto LABEL_36;
  }
  sub_E58590((void **)v5[0]);
  if ( (v2 & 0x2000) == 0 )
    goto LABEL_11;
LABEL_36:
  v4 = ((unsigned int)a2 >> 13) & 1;
  sub_E59B60((void ***)v5, "AllowReciprocal");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_11:
    if ( (v2 & 0x4000) == 0 )
      goto LABEL_12;
    goto LABEL_38;
  }
  sub_E58590((void **)v5[0]);
  if ( (v2 & 0x4000) == 0 )
    goto LABEL_12;
LABEL_38:
  v4 = ((unsigned int)a2 >> 14) & 1;
  sub_E59B60((void ***)v5, "AllowApproxFunc");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_12:
    if ( (a2 & 0x1800000000000LL) == 0 )
      goto LABEL_13;
    goto LABEL_40;
  }
  sub_E58590((void **)v5[0]);
  if ( (a2 & 0x1800000000000LL) == 0 )
    goto LABEL_13;
LABEL_40:
  v4 = ((unsigned int)a2 >> 15) & 3;
  sub_E59B60((void ***)v5, "FPEvalMethod");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_13:
    if ( (a2 & 0x6000000000000LL) == 0 )
      goto LABEL_14;
    goto LABEL_42;
  }
  sub_E58590((void **)v5[0]);
  if ( (a2 & 0x6000000000000LL) == 0 )
    goto LABEL_14;
LABEL_42:
  v4 = ((unsigned int)a2 >> 17) & 3;
  sub_E59B60((void ***)v5, "Float16ExcessPrecision");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_14:
    if ( (a2 & 0x18000000000000LL) == 0 )
      goto LABEL_15;
    goto LABEL_44;
  }
  sub_E58590((void **)v5[0]);
  if ( (a2 & 0x18000000000000LL) == 0 )
    goto LABEL_15;
LABEL_44:
  v4 = ((unsigned int)a2 >> 19) & 3;
  sub_E59B60((void ***)v5, "BFloat16ExcessPrecision");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_15:
    if ( (a2 & 0x20000000000000LL) == 0 )
      goto LABEL_16;
    goto LABEL_46;
  }
  sub_E58590((void **)v5[0]);
  if ( (a2 & 0x20000000000000LL) == 0 )
    goto LABEL_16;
LABEL_46:
  v4 = ((unsigned int)a2 >> 21) & 1;
  sub_E59B60((void ***)v5, "MathErrno");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
  {
LABEL_16:
    if ( (a2 & 0x1C0000000000000LL) != 0 )
      goto LABEL_48;
    return a1;
  }
  sub_E58590((void **)v5[0]);
  if ( (a2 & 0x1C0000000000000LL) == 0 )
    return a1;
LABEL_48:
  v4 = ((unsigned int)a2 >> 22) & 7;
  sub_E59B60((void ***)v5, "ComplexRange");
  sub_E62F70(v6, a1, (__int64)v5, &v4);
  if ( !v5[0] )
    return a1;
  sub_E58590((void **)v5[0]);
  return a1;
}
