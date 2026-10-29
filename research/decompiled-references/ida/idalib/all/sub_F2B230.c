void __fastcall sub_F2B230(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rsi
  size_t v21; // rdx

  v2 = a2;
  v3 = HIDWORD(a2);
  if ( (a2 & 0x300000000LL) == 0 )
  {
    if ( (a2 & 0x400000000LL) == 0 )
      goto LABEL_3;
LABEL_31:
    v5 = sub_995540(*(_QWORD *)(a1 + 1096), " RoundingMath=");
    sub_227B930(v5, ((unsigned int)a2 >> 2) & 1);
    if ( (a2 & 0x3800000000LL) == 0 )
      goto LABEL_4;
    goto LABEL_32;
  }
  v4 = sub_995540(*(_QWORD *)(a1 + 1096), " FPContractMode=");
  sub_227B930(v4, a2 & 3);
  if ( (a2 & 0x400000000LL) != 0 )
    goto LABEL_31;
LABEL_3:
  if ( (a2 & 0x3800000000LL) == 0 )
    goto LABEL_4;
LABEL_32:
  v6 = sub_995540(*(_QWORD *)(a1 + 1096), " ConstRoundingMode=");
  switch ( ((unsigned int)a2 >> 3) & 7 )
  {
    case 0u:
      v20 = "towardzero";
      v21 = j__strlen("towardzero");
      break;
    case 1u:
      v20 = "tonearest";
      v21 = j__strlen("tonearest");
      break;
    case 2u:
      v20 = "upward";
      v21 = j__strlen("upward");
      break;
    case 3u:
      v20 = "downward";
      v21 = j__strlen("downward");
      break;
    case 4u:
      v20 = "tonearestaway";
      v21 = j__strlen("tonearestaway");
      break;
    case 5u:
    case 6u:
      v20 = "invalid";
      v21 = j__strlen("invalid");
      break;
    case 7u:
      v20 = "dynamic";
      v21 = j__strlen("dynamic");
      break;
  }
  sub_9954E0(v6, v20, v21);
LABEL_4:
  if ( (v3 & 0xC0) != 0 )
  {
    v19 = sub_995540(*(_QWORD *)(a1 + 1096), " SpecifiedExceptionMode=");
    sub_227B930(v19, (unsigned __int8)v2 >> 6);
  }
  if ( (v3 & 0x100) != 0 )
  {
    v18 = sub_995540(*(_QWORD *)(a1 + 1096), " AllowFEnvAccess=");
    sub_227B930(v18, (v2 >> 8) & 1);
  }
  if ( (v3 & 0x200) != 0 )
  {
    v17 = sub_995540(*(_QWORD *)(a1 + 1096), " AllowFPReassociate=");
    sub_227B930(v17, (v2 >> 9) & 1);
  }
  if ( (v3 & 0x400) != 0 )
  {
    v16 = sub_995540(*(_QWORD *)(a1 + 1096), " NoHonorNaNs=");
    sub_227B930(v16, (v2 >> 10) & 1);
  }
  if ( (v3 & 0x800) != 0 )
  {
    v15 = sub_995540(*(_QWORD *)(a1 + 1096), " NoHonorInfs=");
    sub_227B930(v15, (v2 >> 11) & 1);
  }
  if ( (v3 & 0x1000) != 0 )
  {
    v14 = sub_995540(*(_QWORD *)(a1 + 1096), " NoSignedZero=");
    sub_227B930(v14, (v2 >> 12) & 1);
  }
  if ( (v3 & 0x2000) != 0 )
  {
    v13 = sub_995540(*(_QWORD *)(a1 + 1096), " AllowReciprocal=");
    sub_227B930(v13, (v2 >> 13) & 1);
  }
  if ( (v3 & 0x4000) != 0 )
  {
    v12 = sub_995540(*(_QWORD *)(a1 + 1096), " AllowApproxFunc=");
    sub_227B930(v12, (v2 >> 14) & 1);
  }
  if ( (v3 & 0x18000) != 0 )
  {
    v11 = sub_995540(*(_QWORD *)(a1 + 1096), " FPEvalMethod=");
    sub_227B910(v11, (v2 >> 15) & 3);
  }
  if ( (v3 & 0x60000) != 0 )
  {
    v10 = sub_995540(*(_QWORD *)(a1 + 1096), " Float16ExcessPrecision=");
    sub_227B930(v10, (v2 >> 17) & 3);
  }
  if ( (v3 & 0x180000) != 0 )
  {
    v9 = sub_995540(*(_QWORD *)(a1 + 1096), " BFloat16ExcessPrecision=");
    sub_227B930(v9, (v2 >> 19) & 3);
  }
  if ( (v3 & 0x200000) != 0 )
  {
    v8 = sub_995540(*(_QWORD *)(a1 + 1096), " MathErrno=");
    sub_227B930(v8, (v2 >> 21) & 1);
  }
  if ( (v3 & 0x1C00000) != 0 )
  {
    v7 = sub_995540(*(_QWORD *)(a1 + 1096), " ComplexRange=");
    sub_227B930(v7, (v2 >> 22) & 7);
  }
}
