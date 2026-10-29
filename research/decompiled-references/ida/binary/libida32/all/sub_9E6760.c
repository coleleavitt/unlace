__int64 __fastcall sub_9E6760(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // al
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 result; // rax

  sub_9E62C0(a1, a2);
  v2 = *(_BYTE *)(a2 + 152) & 1 | *(_BYTE *)(a1 + 152) & 0xFE;
  *(_BYTE *)(a1 + 152) = v2;
  v3 = *(_BYTE *)(a2 + 152) & 2 | v2 & 0xFD;
  *(_BYTE *)(a1 + 152) = v3;
  v4 = *(_BYTE *)(a2 + 152) & 4 | v3 & 0xFB;
  *(_BYTE *)(a1 + 152) = v4;
  v5 = *(_BYTE *)(a2 + 152) & 8 | v4 & 0xF7;
  *(_BYTE *)(a1 + 152) = v5;
  v6 = *(_BYTE *)(a2 + 152) & 0x10 | v5 & 0xEF;
  *(_BYTE *)(a1 + 152) = v6;
  v7 = *(_BYTE *)(a2 + 152);
  *(_BYTE *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 152) = v7 & 0x20 | v6 & 0xDF;
  if ( *(_BYTE *)(a2 + 192) )
  {
    *(_QWORD *)(a1 + 160) = a1 + 176;
    v8 = *(_QWORD *)(a2 + 160);
    if ( v8 == a2 + 176 )
    {
      *(__m128i *)(a1 + 176) = _mm_loadu_si128((const __m128i *)(a2 + 176));
    }
    else
    {
      *(_QWORD *)(a1 + 160) = v8;
      *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
    }
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
    *(_QWORD *)(a2 + 160) = a2 + 176;
    *(_QWORD *)(a2 + 168) = 0;
    *(_BYTE *)(a2 + 176) = 0;
    *(_BYTE *)(a1 + 192) = 1;
  }
  *(_BYTE *)(a1 + 232) = 0;
  if ( *(_BYTE *)(a2 + 232) )
  {
    *(_QWORD *)(a1 + 200) = a1 + 216;
    v9 = *(_QWORD *)(a2 + 200);
    if ( v9 == a2 + 216 )
    {
      *(__m128i *)(a1 + 216) = _mm_loadu_si128((const __m128i *)(a2 + 216));
    }
    else
    {
      *(_QWORD *)(a1 + 200) = v9;
      *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
    }
    *(_QWORD *)(a1 + 208) = *(_QWORD *)(a2 + 208);
    *(_QWORD *)(a2 + 200) = a2 + 216;
    *(_QWORD *)(a2 + 208) = 0;
    *(_BYTE *)(a2 + 216) = 0;
    *(_BYTE *)(a1 + 232) = 1;
  }
  *(_BYTE *)(a1 + 272) = 0;
  if ( *(_BYTE *)(a2 + 272) )
  {
    *(_QWORD *)(a1 + 240) = a1 + 256;
    v10 = *(_QWORD *)(a2 + 240);
    if ( v10 == a2 + 256 )
    {
      *(__m128i *)(a1 + 256) = _mm_loadu_si128((const __m128i *)(a2 + 256));
    }
    else
    {
      *(_QWORD *)(a1 + 240) = v10;
      *(_QWORD *)(a1 + 256) = *(_QWORD *)(a2 + 256);
    }
    *(_QWORD *)(a1 + 248) = *(_QWORD *)(a2 + 248);
    *(_QWORD *)(a2 + 240) = a2 + 256;
    *(_QWORD *)(a2 + 248) = 0;
    *(_BYTE *)(a2 + 256) = 0;
    *(_BYTE *)(a1 + 272) = 1;
  }
  *(_BYTE *)(a1 + 312) = 0;
  if ( *(_BYTE *)(a2 + 312) )
  {
    *(_QWORD *)(a1 + 280) = a1 + 296;
    v11 = *(_QWORD *)(a2 + 280);
    if ( v11 == a2 + 296 )
    {
      *(__m128i *)(a1 + 296) = _mm_loadu_si128((const __m128i *)(a2 + 296));
    }
    else
    {
      *(_QWORD *)(a1 + 280) = v11;
      *(_QWORD *)(a1 + 296) = *(_QWORD *)(a2 + 296);
    }
    *(_QWORD *)(a1 + 288) = *(_QWORD *)(a2 + 288);
    *(_QWORD *)(a2 + 280) = a2 + 296;
    *(_QWORD *)(a2 + 288) = 0;
    *(_BYTE *)(a2 + 296) = 0;
    *(_BYTE *)(a1 + 312) = 1;
  }
  *(_BYTE *)(a1 + 352) = 0;
  if ( *(_BYTE *)(a2 + 352) )
  {
    *(_QWORD *)(a1 + 320) = a1 + 336;
    v12 = *(_QWORD *)(a2 + 320);
    if ( v12 == a2 + 336 )
    {
      *(__m128i *)(a1 + 336) = _mm_loadu_si128((const __m128i *)(a2 + 336));
    }
    else
    {
      *(_QWORD *)(a1 + 320) = v12;
      *(_QWORD *)(a1 + 336) = *(_QWORD *)(a2 + 336);
    }
    *(_QWORD *)(a1 + 328) = *(_QWORD *)(a2 + 328);
    *(_QWORD *)(a2 + 320) = a2 + 336;
    *(_QWORD *)(a2 + 328) = 0;
    *(_BYTE *)(a2 + 336) = 0;
    *(_BYTE *)(a1 + 352) = 1;
  }
  result = *(_QWORD *)(a2 + 360);
  *(_QWORD *)(a1 + 360) = result;
  return result;
}

