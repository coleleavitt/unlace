void __fastcall sub_188E070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  unsigned int v7; // ebp
  __int64 v8; // rax
  __m128 *v9; // rsi
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  bool v21; // sf
  __int64 (__fastcall *v22)(__int64); // rax
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 (__fastcall *v27)(__int64); // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rbp
  __m128 v31; // xmm0
  unsigned int *v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // edx
  signed __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r15
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // [rsp+8h] [rbp-1E0h]
  __int64 v41; // [rsp+18h] [rbp-1D0h] BYREF
  unsigned int *v42; // [rsp+20h] [rbp-1C8h]
  signed __int64 v43; // [rsp+28h] [rbp-1C0h]
  _BYTE v44[64]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v45; // [rsp+70h] [rbp-178h] BYREF
  int v46; // [rsp+78h] [rbp-170h]
  void *v47; // [rsp+80h] [rbp-168h]
  __int64 v48; // [rsp+88h] [rbp-160h]
  int v49; // [rsp+90h] [rbp-158h]
  char v50; // [rsp+94h] [rbp-154h]
  __int64 v51; // [rsp+98h] [rbp-150h] BYREF
  void *ptr; // [rsp+B8h] [rbp-130h]
  __int64 v53; // [rsp+C0h] [rbp-128h]
  _BYTE v54[40]; // [rsp+C8h] [rbp-120h] BYREF
  __m128 v55; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v56; // [rsp+100h] [rbp-E8h]
  __int128 v57; // [rsp+108h] [rbp-E0h] BYREF
  __int64 v58; // [rsp+118h] [rbp-D0h]
  _QWORD v59[16]; // [rsp+120h] [rbp-C8h] BYREF
  int v60; // [rsp+1A0h] [rbp-48h]
  int v61; // [rsp+1A4h] [rbp-44h]

  v7 = a2;
  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 26 )
    v8 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  if ( ((*(_BYTE *)(v8 + 19) >> 1) & 0xF) == 9 )
  {
    v9 = (__m128 *)a3;
    v10 = sub_183C740(a1, (_DWORD *)a3);
    if ( (_BYTE)v10 == 6 )
    {
      v15 = HIBYTE(v10);
      if ( HIBYTE(v10) )
      {
        v57 = 0u;
        v55.m128_i16[2] = 0;
        LODWORD(v58) = 0;
        v59[0] = 0;
        v59[1] = 0;
        v55.m128_i32[0] = 8;
        v55.m128_i32[2] = v7;
        v56 = a3;
        sub_1DBA9B0(a1, a3, v11, v12, v13, v14, v55.m128_u64[0], v55.m128_u64[1], a3, 0, 0, v58, 0, 0);
        v45 = a1;
        v46 = 5;
        v47 = &v51;
        ptr = v54;
        v53 = 0x400000000LL;
        v20 = *(_QWORD *)(a1 + 232);
        v48 = 4;
        LOBYTE(v20) = *(_BYTE *)(v20 + 1);
        v50 = 1;
        v49 = 0;
        v21 = *(char *)(a3 + 28) < 0;
        v46 = (v20 & 0x10) == 0 ? 1 : 5;
        if ( !v21 )
        {
          v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 72LL);
          if ( v22 == sub_9A8F10 )
          {
            v9 = &v55;
            v23 = sub_B7F5F0((_QWORD *)a3, &v55, (__int64)sub_9A8F10, v17, v18, v19);
          }
          else
          {
            v23 = v22(a3);
          }
          if ( v23 )
          {
            v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 64LL);
            if ( v27 == sub_6EF210 )
            {
              v9 = &v55;
              v28 = sub_B7F750((_QWORD *)a3, &v55, (__int64)sub_6EF210, v24, v25, v26);
            }
            else
            {
              v28 = v27(a3);
            }
            if ( v28 )
            {
              v9 = (__m128 *)v28;
              if ( (unsigned int)sub_18B2EA0(v45, v28) )
                v46 = 0;
            }
          }
          else
          {
            sub_183ABA0((__int64)v44, a1, a3 + 72, v24, v25, v26);
            v9 = nullptr;
            sub_18C74E0(a1, 0, 0, 4);
            v29 = *(_QWORD *)(a3 + 16);
            if ( (*(_WORD *)(a3 + 30) & 0x180) != 0 )
            {
              v30 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
              if ( (v29 & 4) != 0 )
                v30 = (_QWORD *)v30[1];
            }
            else
            {
              v30 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
              if ( (v29 & 4) != 0 )
                v30 = (_QWORD *)*v30;
            }
            if ( v30 )
              v30 -= 8;
            if ( (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3) >> 32 )
              v40 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3) >> 32;
            else
              LODWORD(v40) = *(_DWORD *)(a3 + 24);
            v41 = (__int64)v30;
            LOBYTE(v57) = v15;
            v56 = a3;
            v31 = _mm_loadh_ps((const double *)&v41);
            *((_QWORD *)&v57 + 1) = v59;
            v55 = v31;
            v58 = 0x1000000000LL;
            v32 = (unsigned int *)sub_B74920(a3);
            if ( v32 )
            {
              v33 = *v32;
              v34 = 0;
              v35 = 0;
              LODWORD(v58) = 0;
              v36 = 8 * v33;
              v37 = v36 >> 3;
              if ( v36 >> 3 > (unsigned __int64)HIDWORD(v58) )
              {
                v9 = (__m128 *)v59;
                v43 = v36;
                v42 = v32;
                v41 = v36 >> 3;
                sub_2237220((char *)&v57 + 8, v59, v36 >> 3, 8);
                v36 = v43;
                v32 = v42;
                v35 = v58;
                v37 = v41;
                v34 = 8LL * (unsigned int)v58;
              }
              if ( v36 )
              {
                v9 = (__m128 *)(v32 + 2);
                v41 = v37;
                memcpy((void *)(*((_QWORD *)&v57 + 1) + v34), v32 + 2, v36);
                v35 = v58;
                LODWORD(v37) = v41;
              }
              LODWORD(v58) = v37 + v35;
            }
            v61 = 0;
            v60 = v40;
            v38 = sub_186BF80(&v55, *(double *)v31.m128_u64, a6);
            if ( *((_QWORD **)&v57 + 1) != v59 )
              free(*((void **)&v57 + 1));
            if ( v38 != 1 )
            {
              v39 = v38 & 0xFFFFFFFFFFFFFFFELL;
              if ( v39 )
              {
                if ( v46 != 3 )
                {
                  v9 = (__m128 *)v39;
                  if ( (unsigned int)sub_18B2EA0(v45, v39) )
                    v46 = 0;
                }
              }
            }
            sub_190D5E0(a1);
            sub_185CCD0(v44, (__int64)v9);
          }
        }
        sub_1DBAAE0(a1, v9);
      }
      else
      {
        v16 = 0;
        if ( (*(_BYTE *)(a3 + 87) & 0x20) != 0 )
          v16 = *(_QWORD *)(a3 + 176);
        sub_1885FB0((__int64)&v55, a1, v7, v16);
        sub_188D930((__int64)&v45, a1, v7, a3, 0, (__int64)&v55);
        operator delete(v56, 16LL * DWORD2(v57), 8);
      }
    }
    else
    {
      sub_188D930((__int64)&v45, a1, v7, a3, (unsigned __int8)v10, 0);
    }
    v55.m128_u64[1] = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v55.m128_i32[0] = v46;
    if ( v46 == 2 )
    {
      v55.m128_u64[1] = (unsigned __int64)ptr;
      v56 = (unsigned int)v53;
    }
    else if ( !v46 )
    {
      v55.m128_i32[0] = 7;
      *(_QWORD *)&v57 = sub_19A26C0(v45, 0, 135) & 0xFFFFFFFFFFFFFFFELL;
    }
    sub_18B3150(a1, a3, &v55);
    if ( ptr != v54 )
      free(ptr);
    if ( !v50 )
      free(v47);
  }
}
