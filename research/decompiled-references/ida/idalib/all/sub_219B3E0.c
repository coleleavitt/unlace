__int64 *__fastcall sub_219B3E0(__int64 *a1, __int64 a2, unsigned int **a3, unsigned int *a4, __int64 a5, __int32 a6)
{
  unsigned int *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v16; // ecx
  unsigned int v17; // esi
  unsigned int v18; // edi
  unsigned __int64 v19; // r9
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // r8
  unsigned __int32 v24; // r10d
  unsigned __int32 v25; // r11d
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned int *v35; // r13
  void *v36; // rdi
  unsigned __int64 v37; // rax
  unsigned __int32 v39; // [rsp+4h] [rbp-154h]
  unsigned __int32 v40; // [rsp+8h] [rbp-150h]
  unsigned __int32 v41; // [rsp+Ch] [rbp-14Ch]
  unsigned __int64 v42; // [rsp+10h] [rbp-148h] BYREF
  unsigned int v43; // [rsp+18h] [rbp-140h]
  unsigned int v44; // [rsp+1Ch] [rbp-13Ch]
  unsigned int v45; // [rsp+20h] [rbp-138h]
  unsigned int v46; // [rsp+24h] [rbp-134h]
  char v47; // [rsp+28h] [rbp-130h]
  __m128i v48[2]; // [rsp+30h] [rbp-128h] BYREF
  __int16 v49; // [rsp+50h] [rbp-108h]
  __m128i v50[2]; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v51; // [rsp+80h] [rbp-D8h]
  __m128i v52[3]; // [rsp+90h] [rbp-C8h] BYREF
  __m128i v53[2]; // [rsp+C0h] [rbp-98h] BYREF
  __int16 v54; // [rsp+E0h] [rbp-78h]
  __m128i v55[2]; // [rsp+F0h] [rbp-68h] BYREF
  __int16 v56; // [rsp+110h] [rbp-48h]

  v11 = *a3;
  if ( (unsigned __int64)v11 >= sub_215DEC0(a2)
    && (v14 = sub_215DEC0(a2), v13 = (__int64)(v11 + 6), (unsigned __int64)(v11 + 6) <= v12 + v14) )
  {
    v16 = v11[2];
    v17 = v11[1];
    v18 = *v11;
    v19 = *(unsigned int *)(a2 + 8);
    v40 = _byteswap_ulong(v16);
    v20 = v11[3];
    v39 = _byteswap_ulong(v17);
    v21 = v11[4];
    v22 = v11[5];
    v23 = _byteswap_ulong(v18);
    v41 = _byteswap_ulong(v20);
    v24 = _byteswap_ulong(v21);
    v25 = _byteswap_ulong(v22);
    if ( (unsigned int)v19 <= 0x14 )
    {
      v26 = 1398784;
      if ( _bittest64(&v26, v19) )
      {
        v20 = v41;
        v16 = v40;
        v22 = v25;
        v21 = v24;
        v17 = v39;
        v18 = v23;
      }
    }
    v44 = v20;
    v45 = v21;
    v27 = *a4;
    v28 = 8LL * v22 + 24;
    v47 &= ~1u;
    v42 = __PAIR64__(v17, v18);
    v43 = v16;
    v46 = v22;
    if ( v27 == v28 )
    {
      v34 = *(unsigned int *)(a5 + 8);
      v35 = *a3;
      if ( v22 != v34 )
      {
        if ( v22 >= v34 )
        {
          if ( v22 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
          {
            sub_2237220(a5, a5 + 16, v22, 8);
            v34 = *(unsigned int *)(a5 + 8);
          }
          v36 = (void *)(*(_QWORD *)a5 + 8 * v34);
          if ( v36 != (void *)(*(_QWORD *)a5 + 8LL * v22) )
            memset(v36, 0, 8 * ((unsigned __int64)(*(_QWORD *)a5 + v28 - 32 - (_QWORD)v36) >> 3) + 8);
        }
        *(_DWORD *)(a5 + 8) = v22;
      }
      if ( v22 )
      {
        v37 = 0;
        do
        {
          *(_QWORD *)(*(_QWORD *)a5 + v37) = &v35[v37 / 4 + 6];
          v37 += 8LL;
        }
        while ( 8LL * (v22 - 1) + 8 != v37 );
      }
      *a1 = 0;
    }
    else
    {
      v51 = 265;
      v53[0].m128i_i64[0] = (__int64)" LC_BUILD_VERSION_COMMAND has incorrect cmdsize";
      v54 = 259;
      v49 = 259;
      v50[0].m128i_i32[0] = a6;
      v48[0].m128i_i64[0] = (__int64)"load command ";
      sub_A41580(v52, v48, v50, 259, v23, v19);
      sub_A41580(v55, v52, v53, v29, v30, v31);
      sub_21967F0(a1, v55[0].m128i_i64, v32, v33);
    }
  }
  else
  {
    v56 = 259;
    v55[0].m128i_i64[0] = (__int64)"Structure read out-of-range";
    sub_21967F0(v53[0].m128i_i64, v55[0].m128i_i64, v12, v13);
    v47 |= 1u;
    v42 = 0;
    *a1 = v53[0].m128i_i64[0];
  }
  sub_219B3C0((__int64 *)&v42);
  return a1;
}
