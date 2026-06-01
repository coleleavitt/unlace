__int64 __fastcall sub_DD9DF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __m128i *v9; // rax
  __m128i v10; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-58h] BYREF
  int v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  unsigned int v14; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v10 = _mm_loadu_si128((const __m128i *)sub_E21760(v2, 16));
  sub_E21790(v2, 16);
  v3 = *(_QWORD *)(a1 + 176);
  sub_E21760(v3, 48);
  sub_E23260(v11);
  sub_E21790(v3, 48);
  v4 = sub_DCA140(a1, a2, (__int64)v11);
  if ( (_BYTE)v4 )
  {
    sub_E23CF0(v11);
    sub_E24D00(v11);
    if ( v12 )
    {
      v7 = v11[0];
      v8 = v13;
    }
    else
    {
      v6 = sub_CFDF60((__int64)v11);
      v7 = v11[0];
      v8 = v13;
      if ( *(_BYTE *)(v6 + 60) && v14 == v11[0] )
      {
        v9 = (__m128i *)(v13 + v14 + 72);
        goto LABEL_6;
      }
    }
    v9 = (__m128i *)(v8 + v7 + 40);
LABEL_6:
    *v9 = _mm_load_si128(&v10);
  }
  sub_E232A0(v11);
  return v4;
}
