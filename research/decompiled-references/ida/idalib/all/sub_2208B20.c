void __fastcall sub_2208B20(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  unsigned __int64 v10; // r10
  unsigned int v11; // edx
  unsigned __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // eax
  void **v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // eax
  void *v20; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+8h] [rbp-60h]
  void *v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-50h]
  void *v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-40h]
  void *v26; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-30h]

  v8 = *(unsigned int *)(a1 + 8);
  v9 = *(_QWORD **)a1;
  v10 = (unsigned __int64)v9;
  if ( (unsigned int)v8 > 0x40 )
    v10 = v9[(unsigned int)(v8 - 1) >> 6];
  v11 = *(_DWORD *)(a2 + 8);
  v12 = *(_QWORD *)a2;
  v13 = v11 - 1;
  v14 = 1LL << ((unsigned __int8)v11 - 1);
  if ( (v10 & (1LL << ((unsigned __int8)v8 - 1))) != 0 )
  {
    if ( v11 > 0x40 )
    {
      if ( (v14 & *(_QWORD *)(v12 + 8LL * (v13 >> 6))) != 0 )
      {
        v8 = a2;
        v25 = *(_DWORD *)(a2 + 8);
        sub_2205510((__int64)&v24, (const void **)a2);
        goto LABEL_7;
      }
    }
    else if ( (v12 & v14) != 0 )
    {
      v25 = *(_DWORD *)(a2 + 8);
      v24 = (void *)v12;
LABEL_7:
      sub_C16720((__int64)&v24, v8);
      sub_2205900((unsigned __int64 *)&v24);
      v15 = v25;
      v25 = 0;
      v27 = v15;
      v26 = v24;
      v21 = *(_DWORD *)(a1 + 8);
      if ( v21 > 0x40 )
      {
        v8 = a1;
        sub_2205510((__int64)&v20, (const void **)a1);
      }
      else
      {
        v20 = *(void **)a1;
      }
      sub_C16720((__int64)&v20, v8);
      sub_2205900((unsigned __int64 *)&v20);
      v16 = v21;
      v17 = &v26;
      v21 = 0;
      v23 = v16;
      v22 = v20;
      sub_2208490((__int64)&v22, (__int64)&v26, (__int64)a3, (__int64)a4);
      if ( v23 > 0x40 && v22 )
        operator delete[](v22);
      if ( v21 > 0x40 && v20 )
        operator delete[](v20);
      if ( v27 > 0x40 && v26 )
        operator delete[](v26);
      if ( v25 > 0x40 )
      {
        if ( v24 )
          operator delete[](v24);
      }
LABEL_31:
      sub_C16720((__int64)a4, (__int64)v17);
      sub_2205900(a4);
      return;
    }
    v25 = v8;
    if ( (unsigned int)v8 > 0x40 )
    {
      v8 = a1;
      sub_2205510((__int64)&v24, (const void **)a1);
    }
    else
    {
      v24 = v9;
    }
    sub_C16720((__int64)&v24, v8);
    sub_2205900((unsigned __int64 *)&v24);
    v18 = v25;
    v17 = (void **)a2;
    v25 = 0;
    v27 = v18;
    v26 = v24;
    sub_2208490((__int64)&v26, a2, (__int64)a3, (__int64)a4);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
    sub_C16720((__int64)a3, a2);
    sub_2205900(a3);
    goto LABEL_31;
  }
  if ( v11 <= 0x40 )
  {
    if ( (v12 & v14) == 0 )
      goto LABEL_34;
    v25 = *(_DWORD *)(a2 + 8);
    v24 = (void *)v12;
  }
  else
  {
    if ( (v14 & *(_QWORD *)(v12 + 8LL * (v13 >> 6))) == 0 )
    {
LABEL_34:
      sub_2208490(a1, a2, (__int64)a3, (__int64)a4);
      return;
    }
    v8 = a2;
    v25 = *(_DWORD *)(a2 + 8);
    sub_2205510((__int64)&v24, (const void **)a2);
  }
  sub_C16720((__int64)&v24, v8);
  sub_2205900((unsigned __int64 *)&v24);
  v19 = v25;
  v25 = 0;
  v27 = v19;
  v26 = v24;
  sub_2208490(a1, (__int64)&v26, (__int64)a3, (__int64)a4);
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  sub_C16720((__int64)a3, (__int64)&v26);
  sub_2205900(a3);
}
