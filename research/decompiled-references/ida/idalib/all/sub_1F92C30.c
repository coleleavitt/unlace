void __fastcall sub_1F92C30(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // r13
  __int64 *v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned int *v17; // rax
  unsigned int *v18; // r15
  unsigned int *v19; // rbp
  unsigned int *v20; // rsi
  __int64 v21; // [rsp+8h] [rbp-250h]
  __int64 v22; // [rsp+8h] [rbp-250h]
  void *ptr; // [rsp+10h] [rbp-248h] BYREF
  __int64 v24; // [rsp+18h] [rbp-240h]
  _BYTE v25[568]; // [rsp+20h] [rbp-238h] BYREF

  v2 = *(unsigned int *)(a2 + 11240);
  if ( (_DWORD)v2 )
  {
    v3 = *(__int64 **)(a2 + 11232);
    v24 = 0x4000000000LL;
    v4 = &v3[2 * v2];
    ptr = v25;
    do
    {
      v5 = v3[1];
      v6 = sub_1F92240((__int64)a1, *v3);
      v7 = (unsigned int)v24;
      v8 = (unsigned int)v24 + 1LL;
      if ( v8 > HIDWORD(v24) )
      {
        v22 = v6;
        sub_2237220(&ptr, v25, v8, 8);
        v7 = (unsigned int)v24;
        v6 = v22;
      }
      *((_QWORD *)ptr + v7) = v6;
      v9 = *(_QWORD *)(v5 + 112);
      LODWORD(v24) = v24 + 1;
      v10 = sub_1F92240((__int64)a1, v9);
      v11 = (unsigned int)v24;
      v12 = (unsigned int)v24 + 1LL;
      if ( v12 > HIDWORD(v24) )
      {
        v21 = v10;
        sub_2237220(&ptr, v25, v12, 8);
        v11 = (unsigned int)v24;
        v10 = v21;
      }
      *((_QWORD *)ptr + v11) = v10;
      v13 = *(unsigned int *)(v5 + 120);
      LODWORD(v24) = v24 + 1;
      v14 = (unsigned int)v24;
      if ( (unsigned __int64)(unsigned int)v24 + 1 > HIDWORD(v24) )
      {
        sub_2237220(&ptr, v25, (unsigned int)v24 + 1LL, 8);
        v14 = (unsigned int)v24;
      }
      *((_QWORD *)ptr + v14) = v13;
      LODWORD(v24) = v24 + 1;
      v15 = (unsigned int)v24;
      v16 = *(unsigned int *)(v5 + 8);
      if ( (unsigned __int64)(unsigned int)v24 + 1 > HIDWORD(v24) )
      {
        sub_2237220(&ptr, v25, (unsigned int)v24 + 1LL, 8);
        v15 = (unsigned int)v24;
      }
      *((_QWORD *)ptr + v15) = v16;
      v17 = *(unsigned int **)v5;
      LODWORD(v24) = v24 + 1;
      v18 = v17;
      v19 = &v17[6 * *(unsigned int *)(v5 + 8)];
      if ( v17 != v19 )
      {
        do
        {
          v20 = v18;
          v18 += 6;
          sub_1F814C0(a1, v20, (__int64)&ptr);
        }
        while ( v19 != v18 );
      }
      v3 += 2;
    }
    while ( v4 != v3 );
    sub_1F6EB90(a1[2], 0x32u, (__int64)&ptr);
    if ( ptr != v25 )
      free(ptr);
  }
}
