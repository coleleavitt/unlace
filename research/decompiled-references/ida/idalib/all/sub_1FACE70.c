void __fastcall sub_1FACE70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  _DWORD *v14; // rdx
  unsigned __int64 v15; // r13
  __m128 v16; // xmm0
  __int64 *v17; // rax
  __int64 v18; // r14
  int v19; // r10d
  __int64 v20; // r11
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // r14
  unsigned int v24; // r15d
  __int64 v25; // r14
  __int64 v26; // rax
  char *v27; // rcx
  void **v28; // r8
  __int64 v29; // r14
  char *v30; // rdi
  _QWORD *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // esi
  __int64 v42; // [rsp+8h] [rbp-350h]
  __int64 v43; // [rsp+10h] [rbp-348h] BYREF
  __int64 v44; // [rsp+18h] [rbp-340h] BYREF
  __m128 *v45; // [rsp+28h] [rbp-330h] BYREF
  __int64 v46; // [rsp+30h] [rbp-328h] BYREF
  void *v47[2]; // [rsp+38h] [rbp-320h] BYREF
  _BYTE v48[512]; // [rsp+48h] [rbp-310h] BYREF
  __m128 v49; // [rsp+248h] [rbp-110h] BYREF
  void **v50; // [rsp+258h] [rbp-100h]
  void *v51; // [rsp+260h] [rbp-F8h]
  __int64 v52; // [rsp+268h] [rbp-F0h]
  _BYTE v53[128]; // [rsp+270h] [rbp-E8h] BYREF
  void *ptr; // [rsp+2F0h] [rbp-68h]
  __int64 v55; // [rsp+2F8h] [rbp-60h]
  _BYTE v56[88]; // [rsp+300h] [rbp-58h] BYREF

  v6 = (__int64 *)(a1 + 824);
  v8 = *(unsigned int *)(a1 + 840);
  v44 = a3;
  if ( !(_DWORD)v8 )
  {
    v46 = 0;
LABEL_106:
    sub_1F84FE0((__int64)v6, 2 * v8, a3, v8, a5, a6);
LABEL_107:
    sub_1F72F80(v6, &v44, &v46);
    LODWORD(a3) = *(_DWORD *)(a1 + 832) + 1;
    v11 = v46;
    goto LABEL_9;
  }
  v9 = a3;
  a6 = (unsigned int)(v8 - 1);
  a5 = *(_QWORD *)(a1 + 824);
  v10 = a6 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v11 = a5 + 16LL * v10;
  v12 = *(_QWORD *)v11;
  if ( v9 == *(_QWORD *)v11 )
    goto LABEL_3;
  v19 = 1;
  v20 = 0;
  if ( v12 != 1 )
  {
    while ( 1 )
    {
      if ( !v20 && v12 == 2 )
        v20 = v11;
      v10 = a6 & (v19 + v10);
      v11 = a5 + 16LL * v10;
      v12 = *(_QWORD *)v11;
      if ( v9 == *(_QWORD *)v11 )
        break;
      if ( v12 == 1 )
      {
        if ( v20 )
          v11 = v20;
        goto LABEL_7;
      }
      ++v19;
    }
LABEL_3:
    v13 = *(unsigned int *)(v11 + 12);
    v14 = (_DWORD *)(v11 + 8);
    v15 = (unsigned __int64)*(unsigned int *)(v11 + 8) << 32;
    if ( v15 | v13 )
      goto LABEL_4;
    goto LABEL_12;
  }
LABEL_7:
  v21 = *(_DWORD *)(a1 + 832);
  v46 = v11;
  a3 = (unsigned int)(v21 + 1);
  if ( 4 * (int)a3 >= (unsigned int)(3 * v8) )
    goto LABEL_106;
  if ( (int)v8 - *(_DWORD *)(a1 + 836) - (int)a3 <= (unsigned int)v8 >> 3 )
  {
    sub_1F84FE0((__int64)v6, v8, a3, v8, a5, a6);
    goto LABEL_107;
  }
LABEL_9:
  *(_DWORD *)(a1 + 832) = a3;
  if ( *(_QWORD *)v11 != 1 )
    --*(_DWORD *)(a1 + 836);
  v22 = v44;
  *(_QWORD *)(v11 + 8) = 0;
  *(_QWORD *)v11 = v22;
  v14 = (_DWORD *)(v11 + 8);
LABEL_12:
  v13 = *(_QWORD *)(a1 + 816);
  v15 = 0;
  *(_QWORD *)(a1 + 816) = v13 + 1;
  v14[1] = v13;
  v13 = (unsigned int)v13;
  *v14 = 0;
  v9 = v44;
