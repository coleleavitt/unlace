__int64 __fastcall sub_D0BAE0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  __m128i v6; // [rsp+0h] [rbp-B8h] BYREF
  char v7; // [rsp+1Bh] [rbp-9Dh] BYREF
  int v8; // [rsp+1Ch] [rbp-9Ch] BYREF
  __m128i v9; // [rsp+20h] [rbp-98h] BYREF
  void *v10; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-80h]
  char v12; // [rsp+3Ch] [rbp-7Ch]
  int v13; // [rsp+40h] [rbp-78h]
  void *v14; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v15; // [rsp+58h] [rbp-60h]
  char v16; // [rsp+5Ch] [rbp-5Ch]
  int v17; // [rsp+60h] [rbp-58h]
  _QWORD v18[9]; // [rsp+70h] [rbp-48h] BYREF

  result = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v4 = *(_QWORD *)(a1 + 560);
    v5 = *(_QWORD *)(a1 + 1232);
    *(_QWORD *)(a1 + 1240) = *a3;
    v6 = _mm_loadu_si128((const __m128i *)sub_E21760(v4, 16));
    sub_E21790(v4, 16);
    v9 = _mm_load_si128(&v6);
    LODWORD(v4) = sub_21EDE80(a2);
    sub_CFEAE0((__int64)v18, (__int64)&v9);
    v8 = v4;
    sub_21F6FA0(&v14, v18, &v8, &v7);
    v11 = v15;
    v10 = v14;
    v12 = v16;
    v13 = v17;
    sub_9955A0(v18);
    if ( !v7 || (result = sub_DF81A0(a1 + 384, v5, &v10), (_BYTE)result) )
    {
      sub_D0BA90(*(_QWORD *)(a1 + 560), (__int64)&v10);
      result = 1;
    }
    if ( v11 > 0x40 )
    {
      if ( v10 )
      {
        v6.m128i_i8[0] = result;
        operator delete[](v10);
        return v6.m128i_u8[0];
      }
    }
  }
  return result;
}
