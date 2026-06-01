__int64 __fastcall sub_1982140(__int64 *a1, unsigned int *a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rdx
  char v5; // bl
  __int64 v6; // rbp
  unsigned __int16 **v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int16 *v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  _BYTE *v18; // rsi
  __int64 v19; // r15
  unsigned __int64 v21; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h]
  _BYTE v24[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2[4];
  ptr = v24;
  v23 = 0x400000000LL;
  if ( v4 > 4 )
  {
    sub_2237220(&ptr, v24, v4, 8);
    v4 = a2[4];
  }
  v5 = 0;
  v6 = (__int64)&a2[2 * v4 + 6];
  v7 = (unsigned __int16 **)(a2 + 6);
  if ( a2 + 6 == (unsigned int *)v6 )
  {
    v18 = ptr;
    v19 = (__int64)a2;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v13 = *v7;
        if ( *v7 )
          break;
        v14 = (unsigned int)v23;
        v15 = (unsigned int)v23 + 1LL;
        if ( v15 > HIDWORD(v23) )
        {
          sub_2237220(&ptr, v24, v15, 8);
          v14 = (unsigned int)v23;
        }
        ++v7;
        *((_QWORD *)ptr + v14) = 0;
        v12 = (unsigned int)(v23 + 1);
        LODWORD(v23) = v23 + 1;
        if ( (unsigned __int16 **)v6 == v7 )
          goto LABEL_15;
      }
      v8 = sub_190CCA0(a1, *v7, a3, a4);
      if ( v8 == 1 )
      {
        v18 = ptr;
        v19 = 0;
        goto LABEL_17;
      }
      v9 = (unsigned int)v23;
      v10 = v8 & 0xFFFFFFFFFFFFFFFELL;
      v11 = (unsigned int)v23 + 1LL;
      if ( v13 != (unsigned __int16 *)v10 )
        v5 = 1;
      if ( v11 > HIDWORD(v23) )
      {
        v21 = v10;
        sub_2237220(&ptr, v24, v11, 8);
        v9 = (unsigned int)v23;
        v10 = v21;
      }
      ++v7;
      *((_QWORD *)ptr + v9) = v10;
      v12 = (unsigned int)(v23 + 1);
      LODWORD(v23) = v23 + 1;
    }
    while ( (unsigned __int16 **)v6 != v7 );
LABEL_15:
    v18 = ptr;
    v19 = (__int64)a2;
    if ( v5 )
    {
      v16 = sub_1B12760(*(_QWORD *)(*a1 + 760), ptr, v12, *a2, a2[3], a2[1]);
      v18 = ptr;
      v19 = v16;
    }
  }
LABEL_17:
  if ( v18 != v24 )
    free(v18);
  return v19;
}
