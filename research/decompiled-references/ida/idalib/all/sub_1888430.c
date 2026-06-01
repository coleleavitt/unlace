void __fastcall sub_1888430(__int64 a1, _DWORD *a2)
{
  __int16 v2; // ax
  unsigned __int64 v3; // rdx
  __m128 v4; // xmm0
  unsigned int *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdi
  signed __int64 v12; // rbx
  unsigned int *v13; // [rsp+8h] [rbp-100h] BYREF
  __m128 v14; // [rsp+20h] [rbp-E8h] BYREF
  _DWORD *v15; // [rsp+30h] [rbp-D8h]
  char v16; // [rsp+38h] [rbp-D0h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h]
  _DWORD v19[46]; // [rsp+50h] [rbp-B8h] BYREF

  v2 = sub_183C740(a1, a2);
  if ( (_BYTE)v2 == 6 )
  {
    v3 = *((_QWORD *)a2 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*((_QWORD *)a2 + 2) & 4) != 0 )
      v3 = *(_QWORD *)(v3 + 8);
    v13 = (unsigned int *)a1;
    if ( v3 )
      v3 -= 64LL;
    v16 = HIBYTE(v2);
    v15 = a2;
    v13 = (unsigned int *)v3;
    ptr = v19;
    v18 = 0x1000000000LL;
    v4 = _mm_loadh_ps((const double *)&v13);
    v14 = v4;
    v5 = (unsigned int *)sub_B74920((__int64)a2);
    if ( v5 )
    {
      v10 = *v5;
      v7 = HIDWORD(v18);
      LODWORD(v18) = 0;
      v11 = 0;
      v6 = 0;
      v12 = 8 * v10;
      if ( v12 >> 3 > (unsigned __int64)HIDWORD(v18) )
      {
        a2 = v19;
        v13 = v5;
        sub_2237220(&ptr, v19, v12 >> 3, 8);
        v6 = (unsigned int)v18;
        v5 = v13;
        v11 = 8LL * (unsigned int)v18;
      }
      if ( v12 )
      {
        a2 = v5 + 2;
        memcpy((char *)ptr + v11, v5 + 2, v12);
        v6 = (unsigned int)v18;
      }
      LODWORD(v18) = v6 + (v12 >> 3);
    }
    v19[32] = 1;
    sub_1860170((__int64)&v14, (__int64)a2, v6, v7, v8, v9, v4);
    if ( ptr != v19 )
      free(ptr);
  }
  else if ( *((char *)a2 + 28) >= 0 )
  {
    sub_1887DE0(a1, (__int64)a2, (unsigned __int8)v2, 0, 1u);
  }
}
