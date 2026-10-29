__int64 __fastcall sub_1F3DE0(__int64 a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rbx
  const char *v13; // rsi
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __m128i si128; // xmm0
  __int64 v18; // rax
  __int64 v19; // rax
  struct _Unwind_Exception *v20; // rbx
  __m128i v21; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v22[16]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v23; // [rsp+20h] [rbp-58h] BYREF
  int v24; // [rsp+28h] [rbp-50h]
  _BYTE v25[24]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-30h]

  v5 = *(_BYTE *)(a1 + 968) == 0;
  v26 = __readfsqword(0x28u);
  if ( v5 )
  {
    v7 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 424) )
    {
      v20 = (struct _Unwind_Exception *)sub_1E69C0(a5, a1, (__int64)a2, a3, a4);
      if ( *(_QWORD *)v25 )
      {
        *(_QWORD *)&v25[8] = 0;
        qfree(*(_QWORD *)v25, a2);
      }
      _Unwind_Resume(v20);
    }
    v6 = *(_DWORD *)(a1 + 416);
    if ( v6 == 2 )
    {
      v7 = *(_QWORD *)(a1 + 896);
    }
    else if ( v6 == 3 )
    {
      v7 = *(_QWORD *)(a1 + 904);
    }
    else
    {
      v7 = 0;
      if ( v6 == 1 )
        v7 = *(_QWORD *)(a1 + 888);
    }
  }
  if ( !*(_BYTE *)(v7 + 29) || !unk_8BCE19 )
    return v26 - __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 600);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 592);
    v10 = v9 + 80 * v8;
    if ( v9 != v10 )
    {
      v11 = *(_QWORD *)(a1 + 592);
      while ( (*(_BYTE *)(v11 + 72) & 4) != 0 )
      {
        v11 += 80;
        if ( v10 == v11 )
          goto LABEL_29;
      }
      if ( v11 )
      {
        do
        {
          if ( v9 != v11 && (*(_BYTE *)(v9 + 72) & 4) == 0 && v9 && *(_QWORD *)(v9 + 16) > 1u )
          {
            sub_1E88D0(v9, (const char *)&unk_5C2F25, 0);
            sub_459B60(a1 + 576);
          }
          v9 += 80;
        }
        while ( v10 != v9 );
        v13 = v25;
        memset(v25, 0, sizeof(v25));
        if ( sub_1F3BF0(a1, (__int64)v25, 0.0) <= 0 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 600LL))(a1) && *(_QWORD *)(v11 + 16) > 1u )
          {
            v13 = (const char *)&unk_5C2F25;
            sub_1E88D0(v11, (const char *)&unk_5C2F25, 0);
            sub_459B60(a1 + 576);
          }
        }
        else
        {
          v14 = &s1;
          if ( *(_QWORD *)&v25[8] )
            v14 = *(const char **)v25;
          sub_1E9310(a1 + 576, (__int64)v14, 0);
          v13 = v22;
          v23 = 0;
          v24 = 0;
          sub_1F07A0(a1, (__int64)v22, (__int64)&v23, nullptr);
        }
        if ( *(_QWORD *)v25 )
        {
          *(_QWORD *)&v25[8] = 0;
          qfree(*(_QWORD *)v25, v13);
        }
      }
    }
  }
LABEL_29:
  v15 = xmmword_8CB4A8;
  if ( !(_QWORD)xmmword_8CB4A8 )
  {
    v25[8] = 0;
    v16 = qword_8CB4A0;
    *(_QWORD *)v25 = unk_8CA008;
    if ( (unsigned __int64)v25 >= qword_8CB4A0
      && (unsigned __int64)v25 < qword_8CB4A0 + 16LL * *((_QWORD *)&xmmword_8CB4A8 + 1) )
    {
      si128 = _mm_load_si128((const __m128i *)v25);
      if ( !*((_QWORD *)&xmmword_8CB4A8 + 1) )
      {
        v21 = si128;
        v19 = qvector_reserve(&qword_8CB4A0, qword_8CB4A0, 1, 16);
        v15 = xmmword_8CB4A8;
        si128 = _mm_load_si128(&v21);
        qword_8CB4A0 = v19;
        v16 = v19;
      }
      *(__m128i *)(v16 + 16 * v15) = si128;
    }
    else
    {
      if ( !*((_QWORD *)&xmmword_8CB4A8 + 1) )
      {
        v18 = qvector_reserve(&qword_8CB4A0, qword_8CB4A0, 1, 16);
        v15 = xmmword_8CB4A8;
        qword_8CB4A0 = v18;
        v16 = v18;
      }
      *(__m128i *)(v16 + 16 * v15) = _mm_load_si128((const __m128i *)v25);
    }
    *(_QWORD *)&xmmword_8CB4A8 = xmmword_8CB4A8 + 1;
  }
  return sub_531B30(3, 0, &qword_8CB4A0);
}
