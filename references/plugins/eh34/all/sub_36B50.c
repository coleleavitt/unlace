__int64 __fastcall sub_36B50(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  __m128i v6; // xmm0
  unsigned int v7; // [rsp+Ch] [rbp-DCh] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v9; // [rsp+20h] [rbp-C8h] BYREF
  char v10; // [rsp+30h] [rbp-B8h]
  _QWORD v11[4]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v13; // [rsp+80h] [rbp-68h] BYREF
  __m128i v14; // [rsp+88h] [rbp-60h] BYREF
  char v15; // [rsp+98h] [rbp-50h]
  unsigned __int64 v16; // [rsp+A8h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  sub_35740(&v9, (_QWORD *)a2, 1, &v7);
  if ( v10 )
  {
    v5 = v9.m128i_i32[0];
    *(_DWORD *)(a2 + 644) -= v9.m128i_i32[3];
    sub_28EA0((__int64)v11, a2, v5);
    sub_28EA0((__int64)v12, a2, v9.m128i_i32[1]);
    *(_BYTE *)(a2 + 672) = 0;
    sub_33530(a2);
    sub_35AC0((_QWORD *)a2, (unsigned int *)&v9, a3, v7);
    v8[0] = 0;
    v8[1] = 0;
    sub_34F70((__int64)&v13, a2, (unsigned int *)&v9, (__int64)v8);
    if ( v15 || (sub_36710((__int64)&v13, (__int64 *)a2, (__int64)v8, a3), v15) )
    {
      *(_QWORD *)a1 = v13;
      v6 = _mm_loadu_si128(&v14);
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v6;
    }
    else
    {
      sub_33530(a2);
      *(_BYTE *)a1 = 1;
      *(_BYTE *)(a1 + 24) = 0;
    }
    qfree(v8[0]);
    if ( v12[0] )
    {
      v12[1] = 0;
      qfree(v12[0]);
    }
    if ( v11[0] )
    {
      v11[1] = 0;
      qfree(v11[0]);
    }
  }
  else
  {
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
