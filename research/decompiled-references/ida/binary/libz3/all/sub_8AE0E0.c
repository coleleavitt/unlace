__int64 __fastcall sub_8AE0E0(_QWORD *a1, unsigned int *a2, double a3)
{
  __int64 v3; // r8
  int v4; // r15d
  int *v5; // rdx
  unsigned int i; // r13d
  int v7; // ecx
  _QWORD *v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rsi
  int v19; // eax
  char **exception; // rbp
  __int64 v21; // rdx
  __int64 *v23; // [rsp+18h] [rbp-110h]
  __int64 v25[4]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD *v26; // [rsp+50h] [rbp-D8h]
  _QWORD v27[2]; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD v28[2]; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD v29[2]; // [rsp+78h] [rbp-B0h] BYREF
  _QWORD v30[3]; // [rsp+88h] [rbp-A0h] BYREF
  _QWORD *v31; // [rsp+A0h] [rbp-88h]
  _QWORD v32[2]; // [rsp+A8h] [rbp-80h] BYREF
  _QWORD v33[2]; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v34[2]; // [rsp+C8h] [rbp-60h] BYREF
  _QWORD v35[10]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a1[185] + 16LL * *a2);
  v23 = (__int64 *)(a1[185] + 16LL * *a2);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 - 4);
    v5 = (int *)(v3 + 32);
    for ( i = 0; v4 != i; ++i )
    {
      v7 = *v5;
      v5 += 10;
      if ( v7 != -1 )
        break;
    }
  }
  else
  {
    i = 0;
    v4 = 0;
  }
  v27[0] = 0;
  v27[1] = 0;
  v28[0] = 1;
  v8 = a1 + 92;
  v26 = a1 + 92;
  v28[1] = 0;
  v29[0] = 0;
  v29[1] = 0;
  v30[0] = 1;
  v30[1] = 0;
  v31 = a1 + 92;
  v32[0] = 0;
  v32[1] = 0;
  v33[0] = 1;
  v33[1] = 0;
  v34[0] = 0;
  v34[1] = 0;
  v35[0] = 1;
  v35[1] = 0;
  if ( v4 != i )
  {
    do
    {
      v9 = v3 + 40LL * i;
      v10 = a1[199] + 232LL * *(unsigned int *)(v9 + 32);
      v11 = v10 + 8;
      if ( (*(_BYTE *)(v10 + 28) & 1) != 0
        || *(_DWORD *)(v10 + 24) != 1
        || (*(_BYTE *)(v9 + 20) & 1) != 0
        || *(_DWORD *)(v9 + 16) != 1 )
      {
        sub_184C880(v8, v11, v3 + 40LL * i, v32);
      }
      else
      {
        sub_1839230(v8, v11, v3 + 40LL * i, v32);
        sub_182EF00(v8, v33);
        BYTE4(v33[0]) &= ~1u;
        LODWORD(v33[0]) = 1;
      }
      v12 = v10 + 40;
      if ( (*(_BYTE *)(v10 + 60) & 1) != 0
        || *(_DWORD *)(v10 + 56) != 1
        || (*(_BYTE *)(v9 + 20) & 1) != 0
        || *(_DWORD *)(v9 + 16) != 1 )
      {
        v13 = (__int64)v8;
        sub_184C880(v8, v12, v9, v34);
      }
      else
      {
        sub_1839230(v8, v12, v9, v34);
        v13 = (__int64)v8;
        sub_182EF00(v8, v35);
        BYTE4(v35[0]) &= ~1u;
        LODWORD(v35[0]) = 1;
      }
      if ( LODWORD(v32[0]) )
      {
        if ( LODWORD(v27[0]) )
        {
          if ( (v28[0] & 0x100000000LL) != 0
            || LODWORD(v28[0]) != 1
            || (v33[0] & 0x100000000LL) != 0
            || LODWORD(v33[0]) != 1 )
          {
            v13 = (__int64)v26;
            sub_18540F0(v26, v27, v32, v27);
          }
          else
          {
            sub_1839610(v26, v27, v32);
            v13 = (__int64)v26;
            sub_182EF00(v26, v28);
            BYTE4(v28[0]) &= ~1u;
            LODWORD(v28[0]) = 1;
          }
        }
        else
        {
          v13 = (__int64)v26;
          sub_8ADE80((__int64)v26, (__int64)v27, (int *)v32);
        }
      }
      else
      {
        if ( (v27[0] & 0x100000000LL) != 0 )
        {
          v13 = (__int64)v26;
          sub_182EA00(v26, v27, v27);
        }
        else
        {
          BYTE4(v27[0]) &= ~1u;
        }
        if ( (v28[0] & 0x100000000LL) != 0 )
        {
          v13 = (__int64)v26;
          sub_182EA00(v26, v28, v28);
        }
        else
        {
          BYTE4(v28[0]) &= ~1u;
        }
      }
      v14 = (_QWORD *)LODWORD(v34[0]);
      if ( LODWORD(v34[0]) )
      {
        if ( LODWORD(v29[0]) )
        {
          if ( (v30[0] & 0x100000000LL) != 0
            || LODWORD(v30[0]) != 1
            || (v35[0] & 0x100000000LL) != 0
            || LODWORD(v35[0]) != 1 )
          {
            v14 = v29;
            v13 = (__int64)v26;
            sub_18540F0(v26, v29, v34, v29);
          }
          else
          {
            sub_1839610(v26, v29, v34);
            v14 = v30;
            v13 = (__int64)v26;
            sub_182EF00(v26, v30);
            BYTE4(v30[0]) &= ~1u;
            LODWORD(v30[0]) = 1;
          }
        }
        else
        {
          v14 = v29;
          v13 = (__int64)v26;
          sub_8ADE80((__int64)v26, (__int64)v29, (int *)v34);
        }
      }
      else
      {
        if ( (v29[0] & 0x100000000LL) != 0 )
        {
          v14 = v29;
          v13 = (__int64)v26;
          sub_182EA00(v26, v29, v29);
        }
        else
        {
          BYTE4(v29[0]) &= ~1u;
        }
        if ( (v30[0] & 0x100000000LL) != 0 )
        {
          v14 = v30;
          v13 = (__int64)v26;
          sub_182EA00(v26, v30, v30);
        }
        else
        {
          BYTE4(v30[0]) &= ~1u;
        }
      }
      ++i;
      v3 = *v23;
      if ( *v23 )
      {
        v13 = *(unsigned int *)(v3 - 4);
        v15 = v3 + 40LL * i;
        while ( i < (unsigned int)v13 )
        {
          v16 = *(_DWORD *)(v15 + 32);
          v14 = (_QWORD *)(i + 1);
          v15 += 40;
          if ( v16 != -1 )
            break;
          ++i;
        }
      }
    }
    while ( i != v4 );
    if ( LODWORD(v27[0]) || LODWORD(v29[0]) )
    {
      sub_180B130(v13);
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v17 = sub_180B150(v13, v14);
        sub_8997A0(a1 + 184, v17, a2);
        sub_186A500(a1 + 184, v17);
      }
      else
      {
        v19 = sub_180B150(v13, v14);
        sub_8997A0(a1 + 184, v19, a2);
      }
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_12D192(v25, "non-well formed row", v21);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v25);
      sub_233E40((__int64)v25);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  sub_8AD4E0((__int64)v31, (__int64)v32);
  sub_8AD4E0((__int64)v26, (__int64)v27);
  return 1;
}

