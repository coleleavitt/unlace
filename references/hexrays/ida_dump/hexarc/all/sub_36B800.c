__int64 __fastcall sub_36B800(__int64 a1, __int64 a2, char a3, double a4)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  __m128i v8; // xmm1
  __int64 *v9; // rax
  __int64 v10; // r12
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  char v15; // cl
  int v16; // esi
  unsigned int v17; // edx
  int v18; // edx
  __int64 v19; // rax
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // cl
  int v23; // ecx
  unsigned int tinfo_size; // eax
  __int64 v25; // rsi
  int v26; // edx
  __int64 v27; // rcx
  char v28; // dl
  unsigned int v29; // eax
  int v30; // eax
  char *v31; // rbx
  __int64 v32; // rdi
  __m128i si128; // xmm2
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rax
  char *v36; // rax
  char *v37; // rbx
  __m128i v38[4]; // [rsp+0h] [rbp-48h] BYREF

  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  v6 = *(_QWORD *)(a2 + 16);
  v38[0] = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v6 )
  {
    v31 = (char *)qalloc_or_throw(16 * v6);
    memcpy(v31, *(const void **)(a2 + 8), 16 * v6);
    v32 = *(_QWORD *)(a1 + 16);
    if ( v32 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      qfree(v32);
    }
    si128 = _mm_load_si128(v38);
    *(_QWORD *)(a1 + 16) = v31;
    *(__m128i *)(a1 + 24) = si128;
    if ( v6 != 1 )
    {
      v34 = 1;
      while ( 1 )
      {
        v36 = &v31[16 * v34 - 16];
        v37 = &v31[16 * v34];
        if ( *((_QWORD *)v36 + 1) == *(_QWORD *)v37 )
        {
          *((_QWORD *)v36 + 1) = *((_QWORD *)v37 + 1);
          memmove(
            (void *)(16 * v34 + *(_QWORD *)(a1 + 16)),
            (const void *)(16 * v34 + *(_QWORD *)(a1 + 16) + 16),
            16LL * *(_QWORD *)(a1 + 24) - 16 - 16 * v34);
          v35 = *(_QWORD *)(a1 + 24) - 1LL;
          *(_QWORD *)(a1 + 24) = v35;
        }
        else
        {
          v35 = *(_QWORD *)(a1 + 24);
          ++v34;
        }
        if ( v34 >= v35 )
          break;
        v31 = *(char **)(a1 + 16);
      }
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( !v7 )
    {
      v9 = *(__int64 **)(a1 + 8);
      a4 = 0.0;
      *(_OWORD *)(a1 + 24) = 0;
      if ( v9 )
        goto LABEL_5;
LABEL_22:
      v9 = *(__int64 **)(a1 + 16);
      goto LABEL_5;
    }
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v7);
    v8 = _mm_load_si128(v38);
    *(_QWORD *)(a1 + 16) = 0;
    *(__m128i *)(a1 + 24) = v8;
  }
  v9 = *(__int64 **)(a1 + 8);
  if ( !v9 )
    goto LABEL_22;
