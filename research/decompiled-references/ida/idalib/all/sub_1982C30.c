__int64 __fastcall sub_1982C30(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int16 **v8; // r15
  char v9; // bl
  unsigned __int16 *v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  _BYTE *v15; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+28h] [rbp-80h]
  _BYTE v21[120]; // [rsp+30h] [rbp-78h] BYREF

  v4 = a2;
  v20 = 0x800000000LL;
  v5 = *(unsigned int *)(a2 + 24);
  ptr = v21;
  v6 = a2 + 32 + 8 * v5;
  if ( a2 + 32 == v6 )
  {
    v15 = v21;
  }
  else
  {
    v8 = (unsigned __int16 **)(a2 + 32);
    v9 = 0;
    do
    {
      v10 = *v8;
      v11 = sub_190CCA0(a1, *v8, a3, a4);
      if ( v11 == 1 )
      {
        v15 = ptr;
        v4 = 1;
        goto LABEL_9;
      }
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v13 = (unsigned int)v20 + 1LL;
      if ( v13 <= HIDWORD(v20) )
      {
        *((_QWORD *)ptr + (unsigned int)v20) = v12;
      }
      else
      {
        v18 = v12;
        sub_2237220(&ptr, v21, v13, 8);
        v12 = v18;
        *((_QWORD *)ptr + (unsigned int)v20) = v18;
      }
      v14 = (unsigned int)(v20 + 1);
      LODWORD(v20) = v20 + 1;
      ++v8;
      v9 |= v10 != (unsigned __int16 *)v12;
    }
    while ( (unsigned __int16 **)v6 != v8 );
    v15 = ptr;
    if ( v9 )
    {
      v17 = sub_18C4330(*a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), ptr, v14, *(_QWORD *)(a2 + 8));
      v15 = ptr;
      v4 = v17;
    }
  }
LABEL_9:
  if ( v15 != v21 )
    free(v15);
  return v4;
}
