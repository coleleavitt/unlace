__int64 __fastcall sub_199A740(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  unsigned __int16 **v12; // r15
  char v13; // bl
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v23; // rcx
  __int64 v24; // [rsp+10h] [rbp-98h]
  unsigned __int64 v25; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+28h] [rbp-80h]
  _BYTE v28[120]; // [rsp+30h] [rbp-78h] BYREF

  v8 = a2;
  v24 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 16), 0, a3, a4, a6, a7, a8);
  if ( v24 == 1 )
    return 1;
  v11 = *(unsigned __int16 *)(a2 + 12);
  ptr = v28;
  v27 = 0x800000000LL;
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned __int16 **)(a2 + 24);
    v13 = 0;
    v14 = a2 + 8LL * (unsigned int)(v11 - 1) + 32;
    while ( 1 )
    {
      v15 = sub_1998500(a1, *v12, 0, a3, a4, v9, v11, v10);
      if ( v15 == 1 )
        goto LABEL_17;
      v9 = (unsigned int)v27;
      v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
      v17 = (unsigned int)v27 + 1LL;
      if ( *v12 != (unsigned __int16 *)v16 )
        v13 = 1;
      if ( v17 <= HIDWORD(v27) )
      {
        ++v12;
        *((_QWORD *)ptr + (unsigned int)v27) = v16;
        v11 = (unsigned int)(v27 + 1);
        LODWORD(v27) = v27 + 1;
        if ( (unsigned __int16 **)v14 == v12 )
          goto LABEL_10;
      }
      else
      {
        v25 = v16;
        ++v12;
        sub_2237220(&ptr, v28, v17, 8);
        v9 = (unsigned int)v27;
        *((_QWORD *)ptr + (unsigned int)v27) = v25;
        v11 = (unsigned int)(v27 + 1);
        LODWORD(v27) = v27 + 1;
        if ( v12 == (unsigned __int16 **)v14 )
          goto LABEL_10;
      }
    }
  }
  v13 = 0;
LABEL_10:
  if ( (*(_BYTE *)(a2 + 14) & 1) != 0 )
  {
    v18 = *(unsigned __int16 *)(a2 + 12);
    v19 = *(_QWORD *)(a2 + 8 * v18 + 24);
    if ( v19 )
    {
      v20 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 8 * v18 + 24), 0, a3, a4, v9, v11, v19);
      if ( v20 == 1 )
      {
LABEL_17:
        v8 = 1;
        goto LABEL_18;
      }
      v19 = v20 & 0xFFFFFFFFFFFFFFFELL;
      v21 = v24 & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_QWORD *)(a2 + 16) == (v24 & 0xFFFFFFFFFFFFFFFELL) && !v13 )
      {
        if ( (*(_BYTE *)(a2 + 14) & 1) != 0 )
          v23 = *(_QWORD *)(a2 + 8LL * *(unsigned __int16 *)(a2 + 12) + 24);
        else
          v23 = 0;
        if ( v23 == v19 )
          goto LABEL_18;
        v11 = (unsigned int)v27;
        v19 = v20 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v11 = (unsigned int)v27;
      }
LABEL_16:
      v8 = sub_1A8ACF0(*(_QWORD *)(*a1 + 736), *(unsigned int *)(a2 + 8), v21, ptr, v11, v19);
      goto LABEL_18;
    }
    v21 = v24 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_QWORD *)(a2 + 16) != (v24 & 0xFFFFFFFFFFFFFFFELL) || v13 )
      goto LABEL_16;
  }
  else
  {
    v21 = v24 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_QWORD *)(a2 + 16) != (v24 & 0xFFFFFFFFFFFFFFFELL) || v13 )
    {
      v19 = 0;
      goto LABEL_16;
    }
  }
LABEL_18:
  if ( ptr != v28 )
    free(ptr);
  return v8;
}
