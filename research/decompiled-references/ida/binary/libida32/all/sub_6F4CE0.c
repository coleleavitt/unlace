__int64 __fastcall sub_6F4CE0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 *v11; // rax
  __int64 *v12; // r12
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  __int64 *v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+10h] [rbp-38h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( !a2 )
    return 1;
  v11 = *(__int64 **)(a2 + 16);
  v12 = *(__int64 **)(a2 + 24);
  if ( v12 == v11 )
  {
    v12 = nullptr;
    v11 = nullptr;
  }
  v16 = v11;
  v14 = 0;
  v17 = 0;
  v18 = 0;
LABEL_5:
  if ( v12 == v11 )
  {
LABEL_11:
    if ( v14 )
      goto LABEL_6;
    return 1;
  }
LABEL_6:
  if ( (v14 & 3) != 0 )
    v11 = (__int64 *)sub_ECEDF0(&v16);
  while ( 1 )
  {
    result = sub_6ED600(a1, *v11, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    if ( !(_BYTE)result )
      return result;
    v14 = v17;
    if ( (v17 & 3) != 0 )
    {
      if ( v17 <= 3 )
        sub_ECEA10(&v16, 1);
      else
        sub_ECEC20(&v16);
      v11 = v16;
      v14 = v17;
      goto LABEL_5;
    }
    v11 = v16 + 1;
    v16 = v11;
    if ( v11 == v12 )
      goto LABEL_11;
  }
}

