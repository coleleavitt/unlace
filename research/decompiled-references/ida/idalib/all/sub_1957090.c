__int64 __fastcall sub_1957090(__int64 *a1, unsigned int *a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int16 **v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned __int64 v16; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v18; // [rsp+18h] [rbp-70h]
  _BYTE v19[104]; // [rsp+20h] [rbp-68h] BYREF

  v4 = a2[4];
  v18 = 0x600000000LL;
  ptr = v19;
  if ( v4 > 6 )
  {
    sub_2237220(&ptr, v19, v4, 8);
    v4 = a2[4];
  }
  v5 = (unsigned __int16 **)(a2 + 6);
  v6 = (__int64)&a2[2 * v4 + 6];
  if ( a2 + 6 == (unsigned int *)v6 )
  {
    v11 = (unsigned int)v18;
LABEL_13:
    v14 = sub_1B1E5F0(*(_QWORD *)(*a1 + 760), ptr, v11, *a2, a2[3], a2[1]);
  }
  else
  {
    while ( 1 )
    {
      while ( !*v5 )
      {
        v12 = (unsigned int)v18;
        v13 = (unsigned int)v18 + 1LL;
        if ( v13 > HIDWORD(v18) )
        {
          sub_2237220(&ptr, v19, v13, 8);
          v12 = (unsigned int)v18;
        }
        ++v5;
        *((_QWORD *)ptr + v12) = 0;
        v11 = (unsigned int)(v18 + 1);
        LODWORD(v18) = v18 + 1;
        if ( (unsigned __int16 **)v6 == v5 )
          goto LABEL_13;
      }
      v7 = sub_1944E10(a1, *v5, a3, a4);
      if ( v7 == 1 )
        break;
      v8 = (unsigned int)v18;
      v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
      v10 = (unsigned int)v18 + 1LL;
      if ( v10 > HIDWORD(v18) )
      {
        v16 = v9;
        sub_2237220(&ptr, v19, v10, 8);
        v8 = (unsigned int)v18;
        v9 = v16;
      }
      ++v5;
      *((_QWORD *)ptr + v8) = v9;
      v11 = (unsigned int)(v18 + 1);
      LODWORD(v18) = v18 + 1;
      if ( (unsigned __int16 **)v6 == v5 )
        goto LABEL_13;
    }
    v14 = 0;
  }
  if ( ptr != v19 )
    free(ptr);
  return v14;
}
