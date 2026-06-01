__int64 __fastcall sub_1E19B10(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int16 **v11; // r15
  char v12; // bl
  unsigned __int16 *v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v23; // [rsp+28h] [rbp-80h]
  _BYTE v24[120]; // [rsp+30h] [rbp-78h] BYREF

  v7 = a2;
  v23 = 0x800000000LL;
  v9 = *(unsigned int *)(a2 + 24);
  ptr = v24;
  v10 = a2 + 32 + 8 * v9;
  if ( a2 + 32 == v10 )
  {
    a5 = 0;
    v17 = v24;
    v12 = 0;
  }
  else
  {
    v11 = (unsigned __int16 **)(a2 + 32);
    v12 = 0;
    do
    {
      v13 = *v11;
      v14 = sub_1E11560(a1, *v11, a6, a7, (__int64)a3, a4, a5);
      if ( v14 == 1 )
      {
        v17 = ptr;
        v7 = 1;
        goto LABEL_9;
      }
      a4 = (unsigned int)v23;
      v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
      v16 = (unsigned int)v23 + 1LL;
      if ( v16 <= HIDWORD(v23) )
      {
        a3 = ptr;
      }
      else
      {
        v21 = v15;
        sub_2237220(&ptr, v24, v16, 8);
        a4 = (unsigned int)v23;
        a3 = ptr;
        v15 = v21;
      }
      a3[a4] = v15;
      ++v11;
      a5 = (unsigned int)(v23 + 1);
      v12 |= v13 != (unsigned __int16 *)v15;
      LODWORD(v23) = v23 + 1;
    }
    while ( (unsigned __int16 **)v10 != v11 );
    v17 = ptr;
  }
  v19 = *a1;
  if ( *(_DWORD *)(*a1 + 12632) || v12 )
  {
    v20 = sub_18C4330(v19, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v17, a5, *(_QWORD *)(a2 + 8));
    v17 = ptr;
    v7 = v20;
  }
LABEL_9:
  if ( v17 != v24 )
    free(v17);
  return v7;
}
