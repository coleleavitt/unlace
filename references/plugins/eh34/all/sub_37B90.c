__int64 __fastcall sub_37B90(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __m128i v10; // [rsp+8h] [rbp-40h] BYREF
  char v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)(a2 + 192);
  v12 = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 472) = sub_26300(v4);
  sub_37A30((__int64)&v9, a2, a3);
  if ( v11 )
  {
    v6 = v9;
    v7 = _mm_loadu_si128(&v10);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v6;
    *(__m128i *)(a1 + 8) = v7;
  }
  else if ( (_BYTE)v9 )
  {
    sub_36F40(a1, a2);
  }
  else
  {
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