LABEL_4:
  v43 = a1;
  v47[0] = v48;
  v47[1] = (void *)0x4000000000LL;
  v51 = v53;
  v16 = _mm_loadh_ps((const double *)&v43);
  v52 = 0x1000000000LL;
  ptr = v56;
  v55 = 0x800000000LL;
  v46 = a1;
  v17 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  v49 = v16;
  v50 = v47;
  if ( (v9 & 8) != 0 )
  {
    v23 = *(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL)) | v9 & 7;
    sub_1F85840(a1, a2, *v17 & 0xFFFFFFFFFFFFFFF0LL, v47, a5, a6);
    sub_9B9C90((__int64)v50, v23);
    v24 = *(_DWORD *)(v46 + 3448);
    v42 = *(_QWORD *)(v49.m128_u64[1] + 16);
    v25 = *(_QWORD *)(*(_QWORD *)(v42 + 24) + 8LL);
    v26 = sub_A1F730(v42);
    v27 = (char *)ptr;
    v28 = v50;
    v29 = *(unsigned int *)(v42 + 48) + 8 * (v26 + v25);
    v30 = (char *)ptr + 4 * (unsigned int)v55;
    if ( ptr != v30 )
    {
      do
      {
        v31 = (char *)*v28 + 8 * *(unsigned int *)v27;
        if ( *v31 )
        {
          *v31 = v29 - *v31;
          v28 = v50;
        }
        v27 += 4;
      }
      while ( v30 != v27 );
    }
    LODWORD(v55) = 0;
    v32 = *(_QWORD *)(v49.m128_u64[1] + 16);
    if ( v24 )
      sub_1F763F0(v32, v24, *v28, *((unsigned int *)v28 + 2), 0, 0, 0x100000001LL);
    else
      sub_1F6E900(v32, 1u, (__int64)v28);
    sub_1FCF3C0(&v49);
  }
  else
  {
    v18 = *v17;
    v45 = &v49;
    sub_1FABE10((__int64 **)&v45, v18, (__int64)v14, (__int64)v47, a5, a6);
    switch ( *(_BYTE *)(v18 + 16) )
    {
      case 0:
        v40 = 42;
        break;
      case 1:
        v40 = 41;
        break;
      case 2:
        v40 = 9;
        break;
      case 3:
        v40 = 58;
        break;
      case 4:
        v40 = 33;
        break;
      case 5:
        v40 = 10;
        break;
      case 6:
        v40 = 11;
        break;
      case 7:
        v40 = 40;
        break;
      case 8:
        v40 = 36;
        break;
      case 9:
        v40 = 55;
        break;
      case 0xA:
        v40 = 50;
        break;
      case 0xB:
        v40 = 5;
        break;
      case 0xC:
        v40 = 57;
        break;
      case 0xD:
      case 0x3A:
        v40 = 13;
        break;
      case 0xE:
        v40 = 3;
        break;
      case 0xF:
        v40 = 23;
        break;
      case 0x10:
        v40 = 38;
        break;
      case 0x11:
        v40 = 45;
        break;
      case 0x12:
        v40 = 47;
        break;
      case 0x13:
        v40 = 51;
        break;
      case 0x14:
        v40 = 31;
        break;
      case 0x15:
        v40 = 46;
        break;
      case 0x16:
        v40 = 32;
        break;
      case 0x17:
        v40 = 48;
        break;
      case 0x18:
        v40 = 24;
        break;
      case 0x19:
        v40 = 14;
        break;
      case 0x1A:
        v40 = 15;
        break;
      case 0x1B:
        v40 = 59;
        break;
      case 0x1C:
        v40 = 60;
        break;
      case 0x1D:
        v40 = 27;
        break;
      case 0x1E:
        v40 = 49;
        break;
      case 0x1F:
        v40 = 52;
        break;
      case 0x20:
        v40 = 53;
        break;
      case 0x21:
        v40 = 8;
        break;
      case 0x22:
        v40 = 22;
        break;
      case 0x23:
        v40 = 28;
        break;
      case 0x24:
        v40 = 21;
        break;
      case 0x25:
        v40 = 44;
        break;
      case 0x26:
        v40 = 35;
        break;
      case 0x27:
        v40 = 56;
        break;
      case 0x28:
        v40 = 34;
        break;
      case 0x29:
        v40 = 43;
        break;
      case 0x2A:
        v40 = 4;
        break;
      case 0x2B:
        v40 = 6;
        break;
      case 0x2C:
        v40 = 7;
        break;
      case 0x2D:
        v40 = 37;
        break;
      case 0x2E:
        v40 = 25;
        break;
      case 0x2F:
        v40 = 20;
        break;
      case 0x30:
        v40 = 19;
        break;
      case 0x31:
        v40 = 30;
        break;
      case 0x32:
        v40 = 29;
        break;
      case 0x33:
        v40 = 17;
        break;
      case 0x34:
        v40 = 18;
        break;
      case 0x35:
        v40 = 16;
        break;
      case 0x36:
        v40 = 39;
        break;
      case 0x37:
        v40 = 26;
        break;
      case 0x38:
        v40 = 54;
        break;
      case 0x39:
        v40 = 12;
        break;
    }
    v29 = sub_1F6EAE0((__int64)&v49, v40);
  }
  v45 = (__m128 *)(v29 - *(_QWORD *)(a1 + 776));
  if ( ptr != v56 )
    free(ptr);
  if ( v51 != v53 )
    free(v51);
  if ( v47[0] != v48 )
    free(v47[0]);
  v33 = *(_QWORD *)(a1 + 856);
  v34 = *(_QWORD *)(a1 + 848);
  v35 = (v15 | v13) - *(_QWORD *)(a1 + 808);
  v36 = (v33 - v34) >> 3;
  if ( v35 == v36 )
  {
    if ( v33 == *(_QWORD *)(a1 + 864) )
    {
      sub_1F73030(a1 + 848, *(char **)(a1 + 856), &v45);
    }
    else
    {
      v39 = v33 + 8;
      *(_QWORD *)(v39 - 8) = v45;
      *(_QWORD *)(a1 + 856) = v39;
    }
  }
  else
  {
    v37 = v35 + 1;
    if ( v35 + 1 > v36 )
    {
      sub_1F73280((unsigned __int64 *)(a1 + 848), v37 - v36);
      v34 = *(_QWORD *)(a1 + 848);
    }
    else if ( v35 + 1 < v36 )
    {
      v38 = v34 + 8 * v37;
      if ( v33 != v38 )
        *(_QWORD *)(a1 + 856) = v38;
    }
    *(_QWORD *)(v34 + 8 * v35) = v45;
  }
}
