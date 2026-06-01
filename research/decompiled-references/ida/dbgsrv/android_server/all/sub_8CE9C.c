/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CE9C
// Address: 0x000000000008CE9C

//----- (000000000008CE9C) ----------------------------------------------------
__int64 __fastcall sub_8CE9C(__int64 a1)
{
  pthread_mutex_t *v2; // x0
  pthread_mutex_t *v3; // x0
  pthread_mutex_t *v4; // x0
  unsigned int *v5; // x0
  void *v6; // x23
  unsigned __int64 v7; // x1
  int v8; // w0
  _BOOL4 v9; // w22
  __int64 v10; // x8
  int v11; // w24
  const char *align; // x24
  unsigned __int8 *v13; // x11
  const char *v15; // x25
  int v16; // w26
  int v17; // w0
  int v18; // w8
  unsigned __int64 v19; // x10
  __int64 v20; // x13
  int v21; // w12
  int v22; // w17
  int v23; // w16
  int v24; // w15
  int v25; // w14
  int v26; // w12
  int v27; // w11
  __int128 v28; // kr00_16
  __int64 v29; // x9
  pthread_mutex_t *v30; // x0
  void *v31; // x0
  __int64 v32; // x8
  int v33; // w8
  unsigned int v34; // w19
  struct __pthread_internal_list *prev; // x0
  int v36; // w20
  int v37; // w3
  pthread_mutex_t ptr; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v40; // [xsp+30h] [xbp-80h]
  pthread_mutex_t src; // [xsp+40h] [xbp-70h] BYREF

  src.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_A640C(3, (pthread_mutex_t *)(&ptr.__align + 3));
  v2 = pack_dd(&src, (unsigned __int64)&src.__align + 5, 0x1Fu);
  sub_545E8((pthread_mutex_t *)(&ptr.__align + 3), &src, (char *)v2 - (char *)&src);
  v3 = pack_dd(&src, (unsigned __int64)&src.__align + 5, 0xBu);
  sub_545E8((pthread_mutex_t *)(&ptr.__align + 3), &src, (char *)v3 - (char *)&src);
  v4 = pack_dd(&src, (unsigned __int64)&src.__align + 5, 8u);
  sub_545E8((pthread_mutex_t *)(&ptr.__align + 3), &src, (char *)v4 - (char *)&src);
  v5 = (unsigned int *)sub_9E8A8(a1 + 192, 3u, (__int64 *)&ptr.__list, 0);
  v6 = v5;
  if ( !v5 )
  {
    sub_8D3F8(a1, "[%d] Could not establish the connection\n", *(_DWORD *)(a1 + 168));
    goto LABEL_34;
  }
  v7 = (unsigned __int64)v5 + *v5 + 5;
  src.__align = (__int64)v5 + 5;
  *(&src.__align + 1) = v7;
  v8 = unpack_dd((unsigned __int64 *)&src, v7);
  v9 = v8 != 0;
  if ( !v8 )
  {
    sub_8D3F8(a1, "[%d] Incompatible IDA version\n", *(_DWORD *)(a1 + 168));
    v9 = 0;
    v11 = 0;
    goto LABEL_24;
  }
  v10 = *(_QWORD *)(a1 + 448);
  if ( *(_QWORD *)(v10 + 120) >= 2u )
  {
    align = (const char *)src.__align;
    v13 = (unsigned __int8 *)src.__align;
    while ( (unsigned __int64)v13 < *(&src.__align + 1) )
    {
      if ( !*v13++ )
      {
        src.__align = (__int64)v13;
        goto LABEL_12;
      }
    }
    align = nullptr;
LABEL_12:
    v15 = *(const char **)(v10 + 112);
    if ( !align )
      goto LABEL_22;
    v16 = strlen(align);
    v17 = strlen(v15);
    v18 = v17 ^ v16;
    if ( v16 >= 1 && v17 )
    {
      if ( (unsigned int)v16 < 2uLL )
      {
        v19 = 0;
        do
        {
LABEL_20:
          v26 = (unsigned __int8)align[v19];
          v27 = (unsigned __int8)v15[(int)v19++ % v17];
          v18 |= v26 ^ v27;
        }
        while ( v16 != v19 );
        goto LABEL_21;
      }
      v20 = 0;
      v21 = 0;
      v19 = (unsigned int)v16 - (unsigned __int64)(v16 & 1);
      do
      {
        v22 = (unsigned __int8)align[v20];
        v23 = (unsigned __int8)align[v20 + 1];
        v24 = (unsigned __int8)v15[(int)v20 % v17];
        v25 = (unsigned __int8)v15[((int)v20 + 1) % v17];
        v20 += 2;
        v18 |= v22 ^ v24;
        v21 |= v23 ^ v25;
      }
      while ( v19 != v20 );
      v18 |= v21;
      if ( (v16 & 1) != 0 )
        goto LABEL_20;
    }
LABEL_21:
    if ( !v18 )
      goto LABEL_23;
LABEL_22:
    sub_8D3F8(a1, "[%d] Bad password\n", *(_DWORD *)(a1 + 168));
    v9 = 0;
    goto LABEL_23;
  }
  v9 = 1;
LABEL_23:
  v11 = 1;
LABEL_24:
  *(_BYTE *)(a1 + 261) = v9;
  qfree(v6);
  if ( v11 )
  {
    sub_A640C(0, &ptr);
    v28 = *(_OWORD *)&ptr.__lock;
    v29 = *(&ptr.__align + 2);
    memset(&ptr, 0, 24);
    *(_OWORD *)&src.__lock = v28;
    *(&src.__align + 2) = v29;
    if ( ptr.__list.__prev )
    {
      ptr.__list.__next = nullptr;
      qfree(ptr.__list.__prev);
      *(_OWORD *)(&ptr.__align + 3) = *(_OWORD *)&src.__lock;
      v40 = *(&src.__align + 2);
      if ( ptr.__align )
      {
        *(&ptr.__align + 1) = 0;
        qfree((void *)ptr.__align);
        ptr.__align = 0;
        *(&ptr.__align + 2) = 0;
      }
    }
    else
    {
      *(_OWORD *)(&ptr.__align + 3) = v28;
      v40 = v29;
    }
    v30 = pack_dd(&src, (unsigned __int64)&src.__align + 5, v9);
    sub_545E8((pthread_mutex_t *)(&ptr.__align + 3), &src, (char *)v30 - (char *)&src);
    sub_A5940(a1 + 192, (__int64 *)&ptr.__list);
    *(_DWORD *)(a1 + 256) = -1;
    *(_BYTE *)(a1 + 261) = 1;
    if ( v9 )
    {
      memset(&src, 0, 24);
      v31 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, pthread_mutex_t *))(*(_QWORD *)(a1 + 192) + 16LL))(
                      a1 + 192,
                      3,
                      &src);
      if ( v31 )
        qfree(v31);
      if ( src.__align )
      {
        *(&src.__align + 1) = 0;
        qfree((void *)src.__align);
        src.__align = 0;
        *(&src.__align + 2) = 0;
      }
    }
  }
