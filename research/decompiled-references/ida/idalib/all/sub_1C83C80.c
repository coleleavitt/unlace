unsigned __int64 __fastcall sub_1C83C80(
        __int64 *a1,
        _DWORD *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned __int64 *v10; // r15
  _QWORD *v11; // rdx
  unsigned __int16 *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  int v15; // esi
  int v16; // ecx
  __int64 v17; // rax
  __int64 *v18; // rdi
  unsigned __int64 v19; // rbx
  unsigned __int64 v21; // [rsp+8h] [rbp-E0h]
  _DWORD v22[3]; // [rsp+14h] [rbp-D4h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+28h] [rbp-C0h]
  _BYTE v25[184]; // [rsp+30h] [rbp-B8h] BYREF

  v8 = (unsigned int)a2[4];
  v24 = 0x1000000000LL;
  ptr = v25;
  if ( v8 > 0x10 )
  {
    sub_2237220(&ptr, v25, v8, 8);
    v8 = (unsigned int)a2[4];
  }
  v9 = (__int64)&a2[2 * v8 + 20];
  v10 = (unsigned __int64 *)(a2 + 20);
  if ( (_DWORD *)v9 == a2 + 20 )
  {
    v8 = (unsigned int)v24;
LABEL_11:
    v15 = *a2;
    v16 = a2[3];
    v22[2] = a2[1];
    v17 = *a1;
    v22[0] = v15;
    v18 = *(__int64 **)(v17 + 760);
    v22[1] = v16;
    v19 = sub_1B66580(v18, (unsigned __int64 *)ptr, v8, v22, *(double *)a3.m128_u64);
  }
  else
  {
    while ( 1 )
    {
      v12 = sub_1C7CFE0(a1, *v10, a3, a4, v8, a6, a7);
      if ( v12 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      a6 = (unsigned int)v24;
      v13 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v24 + 1LL;
      if ( v14 <= HIDWORD(v24) )
      {
        v11 = ptr;
      }
      else
      {
        v21 = v13;
        sub_2237220(&ptr, v25, v14, 8);
        a6 = (unsigned int)v24;
        v11 = ptr;
        v13 = v21;
      }
      v11[a6] = v13;
      ++v10;
      v8 = (unsigned int)(v24 + 1);
      LODWORD(v24) = v24 + 1;
      if ( (unsigned __int64 *)v9 == v10 )
        goto LABEL_11;
    }
    v19 = 0;
  }
  if ( ptr != v25 )
    free(ptr);
  return v19;
}
