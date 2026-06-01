__int64 __fastcall sub_150C700(__int64 a1, __m128i a2, __m128 a3)
{
  int *v3; // r14
  int v5; // eax
  __int64 *v6; // rsi
  char *v7; // rdx
  __m128i *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int16 i; // ax
  __int64 *v13; // rdi
  __int64 v14; // r15
  char v15; // al
  int v16; // ebp
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int16 v26; // dx
  int v27; // r11d
  __int64 v28; // r10
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // dl
  __int64 *v34; // rdi
  int v35; // ebx
  int v36; // r9d
  __int64 *v37; // rdi
  __int64 *v38; // rdi
  unsigned int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 *v43; // rdi
  unsigned __int64 v44; // rdx
  const __m128i *v45; // rdi
  int v46; // [rsp+0h] [rbp-228h]
  __int64 v47; // [rsp+0h] [rbp-228h]
  int v48; // [rsp+Ch] [rbp-21Ch]
  __int64 v49; // [rsp+10h] [rbp-218h]
  __int64 v50; // [rsp+18h] [rbp-210h]
  char v51; // [rsp+23h] [rbp-205h]
  int v52; // [rsp+24h] [rbp-204h]
  int v53; // [rsp+24h] [rbp-204h]
  int v54; // [rsp+24h] [rbp-204h]
  int v55; // [rsp+24h] [rbp-204h]
  int v56; // [rsp+24h] [rbp-204h]
  __int64 v57; // [rsp+28h] [rbp-200h]
  __int64 v58; // [rsp+28h] [rbp-200h]
  __int64 v59; // [rsp+28h] [rbp-200h]
  __int64 v60; // [rsp+28h] [rbp-200h]
  __int64 v61; // [rsp+28h] [rbp-200h]
  int v62; // [rsp+40h] [rbp-1E8h]
  int v63; // [rsp+44h] [rbp-1E4h]
  _BYTE *v64; // [rsp+48h] [rbp-1E0h]
  _BYTE *v65; // [rsp+50h] [rbp-1D8h] BYREF
  char v66; // [rsp+58h] [rbp-1D0h]
  __int64 v67; // [rsp+60h] [rbp-1C8h]
  int v68; // [rsp+68h] [rbp-1C0h]
  __int16 v69; // [rsp+6Ch] [rbp-1BCh]
  __int64 (__fastcall *v70)(__int64); // [rsp+70h] [rbp-1B8h]
  __int64 v71; // [rsp+78h] [rbp-1B0h]
  __int64 v72; // [rsp+80h] [rbp-1A8h]
  _OWORD v73[5]; // [rsp+90h] [rbp-198h] BYREF
  void *ptr; // [rsp+E0h] [rbp-148h] BYREF
  __int64 v75; // [rsp+E8h] [rbp-140h]
  _BYTE v76[312]; // [rsp+F0h] [rbp-138h] BYREF

  v3 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_DWORD *)(a1 + 40);
  v69 = 449;
  v6 = elf_gnu_hash_indexes + 945;
  v62 = v5;
  v65 = (_BYTE *)(a1 + 1952);
  LOBYTE(v5) = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v66 = v5;
  v67 = a1;
  v68 = 1507350;
  v70 = sub_146A990;
  v71 = 0;
  v72 = 0;
  if ( (unsigned __int8)sub_156A040(&v65, 1625, "iterator", 0) )
  {
    result = 1;
    goto LABEL_3;
  }
  v63 = v72;
  ptr = v76;
  v75 = 0x400000000LL;
  for ( i = *(_WORD *)(a1 + 32); i != 449 && i != 23; i = *(_WORD *)(a1 + 32) )
  {
    if ( i == 5
      && ((v29 = *(_QWORD *)(a1 + 8), v30 = *(_QWORD *)(v29 + 2944), *(unsigned int *)(v29 + 2912) <= v30)
        ? (v31 = sub_14180A0(v29, 1u))
        : (v31 = *(_QWORD *)(v29 + 2904) + 24 * v30),
          *(_WORD *)(v31 + 16) == 64) )
    {
      v50 = 0;
    }
    else
    {
      v32 = sub_1496480(a1, nullptr, 5, 3u, nullptr, 0, a2, a3);
      if ( v33 )
      {
        sub_156E210(&v65);
        result = 1;
        goto LABEL_34;
      }
      v50 = v32;
    }
    if ( *(_WORD *)(a1 + 32) == 5 )
    {
      v13 = *(__int64 **)(a1 + 8);
      v14 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v13, v3);
      v46 = *(_DWORD *)(a1 + 40);
      if ( *(_WORD *)(a1 + 32) == 64 )
        goto LABEL_30;
    }
    else
    {
      sub_1564840(v73, a1, v3, 1659);
      v14 = 0;
      sub_15038B0((unsigned __int8 **)v73);
      sub_AEA040((__int64)v73);
      v46 = 0;
      if ( *(_WORD *)(a1 + 32) == 64 )
      {
LABEL_30:
        v34 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v34, v3);
        v48 = *(_DWORD *)(a1 + 40);
        goto LABEL_9;
      }
    }
    sub_1564840(v73, a1, v3, 1799);
    sub_AEA040((__int64)v73);
    v48 = 0;
