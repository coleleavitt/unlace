__int64 __fastcall sub_3D9AB0(__int64 a1)
{
  __m128i v2; // xmm0
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  const char *v7; // rdx
  const char *v8; // rsi
  __int64 v9; // rdi
  __m128 v10; // xmm0
  __int64 v11; // [rsp+20h] [rbp-78h] BYREF
  __m128i v12; // [rsp+28h] [rbp-70h] BYREF
  char v13; // [rsp+38h] [rbp-60h]
  _QWORD v14[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+50h] [rbp-48h] BYREF
  char v16; // [rsp+58h] [rbp-40h]
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  sub_3D8B00((__int64)&v11);
  if ( v13 )
  {
    sub_3D77D0();
    sub_3D8B00((__int64)v14);
    if ( v16 )
    {
      v7 = s1;
      if ( v14[1] )
        LODWORD(v7) = v14[0];
      v8 = s1;
      if ( v12.m128i_i64[0] )
        LODWORD(v8) = v11;
      sub_2B1D90((unsigned int)"display_entries(): double fault:\n%s\n%s", (_DWORD)v8, (_DWORD)v7, v4, v5, v6);
      netnode_kill();
      netnode_check();
      netnode_supset();
      netnode_supset();
      netnode_supset();
      v9 = v14[0];
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      if ( v9 )
        qfree();
    }
    else
    {
      v10 = _mm_loadh_ps((const double *)&v15);
      *(_QWORD *)a1 = v14[0];
      *(__m128 *)(a1 + 8) = v10;
    }
    if ( v11 )
      qfree();
  }
  else
  {
    v2 = _mm_loadu_si128(&v12);
    *(_QWORD *)a1 = v11;
    *(__m128i *)(a1 + 8) = v2;
  }
  return a1;
}
