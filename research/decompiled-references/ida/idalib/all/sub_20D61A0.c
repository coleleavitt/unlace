__int64 __fastcall sub_20D61A0(__int64 a1, __int64 a2)
{
  char v2; // r13
  _BYTE *v4; // rdi
  unsigned __int8 v5; // dl
  bool v6; // zf
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // r12
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  __int64 result; // rax
  size_t v13; // rax
  __m128i v14; // xmm0
  size_t v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __m128i v20; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v21[3]; // [rsp+10h] [rbp-38h] BYREF

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 40) )
  {
    v13 = j__strlen(">");
    v14 = _mm_loadu_si128((const __m128i *)(a1 + 24));
    v21[0] = v14;
    if ( (v13 != v14.m128i_i64[0]
       || (v20 = v14, v19 = sub_FD4B10((__int64)v21, v13, ">"), v14 = _mm_load_si128(&v20), v19))
      && ((v20 = v14, v15 = j__strlen(">>"), v21[0] = _mm_load_si128(&v20), *(_QWORD *)&v21[0] != v15)
       || sub_FD4B10((__int64)v21, v15, ">>")) )
    {
      v2 = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 40) = 1;
      v2 = 1;
      sub_20CFD70(a2);
      v17 = *(_QWORD *)(a2 + 16);
      v18 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 16) = v17 + 1;
      *(_BYTE *)(v18 + v17) = 40;
    }
  }
  v4 = *(_BYTE **)(a1 + 16);
  v5 = *(_BYTE *)(a1 + 9) & 0x3F;
  v6 = v5 == 17;
  v7 = v5 != 17;
  if ( v5 == 17 )
    v5 = 15;
  v8 = v6;
  sub_20D5A60(v4, a2, v5, v7);
  v9 = j__strlen(",");
  if ( v9 != *(_QWORD *)(a1 + 24) || v9 && memcmp(*(const void **)(a1 + 32), ",", v9) )
  {
    v10 = j__strlen(" ");
    sub_20D1ED0((_QWORD *)a2, v10, " ");
  }
  sub_20D1ED0((_QWORD *)a2, *(_QWORD *)(a1 + 24), *(const void **)(a1 + 32));
  v11 = j__strlen(" ");
  sub_20D1ED0((_QWORD *)a2, v11, " ");
  result = sub_20D5A60(*(_BYTE **)(a1 + 40), a2, *(_BYTE *)(a1 + 9) & 0x3F, v8);
  if ( v2 )
  {
    --*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    result = *(_QWORD *)(a2 + 16);
    v16 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = result + 1;
    *(_BYTE *)(v16 + result) = 41;
  }
  return result;
}
