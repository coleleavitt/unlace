__int64 __fastcall sub_DF9A20(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  int v5; // r13d
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned int v8; // eax
  __m128i v9; // [rsp+0h] [rbp-B8h] BYREF
  char v10; // [rsp+1Bh] [rbp-9Dh] BYREF
  int v11; // [rsp+1Ch] [rbp-9Ch] BYREF
  __m128i v12; // [rsp+20h] [rbp-98h] BYREF
  void *v13; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-80h]
  char v15; // [rsp+3Ch] [rbp-7Ch]
  int v16; // [rsp+40h] [rbp-78h]
  _QWORD v17[4]; // [rsp+50h] [rbp-68h] BYREF
  void *v18; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+78h] [rbp-40h]
  char v20; // [rsp+7Ch] [rbp-3Ch]
  int v21; // [rsp+80h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 176);
  v9 = _mm_loadu_si128((const __m128i *)sub_E21760(v4, 16));
  sub_E21790(v4, 16);
  v12 = _mm_load_si128(&v9);
  v5 = sub_21EDE80(a3);
  sub_CFEAE0((__int64)v17, (__int64)&v12);
  v11 = v5;
  sub_21F6FA0(&v18, v17, &v11, &v10);
  v14 = v19;
  v13 = v18;
  v15 = v20;
  v16 = v21;
  sub_9955A0(v17);
  if ( !v10 || (result = sub_DF81A0(a1, a2, (__int64)&v13), (_BYTE)result) )
  {
    v7 = sub_E216C0(*(_QWORD *)(a1 + 176), 24);
    v8 = v14;
    *(_DWORD *)(v7 + 8) = v14;
    if ( v8 > 0x40 )
      sub_2205510(v7);
    else
      *(_QWORD *)v7 = v13;
    *(_BYTE *)(v7 + 12) = v15;
    *(_DWORD *)(v7 + 16) = v16;
    result = 1;
  }
  if ( v14 > 0x40 )
  {
    if ( v13 )
    {
      v9.m128i_i8[0] = result;
      operator delete[](v13);
      return v9.m128i_u8[0];
    }
  }
  return result;
}
