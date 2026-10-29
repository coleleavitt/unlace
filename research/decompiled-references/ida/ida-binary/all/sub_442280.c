std::string *__fastcall sub_442280(std::string *this, int a2)
{
  unsigned int v2; // r15d
  unsigned int v3; // ebp
  unsigned int v5; // esi
  int v6; // r12d
  unsigned __int64 v7; // r14
  _BYTE *v8; // rsi
  int v9; // ecx
  __m128i si128; // xmm0
  _BYTE *v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rbp
  __int64 v19; // rax
  _OWORD v21[11]; // [rsp+0h] [rbp-118h]
  __m128i v22[2]; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v23; // [rsp+D8h] [rbp-40h]

  v2 = (unsigned int)a2 >> 31;
  v3 = -a2;
  v23 = __readfsqword(0x28u);
  if ( a2 > 0 )
    v3 = a2;
  if ( v3 <= 9 )
  {
    v6 = 1;
  }
  else
  {
    v5 = v3;
    v6 = 1;
    while ( 1 )
    {
      if ( v5 <= 0x63 )
      {
        ++v6;
        goto LABEL_11;
      }
      if ( v5 <= 0x3E7 )
      {
        v6 += 2;
        goto LABEL_11;
      }
      if ( v5 <= 0x270F )
        break;
      v6 += 4;
      if ( v5 <= 0x1869F )
        goto LABEL_11;
      v5 /= 0x2710u;
    }
    v6 += 3;
  }
LABEL_11:
  v7 = v2 + v6;
  *(_QWORD *)this = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  if ( *((_QWORD *)&std::string::_Rep::_S_empty_rep_storage + 1) < v7 )
    goto LABEL_14;
  if ( &_pthread_key_create )
  {
    if ( *((int *)&std::string::_Rep::_S_empty_rep_storage + 4) <= 0 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( *((int *)&std::string::_Rep::_S_empty_rep_storage + 4) > 0 )
LABEL_14:
    std::string::reserve(this, v2 + v6);
LABEL_15:
  v8 = *(_BYTE **)this;
  v9 = v6 - 1;
  v21[0] = _mm_load_si128((const __m128i *)&xmmword_5DDB00);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDB10);
  *v8 = 45;
  v11 = &v8[(unsigned __int8)v2];
  v21[1] = si128;
  v21[2] = _mm_load_si128((const __m128i *)&xmmword_5DDB20);
  v21[3] = _mm_load_si128((const __m128i *)&xmmword_5DDB30);
  v21[4] = _mm_load_si128((const __m128i *)&xmmword_5DDB40);
  v21[5] = _mm_load_si128((const __m128i *)&xmmword_5DDB50);
  v21[6] = _mm_load_si128((const __m128i *)&xmmword_5DDB60);
  v21[7] = _mm_load_si128((const __m128i *)&xmmword_5DDB70);
  v21[8] = _mm_load_si128((const __m128i *)&xmmword_5DDB80);
  v21[9] = _mm_load_si128((const __m128i *)&xmmword_5DDB90);
  v21[10] = _mm_load_si128((const __m128i *)&xmmword_5DDBA0);
  v22[0] = _mm_load_si128((const __m128i *)&xmmword_5DDBB0);
  *(__m128i *)((char *)v22 + 9) = _mm_load_si128((const __m128i *)&xmmword_5DDBC0);
  if ( v3 > 0x63 )
  {
    do
    {
      v12 = v3 % 0x64;
      v13 = v3;
      v3 /= 0x64u;
      v14 = 2 * v12;
      v15 = (unsigned int)(v14 + 1);
      LOBYTE(v14) = *((_BYTE *)v21 + v14);
      v11[v9] = *((_BYTE *)v21 + v15);
      v16 = (unsigned int)(v9 - 1);
      v9 -= 2;
      v11[v16] = v14;
    }
    while ( v13 > 0x270F );
  }
  v17 = v3 + 48;
  if ( v3 > 9 )
  {
    v18 = 2 * v3;
    v11[1] = *((_BYTE *)v21 + (unsigned int)(v18 + 1));
    v17 = *((_BYTE *)v21 + v18);
  }
  *v11 = v17;
  v19 = *(_QWORD *)this;
  if ( (_UNKNOWN *)(*(_QWORD *)this - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    *(_DWORD *)(v19 - 8) = 0;
    *(_QWORD *)(v19 - 24) = v7;
    *(_BYTE *)(v19 + v7) = 0;
  }
  return this;
}
