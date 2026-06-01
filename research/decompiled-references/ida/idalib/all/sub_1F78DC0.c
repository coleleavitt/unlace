void __fastcall sub_1F78DC0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rsi
  int v4; // eax
  __int64 *v5; // r15
  __int64 *v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int8 v9; // r11
  unsigned int v10; // r10d
  unsigned __int64 v11; // rdx
  unsigned int v12; // r13d
  unsigned int v13; // r14d
  unsigned __int8 v14; // al
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rax
  unsigned __int8 v26; // [rsp+14h] [rbp-264h]
  unsigned __int8 v27; // [rsp+14h] [rbp-264h]
  unsigned int v28; // [rsp+14h] [rbp-264h]
  unsigned int v29; // [rsp+18h] [rbp-260h]
  unsigned int v30; // [rsp+18h] [rbp-260h]
  unsigned __int8 v31; // [rsp+1Fh] [rbp-259h]
  __int64 *v32; // [rsp+28h] [rbp-250h] BYREF
  void *ptr; // [rsp+30h] [rbp-248h] BYREF
  __int64 v34; // [rsp+38h] [rbp-240h]
  _BYTE v35[568]; // [rsp+40h] [rbp-238h] BYREF

  v3 = *(__int64 **)(a2 + 200);
  v34 = 0x4000000000LL;
  v4 = *(_DWORD *)(a2 + 208);
  ptr = v35;
  sub_FF7E30(&v32, v3, v4 == 0);
  v5 = v32;
  sub_FF7E30(&v32, (__int64 *)(*(_QWORD *)(a2 + 200) + 8LL * *(unsigned int *)(a2 + 208)), 1);
  v6 = v32;
  if ( v5 != v32 )
  {
    v7 = *v5;
    do
    {
      while ( 1 )
      {
        sub_1F740F0(v7 + 32, *(_QWORD *)v7, (__int64)&ptr);
        v8 = (unsigned int)v34;
        v9 = *(_BYTE *)(v7 + 8);
        v10 = *(_DWORD *)(v7 + 12);
        v11 = (unsigned int)v34 + 1LL;
        v12 = *(_DWORD *)(v7 + 16);
        v13 = *(_DWORD *)(v7 + 20);
        v14 = *(_BYTE *)(v7 + 25);
        v15 = *(unsigned __int8 *)(v7 + 24);
        if ( v11 > HIDWORD(v34) )
        {
          v31 = v14;
          v30 = v10;
          v27 = v9;
          sub_2237220(&ptr, v35, v11, 8);
          v8 = (unsigned int)v34;
          v14 = v31;
          v10 = v30;
          v9 = v27;
        }
        *((_QWORD *)ptr + v8) = v15;
        v16 = v14;
        LODWORD(v34) = v34 + 1;
        v17 = (unsigned int)v34;
        if ( (unsigned __int64)(unsigned int)v34 + 1 > HIDWORD(v34) )
        {
          v29 = v10;
          v26 = v9;
          sub_2237220(&ptr, v35, (unsigned int)v34 + 1LL, 8);
          v17 = (unsigned int)v34;
          v10 = v29;
          v9 = v26;
        }
        *((_QWORD *)ptr + v17) = v16;
        v18 = v9;
        LODWORD(v34) = v34 + 1;
        v19 = (unsigned int)v34;
        if ( (unsigned __int64)(unsigned int)v34 + 1 > HIDWORD(v34) )
        {
          v28 = v10;
          sub_2237220(&ptr, v35, (unsigned int)v34 + 1LL, 8);
          v19 = (unsigned int)v34;
          v10 = v28;
        }
        *((_QWORD *)ptr + v19) = v18;
        v20 = v10;
        LODWORD(v34) = v34 + 1;
        v21 = (unsigned int)v34;
        if ( (unsigned __int64)(unsigned int)v34 + 1 > HIDWORD(v34) )
        {
          sub_2237220(&ptr, v35, (unsigned int)v34 + 1LL, 8);
          v21 = (unsigned int)v34;
        }
        *((_QWORD *)ptr + v21) = v20;
        LODWORD(v34) = v34 + 1;
        v22 = (unsigned int)v34;
        if ( (unsigned __int64)(unsigned int)v34 + 1 > HIDWORD(v34) )
        {
          sub_2237220(&ptr, v35, (unsigned int)v34 + 1LL, 8);
          v22 = (unsigned int)v34;
        }
        *((_QWORD *)ptr + v22) = v12;
        LODWORD(v34) = v34 + 1;
        v23 = (unsigned int)v34;
        if ( (unsigned __int64)(unsigned int)v34 + 1 > HIDWORD(v34) )
        {
          sub_2237220(&ptr, v35, (unsigned int)v34 + 1LL, 8);
          v23 = (unsigned int)v34;
        }
        *((_QWORD *)ptr + v23) = v13;
        v7 = v5[1];
        v24 = v5 + 1;
        LODWORD(v34) = v34 + 1;
        if ( v7 == -8 || !v7 )
          break;
        ++v5;
        if ( v6 == v24 )
          goto LABEL_21;
      }
      v25 = v5 + 2;
      do
      {
        do
        {
          v7 = *v25;
          v5 = v25++;
        }
        while ( v7 == -8 );
      }
      while ( !v7 );
    }
    while ( v6 != v5 );
  }
LABEL_21:
  sub_1F6EB90(*(_QWORD *)(a1 + 16), 0x24u, (__int64)&ptr);
  if ( ptr != v35 )
    free(ptr);
}
