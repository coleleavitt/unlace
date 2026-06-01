void __fastcall sub_A2A070(unsigned int *a1, unsigned int *a2)
{
  unsigned int *v2; // r15
  unsigned int *v3; // r13
  unsigned int *v4; // rbp
  unsigned int *i; // r15
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // cl
  char v15; // al
  unsigned int *v16; // r14
  unsigned int *v17; // r13
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned int *v20; // r14
  unsigned int v21[4]; // [rsp+8h] [rbp-E8h] BYREF
  _BYTE v22[216]; // [rsp+18h] [rbp-D8h] BYREF

  if ( a1 != a2 )
  {
    v2 = a1 + 44;
    if ( a2 != a1 + 44 )
    {
      do
      {
        v3 = v2 - 44;
        v4 = v2 + 44;
        if ( (unsigned __int8)sub_A09E20(v2, a1) )
        {
          sub_A20EF0((__int64)v21, (__int64)v2);
          v17 = v2 + 44;
          v18 = (char *)v2 - (char *)a1;
          v19 = 0x2E8BA2E8BA2E8BA3LL * (((char *)v2 - (char *)a1) >> 4);
          if ( v18 > 0 )
          {
            do
            {
              v20 = v17 - 88;
              v17 -= 44;
              *(__m128i *)v17 = _mm_loadu_si128((const __m128i *)v17 - 11);
              sub_A0AAD0((__int64)(v17 + 4), (_QWORD *)v17 - 20);
              *((_BYTE *)v17 + 48) = v20[12] & 8 | v20[12] & 4 | v20[12] & 2 | v20[12] & 1 | v17[12] & 0xF0;
              sub_A0AAD0((__int64)(v17 + 14), (_QWORD *)v17 - 15);
              sub_A0AB90((__m128i *)(v17 + 22), (__m128i *)(v17 - 22));
              sub_A0AB90((__m128i *)v17 + 8, (__m128i *)v17 - 3);
              *((_BYTE *)v17 + 168) = *((_BYTE *)v20 + 168);
              --v19;
            }
            while ( v19 );
          }
          sub_A29260((__int64)a1, (__int64)v21);
          sub_A09C70((__int64)v22);
        }
        else
        {
          sub_A20EF0((__int64)v21, (__int64)v2);
          for ( i = v2 - 44; ; *((_BYTE *)v16 + 168) = i[86] & 0x80 | v15 & 0x7F )
          {
            v16 = i + 44;
            if ( !(unsigned __int8)sub_A09E20(v21, v3) )
              break;
            *((__m128i *)i + 11) = _mm_loadu_si128((const __m128i *)i);
            sub_A0AAD0((__int64)(i + 48), (_QWORD *)i + 2);
            v6 = i[12] & 1 | i[56] & 0xFE;
            *((_BYTE *)i + 224) = v6;
            v7 = i[12] & 2 | v6 & 0xFD;
            *((_BYTE *)i + 224) = v7;
            v8 = i[12] & 4 | v7 & 0xFB;
            *((_BYTE *)i + 224) = v8;
            *((_BYTE *)i + 224) = i[12] & 8 | v8 & 0xF7;
            sub_A0AAD0((__int64)(i + 58), (_QWORD *)i + 7);
            sub_A0AB90((__m128i *)(i + 66), (__m128i *)(i + 22));
            sub_A0AB90((__m128i *)i + 19, (__m128i *)i + 8);
            v9 = i[42] & 1 | i[86] & 0xFE;
            *((_BYTE *)i + 344) = v9;
            v10 = i[42] & 6 | v9 & 0xF9;
            *((_BYTE *)i + 344) = v10;
            v11 = i[42] & 8 | v10 & 0xF7;
            *((_BYTE *)i + 344) = v11;
            v12 = i[42] & 0x10 | v11 & 0xEF;
            *((_BYTE *)i + 344) = v12;
            v13 = i[42] & 0x20 | v12 & 0xDF;
            *((_BYTE *)i + 344) = v13;
            v14 = i[42] & 0x40;
            i -= 44;
            v15 = v14 | v13 & 0xBF;
            *((_BYTE *)v16 + 168) = v15;
            v3 = i;
          }
          sub_A29260((__int64)(i + 44), (__int64)v21);
          sub_A09C70((__int64)v22);
        }
        v2 = v4;
      }
      while ( a2 != v4 );
    }
  }
}
