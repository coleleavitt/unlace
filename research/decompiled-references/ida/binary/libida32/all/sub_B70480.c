__int64 __fastcall sub_B70480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  _QWORD *v11; // rsi
  __int64 v12; // rbp
  __int64 *v14; // rbp
  __int64 v15; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+8h] [rbp-40h]
  _BYTE v18[56]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  if ( (v6 & 0x400) == 0 && (v6 & 0x800) == 0 )
    return *(_QWORD *)a1;
  ptr = v18;
  v17 = 0x200000000LL;
  sub_B6E4F0(a1, (__int64)&ptr, a3, a4, a5, a6);
  v8 = *(_QWORD *)(a1 + 8);
  if ( (v8 & 0x800) != 0 )
  {
    *(_BYTE *)(a1 + 9) &= ~8u;
    v14 = (__int64 *)ptr;
    v9 = (__int64 *)((char *)ptr + 8 * (unsigned int)v17);
    if ( ptr != v9 )
    {
      do
      {
        while ( 1 )
        {
          v15 = *v14;
          if ( *(char *)(*v14 + 8) < 0 )
            break;
          if ( v9 == ++v14 )
            goto LABEL_19;
        }
        ++v14;
        *(_BYTE *)(a1 + 9) = *(_BYTE *)(a1 + 9) & 0xFB | (4 * (((*(_BYTE *)(a1 + 9) & 4) != 0) | sub_B6AA70(v15) & 1));
      }
      while ( v9 != v14 );
LABEL_19:
      v9 = (__int64 *)ptr;
    }
    v8 = *(_QWORD *)(a1 + 8);
    if ( (v8 & 0x400) == 0 )
      goto LABEL_11;
  }
  else
  {
    v9 = (__int64 *)ptr;
  }
  v10 = &v9[(unsigned int)v17];
  if ( v10 != v9 )
  {
    while ( 1 )
    {
      v11 = (_QWORD *)*v9++;
      sub_B701B0(a1, v11, BYTE1(v8) & 1);
      if ( v10 == v9 )
        break;
      v8 = *(_QWORD *)(a1 + 8);
    }
    v9 = (__int64 *)ptr;
  }
  *(_BYTE *)(a1 + 9) &= ~4u;
LABEL_11:
  v12 = *(_QWORD *)a1;
  if ( v9 != (__int64 *)v18 )
    free(v9);
  return v12;
}

