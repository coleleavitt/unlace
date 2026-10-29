__int64 __fastcall sub_2208110(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r10
  __int64 v9; // rsi
  unsigned int v10; // r9d
  unsigned __int64 v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // eax
  bool v16; // cc
  void *v17; // rdi
  unsigned int v19; // eax
  unsigned int v20; // eax
  void *v21; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+8h] [rbp-70h]
  void *v23; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-60h]
  void *v25; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-50h]
  void *v27; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-40h]
  void *v29; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-30h]

  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(_QWORD **)a2;
  v8 = *(_QWORD *)a2;
  v9 = 1LL << ((unsigned __int8)v6 - 1);
  if ( v6 > 0x40 )
    v8 = v7[(v6 - 1) >> 6];
  v10 = *(_DWORD *)(a3 + 8);
  v11 = *(_QWORD *)a3;
  v12 = v10 - 1;
  v13 = 1LL << ((unsigned __int8)v10 - 1);
  if ( (v8 & v9) == 0 )
  {
    if ( v10 <= 0x40 )
    {
      if ( (v11 & v13) == 0 )
        goto LABEL_33;
      v28 = *(_DWORD *)(a3 + 8);
      v27 = (void *)v11;
    }
    else
    {
      if ( (v13 & *(_QWORD *)(v11 + 8LL * (v12 >> 6))) == 0 )
      {
LABEL_33:
        sub_2207ED0(a1, a2, a3);
        return a1;
      }
      v9 = a3;
      v28 = *(_DWORD *)(a3 + 8);
      sub_2205510((__int64)&v27, (const void **)a3);
    }
    sub_C16720((__int64)&v27, v9);
    sub_2205900((unsigned __int64 *)&v27);
    v20 = v28;
    v28 = 0;
    v30 = v20;
    v29 = v27;
    sub_2207ED0(a1, a2, (__int64)&v29);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    if ( v28 <= 0x40 )
      return a1;
    v17 = v27;
    if ( !v27 )
      return a1;
    goto LABEL_41;
  }
  if ( v10 > 0x40 )
  {
    if ( (v13 & *(_QWORD *)(v11 + 8LL * (v12 >> 6))) != 0 )
    {
LABEL_6:
      v22 = v6;
      if ( v6 > 0x40 )
      {
        v9 = a2;
        sub_2205510((__int64)&v21, (const void **)a2);
      }
      else
      {
        v21 = v7;
      }
      sub_C16720((__int64)&v21, v9);
      sub_2205900((unsigned __int64 *)&v21);
      v14 = v22;
      v22 = 0;
      v24 = v14;
      v23 = v21;
      v26 = *(_DWORD *)(a3 + 8);
      if ( v26 > 0x40 )
      {
        v9 = a3;
        sub_2205510((__int64)&v25, (const void **)a3);
      }
      else
      {
        v25 = *(void **)a3;
      }
      sub_C16720((__int64)&v25, v9);
      sub_2205900((unsigned __int64 *)&v25);
      v15 = v26;
      v26 = 0;
      v28 = v15;
      v27 = v25;
      sub_2207ED0((__int64)&v29, (__int64)&v23, (__int64)&v27);
      sub_C16720((__int64)&v29, (__int64)&v23);
      sub_2205900((unsigned __int64 *)&v29);
      v16 = v28 <= 0x40;
      *(_DWORD *)(a1 + 8) = v30;
      *(_QWORD *)a1 = v29;
      if ( !v16 && v27 )
        operator delete[](v27);
      if ( v26 > 0x40 && v25 )
        operator delete[](v25);
      if ( v24 > 0x40 && v23 )
        operator delete[](v23);
      if ( v22 <= 0x40 )
        return a1;
      v17 = v21;
      if ( !v21 )
        return a1;
      goto LABEL_41;
    }
  }
  else if ( (v13 & v11) != 0 )
  {
    goto LABEL_6;
  }
  v26 = v6;
  if ( v6 > 0x40 )
  {
    v9 = a2;
    sub_2205510((__int64)&v25, (const void **)a2);
  }
  else
  {
    v25 = v7;
  }
  sub_C16720((__int64)&v25, v9);
  sub_2205900((unsigned __int64 *)&v25);
  v19 = v26;
  v26 = 0;
  v28 = v19;
  v27 = v25;
  sub_2207ED0((__int64)&v29, (__int64)&v27, a3);
  sub_C16720((__int64)&v29, (__int64)&v27);
  sub_2205900((unsigned __int64 *)&v29);
  v16 = v28 <= 0x40;
  *(_DWORD *)(a1 + 8) = v30;
  *(_QWORD *)a1 = v29;
  if ( !v16 && v27 )
    operator delete[](v27);
  if ( v26 <= 0x40 )
    return a1;
  v17 = v25;
  if ( !v25 )
    return a1;
LABEL_41:
  operator delete[](v17);
  return a1;
}
