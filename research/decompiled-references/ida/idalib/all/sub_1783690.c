__int64 __fastcall sub_1783690(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // rbp
  char *v4; // r12
  char *v5; // rax
  char *v6; // r12
  char *v7; // rbx
  char *v8; // rdx
  __int64 v9; // rcx
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // r13
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 *v15; // rax
  char *v16; // rbp
  unsigned __int64 v17; // rax
  char *v18; // r13
  __int64 v19; // rbp
  char *i; // r15
  __int64 v21; // rdi
  char *v22; // r14
  unsigned __int64 v23; // rbx
  __int64 v24; // rdi
  unsigned int v25; // rax^4
  void *src; // [rsp+10h] [rbp-138h] BYREF
  __int64 v29; // [rsp+18h] [rbp-130h]
  _QWORD ptr[4]; // [rsp+20h] [rbp-128h] BYREF
  void *v31; // [rsp+40h] [rbp-108h] BYREF
  __int64 v32; // [rsp+48h] [rbp-100h]
  int v33; // [rsp+50h] [rbp-F8h]
  char v34; // [rsp+54h] [rbp-F4h]
  __int64 v35; // [rsp+58h] [rbp-F0h] BYREF
  _BYTE v36[200]; // [rsp+80h] [rbp-C8h] BYREF

  v33 = 0;
  v31 = &v35;
  v32 = 4;
  v34 = 1;
  sub_1782FF0(a1, a2, (__int64)&v31);
  v3 = (char *)v31;
  if ( v34 )
    v4 = (char *)v31 + 8 * HIDWORD(v32);
  else
    v4 = (char *)v31 + 8 * (unsigned int)v32;
  if ( v31 == v4 )
    goto LABEL_8;
  if ( *(_QWORD *)v31 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v5 = (char *)v31 + 8;
    while ( 1 )
    {
      v3 = v5;
      if ( v4 == v5 )
        break;
      v5 += 8;
      if ( *(_QWORD *)v3 < 0xFFFFFFFFFFFFFFFELL )
        goto LABEL_10;
    }
LABEL_8:
    v6 = (char *)ptr;
    src = ptr;
    v29 = 0x400000000LL;
    goto LABEL_31;
  }
LABEL_10:
  v7 = v3 + 8;
  v8 = v3;
  v9 = 0;
  src = ptr;
  v29 = 0x400000000LL;
  v10 = v3 + 8;
  if ( v4 == v3 + 8 )
  {
    LODWORD(v12) = 1;
    ptr[0] = *(_QWORD *)v3;
    goto LABEL_21;
  }
  do
  {
    if ( *((_QWORD *)v8 + 1) >= 0xFFFFFFFFFFFFFFFELL )
    {
      v11 = v10 + 8;
      while ( 1 )
      {
        v8 = v11;
        if ( v11 == v4 )
          break;
        v11 += 8;
        if ( *(_QWORD *)v8 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_37;
      }
      v12 = v9 + 1;
      if ( v9 + 1 > 4 )
        goto LABEL_39;
LABEL_16:
      ptr[0] = *(_QWORD *)v3;
      v13 = ptr;
      while ( 1 )
      {
        v14 = *((_QWORD *)v3 + 1);
        if ( v14 >= 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_18;
LABEL_41:
        v3 = v7;
LABEL_42:
        ++v13;
        v7 = v3 + 8;
        *v13 = v14;
        if ( v3 + 8 == v4 )
          goto LABEL_21;
      }
    }
    v8 = v10;
LABEL_37:
    v10 = v8 + 8;
    ++v9;
  }
  while ( v8 + 8 != v4 );
  v12 = v9 + 1;
  if ( v9 + 1 <= 4 )
    goto LABEL_16;
LABEL_39:
  sub_2237220(&src, ptr, v12, 8);
  LODWORD(v12) = v29 + v12;
  v13 = (unsigned __int64 *)((char *)src + 8 * (unsigned int)v29);
  *v13 = *(_QWORD *)v3;
  if ( v4 == v7 )
    goto LABEL_21;
  v14 = *((_QWORD *)v3 + 1);
  if ( v14 < 0xFFFFFFFFFFFFFFFELL )
    goto LABEL_41;
LABEL_18:
  v15 = (unsigned __int64 *)(v7 + 8);
  while ( 1 )
  {
    v3 = (char *)v15;
    if ( v15 == (unsigned __int64 *)v4 )
      break;
    v14 = *v15++;
    if ( v14 < 0xFFFFFFFFFFFFFFFELL )
      goto LABEL_42;
  }
LABEL_21:
  v16 = (char *)src;
  LODWORD(v29) = v12;
  v2 = 8LL * (unsigned int)v12;
  v6 = (char *)src + v2;
  if ( src != (char *)src + v2 )
  {
    _BitScanReverse64(&v17, v2 >> 3);
    sub_17827D0((__m128i *)src, (__int64 *)((char *)src + v2), 2LL * (int)(63 - (v17 ^ 0x3F)));
    if ( (unsigned __int64)v2 <= 0x80 )
    {
      sub_1782EF0(v16, v6);
    }
    else
    {
      v18 = v16 + 128;
      sub_1782EF0(v16, v16 + 128);
      if ( v16 + 128 != v6 )
      {
        do
        {
          v19 = *(_QWORD *)v18;
          for ( i = v18; ; *((_QWORD *)i + 1) = *(_QWORD *)i )
          {
            v21 = *((_QWORD *)i - 1);
            v22 = i;
            i -= 8;
            v23 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21) >> 32;
            if ( (unsigned int)v23 <= (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19) >> 32 )
              break;
          }
          v18 += 8;
          *(_QWORD *)v22 = v19;
        }
        while ( v18 != v6 );
      }
    }
    v2 = (__int64)src;
    v6 = (char *)src + 8 * (unsigned int)v29;
    if ( src != v6 )
    {
      do
      {
        v24 = *(_QWORD *)v2;
        v2 += 8;
        v25 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24) >> 32;
        sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), v25, 0x16DEu, 0);
        sub_15F7200(v36);
      }
      while ( v6 != (char *)v2 );
      v6 = (char *)src;
    }
  }
LABEL_31:
  LOBYTE(v2) = HIDWORD(v32) == v33;
  if ( v6 != (char *)ptr )
    free(v6);
  if ( !v34 )
    free(v31);
  return (unsigned int)v2;
}
