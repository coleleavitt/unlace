__int64 __fastcall sub_1DCC260(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int64 *v12; // r15
  char v13; // bl
  unsigned __int64 v14; // r13
  unsigned __int16 *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v24; // [rsp+28h] [rbp-80h]
  _BYTE v25[120]; // [rsp+30h] [rbp-78h] BYREF

  v7 = a2 + 32;
  v8 = a2;
  v24 = 0x800000000LL;
  v10 = *(unsigned int *)(a2 + 24);
  ptr = v25;
  v11 = a2 + 32 + 8 * v10;
  if ( a2 + 32 == v11 )
  {
    a5 = 0;
    v18 = v25;
    v13 = 0;
  }
  else
  {
    v12 = (unsigned __int64 *)(a2 + 32);
    v13 = 0;
    do
    {
      v14 = *v12;
      v15 = sub_1DC71F0(a1, *v12, (unsigned __int64)a3, a4, a5, v7, a6, a7);
      if ( v15 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      {
        v18 = ptr;
        v8 = 1;
        goto LABEL_9;
      }
      a4 = (unsigned int)v24;
      v16 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL;
      v17 = (unsigned int)v24 + 1LL;
      if ( v17 <= HIDWORD(v24) )
      {
        a3 = ptr;
      }
      else
      {
        v22 = v16;
        sub_2237220(&ptr, v25, v17, 8);
        a4 = (unsigned int)v24;
        a3 = ptr;
        v16 = v22;
      }
      a3[a4] = v16;
      ++v12;
      a5 = (unsigned int)(v24 + 1);
      v13 |= v14 != v16;
      LODWORD(v24) = v24 + 1;
    }
    while ( (unsigned __int64 *)v11 != v12 );
    v18 = ptr;
  }
  v20 = *a1;
  if ( *(_DWORD *)(*a1 + 12632) || v13 )
  {
    v21 = sub_18C4330(v20, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v18, a5, *(_QWORD *)(a2 + 8));
    v18 = ptr;
    v8 = v21;
  }
LABEL_9:
  if ( v18 != v25 )
    free(v18);
  return v8;
}
