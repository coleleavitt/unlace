__int64 __fastcall sub_8934C0(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int v14; // esi
  __m128i v15; // xmm0
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __m128i *v20; // rax
  const __m128i *v21; // rdi
  __m128i *v22; // rdx
  const __m128i *v23; // rdx
  unsigned __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // [rsp+0h] [rbp-158h]
  unsigned __int8 v32; // [rsp+0h] [rbp-158h]
  __int64 v33; // [rsp+0h] [rbp-158h]
  __int64 v34; // [rsp+8h] [rbp-150h]
  __int64 v35; // [rsp+10h] [rbp-148h]
  __m128i v36; // [rsp+20h] [rbp-138h] BYREF
  __int64 v37; // [rsp+30h] [rbp-128h]
  __m128i v38; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-B8h]
  int v40; // [rsp+A8h] [rbp-B0h]
  __int64 v41; // [rsp+B0h] [rbp-A8h]
  __int64 v42; // [rsp+B8h] [rbp-A0h]
  void *ptr; // [rsp+C0h] [rbp-98h]
  __int64 v44; // [rsp+C8h] [rbp-90h]
  _BYTE v45[64]; // [rsp+D0h] [rbp-88h] BYREF
  __int16 v46; // [rsp+110h] [rbp-48h]

  v3 = a3;
  v5 = *(unsigned int *)(a1 + 320);
  v6 = *(_QWORD *)(a1 + 312);
  if ( (unsigned int)v3 >= (unsigned int)v5 )
  {
    v17 = 1;
  }
  else
  {
    if ( a2 )
    {
      v7 = (unsigned int)(v5 - 1);
      v8 = v7 - (unsigned int)(v5 - v3 - 1);
      v9 = 32 * v7;
      v10 = 32 * v8;
      while ( 1 )
      {
        v11 = v6 + v9;
        v12 = *(_QWORD *)(v6 + v9);
        if ( (v12 & 4) != 0 )
        {
          v13 = *(_QWORD *)(v11 + 8);
          v14 = 0;
          if ( v13 )
          {
            if ( (v13 & 3) != 0 )
            {
              if ( (*(_QWORD *)(v11 + 8) & 3LL) == 1 )
              {
                v25 = v13 & 0xFFFFFFFFFFFFFFFCLL;
                if ( v25 )
                {
                  v34 = v6;
                  v33 = *(_QWORD *)(v6 + v9);
                  v26 = sub_8124E0(v25);
                  v6 = v34;
                  v12 = v33;
                  v14 = v26;
                }
              }
            }
            else
            {
              v14 = *(_DWORD *)((v13 & 0xFFFFFFFFFFFFFFFCLL) + 24);
            }
          }
          v15 = _mm_loadu_si128((const __m128i *)(v11 + 8));
          if ( **(_BYTE **)(a1 + 24) )
          {
            v5 = *(unsigned int *)(a1 + 320);
            v17 = 0;
            goto LABEL_16;
          }
          v35 = *(_QWORD *)(v11 + 24);
          v31 = v12;
          v38 = v15;
          v36 = v15;
          LOBYTE(v40) = v40 | 1;
          v46 &= 0xFDu;
          v39 = 0;
          v42 = 0;
          ptr = v45;
          v44 = 0x800000000LL;
          v37 = sub_69F240(v36.m128i_i64);
          v42 = v37;
          v46 &= 0xFEu;
          v40 = 0;
          v41 = 0;
          LODWORD(v44) = 0;
          v16 = sub_8912C0(a1, ((unsigned __int64)v14 << 32) | v14, (__int64)&v38, v31 & 0xFFFFFFFFFFFFFFF8LL, v35);
          v17 = v16;
          if ( ptr != v45 )
          {
            v32 = v16;
            free(ptr);
            v17 = v32;
          }
          v6 = *(_QWORD *)(a1 + 312);
          if ( !(_BYTE)v17 )
          {
            v5 = *(unsigned int *)(a1 + 320);
            goto LABEL_16;
          }
        }
        if ( v10 == v9 )
          goto LABEL_33;
        v9 -= 32;
      }
    }
    v27 = (unsigned int)(v5 - 1);
    v28 = v27 - (unsigned int)(v5 - v3 - 1);
    v29 = 32 * v27;
    v30 = 32 * v28;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v6 + v29) & 4) != 0 )
      {
        v38.m128i_i8[4] &= ~1u;
        v38.m128i_i32[0] = 0;
        sub_6A01B0(*(_QWORD *)(v6 + v29) & 0xFFFFFFFFFFFFFFF8LL, (__int64)&v38);
        if ( v38.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v38);
        v6 = *(_QWORD *)(a1 + 312);
      }
      if ( v29 == v30 )
        break;
      v29 -= 32;
    }
LABEL_33:
    v5 = *(unsigned int *)(a1 + 320);
    v17 = 1;
  }
LABEL_16:
  v18 = v5;
  v19 = v5 - v3;
  v20 = (__m128i *)(v6 + 32 * v3);
  v21 = (const __m128i *)(v6 + 32 * v18);
  if ( v19 >> 2 > 0 )
  {
    v22 = &v20[8 * (v19 >> 2)];
    while ( (v20->m128i_i8[0] & 4) == 0 )
    {
      if ( (v20[2].m128i_i8[0] & 4) != 0 )
      {
        v20 += 2;
        goto LABEL_23;
      }
      if ( (v20[4].m128i_i8[0] & 4) != 0 )
      {
        v20 += 4;
        goto LABEL_23;
      }
      if ( (v20[6].m128i_i8[0] & 4) != 0 )
      {
        v20 += 6;
        goto LABEL_23;
      }
      v20 += 8;
      if ( v22 == v20 )
      {
        v19 = ((char *)v21 - (char *)v20) >> 5;
        goto LABEL_42;
      }
    }
    goto LABEL_23;
  }
LABEL_42:
  if ( v19 == 2 )
  {
LABEL_49:
    if ( (v20->m128i_i8[0] & 4) != 0 )
      goto LABEL_23;
    v20 += 2;
    goto LABEL_45;
  }
  if ( v19 == 3 )
  {
    if ( (v20->m128i_i8[0] & 4) != 0 )
      goto LABEL_23;
    v20 += 2;
    goto LABEL_49;
  }
  if ( v19 != 1 )
  {
LABEL_46:
    v20 = (__m128i *)v21;
    goto LABEL_29;
  }
LABEL_45:
  if ( (v20->m128i_i8[0] & 4) == 0 )
    goto LABEL_46;
LABEL_23:
  if ( v21 != v20 )
  {
    v23 = v20 + 2;
    if ( v21 != &v20[2] )
    {
      do
      {
        if ( (v23->m128i_i8[0] & 4) == 0 )
        {
          v20 += 2;
          v20[-2] = _mm_loadu_si128(v23);
          v20[-1] = _mm_loadu_si128(v23 + 1);
        }
        v23 += 2;
      }
      while ( v21 != v23 );
      v6 = *(_QWORD *)(a1 + 312);
    }
  }
LABEL_29:
  *(_DWORD *)(a1 + 320) = ((__int64)v20->m128i_i64 - v6) >> 5;
  return v17;
}

