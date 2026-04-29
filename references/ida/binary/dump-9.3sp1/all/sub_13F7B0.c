__int64 __fastcall sub_13F7B0(__int128 a1)
{
  unsigned int v1; // r12d
  __int128 v3; // kr00_16
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE *v6; // r12
  unsigned int v7; // eax
  __m128i v8; // xmm1
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  int v13; // ebx
  const char *v14; // rax
  int v15; // eax
  __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rdi
  char v25; // al
  __m128i v26; // xmm2
  int v27; // [rsp+Ch] [rbp-BCh]
  char *v28; // [rsp+10h] [rbp-B8h]
  _BYTE v29[4]; // [rsp+20h] [rbp-A8h] BYREF
  signed int v30; // [rsp+24h] [rbp-A4h]
  unsigned __int8 *v31; // [rsp+28h] [rbp-A0h]
  __int128 v32; // [rsp+30h] [rbp-98h] BYREF
  __int64 v33; // [rsp+40h] [rbp-88h] BYREF
  __int128 v34; // [rsp+48h] [rbp-80h]
  __int128 v35; // [rsp+60h] [rbp-68h] BYREF
  __int64 v36; // [rsp+70h] [rbp-58h] BYREF
  __int128 v37; // [rsp+78h] [rbp-50h]
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 64LL) == 14 )
  {
    v3 = a1;
    if ( sub_11E8C0(*((unsigned int **)&a1 + 1)) )
    {
      if ( (~*(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL) & 0x200800) != 0 )
      {
        v6 = *(_BYTE **)(*((_QWORD *)&a1 + 1) + 72LL);
        if ( *v6 != v6[16] )
          goto LABEL_7;
        v22 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 72LL);
        *((_QWORD *)&a1 + 1) = &v32;
        v32 = 0u;
        v33 = 0;
        v34 = 0;
        sub_123EA0(a1, v22, 0, 0xFFFF0000);
        *((_QWORD *)&a1 + 1) = &v35;
        v35 = 0u;
        v36 = 0;
        v37 = 0;
        sub_123EA0(a1, (__int64)(v6 + 16), 0, 0xFFFF0000);
        v23 = sub_64780(&v32, &v35);
        v24 = v36;
        if ( !v23 )
        {
          v25 = sub_318470(&v33, &v36);
          v24 = v36;
          if ( !v25 )
          {
            if ( v36 )
            {
              *(_QWORD *)&v37 = 0;
              qfree(v36);
            }
            qfree(v35);
            if ( v33 )
            {
              *(_QWORD *)&v34 = 0;
              qfree(v33);
            }
            qfree(v32);
LABEL_7:
            sub_123A40((__int64)v29, (unsigned __int8 *)(*((_QWORD *)&v3 + 1) + 64LL), v4, v5);
            v7 = sub_138140(*(_QWORD **)(v3 + 64), v30, (*(_BYTE *)(*((_QWORD *)&v3 + 1) + 65LL) & 2) == 0);
            v1 = v7;
            if ( v7 == -1 )
            {
LABEL_11:
              sub_11CDA0((__int64)v29);
              return v1;
            }
            v8 = _mm_cvtsi32_si128(v7);
            v9 = *(_BYTE *)(*((_QWORD *)&v3 + 1) + 65LL);
            LODWORD(v32) = 1;
            BYTE1(v32) = v9;
            *(_QWORD *)((char *)&v32 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), v8).m128i_u64[0];
            v27 = sub_13E2D0(v3, *((__int64 *)&v3 + 1), (__int64)v29, (__int64)&v32);
            if ( v27 == 1 )
            {
              v12 = *(_QWORD *)(v3 + 64);
              if ( (*(_BYTE *)(v12 + 2) & 0x10) != 0 )
              {
LABEL_10:
                v13 = *(_DWORD *)(v3 + 72);
                v14 = (const char *)sub_1B26E0(v29);
                sub_66FA0(
                  v12,
                  (*(_BYTE *)(*(_QWORD *)(v3 + 64) + 2LL) & 0x10) != 0,
                  (__int64)"deleted dest pair %s in block %d",
                  v14,
                  v13);
                v1 = 1;
                sub_11CDA0((__int64)&v32);
                goto LABEL_11;
              }
            }
            else
            {
              v16 = j__qalloc_or_throw(80, *((__int64 *)&v3 + 1), v10, v11);
              v17 = *(_QWORD *)(*((_QWORD *)&v3 + 1) + 24LL);
              v28 = (char *)(v16 + 32);
              *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v16 + 40) = 0;
              *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v16 + 56) = 0;
              *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v16 + 72) = 0;
              sub_330970(v16, v17);
              if ( !v27 && **((_DWORD **)&v3 + 1) == 4 && *(_BYTE *)(*((_QWORD *)&v3 + 1) + 32LL) == 1 )
              {
                v26 = _mm_cvtsi32_si128(*(_DWORD *)(*((_QWORD *)&v3 + 1) + 40LL));
                LODWORD(v35) = 1;
                *(_QWORD *)((char *)&v35 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), v26).m128i_u64[0];
                sub_125180((__int64)&v32, (unsigned __int8 *)&v35);
                sub_11CDA0((__int64)&v35);
                sub_137FB0(*(_QWORD *)(v3 + 64), v1, v30);
                *(_DWORD *)(*((_QWORD *)&v3 + 1) + 4LL) = 0;
                sub_11CDA0(*((_QWORD *)&v3 + 1) + 48LL);
                v20 = *((_QWORD *)&v3 + 1);
              }
              else
              {
                sub_125180(*((_QWORD *)&v3 + 1) + 64LL, (unsigned __int8 *)&v32);
                v20 = j__qalloc_or_throw(80, (__int64)&v32, v18, v19);
                v21 = *(_QWORD *)(*((_QWORD *)&v3 + 1) + 24LL);
                *(_QWORD *)(v20 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v20 + 40) = 0;
                *(_QWORD *)(v20 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v20 + 56) = 0;
                *(_QWORD *)(v20 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v20 + 72) = 0;
                sub_330970(v20, v21);
              }
              *(_DWORD *)v16 = 10;
              sub_11CA10(v28, (char *)&v32);
              sub_125180(v16 + 64, v31);
              *(_DWORD *)(v16 + 4) |= 0x200000u;
              *(_DWORD *)v20 = 11;
              sub_125180(v20 + 32, (unsigned __int8 *)v28);
              sub_125180(v20 + 64, v31 + 16);
              *(_DWORD *)(v20 + 4) |= 0x200000u;
              sub_A3160(v3, (_QWORD *)v16, *((__int64 *)&v3 + 1));
              if ( v20 != *((_QWORD *)&v3 + 1) )
                sub_A3160(v3, (_QWORD *)v20, *((__int64 *)&v3 + 1));
              v12 = *(_QWORD *)(v3 + 64);
              *(_DWORD *)(v3 + 24) |= 0x80u;
              if ( (*(_BYTE *)(v12 + 2) & 0x10) != 0 )
                goto LABEL_10;
            }
            v15 = *(_DWORD *)(v3 + 24);
            BYTE1(v15) &= ~2u;
            LOBYTE(v15) = v15 | 0x80;
            *(_DWORD *)(v3 + 24) = v15;
            goto LABEL_10;
          }
        }
        if ( v24 )
        {
          *(_QWORD *)&v37 = 0;
          qfree(v24);
        }
        qfree(v35);
        if ( v33 )
        {
          *(_QWORD *)&v34 = 0;
          qfree(v33);
        }
        qfree(v32);
      }
    }
  }
  return 0;
}
