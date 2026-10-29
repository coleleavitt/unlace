__int64 __fastcall sub_1FA1260(__int64 a1, __int64 a2, __int64 **a3, __int64 a4)
{
  __int64 **v4; // rbx
  __int64 **v5; // r12
  __m128 v6; // xmm0
  unsigned __int64 v7; // rsi
  bool v8; // zf
  void **v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // rbx
  __int64 v29; // [rsp+8h] [rbp-340h] BYREF
  void **v30; // [rsp+10h] [rbp-338h]
  __int64 v31; // [rsp+18h] [rbp-330h]
  __m128 v32; // [rsp+20h] [rbp-328h] BYREF
  void **v33; // [rsp+30h] [rbp-318h]
  void *v34; // [rsp+38h] [rbp-310h] BYREF
  __int64 v35; // [rsp+40h] [rbp-308h]
  _BYTE v36[128]; // [rsp+48h] [rbp-300h] BYREF
  void *ptr; // [rsp+C8h] [rbp-280h]
  __int64 v38; // [rsp+D0h] [rbp-278h]
  _BYTE v39[40]; // [rsp+D8h] [rbp-270h] BYREF
  void *v40[2]; // [rsp+100h] [rbp-248h] BYREF
  char v41; // [rsp+110h] [rbp-238h] BYREF

  v4 = a3;
  v29 = a2;
  v40[0] = &v41;
  v5 = &a3[a4];
  v40[1] = (void *)0x4000000000LL;
  v31 = a1;
  v34 = v36;
  v35 = 0x1000000000LL;
  v6 = _mm_loadh_ps((const double *)&v29);
  ptr = v39;
  v30 = v40;
  v32 = v6;
  v33 = v40;
  v38 = 0x800000000LL;
  sub_9B9C90((__int64)v40, a4);
  while ( v5 != v4 )
  {
    while ( 1 )
    {
      v14 = *v4;
      if ( ((**v4 >> 1) & 3) != 0 )
      {
        if ( ((**v4 >> 1) & 3) == 1 )
        {
          sub_9B9C90((__int64)v33, 2);
          v7 = *v14 & 0xFFFFFFFFFFFFFFF8LL;
          v8 = ((*v14 >> 1) & 3) == 1;
        }
        else
        {
          sub_9B9C90((__int64)v33, 3);
          v7 = *v14 & 0xFFFFFFFFFFFFFFF8LL;
          v8 = ((*v14 >> 1) & 3) == 2;
        }
        if ( !v8 )
          v7 = 0;
        v9 = v33;
        v10 = sub_1F92240(v32.m128_i64[1], v7);
        sub_9B9C90((__int64)v9, v10);
      }
      else if ( (*((_BYTE *)v14 + 28) & 1) != 0 )
      {
        sub_9B9C90((__int64)v33, 1);
        v25 = *v14;
        v26 = nullptr;
        if ( *v14 )
        {
          v26 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v25 & 6) != 0 )
            v26 = nullptr;
        }
        sub_1F9A760((__int64 *)&v32, v26, v21, v22, v23, v24);
      }
      else
      {
        sub_1F6B920((__int64)v33);
        v19 = *v14;
        v20 = nullptr;
        if ( *v14 )
        {
          v20 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v19 & 6) != 0 )
            v20 = nullptr;
        }
        sub_1F9A760((__int64 *)&v32, v20, v15, v16, v17, v18);
        sub_9B9C90((__int64)v33, (*((_BYTE *)v14 + 28) & 2) != 0);
      }
      sub_1F6F570((_QWORD *)v32.m128_u64[1], *((_DWORD *)v14 + 4), (__int64)v33);
      v11 = (unsigned int)v35;
      v12 = v14[1];
      v13 = (unsigned int)v35 + 1LL;
      if ( v13 > HIDWORD(v35) )
      {
        sub_2237220(&v34, v36, v13, 8);
        v11 = (unsigned int)v35;
      }
      *((_QWORD *)v34 + v11) = v12;
      LODWORD(v35) = v35 + 1;
      sub_1F6F570((_QWORD *)v32.m128_u64[1], *((_DWORD *)v14 + 5), (__int64)v33);
      sub_1F6F570((_QWORD *)v32.m128_u64[1], *((_DWORD *)v14 + 6), (__int64)v33);
      sub_9B9C90((__int64)v33, (*((_BYTE *)v14 + 28) & 4) != 0);
      if ( (*((_BYTE *)v14 + 28) & 4) != 0 )
        break;
      if ( v5 == ++v4 )
        goto LABEL_24;
    }
    ++v4;
    sub_9B9C90((__int64)v33, *((_WORD *)v14 + 14) >> 3);
  }
LABEL_24:
  v27 = sub_1F6EAE0((__int64)&v32, 0x7Bu);
  if ( ptr != v39 )
    free(ptr);
  if ( v34 != v36 )
    free(v34);
  if ( v40[0] != v30 + 2 )
    free(v40[0]);
  return v27;
}
