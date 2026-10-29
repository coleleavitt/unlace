__int64 __fastcall sub_14E61D0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  _QWORD *v6; // rax
  __int64 v7; // r13
  int v8; // eax
  unsigned __int8 *v9; // rbx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  void *v12; // rdi
  void **v13; // rbp
  unsigned __int64 v14; // rax
  void **v15; // r12
  void **v16; // rbx
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // rbx
  void **v20; // r12
  __int64 result; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // r13
  void *v29; // rdi
  __m128i v30; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+10h] [rbp-A8h]
  _OWORD v32[2]; // [rsp+20h] [rbp-98h] BYREF
  void *v33; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-70h]
  __int64 v35; // [rsp+50h] [rbp-68h]
  void *v36; // [rsp+60h] [rbp-58h]
  _BYTE v37[16]; // [rsp+70h] [rbp-48h] BYREF
  __int16 v38; // [rsp+80h] [rbp-38h]

  v32[0] = _mm_load_si128((const __m128i *)&xmmword_23AA700);
  v32[1] = _mm_load_si128((const __m128i *)&xmmword_23AA710);
  if ( (unsigned __int8)sub_14E53D0(a1, v32, 8) )
  {
    switch ( *(_DWORD *)(a1 + 88) )
    {
      case ';':
        result = 0x100000000LL;
        break;
      case '<':
        result = 0x100000001LL;
        break;
      case '=':
        result = 0x100000002LL;
        break;
      case '>':
        result = 0x100000003LL;
        break;
      case '?':
        result = 0x100000004LL;
        break;
      case '@':
        result = 0x100000005LL;
        break;
      case 'A':
        result = 0x100000006LL;
        break;
      case 'B':
        result = 0x100000007LL;
        break;
    }
    return result;
  }
  sub_13DF9D0(&v30, a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v30);
  v5 = *(_DWORD *)(a1 + 92);
  *(_QWORD *)(a1 + 104) = v31;
  v6 = *(_QWORD **)(a1 + 80);
  v7 = v6[6];
  v8 = sub_C07A10(v4, v5, v6[11], v6[7], v6[8], nullptr, nullptr);
  sub_FC70B0((__int64)&v33, v7, v8, 1688);
  v9 = (unsigned __int8 *)v33;
  if ( !v33 )
  {
    v23 = v34;
    v24 = *(_DWORD *)(v34 + 14976);
    if ( v24 )
    {
      v25 = (unsigned int)(v24 - 1);
      *(_DWORD *)(v34 + 14976) = v25;
      v9 = *(unsigned __int8 **)(v23 + 8 * v25 + 14848);
      v26 = *((unsigned int *)v9 + 134);
      *v9 = 0;
      v27 = *((_QWORD *)v9 + 66);
      *((_DWORD *)v9 + 106) = 0;
      v28 = v27 + (v26 << 6);
      while ( v27 != v28 )
      {
        while ( 1 )
        {
          v28 -= 64;
          v29 = *(void **)(v28 + 24);
          if ( v29 == (void *)(v28 + 40) )
            break;
          operator delete(v29);
          if ( v27 == v28 )
            goto LABEL_45;
        }
      }
LABEL_45:
      *((_DWORD *)v9 + 134) = 0;
    }
    else
    {
      v9 = (unsigned __int8 *)operator new(0x3A0u);
      *v9 = 0;
      *((_QWORD *)v9 + 12) = v9 + 112;
      *((_QWORD *)v9 + 16) = v9 + 144;
      *((_QWORD *)v9 + 20) = v9 + 176;
      *((_QWORD *)v9 + 24) = v9 + 208;
      *((_QWORD *)v9 + 28) = v9 + 240;
      *((_QWORD *)v9 + 32) = v9 + 272;
      *((_QWORD *)v9 + 36) = v9 + 304;
      *((_QWORD *)v9 + 40) = v9 + 336;
      *((_QWORD *)v9 + 44) = v9 + 368;
      *((_QWORD *)v9 + 48) = v9 + 400;
      *((_QWORD *)v9 + 52) = v9 + 432;
      *((_QWORD *)v9 + 13) = 0;
      v9[112] = 0;
      *((_QWORD *)v9 + 17) = 0;
      v9[144] = 0;
      *((_QWORD *)v9 + 21) = 0;
      v9[176] = 0;
      *((_QWORD *)v9 + 25) = 0;
      v9[208] = 0;
      *((_QWORD *)v9 + 29) = 0;
      v9[240] = 0;
      *((_QWORD *)v9 + 33) = 0;
      v9[272] = 0;
      *((_QWORD *)v9 + 37) = 0;
      v9[304] = 0;
      *((_QWORD *)v9 + 41) = 0;
      v9[336] = 0;
      *((_QWORD *)v9 + 45) = 0;
      v9[368] = 0;
      *((_QWORD *)v9 + 49) = 0;
      v9[400] = 0;
      *((_QWORD *)v9 + 53) = 0x800000000LL;
      *((_QWORD *)v9 + 66) = v9 + 544;
      *((_QWORD *)v9 + 67) = 0x600000000LL;
    }
    v33 = v9;
  }
  v9[*v9 + 1] = 2;
  v10 = v33;
  v11 = *(unsigned __int8 *)v33;
  *(_BYTE *)v33 = v11 + 1;
  v10[v11 + 2] = 1;
  sub_14DC730(&v33, a2);
  if ( !(_BYTE)v38 )
  {
    v12 = v36;
    if ( v36 == v37 )
      goto LABEL_7;
    goto LABEL_6;
  }
  sub_FC7790(v35, (__int64 *)&v33, SHIBYTE(v38));
  v12 = v36;
  v35 = 0;
  v38 = 0;
  if ( v36 != v37 )
LABEL_6:
    operator delete(v12);
LABEL_7:
  v13 = (void **)v33;
  if ( v33 )
  {
    v14 = v34;
    if ( v34 )
    {
      if ( (unsigned __int64)v33 < v34 || (unsigned __int64)v33 > v34 + 14848 )
      {
        v15 = *((void ***)v33 + 66);
        v16 = &v15[8 * (unsigned __int64)*((unsigned int *)v33 + 134)];
        if ( v15 != v16 )
        {
          do
          {
            while ( 1 )
            {
              v16 -= 8;
              v17 = (void **)v16[3];
              if ( v17 == v16 + 5 )
                break;
              operator delete(v17);
              if ( v15 == v16 )
                goto LABEL_13;
            }
          }
          while ( v15 != v16 );
LABEL_13:
          v16 = (void **)v13[66];
        }
        if ( v16 != v13 + 68 )
          free(v16);
        v18 = (void **)v13[52];
        if ( v18 != v13 + 54 )
          free(v18);
        v19 = v13 + 48;
        v20 = v13 + 8;
        do
        {
          while ( *v19 != v19 + 2 )
          {
            operator delete(*v19);
            v19 -= 4;
            if ( v19 == v20 )
              goto LABEL_21;
          }
          v19 -= 4;
        }
        while ( v19 != v20 );
LABEL_21:
        operator delete(v13, 0x3A0u);
      }
      else
      {
        v22 = *(unsigned int *)(v34 + 14976);
        *(_DWORD *)(v34 + 14976) = v22 + 1;
        *(_QWORD *)(v14 + 8 * v22 + 14848) = v13;
      }
    }
  }
  return 0;
}
