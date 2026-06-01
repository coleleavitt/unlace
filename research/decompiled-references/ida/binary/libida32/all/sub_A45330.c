__int64 __fastcall sub_A45330(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // dx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int16 v7; // ax
  unsigned int v8; // r15d
  __int64 v9; // rax
  unsigned __int8 *v10; // rbx
  _BYTE *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rbp
  void *v14; // rdi
  __int64 v15; // rax
  void **v16; // rbp
  _QWORD *v17; // rax
  void **v18; // r12
  void **v19; // rbx
  void **v20; // rdi
  void **v21; // rdi
  void **v22; // rbx
  void **v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // r14
  void *v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-B0h]
  void *v34[2]; // [rsp+8h] [rbp-A8h] BYREF
  __m128i v35; // [rsp+18h] [rbp-98h] BYREF
  void *v36; // [rsp+28h] [rbp-88h] BYREF
  void *v37; // [rsp+30h] [rbp-80h]
  void *v38; // [rsp+38h] [rbp-78h]
  void *v39[2]; // [rsp+40h] [rbp-70h] BYREF
  __int64 v40; // [rsp+58h] [rbp-58h] BYREF
  __int16 v41; // [rsp+68h] [rbp-48h]

  v2 = (*(_WORD *)(a2 + 18) >> 3) & 0x1FF;
  if ( v2 == 447 )
    return 84;
  if ( v2 <= 0x1BFu )
  {
    if ( v2 > 0x1B6u )
    {
      if ( v2 != 442 )
      {
        if ( v2 <= 0x1BAu )
        {
          result = 67;
          if ( v2 != 440 )
            return v2 < 0x1B9u ? 105 : 83;
          return result;
        }
        if ( v2 != 444 )
        {
          if ( v2 < 0x1BCu )
            return 83;
          if ( v2 != 445 )
            return 81;
          v4 = *(_QWORD *)(a1 + 17448);
          LOBYTE(v4) = *(_BYTE *)(v4 + 30) != 32;
          return (unsigned int)(5 * v4 + 76);
        }
      }
      return 73;
    }
    if ( v2 >= 0x1B5u )
      return 67;
    if ( v2 <= 0x1B1u )
    {
      if ( v2 >= 0x6Cu || ((v2 + 464) & 0x1FFu) <= 0x38 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 8LL);
        v6 = *(_QWORD *)(v5 + 32);
        v34[0] = &v35;
        sub_A33D30(v34, "cannot yet @encode type %0", (__int64)"");
        HIDWORD(v36) = 0;
        HIBYTE(v7) = BYTE1(v36) & 0xFE;
        LOBYTE(v7) = -20;
        LOWORD(v36) = v7;
        v37 = v39;
        if ( v34[0] == &v35 )
        {
          *(__m128i *)v39 = _mm_load_si128(&v35);
        }
        else
        {
          v37 = v34[0];
          v39[0] = (void *)v35.m128i_i64[0];
        }
        v38 = v34[1];
        v8 = sub_FB1C40(v6, &v36);
        if ( v37 != v39 )
          operator delete(v37);
        sub_FA3370(&v36, v5, 0, v8);
        v9 = sub_F350B0(a2, a1 + 17464);
        v10 = (unsigned __int8 *)v36;
        v11 = (_BYTE *)v9;
        v13 = v12;
        if ( !v36 )
        {
          v26 = v37;
          v27 = *((_DWORD *)v37 + 3744);
          if ( v27 )
          {
            v28 = (unsigned int)(v27 - 1);
            *((_DWORD *)v37 + 3744) = v28;
            v10 = (unsigned __int8 *)v26[v28 + 1856];
            v29 = *((unsigned int *)v10 + 134);
            *v10 = 0;
            v30 = *((_QWORD *)v10 + 66);
            *((_DWORD *)v10 + 106) = 0;
            v31 = v30 + (v29 << 6);
            while ( v30 != v31 )
            {
              while ( 1 )
              {
                v31 -= 64;
                v32 = *(void **)(v31 + 24);
                if ( v32 == (void *)(v31 + 40) )
                  break;
                v33 = v30;
                operator delete(v32);
                v30 = v33;
                if ( v33 == v31 )
                  goto LABEL_84;
              }
            }
LABEL_84:
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
          v36 = v10;
        }
        v10[*v10 + 1] = 0;
        v34[0] = &v35;
        sub_A33D30(v34, v11, (__int64)&v11[v13]);
        v14 = v36;
        v15 = *(unsigned __int8 *)v36;
        *(_BYTE *)v36 = v15 + 1;
        sub_9E6D90((__int64)v14 + 32 * v15 + 96, v34);
        if ( v34[0] != &v35 )
          operator delete(v34[0]);
        if ( (_BYTE)v41 )
        {
          sub_FA3A50(v38, &v36, HIBYTE(v41));
          v38 = nullptr;
          v41 = 0;
        }
        if ( v39[1] != &v40 )
          operator delete(v39[1]);
        v16 = (void **)v36;
        if ( v36 )
        {
          v17 = v37;
          if ( v37 )
          {
            if ( v36 < v37 || v36 > (char *)v37 + 14848 )
            {
              v18 = *((void ***)v36 + 66);
              v19 = &v18[8 * (unsigned __int64)*((unsigned int *)v36 + 134)];
              if ( v18 != v19 )
              {
                do
                {
                  while ( 1 )
                  {
                    v19 -= 8;
                    v20 = (void **)v19[3];
                    if ( v20 == v19 + 5 )
                      break;
                    operator delete(v20);
                    if ( v18 == v19 )
                      goto LABEL_51;
                  }
                }
                while ( v18 != v19 );
LABEL_51:
                v19 = (void **)v16[66];
              }
              if ( v19 != v16 + 68 )
                free(v19);
              v21 = (void **)v16[52];
              v22 = v16 + 52;
              if ( v21 != v16 + 54 )
                free(v21);
              v23 = v16 + 12;
              do
              {
                while ( 1 )
                {
                  v22 -= 4;
                  if ( *v22 == v22 + 2 )
                    break;
                  operator delete(*v22);
                  if ( v23 == v22 )
                    goto LABEL_59;
                }
              }
              while ( v23 != v22 );
LABEL_59:
              operator delete(v16, 0x3A0u);
            }
            else
            {
              v25 = *((unsigned int *)v37 + 3744);
              *((_DWORD *)v37 + 3744) = v25 + 1;
              v17[v25 + 1856] = v16;
            }
          }
        }
        return 32;
      }
    }
    else
    {
      if ( v2 == 435 )
        return 118;
      if ( v2 == 436 )
        return 66;
    }
    return sub_A45A20();
  }
  if ( v2 == 455 )
    return 116;
  if ( v2 > 0x1C7u )
  {
    if ( v2 == 482 )
      return 100;
    if ( v2 <= 0x1E2u )
      return v2 < 0x1E1u ? 32 : 102;
    if ( v2 <= 0x1E7u )
      return v2 < 0x1E4u ? 68 : 32;
    if ( v2 == 488 )
      return 42;
    return sub_A45A20();
  }
  result = 115;
  if ( v2 != 451 )
  {
    if ( v2 <= 0x1C3u )
    {
      return v2 < 0x1C2u ? 99 : 105;
    }
    else if ( v2 == 453 )
    {
      v24 = *(_QWORD *)(a1 + 17448);
      LOBYTE(v24) = *(_BYTE *)(v24 + 30) != 32;
      return (unsigned int)(5 * v24 + 108);
    }
    else
    {
      return v2 < 0x1C6u ? 105 : 113;
    }
  }
  return result;
}

