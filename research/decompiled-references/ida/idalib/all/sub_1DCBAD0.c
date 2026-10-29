unsigned __int64 __fastcall sub_1DCBAD0(
        __int64 *a1,
        _DWORD *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int64 *v11; // r15
  _QWORD *v12; // rdx
  unsigned __int16 *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // esi
  int v17; // ecx
  __int64 v18; // rax
  __int64 *v19; // rdi
  unsigned __int64 v20; // rbx
  unsigned __int64 v22; // [rsp+8h] [rbp-E0h]
  _DWORD v23[3]; // [rsp+14h] [rbp-D4h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-C0h]
  _BYTE v26[184]; // [rsp+30h] [rbp-B8h] BYREF

  v9 = (unsigned int)a2[4];
  v25 = 0x1000000000LL;
  ptr = v26;
  if ( v9 > 0x10 )
  {
    sub_2237220(&ptr, v26, v9, 8);
    v9 = (unsigned int)a2[4];
  }
  v10 = (__int64)&a2[2 * v9 + 20];
  v11 = (unsigned __int64 *)(a2 + 20);
  if ( (_DWORD *)v10 == a2 + 20 )
  {
    v9 = (unsigned int)v25;
LABEL_11:
    v16 = *a2;
    v17 = a2[3];
    v23[2] = a2[1];
    v18 = *a1;
    v23[0] = v16;
    v19 = *(__int64 **)(v18 + 760);
    v23[1] = v17;
    v20 = sub_1B5CA20(v19, (__int64)ptr, v9, v23, a3, a4);
  }
  else
  {
    while ( 1 )
    {
      v13 = sub_1DC71F0(a1, *v11, v9, a6, a7, a8, a3, a4);
      if ( v13 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      a6 = (unsigned int)v25;
      v14 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v25 + 1LL;
      if ( v15 <= HIDWORD(v25) )
      {
        v12 = ptr;
      }
      else
      {
        v22 = v14;
        sub_2237220(&ptr, v26, v15, 8);
        a6 = (unsigned int)v25;
        v12 = ptr;
        v14 = v22;
      }
      v12[a6] = v14;
      ++v11;
      v9 = (unsigned int)(v25 + 1);
      LODWORD(v25) = v25 + 1;
      if ( (unsigned __int64 *)v10 == v11 )
        goto LABEL_11;
    }
    v20 = 0;
  }
  if ( ptr != v26 )
    free(ptr);
  return v20;
}
