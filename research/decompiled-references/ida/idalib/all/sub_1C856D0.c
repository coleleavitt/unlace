__int64 __fastcall sub_1C856D0(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 *v7; // r15
  __int64 v8; // rbp
  unsigned __int16 *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rbx
  _BYTE *v14; // rcx
  unsigned __int64 v15; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v17; // [rsp+18h] [rbp-80h]
  _BYTE v18[120]; // [rsp+20h] [rbp-78h] BYREF

  v7 = (unsigned __int64 *)(a2 + 32);
  v17 = 0x800000000LL;
  v8 = a2 + 32 + 8LL * *(unsigned int *)(a2 + 24);
  ptr = v18;
  if ( a2 + 32 == v8 )
  {
    a5 = 0;
    v14 = v18;
  }
  else
  {
    do
    {
      v9 = sub_1C7CFE0(a1, *v7, a6, a7, (__int64)a3, a4, a5);
      if ( v9 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      {
        v12 = 1;
        goto LABEL_9;
      }
      a4 = (unsigned int)v17;
      v10 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFELL;
      v11 = (unsigned int)v17 + 1LL;
      if ( v11 <= HIDWORD(v17) )
      {
        a3 = ptr;
      }
      else
      {
        v15 = v10;
        sub_2237220(&ptr, v18, v11, 8);
        a4 = (unsigned int)v17;
        a3 = ptr;
        v10 = v15;
      }
      a3[a4] = v10;
      ++v7;
      a5 = (unsigned int)(v17 + 1);
      LODWORD(v17) = v17 + 1;
    }
    while ( (unsigned __int64 *)v8 != v7 );
    v14 = ptr;
  }
  v12 = sub_18C4330(*a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v14, a5, *(_QWORD *)(a2 + 8));
LABEL_9:
  if ( ptr != v18 )
    free(ptr);
  return v12;
}
