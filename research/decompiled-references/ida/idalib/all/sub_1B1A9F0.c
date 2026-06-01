__int64 __fastcall sub_1B1A9F0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, char a5, unsigned int a6)
{
  int v6; // r13d
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 *v15; // rax
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rcx
  __m128i si128; // xmm0
  __m128i v20; // xmm0
  char v21; // al
  char v22; // dl
  __int64 v23; // [rsp+8h] [rbp-70h] BYREF
  __m128i v24; // [rsp+10h] [rbp-68h] BYREF
  __int64 v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+30h] [rbp-48h]
  char v28; // [rsp+38h] [rbp-40h]
  char v29; // [rsp+39h] [rbp-3Fh]
  int v30; // [rsp+3Ch] [rbp-3Ch]

  LOBYTE(a6) = a2 == 0;
  v7 = a6;
  LOBYTE(v7) = a4 == nullptr || a2 == 0;
  if ( !(_BYTE)v7 )
  {
    v8 = (unsigned __int64)a4;
    if ( (*a4 & 0x40000) != 0 )
    {
      return 1;
    }
    else
    {
      sub_1AEE450(a2);
      v23 = a3;
      *(__m128 *)(a1 + 64) = _mm_loadh_ps((const double *)&v23);
      if ( (*(_WORD *)v8 & 0x1FFu) - 113 <= 1 )
      {
        v14 = *(_QWORD *)(v8 + 16);
        if ( v14 )
        {
          if ( (unsigned __int8)sub_B990E0(*(_QWORD *)(v8 + 16), &v24, v12, v13) || sub_B99130(v14, 0) )
          {
            if ( *(_DWORD *)(v8 + 32) )
            {
              v15 = (unsigned __int64 *)(v8 + 40);
              if ( (*(_WORD *)v8 & 0x1FF) == 0x72 )
                v15 = (unsigned __int64 *)(v8 + 48);
              if ( *v15 )
                v8 = sub_BFBAE0(*v15);
            }
          }
        }
      }
      *(_QWORD *)(a1 + 80) = v8;
      if ( a5 )
      {
        v16 = *(_QWORD *)(a1 + 112);
        v17 = *(_BYTE *)(a1 + 8);
        v18 = *(_QWORD *)(a1 + 64);
        si128 = _mm_load_si128((const __m128i *)a1);
        v26 = 0;
        v20 = _mm_unpacklo_epi64(si128, *(__m128i *)(a1 + 16));
        v27 = v16;
        v25 = v18;
        v24 = v20;
        v28 = 1;
        v29 = v17;
        v30 = 0;
        v21 = sub_1B1A790(v24.m128i_i64, v8);
        v22 = 0;
        if ( v21 )
        {
          v6 = v30;
          v22 = 1;
          *(_QWORD *)(a1 + 112) = v26;
        }
        *(_DWORD *)(a1 + 120) = v6;
        *(_BYTE *)(a1 + 124) = v22;
      }
      else
      {
        return 0;
      }
    }
  }
  return v7;
}
