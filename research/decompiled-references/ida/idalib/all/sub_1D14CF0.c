unsigned __int64 __fastcall sub_1D14CF0(
        __int64 *a1,
        unsigned __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // rdx
  char v7; // bl
  __int64 v8; // r8
  __int64 v9; // rbp
  unsigned __int16 **v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int16 *v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v22; // [rsp+28h] [rbp-70h]
  _BYTE v23[104]; // [rsp+30h] [rbp-68h] BYREF

  v6 = *(unsigned int *)(a2 + 16);
  ptr = v23;
  v22 = 0x600000000LL;
  if ( v6 > 6 )
  {
    sub_2237220(&ptr, v23, v6, 8);
    v6 = *(unsigned int *)(a2 + 16);
  }
  v7 = 0;
  v8 = a2 + 24;
  v9 = a2 + 24 + 8 * v6;
  v10 = (unsigned __int16 **)(a2 + 24);
  if ( a2 + 24 == v9 )
  {
    v19 = *a1;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v14 = *v10;
        if ( *v10 )
          break;
        v15 = (unsigned int)v22;
        a6 = HIDWORD(v22);
        v16 = (unsigned int)v22 + 1LL;
        if ( v16 > HIDWORD(v22) )
        {
          sub_2237220(&ptr, v23, v16, 8);
          v15 = (unsigned int)v22;
        }
        ++v10;
        *((_QWORD *)ptr + v15) = 0;
        v6 = (unsigned int)(v22 + 1);
        LODWORD(v22) = v22 + 1;
        if ( (unsigned __int16 **)v9 == v10 )
          goto LABEL_15;
      }
      v11 = sub_1D11200(a1, *v10, a3, a4, v6, a6, v8);
      if ( v11 == 1 )
      {
        v17 = 0;
        goto LABEL_19;
      }
      a6 = (unsigned int)v22;
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v13 = (unsigned int)v22 + 1LL;
      if ( v14 != (unsigned __int16 *)v12 )
        v7 = 1;
      if ( v13 > HIDWORD(v22) )
      {
        v20 = v12;
        sub_2237220(&ptr, v23, v13, 8);
        a6 = (unsigned int)v22;
        v12 = v20;
      }
      ++v10;
      *((_QWORD *)ptr + a6) = v12;
      v6 = (unsigned int)(v22 + 1);
      LODWORD(v22) = v22 + 1;
    }
    while ( (unsigned __int16 **)v9 != v10 );
LABEL_15:
    v19 = *a1;
    if ( v7 )
      goto LABEL_18;
  }
  v17 = a2;
  if ( *(_DWORD *)(v19 + 12632) )
  {
    v6 = (unsigned int)v22;
LABEL_18:
    v17 = sub_1B1E5F0(
            *(__int64 **)(v19 + 760),
            ptr,
            v6,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 4),
            a3,
            a4);
  }
LABEL_19:
  if ( ptr != v23 )
    free(ptr);
  return v17;
}
