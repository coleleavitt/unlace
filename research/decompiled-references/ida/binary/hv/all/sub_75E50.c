__int64 __fastcall sub_75E50(
        _QWORD *a1,
        _QWORD *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // r12
  double v12; // xmm4_8
  double v13; // xmm5_8
  unsigned int v14; // ebp
  __int64 v16; // rcx
  char *v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5

  v11 = a1[2];
  sub_98400(v11);
  v14 = *((unsigned __int8 *)a1 + 56);
  if ( !(_BYTE)v14 )
  {
    if ( !(unsigned __int8)sub_758A0((__int64)a1, *(double *)a3.m128_u64, a4, a5, a6, v12, v13, a9, a10) )
    {
      *a2 = "dlopen";
      goto LABEL_3;
    }
    v17 = sub_75B80((__int64)a1);
    if ( !v17 )
      goto LABEL_11;
    if ( !(unsigned __int8)sub_75BD0(a1, (__int64)v17, 16777572, v16, v18, v19, a3, a4, a5, a6, v20, v21, a9, a10) )
    {
      *a2 = "unsupported_version";
      goto LABEL_3;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 16LL))(*a1, a1[4]) )
    {
LABEL_11:
      *a2 = "dlsym";
      goto LABEL_3;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 24LL))(*a1);
    if ( !(unsigned __int8)sub_75D80(a1) )
    {
      *a2 = "openssl";
      goto LABEL_3;
    }
    *((_BYTE *)a1 + 56) = 1;
  }
  v14 = 1;
LABEL_3:
  sub_98450(v11);
  return v14;
}

