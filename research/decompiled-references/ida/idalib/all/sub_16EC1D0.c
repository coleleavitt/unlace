__int64 __fastcall sub_16EC1D0(__int64 a1, __int64 a2, double a3)
{
  int v3; // r14d
  unsigned int v6; // ebx
  __int64 *v7; // r15
  __int64 v8; // rsi
  _BYTE *v9; // rax
  __int64 v10; // r14
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  unsigned int v13; // r14d
  _DWORD *v14; // r12
  unsigned __int64 v15; // rax
  __int64 v17; // rsi
  char v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r15
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // [rsp+28h] [rbp-110h] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-108h] BYREF
  char v37; // [rsp+38h] [rbp-100h]
  __m128i s; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int8 v40; // [rsp+60h] [rbp-D8h]
  _QWORD v41[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+80h] [rbp-B8h]
  unsigned __int8 *v43[11]; // [rsp+90h] [rbp-A8h] BYREF
  char v44; // [rsp+E8h] [rbp-50h]
  unsigned int v45; // [rsp+F0h] [rbp-48h]
  char v46; // [rsp+F4h] [rbp-44h]

  if ( *(_DWORD *)(a1 + 16) )
  {
    v3 = 0;
    v6 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = v6 + (unsigned __int64)((*(_BYTE *)(a1 + 2) & 8) != 0);
        v14 = *(_DWORD **)(a1 + 8 * v15 + 40);
        if ( (*v14 & 0x20000) != 0 )
          goto LABEL_13;
        v8 = *(_QWORD *)(a1 + 8 * v15 + 40);
        sub_C4C000(&s, v8, *(_QWORD *)(a2 + 248));
        if ( v40 )
          break;
        v10 = 0;
LABEL_7:
        v11 = sub_EEB7E0((unsigned __int64)v14, v8, a3);
        sub_168B9F0((__int64)v41, (__int64 *)(a2 + 8), v11, 0xD2Bu, 0);
        if ( v44 )
        {
          v17 = v10;
          sub_16B71B0(v43, v10);
          v18 = v44;
        }
        else
        {
          if ( !v46 )
          {
            v12 = sub_EEC8C0((unsigned __int64)v14, a2 + 8, a3);
            v13 = v12;
            v14 = (_DWORD *)HIDWORD(v12);
            goto LABEL_10;
          }
          v24 = sub_168B9E0(v41);
          v25 = v42;
          if ( v42 )
            v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 32LL))(v42);
          v36 = v25;
          v26 = sub_1587BC0(v24, (__int64 *)&v36, v20, v21, v22, v23);
          v17 = v10;
          sub_16B71B0((unsigned __int8 **)(*v26 + 32LL * v45 + 8), v10);
          v18 = v44;
        }
        v19 = sub_EEC8C0((unsigned __int64)v14, v17, a3);
        v13 = v19;
        LODWORD(v14) = HIDWORD(v19);
        if ( v18 )
        {
          v36 = v19;
          v37 = 1;
          sub_AEC610((__int64 *)v43, (__int64 *)&v36);
          goto LABEL_11;
        }
LABEL_10:
        if ( v46 )
        {
          v31 = sub_168B9E0(v41);
          v32 = v42;
          if ( v42 )
            v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 32LL))(v42);
          v35 = v32;
          v33 = sub_1587BC0(v31, &v35, v27, v28, v29, v30);
          v34 = *v33 + 32LL * v45;
          v36 = __PAIR64__((unsigned int)v14, v13);
          v37 = 1;
          sub_AEC610((__int64 *)(v34 + 8), (__int64 *)&v36);
        }
LABEL_11:
        sub_15F7200(v41);
        v3 = v40;
        if ( v40 )
        {
          v7 = (__int64 *)s.m128i_i64[0];
          goto LABEL_18;
        }
        v3 = 1;
LABEL_13:
        if ( ++v6 >= *(_DWORD *)(a1 + 16) )
          return v3 ^ 1u;
      }
      v7 = (__int64 *)s.m128i_i64[0];
      if ( s.m128i_i64[1] )
      {
        v8 = 36;
        v9 = memchr((const void *)s.m128i_i64[0], 36, s.m128i_u64[1]);
        if ( v9 )
        {
          if ( v9 - (_BYTE *)v7 != -1 )
          {
            v10 = 1;
            goto LABEL_7;
          }
        }
      }
LABEL_18:
      if ( v7 == &v39 )
        goto LABEL_13;
      ++v6;
      operator delete(v7);
      if ( v6 >= *(_DWORD *)(a1 + 16) )
        return v3 ^ 1u;
    }
  }
  return 1;
}
