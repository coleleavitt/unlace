__int64 __fastcall sub_19839E0(__int64 *a1, unsigned int *a2, double a3, __m128 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned int v8; // eax
  unsigned __int16 **v9; // r15
  char v10; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  _BYTE *v15; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+0h] [rbp-78h]
  unsigned __int64 v20; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+18h] [rbp-60h]
  _BYTE v23[88]; // [rsp+20h] [rbp-58h] BYREF

  v5 = 1;
  v19 = sub_190CCA0(a1, *(unsigned __int16 **)&a2[2 * a2[6] + 8], a3, a4);
  if ( v19 == 1 )
    return v5;
  v6 = a2[6];
  v22 = 0x400000000LL;
  v7 = (__int64)&a2[2 * v6 + 8];
  ptr = v23;
  v8 = v6;
  if ( (unsigned int *)v7 == a2 + 8 )
  {
    v17 = 0;
    v15 = v23;
LABEL_14:
    v18 = sub_1B11C10(*(_QWORD *)(*a1 + 760), v19 & 0xFFFFFFFFFFFFFFFELL, a2[4], a2[5], v15, v17, &a2[2 * v8 + 10], v6);
    v15 = ptr;
    v5 = v18;
    if ( ptr == v23 )
      return v5;
    goto LABEL_11;
  }
  v9 = (unsigned __int16 **)(a2 + 8);
  v10 = 0;
  do
  {
    while ( 1 )
    {
      v14 = sub_190CCA0(a1, *v9, a3, a4);
      if ( v14 != 1 )
        break;
      ++v9;
      v10 = 1;
      if ( (unsigned __int16 **)v7 == v9 )
        goto LABEL_9;
    }
    v11 = (unsigned int)v22;
    v12 = v14 & 0xFFFFFFFFFFFFFFFELL;
    v13 = (unsigned int)v22 + 1LL;
    if ( v13 > HIDWORD(v22) )
    {
      v20 = v12;
      sub_2237220(&ptr, v23, v13, 8);
      v11 = (unsigned int)v22;
      v12 = v20;
    }
    ++v9;
    *((_QWORD *)ptr + v11) = v12;
    LODWORD(v22) = v22 + 1;
  }
  while ( (unsigned __int16 **)v7 != v9 );
LABEL_9:
  v15 = ptr;
  v5 = 1;
  if ( !v10 )
  {
    v6 = a2[6];
    v17 = (unsigned int)v22;
    v8 = a2[6];
    goto LABEL_14;
  }
  if ( ptr != v23 )
LABEL_11:
    free(v15);
  return v5;
}
