__int64 *__fastcall sub_7227F0(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  int v8; // eax
  __int64 *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  char *v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // edi
  unsigned __int64 v15; // rdx
  char *v16; // rcx
  char *v17; // r9
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // ecx
  __int64 v21; // r8
  _OWORD *v23; // rax
  __m128i si128; // xmm0
  _BYTE *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i v28; // xmm0
  _BYTE *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  char *v32; // rcx
  char *v33; // r9
  unsigned int v34; // edi
  unsigned int v35; // edi
  unsigned int v36; // ecx
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  char *v39; // rcx
  char *v40; // r9
  unsigned int v41; // edi
  unsigned int v42; // edi
  unsigned int v43; // ecx
  __int64 v44; // r8
  int v45; // [rsp+8h] [rbp-40h]
  _BYTE *v46; // [rsp+10h] [rbp-38h] BYREF
  __int64 v47; // [rsp+18h] [rbp-30h]
  _BYTE v48[40]; // [rsp+20h] [rbp-28h] BYREF

  v7 = (unsigned __int8)~*(_BYTE *)(a2 + 30) & 0xF0;
  if ( (~*(_BYTE *)(a2 + 30) & 0xF0) != 0 )
  {
    v8 = *(_BYTE *)(a2 + 30) >> 4;
  }
  else
  {
    v45 = a3;
    v8 = sub_C4A760(a2);
    a3 = v45;
  }
  switch ( v8 )
  {
    case 2:
      *a1 = (__int64)(a1 + 2);
      v46 = (_BYTE *)&word_10;
      v23 = (_OWORD *)std::string::_M_create();
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E690);
      *a1 = (__int64)v23;
      a1[2] = 16;
      *v23 = si128;
      v25 = v46;
      v26 = *a1;
      a1[1] = (__int64)v46;
      v25[v26] = 0;
      return a1;
    case 1:
      if ( *(_DWORD *)(a2 + 36) == 5 )
      {
        sub_7223D0((__int64)&v46, a2, a3, v7, a5, a6);
      }
      else
      {
        v48[0] = 0;
        v46 = v48;
        v47 = 0;
      }
      v9 = (__int64 *)std::string::_M_replace();
      v10 = a1 + 2;
      *a1 = (__int64)(a1 + 2);
      v11 = *v9;
      v12 = (char *)(v9 + 2);
      if ( (__int64 *)*v9 == v9 + 2 )
      {
        v13 = v9[1];
        v14 = v13 + 1;
        if ( (unsigned int)(v13 + 1) >= 8 )
        {
          a1[2] = v9[2];
          *(_QWORD *)((char *)v10 + v14 - 8) = *(_QWORD *)&v12[v14 - 8];
          v38 = (unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v39 = (char *)v10 - v38;
          v40 = (char *)(v12 - v39);
          v41 = ((_DWORD)v39 + v14) & 0xFFFFFFF8;
          if ( v41 >= 8 )
          {
            v42 = v41 & 0xFFFFFFF8;
            v43 = 0;
            do
            {
              v44 = v43;
              v43 += 8;
              *(_QWORD *)(v38 + v44) = *(_QWORD *)&v40[v44];
            }
            while ( v43 < v42 );
          }
          goto LABEL_19;
        }
LABEL_33:
        if ( (v14 & 4) != 0 )
        {
          *((_DWORD *)a1 + 4) = *((_DWORD *)v9 + 4);
          *(_DWORD *)((char *)v10 + v14 - 4) = *(_DWORD *)&v12[v14 - 4];
          v13 = v9[1];
          goto LABEL_20;
        }
        if ( !v14 )
        {
LABEL_20:
          a1[1] = v13;
          *v9 = (__int64)v12;
          v9[1] = 0;
          *((_BYTE *)v9 + 16) = 0;
          std::string::_M_dispose();
          return a1;
        }
        *((_BYTE *)a1 + 16) = *((_BYTE *)v9 + 16);
        if ( (v14 & 2) != 0 )
        {
          *(_WORD *)((char *)v10 + v14 - 2) = *(_WORD *)&v12[v14 - 2];
          v13 = v9[1];
          goto LABEL_20;
        }
LABEL_19:
        v13 = v9[1];
        goto LABEL_20;
      }
LABEL_18:
      *a1 = v11;
      a1[2] = v9[2];
      goto LABEL_19;
    case 4:
      *a1 = (__int64)(a1 + 2);
      v46 = (_BYTE *)&qword_18;
      v27 = std::string::_M_create();
      v28 = _mm_load_si128((const __m128i *)&xmmword_3C7E690);
      *a1 = v27;
      a1[2] = 24;
      *(_QWORD *)(v27 + 16) = 0x6D616A5F646E615FLL;
      *(__m128i *)v27 = v28;
      v29 = v46;
      v30 = *a1;
      a1[1] = (__int64)v46;
      v29[v30] = 0;
      return a1;
    case 3:
      if ( *(_DWORD *)(a2 + 36) == 7 )
      {
        sub_7223D0((__int64)&v46, a2, a3, v7, a5, a6);
      }
      else
      {
        v48[0] = 0;
        v46 = v48;
        v47 = 0;
      }
      v9 = (__int64 *)std::string::_M_replace();
      v10 = a1 + 2;
      *a1 = (__int64)(a1 + 2);
      v11 = *v9;
      v12 = (char *)(v9 + 2);
      if ( (__int64 *)*v9 == v9 + 2 )
      {
        v13 = v9[1];
        v14 = v13 + 1;
        if ( (unsigned int)(v13 + 1) >= 8 )
        {
          a1[2] = v9[2];
          *(_QWORD *)((char *)v10 + v14 - 8) = *(_QWORD *)&v12[v14 - 8];
          v15 = (unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v16 = (char *)v10 - v15;
          v17 = (char *)(v12 - v16);
          v18 = ((_DWORD)v16 + v14) & 0xFFFFFFF8;
          if ( v18 >= 8 )
          {
            v19 = v18 & 0xFFFFFFF8;
            v20 = 0;
            do
            {
              v21 = v20;
              v20 += 8;
              *(_QWORD *)(v15 + v21) = *(_QWORD *)&v17[v21];
            }
            while ( v20 < v19 );
          }
          goto LABEL_19;
        }
        goto LABEL_33;
      }
      goto LABEL_18;
    default:
      sub_7223D0((__int64)&v46, a2, a3, v7, a5, a6);
      switch ( *(_DWORD *)(a2 + 36) )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
          v9 = (__int64 *)std::string::_M_replace();
          v10 = a1 + 2;
          *a1 = (__int64)(a1 + 2);
          v11 = *v9;
          v12 = (char *)(v9 + 2);
          if ( (__int64 *)*v9 != v9 + 2 )
            goto LABEL_18;
          v13 = v9[1];
          v14 = v13 + 1;
          if ( (unsigned int)(v13 + 1) < 8 )
            goto LABEL_33;
          a1[2] = v9[2];
          *(_QWORD *)((char *)v10 + v14 - 8) = *(_QWORD *)&v12[v14 - 8];
          v31 = (unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v32 = (char *)v10 - v31;
          v33 = (char *)(v12 - v32);
          v34 = ((_DWORD)v32 + v14) & 0xFFFFFFF8;
          if ( v34 >= 8 )
          {
            v35 = v34 & 0xFFFFFFF8;
            v36 = 0;
            do
            {
              v37 = v36;
              v36 += 8;
              *(_QWORD *)(v31 + v37) = *(_QWORD *)&v33[v37];
            }
            while ( v36 < v35 );
          }
          break;
      }
      goto LABEL_19;
  }
}

