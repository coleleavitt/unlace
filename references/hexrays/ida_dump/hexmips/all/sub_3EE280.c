unsigned __int64 __fastcall sub_3EE280(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rcx
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // esi
  _BOOL4 v9; // esi
  _DWORD v10[4]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 v11[24]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v3 = *(int *)(*(_QWORD *)(a1 + 832) + 80LL);
  if ( a2 < v3 )
  {
    v4 = *(unsigned __int16 *)(a1 + 48);
    v10[2] = a3;
    v10[0] = 1;
    *(_DWORD *)v11 = 1;
    v10[1] = a2;
    *(_QWORD *)&v11[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(a3)).m128i_u64[0];
    if ( (_WORD)v4 == 1013 )
    {
      v7 = 9;
    }
    else if ( (unsigned __int16)v4 > 0x3F5u )
    {
      if ( (unsigned __int16)v4 > 0x46Bu )
        v9 = (_WORD)v4 == 1712;
      else
        v9 = (unsigned __int16)v4 > 0x469u;
      v7 = v9 + 8;
    }
    else
    {
      v5 = (unsigned int)(v4 - 121);
      if ( (unsigned __int16)v5 > 0xDu )
      {
        v7 = 8;
      }
      else
      {
        v6 = 10241;
        v7 = _bittest64(&v6, v5) + 8;
      }
    }
    sub_1D2090(a1, v7, (unsigned __int8 *)v10, nullptr, v11);
    sub_118BA0((__int64)v11);
    sub_118BA0((__int64)v10);
  }
  return v12 - __readfsqword(0x28u);
}
