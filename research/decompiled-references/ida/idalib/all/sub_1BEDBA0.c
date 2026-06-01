void __fastcall sub_1BEDBA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 a8,
        char a9,
        char a10)
{
  __int64 v10; // r10
  char v12; // al
  __int64 v13; // r15
  int v14; // eax
  int v15; // edx
  int v16; // r15d
  _QWORD *v17; // r13
  _QWORD *v18; // r12
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rax
  _QWORD *v21; // r15
  _QWORD *v22; // rbp
  _QWORD *v23; // rdi
  void *v24; // rdi
  void **v25; // rbp
  void **v26; // r15
  __int64 v27; // rdx
  __m128i *v28; // rbp
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned __int64 v33; // [rsp+8h] [rbp-290h]
  __m128i v34; // [rsp+20h] [rbp-278h] BYREF
  __m128i v35; // [rsp+30h] [rbp-268h] BYREF
  __m128i v36; // [rsp+40h] [rbp-258h] BYREF
  __int64 v37; // [rsp+58h] [rbp-240h] BYREF
  __int128 v38; // [rsp+60h] [rbp-238h] BYREF
  int v39; // [rsp+70h] [rbp-228h]
  __int16 v40; // [rsp+74h] [rbp-224h]
  __int64 v41; // [rsp+78h] [rbp-220h]
  _QWORD *v42; // [rsp+80h] [rbp-218h]
  __int64 v43; // [rsp+88h] [rbp-210h]
  _QWORD v44[17]; // [rsp+90h] [rbp-208h] BYREF
  __int64 v45; // [rsp+118h] [rbp-180h]
  __int64 v46; // [rsp+120h] [rbp-178h]
  __int64 v47; // [rsp+130h] [rbp-168h]
  __int64 v48; // [rsp+138h] [rbp-160h]
  int v49; // [rsp+148h] [rbp-150h]
  char v50; // [rsp+14Ch] [rbp-14Ch]
  void *v51; // [rsp+150h] [rbp-148h]
  __int64 v52; // [rsp+158h] [rbp-140h]
  _QWORD v53[10]; // [rsp+160h] [rbp-138h] BYREF
  void *v54; // [rsp+1B0h] [rbp-E8h]
  __int64 v55; // [rsp+1B8h] [rbp-E0h]
  _WORD v56[52]; // [rsp+1C0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+228h] [rbp-70h]
  __int64 v58; // [rsp+230h] [rbp-68h]
  _BYTE v59[96]; // [rsp+238h] [rbp-60h] BYREF

  v10 = a6;
  if ( !a9 && (v12 = sub_B97670(*(_QWORD *)(a3 + 48)), v10 = a6, (v12 & 3) == 1) )
  {
    v29 = sub_1BD9C70(a2, 0, 0, 0);
    *(_QWORD *)(v29 + 8) = a4;
    *(_QWORD *)v29 = *(_QWORD *)(a3 + 48);
    v30 = *(_DWORD *)(v29 + 104) & 0xFFFC03FE;
    BYTE1(v30) |= 0x28u;
    *(_DWORD *)(v29 + 104) = v30;
  }
  else
  {
    v33 = v10;
    v13 = *(_QWORD *)(v10 + 8);
    v14 = sub_C0EB40(v10, *(_QWORD *)(a1 + 248), nullptr, a4, a5);
    v15 = *(_DWORD *)(a2 + 2968);
    v51 = v53;
    v39 = v15;
    v40 = 0;
    v54 = v56;
    v42 = v44;
    v56[48] = 0;
    v45 &= 0xFFFFFFFE00000000LL;
    v47 &= 0xFFFFFFFE00000000LL;
    v43 = 0x400000000LL;
    v52 = 0x800000000LL;
    v55 = 0x400000000LL;
    ptr = v59;
    v58 = 0x400000000LL;
    v38 = 0;
    v41 = 0;
    v44[16] = 0;
    v46 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v53[8] = 0;
    v53[9] = 0;
    v37 = 0;
    v16 = sub_1D7B6F0(a1, a3, v13, v14, a7, (unsigned int)&v37, (__int64)&v38);
    if ( v16 )
    {
      v28 = (__m128i *)sub_1BD9C70(a2, 0, 0, 0);
      v28->m128i_i64[1] = a4;
      v28->m128i_i64[0] = *(_QWORD *)(a3 + 48);
      v28[6].m128i_i64[1] = v28[6].m128i_i64[1] & 0xFFFC03FELL | 0x100000C00LL;
      sub_1BD97A0((__int64)&v34, *(_QWORD *)(a1 + 248), v16, (__int64 *)&v38);
      v28[7] = _mm_loadu_si128(&v34);
      v28[8] = _mm_loadu_si128(&v35);
      v28[9] = _mm_loadu_si128(&v36);
      sub_19A2E00((__int64)&v38);
    }
    else
    {
      sub_1BECF20(a1, v37, a4, v33, a7, a2, a8, a9, a10, SHIBYTE(v40));
      if ( ptr != v59 )
        free(ptr);
      if ( v54 != v56 )
        free(v54);
      if ( v51 != v53 )
        free(v51);
      v17 = v42;
      v18 = &v42[4 * (unsigned int)v43];
      if ( v42 != v18 )
      {
        do
        {
          v18 -= 4;
          v19 = v18[1];
          if ( v19 )
          {
            v20 = v18[2];
            if ( v20 )
            {
              if ( v19 < v20 || v19 > v20 + 14848 )
              {
                v21 = *(_QWORD **)(v19 + 528);
                v22 = &v21[8 * (unsigned __int64)*(unsigned int *)(v19 + 536)];
                if ( v21 != v22 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v22 -= 8;
                      v23 = (_QWORD *)v22[3];
                      if ( v23 == v22 + 5 )
                        break;
                      operator delete(v23);
                      if ( v21 == v22 )
                        goto LABEL_17;
                    }
                  }
                  while ( v21 != v22 );
LABEL_17:
                  v22 = *(_QWORD **)(v19 + 528);
                }
                if ( v22 != (_QWORD *)(v19 + 544) )
                  free(v22);
                v24 = *(void **)(v19 + 416);
                if ( v24 != (void *)(v19 + 432) )
                  free(v24);
                v25 = (void **)(v19 + 384);
                v26 = (void **)(v19 + 64);
                do
                {
                  while ( *v25 != v25 + 2 )
                  {
                    operator delete(*v25);
                    v25 -= 4;
                    if ( v26 == v25 )
                      goto LABEL_25;
                  }
                  v25 -= 4;
                }
                while ( v25 != v26 );
LABEL_25:
                operator delete((void *)v19, 0x3A0u);
              }
              else
              {
                v27 = *(unsigned int *)(v20 + 14976);
                *(_DWORD *)(v20 + 14976) = v27 + 1;
                *(_QWORD *)(v20 + 8 * v27 + 14848) = v19;
              }
            }
          }
        }
        while ( v17 != v18 );
        v18 = v42;
      }
      if ( v18 != v44 )
        free(v18);
    }
  }
}
