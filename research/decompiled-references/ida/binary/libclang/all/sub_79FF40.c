__int64 __fastcall sub_79FF40(_BYTE *a1)
{
  char v2; // dl
  __int64 *v3; // rbx
  __int64 v4; // r12
  __int64 *v5; // r12
  __int64 v6; // rdi
  __int64 *v7; // r12
  _QWORD *v8; // rsi
  __int64 v9; // r12
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+8h] [rbp-40h]
  _BYTE v13[56]; // [rsp+10h] [rbp-38h] BYREF

  if ( (a1[9] & 0xC) == 0 )
    return *(_QWORD *)a1;
  ptr = v13;
  v12 = 0x200000000LL;
  sub_79DDC0((__int64)a1, (__int64)&ptr);
  v2 = a1[9];
  if ( (v2 & 8) != 0 )
  {
    v3 = (__int64 *)ptr;
    v4 = (unsigned int)v12;
    a1[9] = v2 & 0xF7;
    if ( !(v4 * 8) )
    {
      if ( (v2 & 4) == 0 )
        goto LABEL_15;
      goto LABEL_14;
    }
    v5 = &v3[v4];
    do
    {
      while ( 1 )
      {
        v6 = *v3;
        if ( *(char *)(*v3 + 8) < 0 )
          break;
        if ( v5 == ++v3 )
          goto LABEL_8;
      }
      ++v3;
      a1[9] = (4 * (((a1[9] & 4) != 0) | sub_79BFC0(v6) & 1)) | a1[9] & 0xFB;
    }
    while ( v5 != v3 );
LABEL_8:
    v2 = a1[9];
    v3 = (__int64 *)ptr;
    if ( (v2 & 4) == 0 )
      goto LABEL_15;
  }
  v3 = (__int64 *)ptr;
  v7 = (__int64 *)((char *)ptr + 8 * (unsigned int)v12);
  if ( v7 != ptr )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)*v3++;
      sub_79FBA0((__int64)a1, v8, v2 & 1);
      if ( v7 == v3 )
        break;
      v2 = a1[9];
    }
    v3 = (__int64 *)ptr;
  }
LABEL_14:
  a1[9] &= ~4u;
LABEL_15:
  v9 = *(_QWORD *)a1;
  if ( v3 != (__int64 *)v13 )
    free(v3);
  return v9;
}

