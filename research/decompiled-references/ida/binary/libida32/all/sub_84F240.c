_BYTE *__fastcall sub_84F240(__int64 a1, int a2, _BYTE *a3, __int64 a4, double *a5)
{
  unsigned int *v8; // r12
  __int64 v9; // rdx
  char v10; // al
  unsigned __int8 v11; // al
  char v12; // r14
  int v13; // edx
  int v14; // eax
  __int64 v15; // rsi
  int v16; // ecx
  char v17; // di
  int v18; // ecx
  int v19; // esi
  int v20; // edx
  unsigned __int8 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __m128 *v26; // rax
  __m128 *v27; // rax
  __int64 v29; // rsi
  int v30; // ecx
  unsigned __int16 v31; // r9
  char v32; // r15
  __int64 v33; // r9
  int v34; // r9d

  v8 = *(unsigned int **)a1;
  if ( a2 )
  {
    v9 = (unsigned __int8)*a3;
    v10 = *(_BYTE *)(*(_QWORD *)(a1 + 152) + v9);
    if ( (_BYTE)v9 != v10 )
    {
      v11 = v9 ^ v10;
      v12 = v11;
      if ( (v9 & 0x80u) == 0LL && v11 == 32 )
      {
        v12 = 32;
        goto LABEL_6;
      }
      if ( (v11 & (v11 - 1)) == 0 )
      {
LABEL_6:
        if ( *(_DWORD *)(a4 + 4) != -1 )
        {
          v13 = *(_DWORD *)a4;
          v14 = *(_DWORD *)a4 - 1;
          *(_DWORD *)a4 = v14;
          goto LABEL_8;
        }
        v32 = 1;
        goto LABEL_39;
      }
    }
  }
  if ( *(_DWORD *)(a4 + 4) != -1 )
  {
    v13 = *(_DWORD *)a4;
    v14 = *(_DWORD *)a4 - 1;
    *(_DWORD *)a4 = v14;
    goto LABEL_28;
  }
  v32 = 0;
  v12 = 0;
LABEL_39:
  v33 = -*(_DWORD *)a4;
  if ( *(int *)a4 > 3 )
  {
    sub_847F60(*(unsigned int **)a1, 38, 1, 0, 130, v33);
  }
  else if ( *(int *)a4 <= 1 )
  {
    sub_847F60(*(unsigned int **)a1, 33, 1, 0, 130, v33);
  }
  else
  {
    sub_847F60(*(unsigned int **)a1, 35, 1, 0, 130, v33);
  }
  v13 = *(_DWORD *)a4;
  *(_DWORD *)(a4 + 4) = 4;
  v14 = v13 - 1;
  *(_DWORD *)a4 = v13 - 1;
  if ( !v32 )
  {
LABEL_28:
    v29 = *(int *)(a4 + 8);
    v30 = *(_DWORD *)(a4 + 8);
    *(_BYTE *)(a4 + v29 + 12) = *a3;
    v18 = v30 + 1;
    *(_BYTE *)(a4 + v29 + 16) = 0;
    *(_DWORD *)(a4 + 8) = v18;
    if ( v18 > 3 )
      goto LABEL_9;
    goto LABEL_29;
  }
LABEL_8:
  v15 = *(int *)(a4 + 8);
  v16 = *(_DWORD *)(a4 + 8);
  v17 = v12 | *a3;
  *(_BYTE *)(a4 + v15 + 16) = v12;
  v18 = v16 + 1;
  *(_BYTE *)(a4 + v15 + 12) = v17;
  *(_DWORD *)(a4 + 8) = v18;
  if ( v18 > 3 )
  {
LABEL_9:
    v19 = *(_DWORD *)(a4 + 4);
    if ( v14 > 3 )
    {
      sub_847F60(v8, 38, v19, 0, 130, 1 - v13);
      v18 = *(_DWORD *)(a4 + 8);
      goto LABEL_12;
    }
    if ( v14 > 1 )
    {
      sub_847F60(v8, 35, v19, 0, 130, 1 - v13);
      v18 = *(_DWORD *)(a4 + 8);
      goto LABEL_12;
    }
    if ( v14 != 1 )
    {
      if ( *(_DWORD *)(a4 + 4) == 1 )
      {
        *(_DWORD *)(a4 + 4) = 4;
        if ( v18 != 4 )
          goto LABEL_24;
        v20 = 4;
        goto LABEL_51;
      }
      *(_DWORD *)(a4 + 4) = 1;
      v20 = 1;
LABEL_15:
      if ( v18 != 4 )
      {
LABEL_16:
        if ( v18 != 1 )
          goto LABEL_24;
        v21 = *(_BYTE *)(a4 + 16);
        if ( v21 && !*v8 )
        {
          v8[36] = 0;
          sub_8498A0(v8, 0xD0B0908u, v20, 0, v20, 0, 127, v21);
          v21 = *(_BYTE *)(a4 + 16);
          v20 = *(_DWORD *)(a4 + 4);
        }
        v22 = (unsigned __int8)(*(_BYTE *)(a4 + 12) | v21);
LABEL_19:
        sub_84A700(v8, 1, v20, 0, 127, v22);
        if ( !*v8 )
        {
          v23 = *((_QWORD *)v8 + 10);
          v24 = *(_QWORD *)(v23 + 8);
          v25 = v24 + 16;
          if ( (unsigned __int64)(v24 + 16) <= 0xFF0 )
          {
            v27 = (__m128 *)(v23 + v24 + 16);
            *(_QWORD *)(v23 + 8) = v25;
            if ( !v27 )
              goto LABEL_24;
          }
          else
          {
            v26 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v8 + 7))(
                              4096,
                              *(_QWORD *)(*((_QWORD *)v8 + 7) + 16LL));
            if ( !v26 )
            {
              *v8 = 2;
              goto LABEL_24;
            }
            v26->m128_u64[0] = *((_QWORD *)v8 + 10);
            *((_QWORD *)v8 + 10) = v26;
            v27 = v26 + 1;
            v27[-1].m128_u64[1] = 16;
          }
          *v27 = _mm_loadh_ps(a5);
          *(_QWORD *)a5 = v27;
        }
LABEL_24:
        *(_DWORD *)(a4 + 8) = 0;
        return a3 + 1;
      }
LABEL_51:
      v34 = *(_DWORD *)(a4 + 16);
      if ( v34 && !*v8 )
      {
        v8[36] = 0;
        sub_8498A0(v8, 0xD0B0908u, v20, 0, v20, 0, 127, v34);
        v34 = *(_DWORD *)(a4 + 16);
        v20 = *(_DWORD *)(a4 + 4);
      }
      v22 = *(_DWORD *)(a4 + 12) | v34;
      goto LABEL_19;
    }
