_QWORD *__fastcall sub_13BED30(_QWORD *a1, size_t *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v6; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  char v10; // dl
  __m128i si128; // xmm0
  char v12; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v13[2]; // [rsp+10h] [rbp-38h] BYREF
  char v14; // [rsp+20h] [rbp-28h]

  v3 = (unsigned __int64)a2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v3 + 8);
    if ( !v6 )
      break;
    v3 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 4) == 0 || !v3 )
    {
      if ( *(_DWORD *)(v3 + 32) <= 0x18u )
      {
        *a1 = 0;
        return a1;
      }
      break;
    }
  }
  sub_FD8750((__int64)v13, a3, a2, 0, 1u, 0, 0, 0);
  if ( (v14 & 1) == 0 && v13[0] && sub_13BE8D0(v13[0], &v12) )
  {
    v8 = v13[0];
    v13[0] = 0;
    v9 = operator new(0x28u);
    v10 = v12;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9810);
    *(_QWORD *)v9 = v8;
    *(_BYTE *)(v9 + 8) = v10;
    *(_QWORD *)(v9 + 16) = 0;
    *(__m128i *)(v9 + 24) = si128;
    *a1 = v9;
  }
  else
  {
    *a1 = 0;
  }
  sub_FC2AF0(v13);
  return a1;
}
