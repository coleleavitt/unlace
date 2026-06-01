__int64 __fastcall sub_B2E00(__int64 a1, __int64 a2, char a3, __m128 a4)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  char v12; // al
  char v13; // r14
  char v14; // al
  unsigned __int64 v15; // rdx
  char v16; // r15
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rsi
  char v20; // al
  char v21; // al
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 153) )
    return 0;
  v7 = sub_D2300(&qword_252280);
  v8 = v7;
  if ( (dword_245124 & 4) != 0 )
  {
    if ( (unsigned __int8)sub_A1C00((__int64)xmmword_251F20, v7) )
      return 0;
  }
  if ( !getseg() )
  {
    sub_D1B30(1);
    if ( !(unsigned __int8)is_mapped() )
      return 0;
  }
  v12 = dword_245124;
  if ( (dword_245124 & 2) != 0 )
  {
    v13 = sub_D2610(&qword_252280);
    if ( v13 )
    {
      if ( !*(_BYTE *)(a1 + 152) )
        goto LABEL_23;
      goto LABEL_22;
    }
    v12 = dword_245124;
  }
  if ( (v12 & 1) == 0 )
  {
    if ( !*(_BYTE *)(a1 + 152) )
      *(_BYTE *)(a1 + 152) = 1;
    goto LABEL_10;
  }
  v14 = sub_D25B0(&qword_252280);
  v13 = v14;
  if ( !*(_BYTE *)(a1 + 152) )
  {
    *(_BYTE *)(a1 + 152) = v14 ^ 1;
    if ( !v14 )
    {
      v12 = dword_245124;
LABEL_10:
      v13 = 0;
      goto LABEL_11;
    }
LABEL_23:
    v13 = *(_BYTE *)(a1 + 156) | a3;
    if ( v13 )
    {
      if ( (dword_245124 & 3) == 0 )
        goto LABEL_34;
      v15 = *(_QWORD *)(a1 + 128);
      v16 = *(_BYTE *)(a1 + 156) | a3;
      v17 = v15 - 1;
      if ( (__int64)(v15 - 1) < 0 )
        goto LABEL_34;
LABEL_26:
      v18 = *(_QWORD *)(a1 + 120);
      while ( *(_QWORD *)(v18 + 16 * v17) != v8 )
      {
        if ( v17-- == 0 )
          goto LABEL_32;
      }
      if ( v15 != v17 )
      {
        v28.m128i_i64[0] = -1;
        v28.m128i_i16[4] = 0;
        if ( v17 >= v15 )
        {
          v22 = *(_QWORD *)(a1 + 136);
          v10 = a1 + 120;
          if ( (unsigned __int64)&v28 < v18 || (unsigned __int64)&v28 >= v18 + 16 * v22 )
          {
            if ( v22 < v17 )
            {
              v26 = qvector_reserve();
              v15 = *(_QWORD *)(a1 + 128);
              *(_QWORD *)(a1 + 120) = v26;
            }
            if ( v15 < v17 )
            {
              do
              {
                v25 = v15;
                a4 = (__m128)_mm_load_si128(&v28);
                ++v15;
                *(__m128 *)(*(_QWORD *)(a1 + 120) + 16 * v25) = a4;
              }
              while ( v17 != v15 );
            }
          }
          else
          {
            if ( v22 < v17 )
            {
              v27 = qvector_reserve();
              v15 = *(_QWORD *)(a1 + 128);
              *(_QWORD *)(a1 + 120) = v27;
            }
            if ( v15 < v17 )
            {
              do
              {
                v23 = v15;
                v9 = 0;
                ++v15;
                v24 = *(_QWORD *)(a1 + 120) + 16 * v23;
                *(_QWORD *)v24 = -1;
                *(_WORD *)(v24 + 8) = 0;
              }
              while ( v17 != v15 );
            }
          }
        }
        *(_QWORD *)(a1 + 128) = v17;
      }
LABEL_32:
      v20 = v13;
      v13 = v16;
      if ( *(_BYTE *)(a1 + 153) && !v20 )
      {
LABEL_50:
        if ( !(unsigned int)sub_C8830(13, *(_DWORD *)(a2 + 4), v8, v9, v10, v11) )
        {
          sub_B1EA0(a1, v8);
          sub_B2BA0(a1, v8);
          sub_B2DD0(a1, v8);
        }
      }
LABEL_34:
      if ( *(_BYTE *)(a1 + 156) && v13 )
        sub_A3180(a1);
      goto LABEL_14;
    }
    v13 = 1;
LABEL_49:
    v16 = 1;
    sub_A3180(a1);
    v21 = dword_245124;
LABEL_57:
    if ( (v21 & 3) == 0 )
      goto LABEL_32;
    v15 = *(_QWORD *)(a1 + 128);
    v17 = v15 - 1;
    if ( (__int64)(v15 - 1) < 0 )
      goto LABEL_32;
    goto LABEL_26;
  }
LABEL_22:
  v12 = dword_245124;
LABEL_11:
  if ( (v12 & 2) != 0 )
  {
    if ( (unsigned __int8)sub_D2610(&qword_252280) && !*(_BYTE *)(a1 + 155) )
    {
LABEL_45:
      v16 = *(_BYTE *)(a1 + 156) | a3;
      if ( v16 )
      {
        v21 = dword_245124;
        goto LABEL_57;
      }
      if ( *(_BYTE *)(a1 + 152) && (*(_BYTE *)(a1 + 153) & 4) != 0 )
        sub_B2A10(a1, v8, 2, dword_245120);
      goto LABEL_49;
    }
    v21 = dword_245124;
    if ( (dword_245124 & 1) == 0 )
      goto LABEL_56;
LABEL_52:
    if ( !(unsigned __int8)sub_D25B0(&qword_252280) || *(_BYTE *)(a1 + 154) )
    {
      v21 = dword_245124;
LABEL_56:
      v16 = 0;
      goto LABEL_57;
    }
    goto LABEL_45;
  }
  if ( (v12 & 1) != 0 )
    goto LABEL_52;
  v13 |= *(_BYTE *)(a1 + 153) == 0;
  if ( !v13 )
    goto LABEL_50;
LABEL_14:
  if ( *(_BYTE *)(a1 + 153) && n > 1 && (unsigned __int8)sub_98F50((__int64)&qword_251B40, v8, "trace", &v28) )
  {
    sub_CE630();
    if ( !v28.m128i_i8[0] )
      sub_8F740((__int64)"%a: trace condition validated, suspending the process\n", *(double *)a4.m128_u64);
  }
  return 1;
}

