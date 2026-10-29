void __fastcall sub_AB7B00(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 *v15; // r13
  const __m128i *v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i v20; // xmm1
  unsigned __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 *i; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  __int64 *v30; // r13
  const __m128i *v31; // rbx
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rax
  __m128i v35; // xmm2
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  const __m128i *v38; // rax
  const __m128i *v39; // rbx
  __int64 m128i_i64; // r12
  unsigned __int64 v41; // rax
  const __m128i *v42; // rsi
  __int64 v43; // [rsp+0h] [rbp-60h] BYREF
  __m128 v44; // [rsp+8h] [rbp-58h] BYREF
  __int128 v45; // [rsp+18h] [rbp-48h] BYREF
  __int64 v46; // [rsp+28h] [rbp-38h]
  __int64 v47; // [rsp+30h] [rbp-30h]

  if ( !(a2 & 7 | (a2 >> 3) & 1) )
  {
    v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    switch ( *(_BYTE *)(v7 + 16) )
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
        v8 = a3[1];
        goto LABEL_4;
      case 0x10:
        v37 = a3[1];
        if ( v37 )
        {
          v38 = *(const __m128i **)(v37 + 64);
          if ( v38 )
          {
            v39 = v38 + 1;
            m128i_i64 = (__int64)v38[2 * v38->m128i_u32[2] + 1].m128i_i64;
            if ( &v38[1] != (const __m128i *)m128i_i64 )
            {
              do
              {
                v41 = sub_EFA7D0(v39);
                v42 = v39;
                v39 += 2;
                sub_AB2BB0(a1, v42, v41);
              }
              while ( (const __m128i *)m128i_i64 != v39 );
            }
          }
        }
        return;
      case 0x15:
        v8 = *(_QWORD *)(v7 + 32);
        goto LABEL_4;
      case 0x16:
        v14 = *(_DWORD *)(a2 + 20);
        if ( v14 )
        {
          v15 = a3 + 4;
          v16 = (const __m128i *)(a2 + 48);
          v17 = (__int64)&a3[(unsigned int)(v14 - 1) + 5];
          do
          {
            v18 = v16[1].m128i_i64[0];
            v19 = *v15++;
            v20 = _mm_loadu_si128(v16);
            v16 = (const __m128i *)((char *)v16 + 24);
            v46 = v18;
            v45 = (__int128)v20;
            v47 = v19;
            v21 = sub_EFA7D0(&v45);
            sub_AB2BB0(a1, (const __m128i *)&v45, v21);
          }
          while ( v15 != (__int64 *)v17 );
        }
        return;
      case 0x1A:
        v22 = a3 + 2;
        if ( *(_BYTE *)(a2 + 16) != 25 )
        {
          for ( i = &v22[*(unsigned __int16 *)(a2 + 22)]; i != v22; ++v22 )
          {
            v24 = *v22;
            if ( *(_DWORD *)(a1 + 4) != 1 || !v24 || (*(_BYTE *)(v24 + 29) & 2) == 0 )
            {
              v43 = *v22;
              LOBYTE(v46) = 1;
              v45 = (__int128)_mm_loadh_ps((const double *)&v43);
              v25 = sub_AA6CD0(v7);
              v7 = a1 + 8;
              sub_AAD1D0(a1 + 8, &byte_22CD811, v25, v26, v27, v28, v45, v46);
            }
          }
        }
        return;
      case 0x21:
        v44 = _mm_loadh_ps((const double *)a3 + 1);
        v9 = sub_E6C930(&v44);
        *(_QWORD *)&v45 = a1;
        *((_QWORD *)&v45 + 1) = v9;
        v46 = v10;
        sub_AB8370(a1 + 8, a2, v10, v11, v12, v13, a1, v9, v10);
        return;
      case 0x31:
        v29 = *(_DWORD *)(a2 + 20);
        if ( v29 )
        {
          v30 = a3 + 2;
          v31 = (const __m128i *)(a2 + 48);
          v32 = (__int64)&a3[(unsigned int)(v29 - 1) + 3];
          do
          {
            v33 = v31[1].m128i_i64[0];
            v34 = *v30++;
            v35 = _mm_loadu_si128(v31);
            v31 = (const __m128i *)((char *)v31 + 24);
            v46 = v33;
            v45 = (__int128)v35;
            v47 = v34;
            v36 = sub_EFA7D0(&v45);
            sub_AB2BB0(a1, (const __m128i *)&v45, v36);
          }
          while ( (__int64 *)v32 != v30 );
        }
        return;
      case 0x33:
        v8 = *(_QWORD *)(a2 + 24);
LABEL_4:
        sub_AAE4E0(a1 + 8, 0, 0, v8, a1, a6);
        break;
    }
  }
}

