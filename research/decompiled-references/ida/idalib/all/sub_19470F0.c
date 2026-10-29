unsigned __int64 __fastcall sub_19470F0(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, double a5, __m128 a6)
{
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v13; // rax
  unsigned int *v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-60h] BYREF
  __int128 v16; // [rsp+8h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+18h] [rbp-48h]
  __int128 v18; // [rsp+28h] [rbp-38h]

  v8 = *a4;
  v9 = *(_QWORD *)(a3 + 40);
  v16 = 0;
  *(_OWORD *)ptr = 0;
  v18 = 0;
  v15 = sub_19014F0(a1, (__int64)&v16, v9, v8, 0, 0, 0);
  if ( !sub_F22B30(&v15) )
  {
    v10 = *(_QWORD *)(a3 + 24) & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v10
      || (v10 = (__int64)sub_1946CC0(a1, *(_QWORD *)(a3 + 24), (__m128)0LL, a6), (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0) )
    {
      v13 = sub_AB7C40(*(_QWORD **)(*a1 + 248), v15, v10, 0);
      v11 = v13;
      if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_1EA6140(a2, v13, 4, 4);
        *v14 = *a4;
        if ( HIDWORD(ptr[1]) )
          goto LABEL_8;
        return v11;
      }
    }
  }
  v11 = 0;
  if ( !HIDWORD(ptr[1]) )
    return v11;
LABEL_8:
  free(ptr[0]);
  return v11;
}