LABEL_63:
    sub_847F60(v8, 33, v19, 0, 130, -1);
    v18 = *(_DWORD *)(a4 + 8);
LABEL_12:
    v20 = 1;
    if ( *(_DWORD *)(a4 + 4) == 1 )
      v20 = 4;
    *(_DWORD *)(a4 + 4) = v20;
    if ( v18 != 2 )
      goto LABEL_15;
LABEL_32:
    v31 = *(_WORD *)(a4 + 16);
    if ( v31 && !*v8 )
    {
      v8[36] = 0;
      sub_8498A0(v8, 0xD0B0908u, v20, 0, v20, 0, 127, v31);
      v31 = *(_WORD *)(a4 + 16);
      v20 = *(_DWORD *)(a4 + 4);
    }
    v22 = (unsigned __int16)(*(_WORD *)(a4 + 12) | v31);
    goto LABEL_19;
  }
LABEL_29:
  if ( !v14 )
  {
    if ( *(_DWORD *)(a4 + 4) == 1 )
    {
      *(_DWORD *)(a4 + 4) = 4;
      v20 = 4;
      if ( v18 != 2 )
        goto LABEL_16;
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 1;
      v20 = 1;
      if ( v18 != 2 )
        goto LABEL_16;
    }
    goto LABEL_32;
  }
  if ( v18 == 2 && v14 == 1 )
  {
    v19 = *(_DWORD *)(a4 + 4);
    goto LABEL_63;
  }
  return a3 + 1;
}