LABEL_9:
    v15 = *(_BYTE *)(a1 + 2040);
    *(_BYTE *)(a1 + 2040) = 1;
    v16 = 0;
    v17 = *(_DWORD *)(a1 + 16);
    v51 = v15;
    v18 = sub_14BDA20(a1, 0, 0, 0, 0, nullptr, a2);
    v19 = sub_14BE680((const __m128i *)a1, v18, 3, a2);
    v49 = sub_19B4A30(*(_QWORD *)(a1 + 96), v19 & 0xFFFFFFFFFFFFFFFELL, v17, 0, 0, 0);
    if ( *(_WORD *)(a1 + 32) == 62 )
    {
      v43 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v43, v3);
      v16 = *(_DWORD *)(a1 + 40);
    }
    v20 = *(_DWORD *)(a1 + 16);
    v21 = sub_14BDA20(a1, 0, 0, 0, 0, nullptr, a2);
    v22 = sub_14BE680((const __m128i *)a1, v21, 3, a2);
    v23 = v20;
    v24 = 0;
    v25 = sub_19B4A30(*(_QWORD *)(a1 + 96), v22 & 0xFFFFFFFFFFFFFFFELL, v23, 0, 0, 0);
    v26 = *(_WORD *)(a1 + 32);
    v27 = 0;
    v28 = v25;
    if ( v26 == 62 )
    {
      v59 = v25;
      v38 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v38, v3);
      v54 = *(_DWORD *)(a1 + 40);
      v39 = *(_DWORD *)(a1 + 16);
      v40 = sub_14BDA20(a1, 0, 0, 0, 0, nullptr, a2);
      v41 = sub_14BE680((const __m128i *)a1, v40, 3, a2);
      v42 = sub_19B4A30(*(_QWORD *)(a1 + 96), v41 & 0xFFFFFFFFFFFFFFFELL, v39, 0, 0, 0);
      v26 = *(_WORD *)(a1 + 32);
      v28 = v59;
      v27 = v54;
      v24 = v42 & 0xFFFFFFFFFFFFFFFELL;
    }
    if ( v26 != 66 && v26 != 23 )
    {
      v57 = v28;
      v52 = v27;
      sub_1564840(v73, a1, v3, 1805);
      sub_AEA040((__int64)v73);
      v26 = *(_WORD *)(a1 + 32);
      v28 = v57;
      v27 = v52;
    }
    if ( v26 == 66 )
    {
      v37 = *(__int64 **)(a1 + 8);
      v58 = v28;
      v53 = v27;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v37, v3);
      v28 = v58;
      v27 = v53;
    }
    a2 = 0;
    v6 = (__int64 *)HIDWORD(v75);
    v8 = (__m128i *)((char *)ptr + 64 * (unsigned __int64)(unsigned int)v75);
    if ( (unsigned int)v75 >= (unsigned __int64)HIDWORD(v75) )
    {
      v44 = (unsigned int)v75 + 1LL;
      memset(v73, 0, 64);
      v45 = (const __m128i *)v73;
      if ( HIDWORD(v75) < v44 )
      {
        if ( ptr > v73 || v8 <= (__m128i *)v73 )
        {
          v61 = v28;
          v56 = v27;
          v6 = (__int64 *)v76;
          sub_2237220(&ptr, v76, v44, 64);
          v45 = (const __m128i *)v73;
          v27 = v56;
          v28 = v61;
          v8 = (__m128i *)((char *)ptr + 64 * (unsigned __int64)(unsigned int)v75);
        }
        else
        {
          v64 = ptr;
          v60 = v28;
          v6 = (__int64 *)v76;
          v55 = v27;
          sub_2237220(&ptr, v76, v44, 64);
          v28 = v60;
          v27 = v55;
          v45 = (const __m128i *)((char *)ptr + (char *)v73 - v64);
          v8 = (__m128i *)((char *)ptr + 64 * (unsigned __int64)(unsigned int)v75);
        }
      }
      a3 = (__m128)_mm_loadu_si128(v45);
      *v8 = (__m128i)a3;
      v8[1] = _mm_loadu_si128(v45 + 1);
      v8[2] = _mm_loadu_si128(v45 + 2);
      v8[3] = _mm_loadu_si128(v45 + 3);
    }
    else
    {
      *v8 = 0;
      v8[3] = 0;
      a2 = 0;
      v8->m128i_i32[2] = 0;
      v8[3].m128i_i32[2] = 0;
      v8[1] = 0;
      v8[2] = 0;
    }
    LODWORD(v75) = v75 + 1;
    v7 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v75 - 64;
    *(_QWORD *)v7 = v14;
    *((_DWORD *)v7 + 2) = v46;
    *((_DWORD *)v7 + 13) = v16;
    *((_QWORD *)v7 + 2) = v50;
    *((_DWORD *)v7 + 14) = v27;
    *((_DWORD *)v7 + 12) = v48;
    *((_QWORD *)v7 + 4) = v28 & 0xFFFFFFFFFFFFFFFELL;
    *((_QWORD *)v7 + 5) = v24;
    *((_QWORD *)v7 + 3) = v49 & 0xFFFFFFFFFFFFFFFELL;
    *(_BYTE *)(a1 + 2040) = v51;
  }
  v35 = *(_DWORD *)(a1 + 16);
  if ( !(unsigned __int8)sub_14808E0((__int64)&v65, v6, (__int64)v7, (__int64)v8, v9, v10) )
    v35 = HIDWORD(v72);
  result = sub_1B45670(
             *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL),
             *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
             v62,
             v63,
             v35,
             v36,
             (__int64)ptr,
             (unsigned int)v75);
LABEL_34:
  if ( ptr != v76 )
  {
    v47 = result;
    free(ptr);
    result = v47;
  }
LABEL_3:
  *v65 = v66;
  return result;
}
