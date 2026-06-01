unsigned __int64 __fastcall sub_1E8FD90(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __m128i a9)
{
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // r8
  unsigned __int64 v16; // rbx
  int v19; // [rsp+10h] [rbp-88h]
  _QWORD *v20; // [rsp+18h] [rbp-80h]
  _QWORD *v21; // [rsp+28h] [rbp-70h] BYREF
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+38h] [rbp-60h]
  _BYTE v24[88]; // [rsp+40h] [rbp-58h] BYREF

  ptr = v24;
  v23 = 0x400000000LL;
  if ( a5 > 4 )
  {
    v19 = a5;
    sub_2237220(&ptr, v24, a5, 8);
    LODWORD(a5) = v19;
  }
  if ( (_DWORD)a5 )
  {
    v11 = (__int64)&a4[(unsigned int)(a5 - 1) + 1];
    do
    {
      v14 = sub_1E5F010(*a4, &v21);
      v15 = v21;
      if ( !v21 )
      {
        v15 = sub_A81910(*(_QWORD **)(a1 + 248), v14, a3);
        v21 = v15;
      }
      v12 = (unsigned int)v23 + 1LL;
      if ( v12 > HIDWORD(v23) )
      {
        v20 = v15;
        sub_2237220(&ptr, v24, v12, 8);
        *((_QWORD *)ptr + (unsigned int)v23) = v20;
      }
      else
      {
        *((_QWORD *)ptr + (unsigned int)v23) = v15;
      }
      ++a4;
      v13 = (unsigned int)(v23 + 1);
      LODWORD(v23) = v23 + 1;
    }
    while ( (__int64 *)v11 != a4 );
  }
  else
  {
    v13 = (unsigned int)v23;
  }
  v16 = sub_1E8F560((__int64 *)a1, a2, a3, (__int64 **)ptr, v13, a6, a7, a8, a9);
  if ( ptr != v24 )
    free(ptr);
  return v16;
}
