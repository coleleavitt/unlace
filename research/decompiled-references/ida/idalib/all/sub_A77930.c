unsigned __int64 __fastcall sub_A77930(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v10; // esi
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // r8d
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  __int64 *v25; // rbp
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdi
  unsigned int v30; // eax
  __int64 *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // [rsp+8h] [rbp-100h]
  int v35; // [rsp+18h] [rbp-F0h]
  int v36; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v37; // [rsp+18h] [rbp-F0h]
  __int64 v40; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+48h] [rbp-C0h]
  _BYTE v43[184]; // [rsp+50h] [rbp-B8h] BYREF

  v42 = 0x2000000000LL;
  ptr = v43;
  sub_9B7040((__int64)&ptr, a2);
  sub_9B7040((__int64)&ptr, a3);
  v10 = a4;
  v11 = a5 + 16;
  sub_9B7040((__int64)&ptr, v10);
  v12 = a5 + 32 * a6;
  v33 = v12 + 16;
  if ( v12 != a5 )
  {
    do
    {
      while ( 1 )
      {
        v17 = (unsigned int)v42;
        v18 = *(unsigned __int8 *)(v11 - 16);
        v19 = (unsigned int)v42 + 1LL;
        if ( v19 > HIDWORD(v42) )
        {
          v35 = *(unsigned __int8 *)(v11 - 16);
          sub_2237220(&ptr, v43, v19, 4);
          v17 = (unsigned int)v42;
          v18 = v35;
        }
        *((_DWORD *)ptr + v17) = v18;
        v13 = *(_QWORD *)(v11 - 8);
        LODWORD(v42) = v42 + 1;
        v14 = (unsigned int)v42;
        if ( (unsigned __int64)(unsigned int)v42 + 1 > HIDWORD(v42) )
        {
          v37 = v13;
          sub_2237220(&ptr, v43, (unsigned int)v42 + 1LL, 4);
          v14 = (unsigned int)v42;
          v13 = v37;
        }
        *((_DWORD *)ptr + v14) = v13;
        v15 = HIDWORD(v13);
        LODWORD(v42) = v42 + 1;
        if ( (unsigned __int64)(unsigned int)v42 + 1 > HIDWORD(v42) )
          break;
        v16 = v11;
        v11 += 32;
        *((_DWORD *)ptr + (unsigned int)v42) = v15;
        LODWORD(v42) = v42 + 1;
        sub_2205760(v16, &ptr);
        if ( v11 == v33 )
          goto LABEL_10;
      }
      v36 = v15;
      sub_2237220(&ptr, v43, (unsigned int)v42 + 1LL, 4);
      v20 = v11;
      v11 += 32;
      *((_DWORD *)ptr + (unsigned int)v42) = v36;
      LODWORD(v42) = v42 + 1;
      sub_2205760(v20, &ptr);
    }
    while ( v33 != v11 );
  }
LABEL_10:
  v40 = 0;
  v21 = sub_2223360(a1 + 896, &ptr, &v40, &off_2B410C0);
  if ( v21 && (v22 = v21 - 24) != 0 )
  {
    v23 = v22 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v25 = (__int64 *)(a5 + 16);
    v26 = sub_A6FFD0((__int64 *)(a1 + 2352), 32 * a6 + 64, 4u);
    *(_QWORD *)v26 = v26;
    *(_QWORD *)(v26 + 8) = v26 & 0xFFFFFFFFFFFFFFF0LL;
    *(_WORD *)(v26 + 16) = 28;
    *(_BYTE *)(v26 + 18) &= 0xF8u;
    *(_DWORD *)(v26 + 32) = a2;
    *(_QWORD *)(v26 + 24) = 0;
    *(_DWORD *)(v26 + 36) = a3;
    *(_QWORD *)(v26 + 48) = a6;
    *(_DWORD *)(v26 + 40) = a4;
    if ( a6 )
    {
      v27 = v26 + 64;
      v28 = 0;
      do
      {
        while ( 1 )
        {
          *(_BYTE *)v27 = 0;
          v29 = v27 + 16;
          *(_QWORD *)(v27 + 8) = 0;
          *(_DWORD *)(v27 + 24) = 1;
          *(_QWORD *)(v27 + 16) = 0;
          *(_BYTE *)v27 = *((_BYTE *)v25 - 16);
          *(_QWORD *)(v27 + 8) = *(v25 - 1);
          v30 = *((_DWORD *)v25 + 2);
          if ( v30 <= 0x40 )
            break;
          v31 = v25;
          ++v28;
          v27 += 32LL;
          v25 += 4;
          sub_22056A0(v29, v31);
          if ( *(_QWORD *)(v26 + 48) <= v28 )
            goto LABEL_20;
        }
        v32 = *v25;
        ++v28;
        *(_DWORD *)(v27 + 24) = v30;
        v25 += 4;
        v27 += 32LL;
        *(_QWORD *)(v27 - 16) = v32;
      }
      while ( v28 < *(_QWORD *)(v26 + 48) );
    }
LABEL_20:
    sub_A6A720(a1 + 8, v26);
    sub_2223210(a1 + 896, v26 + 24, v40, &off_2B410C0);
    v23 = v26 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( ptr != v43 )
    free(ptr);
  return v23;
}