LABEL_5:
  v10 = *v9;
  *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 408LL) = *v9;
  v11 = *(_QWORD *)(a1 + 8) == 0;
  *(_QWORD *)(a1 + 40) = v10;
  if ( v11 && (a3 & 4) != 0 )
    *(_DWORD *)(a1 + 4) |= 0x4000u;
  v12 = getseg(v10);
  v13 = v12;
  if ( !v12 || (unsigned __int8)is_spec_segm(*(unsigned __int8 *)(v12 + 184)) )
    return (unsigned int)-28;
  v14 = *(_QWORD *)(a1 + 1504);
  v15 = *(_BYTE *)(v13 + 43);
  if ( *(_DWORD *)(v14 + 84) == 8 )
  {
    if ( v15 != 2 )
      return (unsigned int)-25;
    v17 = -24;
    if ( (*(_BYTE *)(v14 + 49) & 1) == 0 )
      return v17;
  }
  else
  {
    v16 = *(_DWORD *)(v14 + 48);
    if ( v15 != 2 )
    {
      v17 = -25;
      if ( (v16 & 0x80) == 0 )
        return v17;
      v18 = *(_DWORD *)(v14 + 80);
      if ( v18 != 4 )
      {
        if ( v15 )
          goto LABEL_13;
        return (unsigned int)-11;
      }
      v19 = *(_QWORD *)(a1 + 1496);
      if ( !*(_BYTE *)(v19 + 144) )
      {
        if ( v15 )
        {
          v20 = *(_BYTE *)(v19 + 130);
          if ( v20 == 4 )
          {
            v21 = *(_BYTE *)(v19 + 132);
            if ( v21 != 4 )
              goto LABEL_18;
            v23 = 3;
            goto LABEL_26;
          }
          goto LABEL_56;
        }
        return (unsigned int)-11;
      }
      goto LABEL_39;
    }
    v17 = -24;
    if ( (v16 & 0x100) == 0 )
      return v17;
  }
  v18 = *(_DWORD *)(v14 + 80);
  if ( v18 == 4 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 1496) + 144LL) )
    {
      sub_66B20((__int64)"%a: the application is 32-bit but the segment is 64-bit\n", a4);
      return (unsigned int)-15;
    }
LABEL_39:
    sub_66B20((__int64)"%a: wrong application bitness (64)\n", a4);
    return (unsigned int)-15;
  }
LABEL_13:
  v19 = *(_QWORD *)(a1 + 1496);
  v20 = *(_BYTE *)(v19 + 130);
  if ( v20 != 4 )
  {
    if ( v18 == 8 && v20 == 8 )
    {
      v21 = *(_BYTE *)(v19 + 132);
      if ( v21 > 8u )
      {
        v18 = 8;
        goto LABEL_18;
      }
      if ( ((v21 - 4) & 0xFB) != 0 )
      {
LABEL_18:
        sub_66B20((__int64)"Size of 'enum' is %d (%d expected)\n", v21, v18);
        return (unsigned int)-16;
      }
      goto LABEL_24;
    }
LABEL_56:
    sub_66B20((__int64)"Wrong sizeof(int) %d bytes\n", v20);
    return (unsigned int)-16;
  }
  v21 = *(_BYTE *)(v19 + 132);
  if ( v21 != 4 )
  {
    v18 = 4;
    goto LABEL_18;
  }
LABEL_24:
  v23 = 3;
  if ( *(_BYTE *)(v19 + 144) )
    v23 = 1;
LABEL_26:
  if ( (*(_BYTE *)(v19 + 129) & 3) != v23 )
  {
    sub_66B20((__int64)"Wrong memory model selected\n");
    return (unsigned int)-16;
  }
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(v19 + 232), 0);
  v25 = tinfo_size;
  v26 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 84LL);
  if ( tinfo_size != v26 )
  {
    sub_66B20((__int64)"Size of 'void *' is %d (%d expected)\n", tinfo_size, v26);
    return (unsigned int)-16;
  }
  v27 = *(_QWORD *)(a1 + 1496);
  if ( !*(_DWORD *)(*(_QWORD *)(v27 + 8) + 4LL) || (v17 = -27, (*(_BYTE *)(v27 + 129) & 0xC) == 0) )
  {
    v28 = *(_BYTE *)(v27 + 129);
    v29 = v28 & 0xF0;
    if ( (v28 & 0xF0) == 0xC0 )
      v29 = *(_DWORD *)(v27 + 140);
    if ( v29 > 0x10 )
      return 0;
    v30 = *(_DWORD *)(v27 + 1416);
    if ( (v30 & 4) != 0 )
    {
      return 0;
    }
    else
    {
      *(_DWORD *)(v27 + 1416) = v30 | 4;
      sub_66B20((__int64)"Default calling convention is not set, decompilation may be incorrect!\n", v25);
      return 0;
    }
  }
  return v17;
}
