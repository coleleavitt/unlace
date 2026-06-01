__int64 __fastcall sub_13DB940(int a1, __int64 *a2, __int64 *a3, __int64 a4, _BYTE *a5, __m128i a6, double a7)
{
  unsigned __int64 v11; // rbp
  const char *v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // r15
  unsigned __int8 *v16; // r12
  _DWORD *v17; // rax
  int v18; // esi
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  void *v22; // rdi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  void *v26; // rdi
  __int64 v27; // [rsp+0h] [rbp-148h]
  __int64 v28; // [rsp+0h] [rbp-148h]
  char v29; // [rsp+1Fh] [rbp-129h] BYREF
  _BYTE v30[4]; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v31; // [rsp+24h] [rbp-124h]
  char v32; // [rsp+32h] [rbp-116h]
  _QWORD v33[8]; // [rsp+40h] [rbp-108h] BYREF
  void *ptr; // [rsp+80h] [rbp-C8h]
  __int64 v35; // [rsp+90h] [rbp-B8h] BYREF

  v29 = 0;
  v11 = sub_A80750((__int64)a3, a1);
  v12 = sub_10202B0(a3, v11, &v29);
  if ( v29 )
  {
    if ( a5 )
      *a5 = 1;
    return 0;
  }
  v15 = (__int64)&v12[v13];
  v27 = (__int64)v12;
  v16 = (unsigned __int8 *)&v12[HIDWORD(v11)];
  v17 = (_DWORD *)sub_101FFD0((__int64)a3, v11);
  v18 = 0;
  if ( v17 )
    v18 = *v17 & 0x7FFFFFFF;
  sub_13D1080((__int64)v33, v18, a4, v27, (__int64)v16, v15, 1);
  sub_13DB5F0(v33, (__int64)v30, a6, a7);
  result = (__int64)v16;
  if ( (v32 & 8) == 0 )
    goto LABEL_23;
  v19 = a2[1];
  v20 = v31;
  if ( v31 != v19 )
  {
    if ( v31 >= v19 )
    {
      if ( v31 > (unsigned __int64)a2[2] )
      {
        sub_2236E10(a2, a2 + 3, v31, 1);
        v19 = a2[1];
      }
      v21 = *a2;
      v22 = (void *)(*a2 + v19);
      if ( v22 != (void *)(*a2 + v20) )
      {
        memset(v22, 0, v20 - v19);
        v21 = *a2;
      }
      a2[1] = v20;
      goto LABEL_16;
    }
    a2[1] = v31;
  }
  v21 = *a2;
LABEL_16:
  v23 = sub_13D19E0((__int64)v30, v16, a4, v21);
  v24 = a2[1];
  v25 = v23;
  if ( v23 != v24 )
  {
    if ( v23 >= v24 )
    {
      if ( v23 > a2[2] )
      {
        sub_2236E10(a2, a2 + 3, v23, 1);
        v24 = a2[1];
      }
      result = *a2;
      v26 = (void *)(*a2 + v24);
      if ( v26 != (void *)(*a2 + v25) )
      {
        memset(v26, 0, v25 - v24);
        result = *a2;
      }
      a2[1] = v25;
      goto LABEL_23;
    }
    a2[1] = v23;
  }
  result = *a2;
LABEL_23:
  v33[0] = &off_2C449F0;
  if ( ptr != &v35 )
  {
    v28 = result;
    free(ptr);
    return v28;
  }
  return result;
}
