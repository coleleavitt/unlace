__int64 __fastcall sub_1765630(__int64 *a1, unsigned int *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned __int16 **v7; // r15
  char v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  _BYTE *v13; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-78h]
  unsigned __int64 v18; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h]
  _BYTE v21[88]; // [rsp+20h] [rbp-58h] BYREF

  v3 = 1;
  v17 = sub_175B800(a1, *(unsigned __int16 **)&a2[2 * a2[6] + 8]);
  if ( v17 == 1 )
    return v3;
  v4 = a2[6];
  v20 = 0x400000000LL;
  v5 = (__int64)&a2[2 * v4 + 8];
  ptr = v21;
  v6 = v4;
  if ( (unsigned int *)v5 == a2 + 8 )
  {
    v15 = 0;
    v13 = v21;
LABEL_14:
    v16 = sub_1B11C10(*(_QWORD *)(*a1 + 760), v17 & 0xFFFFFFFFFFFFFFFELL, a2[4], a2[5], v13, v15, &a2[2 * v6 + 10], v4);
    v13 = ptr;
    v3 = v16;
    if ( ptr == v21 )
      return v3;
    goto LABEL_11;
  }
  v7 = (unsigned __int16 **)(a2 + 8);
  v8 = 0;
  do
  {
    while ( 1 )
    {
      v12 = sub_175B800(a1, *v7);
      if ( v12 != 1 )
        break;
      ++v7;
      v8 = 1;
      if ( (unsigned __int16 **)v5 == v7 )
        goto LABEL_9;
    }
    v9 = (unsigned int)v20;
    v10 = v12 & 0xFFFFFFFFFFFFFFFELL;
    v11 = (unsigned int)v20 + 1LL;
    if ( v11 > HIDWORD(v20) )
    {
      v18 = v10;
      sub_2237220(&ptr, v21, v11, 8);
      v9 = (unsigned int)v20;
      v10 = v18;
    }
    ++v7;
    *((_QWORD *)ptr + v9) = v10;
    LODWORD(v20) = v20 + 1;
  }
  while ( (unsigned __int16 **)v5 != v7 );
LABEL_9:
  v13 = ptr;
  v3 = 1;
  if ( !v8 )
  {
    v4 = a2[6];
    v15 = (unsigned int)v20;
    v6 = a2[6];
    goto LABEL_14;
  }
  if ( ptr != v21 )
LABEL_11:
    free(v13);
  return v3;
}
