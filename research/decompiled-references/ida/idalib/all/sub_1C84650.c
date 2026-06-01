unsigned __int64 __fastcall sub_1C84650(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // rbx
  __int64 v9; // rbp
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v17; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v19; // [rsp+18h] [rbp-70h]
  _BYTE v20[104]; // [rsp+20h] [rbp-68h] BYREF

  v7 = *(unsigned int *)(a2 + 16);
  v19 = 0x600000000LL;
  ptr = v20;
  if ( v7 > 6 )
  {
    sub_2237220(&ptr, v20, v7, 8);
    v7 = *(unsigned int *)(a2 + 16);
  }
  v8 = (unsigned __int64 *)(a2 + 24);
  v9 = a2 + 24 + 8 * v7;
  if ( a2 + 24 == v9 )
  {
    v7 = (unsigned int)v19;
LABEL_13:
    v15 = sub_1B1E5F0(
            *(__int64 **)(*a1 + 760),
            ptr,
            v7,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 4),
            a3,
            a4);
  }
  else
  {
    while ( 1 )
    {
      while ( !*v8 )
      {
        v13 = (unsigned int)v19;
        a6 = HIDWORD(v19);
        v14 = (unsigned int)v19 + 1LL;
        if ( v14 > HIDWORD(v19) )
        {
          sub_2237220(&ptr, v20, v14, 8);
          v13 = (unsigned int)v19;
        }
        ++v8;
        *((_QWORD *)ptr + v13) = 0;
        v7 = (unsigned int)(v19 + 1);
        LODWORD(v19) = v19 + 1;
        if ( (unsigned __int64 *)v9 == v8 )
          goto LABEL_13;
      }
      v10 = sub_1C7CFE0(a1, *v8, a3, a4, v7, a6, a7);
      if ( v10 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      a6 = (unsigned int)v19;
      v11 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL;
      v12 = (unsigned int)v19 + 1LL;
      if ( v12 > HIDWORD(v19) )
      {
        v17 = v11;
        sub_2237220(&ptr, v20, v12, 8);
        a6 = (unsigned int)v19;
        v11 = v17;
      }
      ++v8;
      *((_QWORD *)ptr + a6) = v11;
      v7 = (unsigned int)(v19 + 1);
      LODWORD(v19) = v19 + 1;
      if ( (unsigned __int64 *)v9 == v8 )
        goto LABEL_13;
    }
    v15 = 0;
  }
  if ( ptr != v20 )
    free(ptr);
  return v15;
}
