__int64 __fastcall sub_13D310(__int128 a1)
{
  unsigned int v1; // r12d
  __int64 v3; // rbx
  _BYTE *v4; // r12
  unsigned int v5; // eax
  __m128i v6; // xmm1
  char v7; // al
  __int64 v8; // r12
  int v9; // ebx
  const char *v10; // rax
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdx
  __m128i v17; // xmm2
  int v18; // [rsp+Ch] [rbp-BCh]
  char *v19; // [rsp+10h] [rbp-B8h]
  _BYTE v20[4]; // [rsp+20h] [rbp-A8h] BYREF
  signed int v21; // [rsp+24h] [rbp-A4h]
  unsigned __int8 *v22; // [rsp+28h] [rbp-A0h]
  __int128 v23; // [rsp+30h] [rbp-98h] BYREF
  __int64 v24; // [rsp+40h] [rbp-88h] BYREF
  __int128 v25; // [rsp+48h] [rbp-80h]
  __int128 v26; // [rsp+60h] [rbp-68h] BYREF
  __int64 v27; // [rsp+70h] [rbp-58h] BYREF
  __int128 v28; // [rsp+78h] [rbp-50h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 64LL) == 14 )
  {
    v3 = *((_QWORD *)&a1 + 1);
    if ( sub_11C480(*((unsigned int **)&a1 + 1)) )
    {
      if ( (~*(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL) & 0x200800) != 0 )
      {
        v4 = *(_BYTE **)(*((_QWORD *)&a1 + 1) + 72LL);
        if ( *v4 != v4[16] )
          goto LABEL_7;
        v16 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 72LL);
        *((_QWORD *)&a1 + 1) = &v23;
        v23 = 0u;
        v24 = 0;
        v25 = 0;
        sub_1219A0(a1, v16, 0, 0xFFFF0000);
        *((_QWORD *)&a1 + 1) = &v26;
        v26 = 0u;
        v27 = 0;
        v28 = 0;
        sub_1219A0(a1, (__int64)(v4 + 16), 0, 0xFFFF0000);
        if ( !(unsigned __int8)sub_63E80(&v23, &v26) && !(unsigned __int8)sub_314F20(&v24, &v27) )
        {
          if ( v27 )
          {
            *(_QWORD *)&v28 = 0;
            qfree();
          }
          qfree();
          if ( v24 )
          {
            *(_QWORD *)&v25 = 0;
            qfree();
          }
          qfree();
LABEL_7:
          sub_121540((__int64)v20, (unsigned __int8 *)(v3 + 64));
          v5 = sub_135C40(*(_QWORD **)(a1 + 64), v21, (*(_BYTE *)(v3 + 65) & 2) == 0);
          v1 = v5;
          if ( v5 == -1 )
          {
LABEL_11:
            sub_11A960((__int64)v20);
            return v1;
          }
          v6 = _mm_cvtsi32_si128(v5);
          *((_QWORD *)&a1 + 1) = v3;
          v7 = *(_BYTE *)(v3 + 65);
          LODWORD(v23) = 1;
          BYTE1(v23) = v7;
          *(_QWORD *)((char *)&v23 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), v6).m128i_u64[0];
          v18 = sub_13BE50(a1, (__int64)v20, (__int64)&v23);
          if ( v18 == 1 )
          {
            v8 = *(_QWORD *)(a1 + 64);
            if ( (*(_BYTE *)(v8 + 2) & 0x10) != 0 )
            {
LABEL_10:
              v9 = *(_DWORD *)(a1 + 72);
              v10 = (const char *)sub_1AFE60(v20);
              sub_666A0(
                v8,
                (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 2LL) & 0x10) != 0,
                (__int64)"deleted dest pair %s in block %d",
                v10,
                v9);
              v1 = 1;
              sub_11A960((__int64)&v23);
              goto LABEL_11;
            }
          }
          else
          {
            v12 = j__qalloc_or_throw();
            v13 = *(_QWORD *)(v3 + 24);
            v19 = (char *)(v12 + 32);
            *(_QWORD *)(v12 + 32) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v12 + 40) = 0;
            *(_QWORD *)(v12 + 48) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v12 + 56) = 0;
            *(_QWORD *)(v12 + 64) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v12 + 72) = 0;
            sub_32D4D0(v12, v13);
            if ( !v18 && *(_DWORD *)v3 == 4 && *(_BYTE *)(v3 + 32) == 1 )
            {
              v17 = _mm_cvtsi32_si128(*(_DWORD *)(v3 + 40));
              LODWORD(v26) = 1;
              *(_QWORD *)((char *)&v26 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), v17).m128i_u64[0];
              sub_122C80((__int64)&v23, (unsigned __int8 *)&v26);
              sub_11A960((__int64)&v26);
              sub_135AB0(*(_QWORD *)(a1 + 64), v1, v21);
              *(_DWORD *)(v3 + 4) = 0;
              sub_11A960(v3 + 48);
              v14 = v3;
            }
            else
            {
              sub_122C80(v3 + 64, (unsigned __int8 *)&v23);
              v14 = j__qalloc_or_throw();
              v15 = *(_QWORD *)(v3 + 24);
              *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v14 + 40) = 0;
              *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v14 + 56) = 0;
              *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v14 + 72) = 0;
              sub_32D4D0(v14, v15);
            }
            *(_DWORD *)v12 = 10;
            sub_11A5D0(v19, (char *)&v23);
            sub_122C80(v12 + 64, v22);
            *(_DWORD *)(v12 + 4) |= 0x200000u;
            *(_DWORD *)v14 = 11;
            sub_122C80(v14 + 32, (unsigned __int8 *)v19);
            sub_122C80(v14 + 64, v22 + 16);
            *(_DWORD *)(v14 + 4) |= 0x200000u;
            sub_A23D0(a1, (_QWORD *)v12, v3);
            if ( v14 != v3 )
              sub_A23D0(a1, (_QWORD *)v14, v3);
            v8 = *(_QWORD *)(a1 + 64);
            *(_DWORD *)(a1 + 24) |= 0x80u;
            if ( (*(_BYTE *)(v8 + 2) & 0x10) != 0 )
              goto LABEL_10;
          }
          v11 = *(_DWORD *)(a1 + 24);
          BYTE1(v11) &= ~2u;
          LOBYTE(v11) = v11 | 0x80;
          *(_DWORD *)(a1 + 24) = v11;
          goto LABEL_10;
        }
        sub_92DA0((__int64)&v26);
        sub_92DA0((__int64)&v23);
      }
    }
  }
  return 0;
}
