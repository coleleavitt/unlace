__int64 __fastcall sub_193A100(__int64 *a1, unsigned int *a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rbp
  unsigned __int64 *v6; // r15
  _QWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 v15; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-C0h]
  _BYTE v18[184]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = a2[4];
  v17 = 0x1000000000LL;
  ptr = v18;
  if ( v4 > 0x10 )
  {
    sub_2237220(&ptr, v18, v4, 8);
    v4 = a2[4];
  }
  v5 = (__int64)&a2[2 * v4 + 6];
  v6 = (unsigned __int64 *)(a2 + 6);
  if ( (unsigned int *)v5 == a2 + 6 )
  {
    v8 = (unsigned int)v17;
LABEL_11:
    v13 = sub_1B250D0(*(_QWORD *)(*a1 + 760), ptr, v8, *a2, a2[3], a2[1]);
  }
  else
  {
    while ( 1 )
    {
      v9 = sub_1933BC0(a1, *v6, a3, a4);
      if ( v9 == 1 )
        break;
      v10 = (unsigned int)v17;
      v11 = v9 & 0xFFFFFFFFFFFFFFFELL;
      v12 = (unsigned int)v17 + 1LL;
      if ( v12 <= HIDWORD(v17) )
      {
        v7 = ptr;
      }
      else
      {
        v15 = v11;
        sub_2237220(&ptr, v18, v12, 8);
        v10 = (unsigned int)v17;
        v7 = ptr;
        v11 = v15;
      }
      v7[v10] = v11;
      ++v6;
      v8 = (unsigned int)(v17 + 1);
      LODWORD(v17) = v17 + 1;
      if ( (unsigned __int64 *)v5 == v6 )
        goto LABEL_11;
    }
    v13 = 0;
  }
  if ( ptr != v18 )
    free(ptr);
  return v13;
}
