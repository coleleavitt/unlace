void __fastcall sub_9EE560(unsigned __int16 **a1, __int64 a2)
{
  unsigned __int16 *v4; // rax
  unsigned __int8 v5; // dl
  int v6; // ecx
  int v7; // edx
  unsigned __int16 *v8; // r15
  __int16 v9; // dx
  __int64 v10; // rdx
  int v11; // r12d
  _QWORD *v12; // rdi
  char v13; // dl
  char v14; // dl
  char v15; // dl
  char v16; // dl
  char v17; // dl
  char v18; // dl
  char v19; // dl
  char v20; // dl
  __int64 v21; // r15
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r12
  _BYTE *v24; // rcx
  __int64 v25; // rdx
  unsigned __int16 *v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  _BYTE *v29; // rdx
  _BYTE *v30; // rax
  unsigned __int16 *v31; // rsi
  __int64 v32; // r12
  __int64 v33; // rdx
  unsigned __int64 v34; // [rsp+18h] [rbp-C0h] BYREF
  void *v35; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+28h] [rbp-B0h]
  _QWORD v37[2]; // [rsp+30h] [rbp-A8h] BYREF
  char v38; // [rsp+40h] [rbp-98h]
  char *v39; // [rsp+48h] [rbp-90h]
  __int64 v40; // [rsp+50h] [rbp-88h]
  char v41; // [rsp+58h] [rbp-80h] BYREF
  char v42; // [rsp+68h] [rbp-70h]
  char *v43; // [rsp+70h] [rbp-68h]
  __int64 v44; // [rsp+78h] [rbp-60h]
  char v45; // [rsp+80h] [rbp-58h] BYREF
  char v46; // [rsp+90h] [rbp-48h]

  sub_9E6EF0(a1, a2);
  v4 = *a1;
  v5 = *(_BYTE *)*a1;
  *a1 = (unsigned __int16 *)((char *)*a1 + 1);
  v6 = v5;
  v7 = v5 & 7;
  if ( v7 )
    *(_BYTE *)(a2 + 73) = *(_BYTE *)(a2 + 73) & 0xF1 | (2 * v7);
  v8 = v4 + 6;
  *(_BYTE *)(a2 + 72) = (v6 >> 3) & 1 | *(_BYTE *)(a2 + 72) & 0xFE;
  v9 = *((unsigned __int8 *)v4 + 1);
  *a1 = v4 + 1;
  *(_WORD *)(a2 + 72) = (2 * v9) | *(_WORD *)(a2 + 72) & 0xFE01;
  v10 = *(_QWORD *)(v4 + 1);
  *a1 = v4 + 5;
  *(_QWORD *)(a2 + 80) = v10;
  v11 = v4[5];
  *a1 = v4 + 6;
  if ( v11 )
  {
    do
    {
      v35 = v37;
      v39 = &v41;
      v36 = 0;
      LOBYTE(v37[0]) = 0;
      v38 &= 0xF0u;
      v40 = 0;
      v41 = 0;
      v42 &= 0xF8u;
      v43 = &v45;
      v44 = 0;
      v45 = 0;
      v46 &= 0x80u;
      sub_9E8490(a1, (__int64)&v35);
      v21 = *(_QWORD *)(a2 + 160);
      if ( v21 == *(_QWORD *)(a2 + 168) )
      {
        sub_9EE000((char **)(a2 + 152), *(char **)(a2 + 160), (__int64)&v35);
      }
      else
      {
        v12 = *(_QWORD **)(a2 + 160);
        *(_QWORD *)v21 = v21 + 16;
        sub_9E5DA0(v12, v35, (__int64)v35 + v36);
        v13 = v38 & 1 | *(_BYTE *)(v21 + 32) & 0xFE;
        *(_BYTE *)(v21 + 32) = v13;
        v14 = v38 & 2 | v13 & 0xFD;
        *(_BYTE *)(v21 + 32) = v14;
        v15 = v38 & 4 | v14 & 0xFB;
        *(_BYTE *)(v21 + 32) = v15;
        *(_BYTE *)(v21 + 32) = v38 & 8 | v15 & 0xF7;
        *(_QWORD *)(v21 + 40) = v21 + 56;
        sub_9E5DA0((_QWORD *)(v21 + 40), v39, (__int64)&v39[v40]);
        v16 = v42 & 1 | *(_BYTE *)(v21 + 72) & 0xFE;
        *(_BYTE *)(v21 + 72) = v16;
        *(_BYTE *)(v21 + 72) = v42 & 6 | v16 & 0xF9;
        *(_QWORD *)(v21 + 80) = v21 + 96;
        sub_9E5DA0((_QWORD *)(v21 + 80), v43, (__int64)&v43[v44]);
        v17 = v46 & 1 | *(_BYTE *)(v21 + 112) & 0xFE;
        *(_BYTE *)(v21 + 112) = v17;
        v18 = v46 & 2 | v17 & 0xFD;
        *(_BYTE *)(v21 + 112) = v18;
        v19 = v46 & 4 | v18 & 0xFB;
        *(_BYTE *)(v21 + 112) = v19;
        v20 = v46 & 8 | v19 & 0xF7;
        *(_BYTE *)(v21 + 112) = v20;
        *(_BYTE *)(v21 + 112) = v46 & 0x70 | v20 & 0x8F;
        *(_QWORD *)(a2 + 160) += 120LL;
      }
      --v11;
      sub_9E5FA0((__int64)&v35);
    }
    while ( v11 );
    v8 = *a1;
  }
  v22 = *v8;
  v23 = (unsigned __int64)(v8 + 1);
  *a1 = v8 + 1;
  v24 = (char *)v8 + v22 + 2;
  v35 = v37;
  if ( v8 == (unsigned __int16 *)-2LL && v24 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v34 = v22;
  v25 = v22;
  v26 = (unsigned __int16 *)v37;
  if ( v22 > 0xF )
  {
    v26 = (unsigned __int16 *)sub_9E5C90((__int64 *)&v34, 0);
    v25 = v34;
    v24 = (char *)v8 + v22 + 2;
    v35 = v26;
    v37[0] = v34;
  }
  if ( v24 != (_BYTE *)v23 )
  {
    if ( (v26 >= v8 + 9 || v23 >= (unsigned __int64)(v26 + 8)) && (unsigned __int64)(v24 - (_BYTE *)v8 - 3) > 0xE )
    {
      v27 = v24 - (_BYTE *)v8 - 2;
      v28 = 0;
      do
      {
        *(__m128i *)&v26[v28 / 2] = _mm_loadu_si128((const __m128i *)&v8[v28 / 2 + 1]);
        v28 += 16LL;
      }
      while ( v28 != ((v24 - (_BYTE *)v8 - 2) & 0xFFFFFFFFFFFFFFF0LL) );
      v29 = (_BYTE *)(v23 + (v27 & 0xFFFFFFFFFFFFFFF0LL));
      v30 = (char *)v26 + (v27 & 0xFFFFFFFFFFFFFFF0LL);
      if ( v27 != (v27 & 0xFFFFFFFFFFFFFFF0LL) )
      {
        *v30 = *v29;
        if ( v24 != v29 + 1 )
        {
          v30[1] = v29[1];
          if ( v24 != v29 + 2 )
          {
            v30[2] = v29[2];
            if ( v24 != v29 + 3 )
            {
              v30[3] = v29[3];
              if ( v24 != v29 + 4 )
              {
                v30[4] = v29[4];
                if ( v24 != v29 + 5 )
                {
                  v30[5] = v29[5];
                  if ( v24 != v29 + 6 )
                  {
                    v30[6] = v29[6];
                    if ( v24 != v29 + 7 )
                    {
                      v30[7] = v29[7];
                      if ( v24 != v29 + 8 )
                      {
                        v30[8] = v29[8];
                        if ( v24 != v29 + 9 )
                        {
                          v30[9] = v29[9];
                          if ( v24 != v29 + 10 )
                          {
                            v30[10] = v29[10];
                            if ( v24 != v29 + 11 )
                            {
                              v30[11] = v29[11];
                              if ( v24 != v29 + 12 )
                              {
                                v30[12] = v29[12];
                                if ( v24 != v29 + 13 )
                                {
                                  v30[13] = v29[13];
                                  if ( v24 != v29 + 14 )
                                    v30[14] = v29[14];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v33 = 0;
      do
      {
        *((_BYTE *)v26 + v33) = *((_BYTE *)v8 + v33 + 2);
        ++v33;
      }
      while ( v33 != v24 - (_BYTE *)v8 - 2 );
    }
    v25 = v34;
    v26 = (unsigned __int16 *)v35;
  }
  v36 = v25;
  *((_BYTE *)v26 + v25) = 0;
  sub_9E6D90(a2 + 88, &v35);
  if ( v35 != v37 )
    operator delete(v35);
  v31 = (unsigned __int16 *)((char *)*a1 + v22);
  *a1 = v31++;
  v32 = *(v31 - 1);
  *a1 = v31;
  v35 = v37;
  sub_9E5D00(&v35, v31, (__int64)v31 + v32);
  sub_9E6D90(a2 + 120, &v35);
  if ( v35 != v37 )
    operator delete(v35);
  *a1 = (unsigned __int16 *)((char *)*a1 + v32);
}

