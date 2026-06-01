__int64 __fastcall sub_1E1A90(__int64 a1)
{
  int v1; // eax
  int v2; // r14d
  int v3; // r13d
  unsigned int v4; // eax
  unsigned int v5; // ebp
  const __m128i *v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  int v12; // [rsp+Ch] [rbp-8Ch] BYREF
  char v13[8]; // [rsp+10h] [rbp-88h] BYREF
  int v14; // [rsp+18h] [rbp-80h]
  __int64 v15; // [rsp+1Ch] [rbp-7Ch]
  int v16; // [rsp+24h] [rbp-74h]
  _OWORD v17[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+50h] [rbp-48h]
  char *v19; // [rsp+58h] [rbp-40h]
  unsigned __int64 v20; // [rsp+68h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  sub_1E1330((__int64)v13, a1, 0);
  v12 = -1;
  v1 = sub_1E0C20((__int64)v13, a1 + 1000, &v12);
  v2 = v12;
  if ( v12 == -1 )
  {
    return (unsigned int)sub_200A10(a1);
  }
  else
  {
    v3 = v1;
    LOBYTE(v4) = sub_1E0E40((__int64)v13, *(_QWORD *)(a1 + 728), 0);
    v5 = v4;
    if ( (_BYTE)v4 )
    {
      v6 = (const __m128i *)sub_1EA6A0(a1 + 384);
      v19 = v13;
      v17[0] = _mm_loadu_si128(v6);
      v7 = _mm_loadu_si128(v6 + 1);
      v8 = v6[2].m128i_i64[0];
      v17[1] = v7;
      v18 = v8;
      v9 = qalloc_or_throw(24);
      *(_DWORD *)(v9 + 8) = v14;
      v10 = v15;
      *(_QWORD *)v9 = dbgreg_place_t___vtable;
      *(_QWORD *)(v9 + 12) = v10;
      *(_DWORD *)(v9 + 20) = v16;
      v19 = (char *)v9;
      sub_1FFC10(a1, v17, 1, 0);
      if ( v19 )
        qfree(v19, (const char *)v17);
    }
    else
    {
      LODWORD(v17[0]) = v3 + v2;
      sub_2006B0(a1, v17, 0);
    }
  }
  return v5;
}
