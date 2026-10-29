void __fastcall sub_AC4E70(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  __int64 *v13; // r13
  const __m128i *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm1
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rbx
  __int64 *i; // r12
  __int64 v25; // rax
  size_t v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 *v31; // r13
  const __m128i *v32; // rbx
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rax
  __m128i v36; // xmm2
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  const __m128i *v42; // rax
  const __m128i *v43; // rbx
  __int64 m128i_i64; // r12
  unsigned __int64 v45; // rax
  const __m128i *v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int128 v50; // [rsp-28h] [rbp-88h]
  __int64 v51; // [rsp+0h] [rbp-60h] BYREF
  __m128 v52; // [rsp+8h] [rbp-58h] BYREF
  __int128 v53; // [rsp+18h] [rbp-48h] BYREF
  __int64 v54; // [rsp+28h] [rbp-38h]
  __int64 v55; // [rsp+30h] [rbp-30h]

  if ( !(a2 & 7 | (a2 >> 3) & 1) )
  {
    v4 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    switch ( *(_BYTE *)(v4 + 16) )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x32:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
      case 0x3B:
        return;
      case 4:
      case 6:
        v5 = a3[1];
        goto LABEL_4;
      case 0x10:
        v41 = a3[1];
        if ( v41 )
        {
          v42 = *(const __m128i **)(v41 + 64);
          if ( v42 )
          {
            v43 = v42 + 1;
            m128i_i64 = (__int64)v42[2 * v42->m128i_u32[2] + 1].m128i_i64;
            if ( &v42[1] != (const __m128i *)m128i_i64 )
            {
              do
              {
                v45 = sub_EFA7D0(v43);
                v46 = v43;
                v43 += 2;
                sub_AC0110(a1, v46, v45, v47, v48, v49);
              }
              while ( (const __m128i *)m128i_i64 != v43 );
            }
          }
        }
        return;
      case 0x15:
        v5 = *(_QWORD *)(v4 + 32);
        goto LABEL_4;
      case 0x16:
        v12 = *(_DWORD *)(a2 + 20);
        if ( v12 )
        {
          v13 = a3 + 4;
          v14 = (const __m128i *)(a2 + 48);
          v15 = (__int64)&a3[(unsigned int)(v12 - 1) + 5];
          do
          {
            v16 = v14[1].m128i_i64[0];
            v17 = *v13++;
            v18 = _mm_loadu_si128(v14);
            v14 = (const __m128i *)((char *)v14 + 24);
            v54 = v16;
            v53 = (__int128)v18;
            v55 = v17;
            v19 = sub_EFA7D0(&v53);
            sub_AC0110(a1, (const __m128i *)&v53, v19, v20, v21, v22);
          }
          while ( v13 != (__int64 *)v15 );
        }
        return;
      case 0x1A:
        v23 = a3 + 2;
        if ( *(_BYTE *)(a2 + 16) != 25 )
        {
          for ( i = &v23[*(unsigned __int16 *)(a2 + 22)]; i != v23; ++v23 )
          {
            v25 = *v23;
            if ( *(_DWORD *)(a1 + 4) != 1 || !v25 || (*(_BYTE *)(v25 + 29) & 2) == 0 )
            {
              v51 = *v23;
              LOBYTE(v54) = 1;
              v53 = (__int128)_mm_loadh_ps((const double *)&v51);
              v26 = sub_AA6CD0(v4);
              v4 = a1 + 8;
              sub_AB9850((char *)(a1 + 8), (char *)&byte_22CD811, v26, v27, v28, v29, v53, v54);
            }
          }
        }
        return;
      case 0x21:
        v52 = _mm_loadh_ps((const double *)a3 + 1);
        v6 = sub_E6C930(&v52);
        *(_QWORD *)&v53 = a1;
        v54 = v7;
        *((_QWORD *)&v53 + 1) = v6;
        v8 = sub_AA6CD0(&v52);
        *((_QWORD *)&v50 + 1) = *((_QWORD *)&v53 + 1);
        *(_QWORD *)&v50 = a1;
        sub_AC5130(a1 + 8, (unsigned int)&byte_22CD811, v8, v9, v10, v11, v50, v54);
        return;
      case 0x31:
        v30 = *(_DWORD *)(a2 + 20);
        if ( v30 )
        {
          v31 = a3 + 2;
          v32 = (const __m128i *)(a2 + 48);
          v33 = (__int64)&a3[(unsigned int)(v30 - 1) + 3];
          do
          {
            v34 = v32[1].m128i_i64[0];
            v35 = *v31++;
            v36 = _mm_loadu_si128(v32);
            v32 = (const __m128i *)((char *)v32 + 24);
            v54 = v34;
            v53 = (__int128)v36;
            v55 = v35;
            v37 = sub_EFA7D0(&v53);
            sub_AC0110(a1, (const __m128i *)&v53, v37, v38, v39, v40);
          }
          while ( (__int64 *)v33 != v31 );
        }
        return;
      case 0x33:
        v5 = *(_QWORD *)(a2 + 24);
LABEL_4:
        sub_ABAAB0(a1 + 8, 0, 0, v5, a1);
        break;
    }
  }
}

