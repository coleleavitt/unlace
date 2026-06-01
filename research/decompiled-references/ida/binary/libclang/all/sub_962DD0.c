__int64 __fastcall sub_962DD0(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  unsigned __int8 **v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // r12d
  char v15; // r13
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned __int8 **v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // r13
  unsigned __int64 v21; // r13
  unsigned __int8 **v22; // rdi
  unsigned int v23; // esi
  unsigned __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // r13
  __int64 v27; // r13
  __int64 v28; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int8 **v29; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-60h]
  void *v31; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-50h]
  char v33; // [rsp+3Ch] [rbp-4Ch]
  void *v34; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+48h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92DD40((__int64)&v31, 0x3Fu, *(_DWORD *)(a4 + 8));
    v35 = *(_DWORD *)(a4 + 8);
    if ( v35 > 0x40 )
      sub_2585B30(&v34);
    else
      v34 = *(void **)a4;
    sub_8CC340((__int64)&v34, &v31, a4);
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
  }
  v8 = *(_DWORD *)(a4 + 8);
  v9 = *(_QWORD *)a4;
  if ( v8 > 0x40 )
    v9 = *(_QWORD *)(v9 + 8LL * ((v8 - 1) >> 6));
  if ( (v9 & (1LL << ((unsigned __int8)v8 - 1))) == 0 )
  {
    v13 = sub_954EE0(a1, a2, a3, (__int64 *)a4, 0x40u);
    if ( !(_BYTE)v13 )
      return v13;
    sub_92DD40((__int64)&v34, 0x3Fu, *(_DWORD *)(a4 + 8));
    v15 = sub_922490(a4, (__int64)&v34);
    if ( v35 > 0x40 && v34 )
      operator delete[](v34);
    v16 = *a3;
    if ( v15 == 3 )
    {
      v21 = 0;
      if ( v16 < 0 )
        goto LABEL_30;
      v23 = 64;
      if ( v16 )
      {
        _BitScanReverse64(&v24, v16);
        v23 = v24 ^ 0x3F;
      }
      sub_92DD40((__int64)&v34, v23, *(_DWORD *)(a4 + 8));
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
        operator delete[](*(void **)a4);
      *(_QWORD *)a4 = v34;
      v25 = v35;
      *(_DWORD *)(a4 + 8) = v35;
      if ( v25 > 0x40 )
        sub_2585B30(&v34);
      v21 = *a3 << (char)sub_8D5450((__int64)&v34);
      if ( v35 <= 0x40 )
        goto LABEL_30;
      v22 = (unsigned __int8 **)v34;
      if ( !v34 )
        goto LABEL_30;
LABEL_53:
      operator delete[](v22);
LABEL_30:
      *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v21;
      return v13;
    }
    if ( v16 < 0 )
    {
      v21 = 0;
      if ( v16 != 0x8000000000000000LL )
      {
        v26 = -v16;
        v35 = *(_DWORD *)(a4 + 8);
        if ( v35 > 0x40 )
          sub_2585B30(&v34);
        else
          v34 = *(void **)a4;
        v27 = v26 << (char)sub_8D5450((__int64)&v34);
        if ( v35 > 0x40 && v34 )
          operator delete[](v34);
        v21 = -v27;
      }
      goto LABEL_30;
    }
    v17 = *(_DWORD *)(a4 + 8);
    v30 = v17;
    if ( v17 > 0x40 )
    {
      sub_2585B30(&v29);
      v32 = v30;
      if ( v30 > 0x40 )
      {
        sub_2585B30(&v31);
        if ( v32 > 0x40 )
        {
          sub_25877E0(&v34, &v31, 64);
          LOBYTE(v19) = (_BYTE)v34;
          if ( v35 > 0x40 )
          {
            v19 = *(_QWORD *)v34;
            operator delete[](v34);
          }
LABEL_25:
          if ( v32 > 0x40 && v31 )
            operator delete[](v31);
          v21 = *a3 << v19;
          if ( v30 <= 0x40 )
            goto LABEL_30;
          v22 = v29;
          if ( !v29 )
            goto LABEL_30;
          goto LABEL_53;
        }
LABEL_21:
        sub_2587BE0(&v34, &v31, 64);
        LOBYTE(v19) = (_BYTE)v34;
        if ( v35 > 0x40 )
        {
          v20 = *(_QWORD *)v34;
          if ( v34 )
            operator delete[](v34);
          LOBYTE(v19) = v20;
        }
        goto LABEL_25;
      }
      v18 = v29;
    }
    else
    {
      v18 = *(unsigned __int8 ***)a4;
      v32 = v17;
      v29 = v18;
    }
    v31 = v18;
    goto LABEL_21;
  }
  v28 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v10 = (unsigned __int8 **)sub_A2E1B0(a1, &v28, 2242, 0);
  v11 = *(unsigned int *)(a4 + 8);
  v29 = v10;
  sub_2587BE0(&v34, a4, v11);
  v12 = v35;
  v33 = 0;
  v32 = v35;
  v31 = v34;
  if ( v29 )
  {
    sub_8DF340(&v29, (__int64)&v31);
    v12 = v32;
  }
  if ( v12 > 0x40 && v31 )
    operator delete[](v31);
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v13 )
  {
    sub_938B60((__int64)&v34, a4);
    if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
      operator delete[](*(void **)a4);
    *(_QWORD *)a4 = v34;
    *(_DWORD *)(a4 + 8) = v35;
    return (unsigned int)sub_962900(a1, a2, (__int64 *)a3, a4);
  }
  return v13;
}