LABEL_34:
  v32 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 200) = 0;
  if ( ((*(__int64 (__fastcall **)(__int64))(v32 + 56))(a1) & 1) == 0 )
    goto LABEL_45;
  sub_8D3F8(a1, "[%d] Broken connection (mode=%d)\n", *(_DWORD *)(a1 + 168), *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL));
  v33 = *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL);
  if ( v33 == 2 )
  {
    v36 = *(_DWORD *)(*(_QWORD *)(a1 + 440) + 528LL);
    sub_8D3F8(a1, "[%d] Debugged process PID: %d\n", *(_DWORD *)(a1 + 168), v36);
    if ( v36 >= 1 )
    {
      sub_8D3F8(
        a1,
        "[%d] Killing debugged process %d\n",
        *(_DWORD *)(a1 + 168),
        *(_DWORD *)(*(_QWORD *)(a1 + 440) + 528LL));
      v37 = sub_8D488(a1);
      if ( v37 )
        sub_8D3F8(a1, "[%d] Failed to kill process after %d seconds. Giving up\n", *(_DWORD *)(a1 + 168), v37);
    }
LABEL_45:
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 112LL))(*(_QWORD *)(a1 + 440));
    sub_A3344(a1);
    v34 = 1;
    prev = ptr.__list.__prev;
    if ( !ptr.__list.__prev )
      return v34;
LABEL_46:
    ptr.__list.__next = nullptr;
    qfree(prev);
    ptr.__list.__prev = nullptr;
    v40 = 0;
    return v34;
  }
  if ( v33 != 1 )
    goto LABEL_45;
  sub_A3344(a1);
  sub_8D3F8(a1, "[%d] Debugged session entered into sleeping mode\n", *(_DWORD *)(a1 + 168));
  if ( byte_166BF8
    && ((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 504LL))(*(_QWORD *)(a1 + 440)) & 1) == 0 )
  {
    sub_8CA78((_BYTE *)(a1 + 192), "Error preparing debugger server to handle a broken connection\n");
  }
  v34 = 0;
  prev = ptr.__list.__prev;
  if ( ptr.__list.__prev )
    goto LABEL_46;
  return v34;
}
// 8CFF0: conditional instruction was optimized away because x9.8>=2u
// 8D008: conditional instruction was optimized away because x9.8>=2u
// 166BF8: using guessed type char byte_166BF8;
