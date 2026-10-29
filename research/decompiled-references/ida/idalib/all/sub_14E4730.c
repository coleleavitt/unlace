__int64 __fastcall sub_14E4730(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v6; // esi
  _QWORD *v7; // rax
  __int64 v8; // r13
  int v9; // eax
  unsigned __int8 *v10; // rbx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  void *v13; // rdi
  void **v14; // rbp
  unsigned __int64 v15; // rax
  void **v16; // r12
  void **v17; // rbx
  void **v18; // rdi
  void **v19; // rdi
  void **v20; // rbx
  void **v21; // r12
  __int32 v23; // eax
  char v24; // al
  unsigned __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // r13
  void *v31; // rdi
  __int64 v32; // rdx
  __m128i v33; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+10h] [rbp-A8h]
  __m128i si128; // [rsp+20h] [rbp-98h] BYREF
  int v36; // [rsp+30h] [rbp-88h]
  void *v37; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-70h]
  __int64 v39; // [rsp+50h] [rbp-68h]
  void *v40; // [rsp+60h] [rbp-58h]
  _BYTE v41[16]; // [rsp+70h] [rbp-48h] BYREF
  __int16 v42; // [rsp+80h] [rbp-38h]

  v36 = 107;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA650);
  v4 = a1 + 24;
  if ( sub_14E3360(a1, &si128, 5) )
  {
    sub_13DF9D0(&v33, v4);
    v23 = v33.m128i_i32[0];
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v33);
    *(_QWORD *)(a1 + 104) = v34;
    switch ( v23 )
    {
      case 'g':
        v24 = 1;
        break;
      case 'h':
        v24 = 2;
        break;
      case 'i':
        v24 = 3;
        break;
      case 'j':
        v24 = 4;
        break;
      case 'k':
        v24 = 5;
        break;
    }
    return v24 & 7 | 0x100000000LL;
  }
  sub_13DF9D0(&v33, v4);
  v5 = *(_QWORD *)(a1 + 16);
  *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v33);
  v6 = *(_DWORD *)(a1 + 92);
  *(_QWORD *)(a1 + 104) = v34;
  v7 = *(_QWORD **)(a1 + 80);
  v8 = v7[6];
  v9 = sub_C07A10(v5, v6, v7[11], v7[7], v7[8], nullptr, nullptr);
  sub_FC70B0((__int64)&v37, v8, v9, 1688);
  v10 = (unsigned __int8 *)v37;
  if ( !v37 )
  {
    v25 = v38;
    v26 = *(_DWORD *)(v38 + 14976);
    if ( v26 )
    {
      v27 = (unsigned int)(v26 - 1);
      *(_DWORD *)(v38 + 14976) = v27;
      v10 = *(unsigned __int8 **)(v25 + 8 * v27 + 14848);
      v28 = *((unsigned int *)v10 + 134);
      *v10 = 0;
      v29 = *((_QWORD *)v10 + 66);
      *((_DWORD *)v10 + 106) = 0;
      v30 = v29 + (v28 << 6);
      while ( v29 != v30 )
      {
        while ( 1 )
        {
          v30 -= 64;
          v31 = *(void **)(v30 + 24);
          if ( v31 == (void *)(v30 + 40) )
            break;
          operator delete(v31);
          if ( v29 == v30 )
            goto LABEL_36;
        }
      }
LABEL_36:
      *((_DWORD *)v10 + 134) = 0;
    }
    else
    {
      v10 = (unsigned __int8 *)operator new(0x3A0u);
      *v10 = 0;
      *((_QWORD *)v10 + 12) = v10 + 112;
      *((_QWORD *)v10 + 16) = v10 + 144;
      *((_QWORD *)v10 + 20) = v10 + 176;
      *((_QWORD *)v10 + 24) = v10 + 208;
      *((_QWORD *)v10 + 28) = v10 + 240;
      *((_QWORD *)v10 + 32) = v10 + 272;
      *((_QWORD *)v10 + 36) = v10 + 304;
      *((_QWORD *)v10 + 40) = v10 + 336;
      *((_QWORD *)v10 + 44) = v10 + 368;
      *((_QWORD *)v10 + 48) = v10 + 400;
      *((_QWORD *)v10 + 52) = v10 + 432;
      *((_QWORD *)v10 + 13) = 0;
      v10[112] = 0;
      *((_QWORD *)v10 + 17) = 0;
      v10[144] = 0;
      *((_QWORD *)v10 + 21) = 0;
      v10[176] = 0;
      *((_QWORD *)v10 + 25) = 0;
      v10[208] = 0;
      *((_QWORD *)v10 + 29) = 0;
      v10[240] = 0;
      *((_QWORD *)v10 + 33) = 0;
      v10[272] = 0;
      *((_QWORD *)v10 + 37) = 0;
      v10[304] = 0;
      *((_QWORD *)v10 + 41) = 0;
      v10[336] = 0;
      *((_QWORD *)v10 + 45) = 0;
      v10[368] = 0;
      *((_QWORD *)v10 + 49) = 0;
      v10[400] = 0;
      *((_QWORD *)v10 + 53) = 0x800000000LL;
      *((_QWORD *)v10 + 66) = v10 + 544;
      *((_QWORD *)v10 + 67) = 0x600000000LL;
    }
    v37 = v10;
  }
  v10[*v10 + 1] = 2;
  v11 = v37;
  v12 = *(unsigned __int8 *)v37;
  *(_BYTE *)v37 = v12 + 1;
  v11[v12 + 2] = 1;
  sub_14DC730(&v37, a2);
  if ( !(_BYTE)v42 )
  {
    v13 = v40;
    if ( v40 == v41 )
      goto LABEL_6;
    goto LABEL_5;
  }
  sub_FC7790(v39, (__int64 *)&v37, SHIBYTE(v42));
  v13 = v40;
  v39 = 0;
  v42 = 0;
  if ( v40 != v41 )
LABEL_5:
    operator delete(v13);
LABEL_6:
  v14 = (void **)v37;
  if ( v37 )
  {
    v15 = v38;
    if ( v38 )
    {
      if ( (unsigned __int64)v37 < v38 || (unsigned __int64)v37 > v38 + 14848 )
      {
        v16 = *((void ***)v37 + 66);
        v17 = &v16[8 * (unsigned __int64)*((unsigned int *)v37 + 134)];
        if ( v16 != v17 )
        {
          do
          {
            while ( 1 )
            {
              v17 -= 8;
              v18 = (void **)v17[3];
              if ( v18 == v17 + 5 )
                break;
              operator delete(v18);
              if ( v16 == v17 )
                goto LABEL_12;
            }
          }
          while ( v16 != v17 );
LABEL_12:
          v17 = (void **)v14[66];
        }
        if ( v17 != v14 + 68 )
          free(v17);
        v19 = (void **)v14[52];
        if ( v19 != v14 + 54 )
          free(v19);
        v20 = v14 + 48;
        v21 = v14 + 8;
        do
        {
          while ( *v20 != v20 + 2 )
          {
            operator delete(*v20);
            v20 -= 4;
            if ( v20 == v21 )
              goto LABEL_20;
          }
          v20 -= 4;
        }
        while ( v20 != v21 );
LABEL_20:
        operator delete(v14, 0x3A0u);
      }
      else
      {
        v32 = *(unsigned int *)(v38 + 14976);
        *(_DWORD *)(v38 + 14976) = v32 + 1;
        *(_QWORD *)(v15 + 8 * v32 + 14848) = v14;
      }
    }
  }
  return 0;
}
