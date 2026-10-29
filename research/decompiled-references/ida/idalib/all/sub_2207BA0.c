__int64 __fastcall sub_2207BA0(__int64 a1, __int64 a2, __int64 a3)
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
  void *v16; // rdi
  unsigned int v18; // eax
  unsigned int v19; // eax
  bool v20; // cc
  void *v21; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v22; // [rsp+8h] [rbp-60h]
  void *v23; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-50h]
  void *v25; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-40h]
  void *v27; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-30h]

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
  if ( (v8 & v9) != 0 )
  {
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
        sub_22078F0(a1, (__int64)&v23, (__int64)&v27);
        if ( v28 > 0x40 && v27 )
          operator delete[](v27);
        if ( v26 > 0x40 && v25 )
          operator delete[](v25);
        if ( v24 > 0x40 && v23 )
          operator delete[](v23);
        if ( v22 <= 0x40 )
          return a1;
        v16 = v21;
        if ( !v21 )
          return a1;
        goto LABEL_21;
      }
    }
    else if ( (v13 & v11) != 0 )
    {
      goto LABEL_6;
    }
    v24 = v6;
    if ( v6 > 0x40 )
    {
      v9 = a2;
      sub_2205510((__int64)&v23, (const void **)a2);
    }
    else
    {
      v23 = v7;
    }
    sub_C16720((__int64)&v23, v9);
    sub_2205900((unsigned __int64 *)&v23);
    v18 = v24;
    v24 = 0;
    v26 = v18;
    v25 = v23;
    sub_22078F0((__int64)&v27, (__int64)&v25, a3);
    sub_C16720((__int64)&v27, (__int64)&v25);
    goto LABEL_33;
  }
  if ( v10 <= 0x40 )
  {
    if ( (v11 & v13) == 0 )
      goto LABEL_29;
    v24 = *(_DWORD *)(a3 + 8);
    v23 = (void *)v11;
  }
  else
  {
    if ( (v13 & *(_QWORD *)(v11 + 8LL * (v12 >> 6))) == 0 )
    {
LABEL_29:
      sub_22078F0(a1, a2, a3);
      return a1;
    }
    v9 = a3;
    v24 = *(_DWORD *)(a3 + 8);
    sub_2205510((__int64)&v23, (const void **)a3);
  }
  sub_C16720((__int64)&v23, v9);
  sub_2205900((unsigned __int64 *)&v23);
  v19 = v24;
  v24 = 0;
  v26 = v19;
  v25 = v23;
  sub_22078F0((__int64)&v27, a2, (__int64)&v25);
  sub_C16720((__int64)&v27, a2);
LABEL_33:
  sub_2205900((unsigned __int64 *)&v27);
  v20 = v26 <= 0x40;
  *(_DWORD *)(a1 + 8) = v28;
  *(_QWORD *)a1 = v27;
  if ( !v20 && v25 )
    operator delete[](v25);
  if ( v24 <= 0x40 )
    return a1;
  v16 = v23;
  if ( v23 )
  {
LABEL_21:
    operator delete[](v16);
    return a1;
  }
  return a1;
}
