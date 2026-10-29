__int64 __fastcall sub_1763D10(__int64 *a1, unsigned int *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rbp
  unsigned __int16 **v4; // r15
  _QWORD *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v13; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v15; // [rsp+18h] [rbp-60h]
  _BYTE v16[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a2[4];
  v15 = 0x300000000LL;
  ptr = v16;
  if ( v2 > 3 )
  {
    sub_2237220(&ptr, v16, v2, 8);
    v2 = a2[4];
  }
  v3 = (__int64)&a2[2 * v2 + 10];
  v4 = (unsigned __int16 **)(a2 + 10);
  if ( (unsigned int *)v3 == a2 + 10 )
  {
    v6 = (unsigned int)v15;
LABEL_11:
    v11 = sub_1B12460(*(_QWORD *)(*a1 + 760), ptr, v6, *a2, a2[9], a2[1]);
  }
  else
  {
    while ( 1 )
    {
      v7 = sub_175B800(a1, *v4);
      if ( v7 == 1 )
        break;
      v8 = (unsigned int)v15;
      v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
      v10 = (unsigned int)v15 + 1LL;
      if ( v10 <= HIDWORD(v15) )
      {
        v5 = ptr;
      }
      else
      {
        v13 = v9;
        sub_2237220(&ptr, v16, v10, 8);
        v8 = (unsigned int)v15;
        v5 = ptr;
        v9 = v13;
      }
      v5[v8] = v9;
      ++v4;
      v6 = (unsigned int)(v15 + 1);
      LODWORD(v15) = v15 + 1;
      if ( (unsigned __int16 **)v3 == v4 )
        goto LABEL_11;
    }
    v11 = 0;
  }
  if ( ptr != v16 )
    free(ptr);
  return v11;
}
