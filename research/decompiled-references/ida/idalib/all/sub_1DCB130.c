unsigned __int64 __fastcall sub_1DCB130(
        __int64 *a1,
        unsigned __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdx
  char v9; // bl
  __int64 v10; // r8
  __int64 v11; // rbp
  unsigned __int64 *v12; // r14
  unsigned __int16 *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+28h] [rbp-70h]
  _BYTE v25[104]; // [rsp+30h] [rbp-68h] BYREF

  v8 = *(unsigned int *)(a2 + 16);
  ptr = v25;
  v24 = 0x600000000LL;
  if ( v8 > 6 )
  {
    sub_2237220(&ptr, v25, v8, 8);
    v8 = *(unsigned int *)(a2 + 16);
  }
  v9 = 0;
  v10 = a2 + 24;
  v11 = a2 + 24 + 8 * v8;
  v12 = (unsigned __int64 *)(a2 + 24);
  if ( a2 + 24 == v11 )
  {
    v21 = *a1;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v16 = *v12;
        if ( *v12 )
          break;
        v17 = (unsigned int)v24;
        a6 = HIDWORD(v24);
        v18 = (unsigned int)v24 + 1LL;
        if ( v18 > HIDWORD(v24) )
        {
          sub_2237220(&ptr, v25, v18, 8);
          v17 = (unsigned int)v24;
        }
        ++v12;
        *((_QWORD *)ptr + v17) = 0;
        v8 = (unsigned int)(v24 + 1);
        LODWORD(v24) = v24 + 1;
        if ( (unsigned __int64 *)v11 == v12 )
          goto LABEL_15;
      }
      v13 = sub_1DC71F0(a1, *v12, v8, a6, v10, a8, a3, a4);
      if ( v13 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      {
        v19 = 0;
        goto LABEL_19;
      }
      a6 = (unsigned int)v24;
      v14 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v24 + 1LL;
      if ( v16 != v14 )
        v9 = 1;
      if ( v15 > HIDWORD(v24) )
      {
        v22 = v14;
        sub_2237220(&ptr, v25, v15, 8);
        a6 = (unsigned int)v24;
        v14 = v22;
      }
      ++v12;
      *((_QWORD *)ptr + a6) = v14;
      v8 = (unsigned int)(v24 + 1);
      LODWORD(v24) = v24 + 1;
    }
    while ( (unsigned __int64 *)v11 != v12 );
LABEL_15:
    v21 = *a1;
    if ( v9 )
      goto LABEL_18;
  }
  v19 = a2;
  if ( *(_DWORD *)(v21 + 12632) )
  {
    v8 = (unsigned int)v24;
LABEL_18:
    v19 = sub_1B1E5F0(
            *(__int64 **)(v21 + 760),
            ptr,
            v8,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 4),
            a3,
            a4);
  }
LABEL_19:
  if ( ptr != v25 )
    free(ptr);
  return v19;
}
