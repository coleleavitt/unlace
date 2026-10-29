__int64 __fastcall sub_88E300(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  _QWORD *v10; // rdx
  const __m128i *v11; // r15
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int16 v14; // dx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rdx
  __int64 v20; // rbx
  unsigned __int8 v21; // al
  unsigned __int8 **v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // r12
  void *v29; // rdi
  unsigned __int8 v30; // [rsp+Fh] [rbp-D9h]
  _BYTE v31[3]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+18h] [rbp-D0h]
  __m128i v33; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-B8h]
  unsigned int v35; // [rsp+38h] [rbp-B0h]
  _QWORD *v36; // [rsp+40h] [rbp-A8h]
  __int64 v37; // [rsp+48h] [rbp-A0h]
  void *ptr; // [rsp+50h] [rbp-98h] BYREF
  __int64 v39; // [rsp+58h] [rbp-90h]
  _BYTE v40[64]; // [rsp+60h] [rbp-88h] BYREF
  __int16 v41; // [rsp+A0h] [rbp-48h]

  v2 = sub_6D9A50(*(_QWORD **)(*a1 + 16), *(_QWORD *)(a2 + 8));
  if ( v2 )
  {
    v3 = v2;
    if ( (unsigned __int8)(*(_BYTE *)(v2 + 16) - 2) <= 1u )
    {
      v10 = *(_QWORD **)(v2 + 40);
      if ( (*(_BYTE *)(v2 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v10 + 2) <= 0x40u )
          v10 = (_QWORD *)*v10;
        else
          v10 = *(_QWORD **)*v10;
      }
      v33.m128i_i8[4] &= ~1u;
      v33.m128i_i32[0] = 0;
      sub_6A3820((__int64)&v33, 0, (int)v10);
      sub_6A01B0(a1[2], (__int64)&v33);
      if ( v33.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v33);
      if ( *(_DWORD *)(a1[2] + 16) != *(_DWORD *)(a1[2] + 20) )
      {
        v11 = (const __m128i *)a1[1];
        v12 = _mm_loadu_si128(v11);
        v34 = v11[1].m128i_i64[0];
        v33 = v12;
        v35 = v11[1].m128i_u32[2];
        v36 = (_QWORD *)v11[2].m128i_i64[0];
        v13 = v11[2].m128i_i64[1];
        ptr = v40;
        v37 = v13;
        v39 = 0x800000000LL;
        if ( v11[3].m128i_i32[2] )
          sub_820650((__int64)&ptr, (__int64)v11[3].m128i_i64);
        v14 = v11[8].m128i_i16[0];
        LOBYTE(v14) = v14 & 3;
        v41 = v14 | v41 & 0xFC;
        if ( (v35 & 1) == 0 )
        {
          if ( (v35 & 2) != 0
            || ((_DWORD)v39 != 1 || (v35 & 4) == 0)
            && (v35 & 8) != 0
            && *((_QWORD **)ptr + (int)((v35 >> 4) - 1)) == v36 )
          {
            v22 = (unsigned __int8 **)sub_A2E240(*a1, a2, 2264, 0);
            if ( v22 )
              sub_823450(v22, 3);
            LOBYTE(v35) = v35 | 1;
            LODWORD(v39) = 0;
          }
          else
          {
            v15 = (unsigned int)v39;
            v16 = (unsigned int)v39 + 1LL;
            if ( HIDWORD(v39) < v16 )
            {
              sub_25D6060(&ptr, v40, v16, 8);
              v15 = (unsigned int)v39;
            }
            *((_QWORD *)ptr + v15) = 0;
            v17 = v39 + 1;
            LODWORD(v39) = v39 + 1;
            v18 = *(_QWORD *)(v3 + 32);
            LOBYTE(v35) = v35 | 8;
            v37 = v18;
            v19 = *(_QWORD **)(v3 + 40);
            if ( (*(_BYTE *)(v3 + 19) & 2) != 0 )
            {
              if ( *((_DWORD *)v19 + 2) <= 0x40u )
                v19 = (_QWORD *)*v19;
              else
                v19 = *(_QWORD **)*v19;
            }
            v36 = v19;
            v35 = v35 & 0xF | (16 * v17);
          }
        }
        v20 = *(_QWORD *)(v3 + 32);
        *(_WORD *)v31 = *(_WORD *)v31 & 0xFE00 | 0x37;
        if ( byte_4AD234C )
          sub_AC4570(55);
        v32 = v20;
        *(_WORD *)&v31[1] &= 0xF801u;
        v21 = sub_76B710((__int64)v31);
        v31[1] = (v21 << 6) | v31[1] & 0x3F;
        v31[2] = v31[2] & 0xF8 | (v21 >> 2) & 7;
        result = sub_88A010(
                   *(_QWORD *)(a1[2] + 8) + 56LL * *(unsigned int *)(a1[2] + 16),
                   *a1,
                   &v33,
                   (unsigned __int64)v31,
                   0);
        if ( ptr != v40 )
        {
          v30 = result;
          free(ptr);
          return v30;
        }
        return result;
      }
      return 1;
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 5 )
  {
    v33.m128i_i8[4] &= ~1u;
    v33.m128i_i32[0] = 0;
    sub_6A3820((__int64)&v33, 0, 0);
    sub_6A01B0(a1[2], (__int64)&v33);
    if ( v33.m128i_i32[0] > 1u )
      sub_69F740((__int64)&v33);
    return 1;
  }
  v4 = (__int64 *)sub_A2E130(*a1, a2, 110, 0);
  v5 = sub_AC7B80(a2);
  if ( v4 )
  {
    v6 = *v4;
    if ( !*v4 )
    {
      v23 = v4[1];
      v24 = *(_DWORD *)(v23 + 14976);
      if ( v24 )
      {
        v25 = (unsigned int)(v24 - 1);
        *(_DWORD *)(v23 + 14976) = v25;
        v6 = *(_QWORD *)(v23 + 8 * v25 + 14848);
        v26 = *(unsigned int *)(v6 + 536);
        *(_BYTE *)v6 = 0;
        v27 = *(_QWORD *)(v6 + 528);
        *(_DWORD *)(v6 + 424) = 0;
        v28 = v27 + (v26 << 6);
        while ( v27 != v28 )
        {
          while ( 1 )
          {
            v28 -= 64;
            v29 = *(void **)(v28 + 24);
            if ( v29 == (void *)(v28 + 40) )
              break;
            operator delete(v29, *(_QWORD *)(v28 + 40) + 1LL);
            if ( v27 == v28 )
              goto LABEL_46;
          }
        }
LABEL_46:
        *(_DWORD *)(v6 + 536) = 0;
      }
      else
      {
        v6 = operator new(0x3A0u);
        *(_BYTE *)v6 = 0;
        *(_QWORD *)(v6 + 96) = v6 + 112;
        *(_QWORD *)(v6 + 128) = v6 + 144;
        *(_QWORD *)(v6 + 160) = v6 + 176;
        *(_QWORD *)(v6 + 192) = v6 + 208;
        *(_QWORD *)(v6 + 224) = v6 + 240;
        *(_QWORD *)(v6 + 256) = v6 + 272;
        *(_QWORD *)(v6 + 288) = v6 + 304;
        *(_QWORD *)(v6 + 320) = v6 + 336;
        *(_QWORD *)(v6 + 352) = v6 + 368;
        *(_QWORD *)(v6 + 384) = v6 + 400;
        *(_QWORD *)(v6 + 104) = 0;
        *(_BYTE *)(v6 + 112) = 0;
        *(_QWORD *)(v6 + 136) = 0;
        *(_BYTE *)(v6 + 144) = 0;
        *(_QWORD *)(v6 + 168) = 0;
        *(_BYTE *)(v6 + 176) = 0;
        *(_QWORD *)(v6 + 200) = 0;
        *(_BYTE *)(v6 + 208) = 0;
        *(_QWORD *)(v6 + 232) = 0;
        *(_BYTE *)(v6 + 240) = 0;
        *(_QWORD *)(v6 + 264) = 0;
        *(_BYTE *)(v6 + 272) = 0;
        *(_QWORD *)(v6 + 296) = 0;
        *(_BYTE *)(v6 + 304) = 0;
        *(_QWORD *)(v6 + 328) = 0;
        *(_BYTE *)(v6 + 336) = 0;
        *(_QWORD *)(v6 + 360) = 0;
        *(_BYTE *)(v6 + 368) = 0;
        *(_QWORD *)(v6 + 392) = 0;
        *(_BYTE *)(v6 + 400) = 0;
        *(_QWORD *)(v6 + 416) = v6 + 432;
        *(_QWORD *)(v6 + 424) = 0x800000000LL;
        *(_QWORD *)(v6 + 528) = v6 + 544;
        *(_QWORD *)(v6 + 536) = 0x600000000LL;
      }
      *v4 = v6;
    }
    v33.m128i_i64[0] = v5;
    v33.m128i_i8[8] = 1;
    v7 = *(unsigned int *)(v6 + 424);
    if ( *(unsigned int *)(v6 + 428) < (unsigned __int64)(v7 + 1) )
    {
      sub_25D6060(v6 + 416, v6 + 432, v7 + 1, 12);
      v7 = *(unsigned int *)(v6 + 424);
    }
    v8 = *(_QWORD *)(v6 + 416) + 12 * v7;
    *(_QWORD *)v8 = v33.m128i_i64[0];
    *(_DWORD *)(v8 + 8) = v33.m128i_i32[2];
    ++*(_DWORD *)(v6 + 424);
  }
  return 0;
}

