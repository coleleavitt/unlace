__int64 __fastcall sub_987A30(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  int v5; // r14d
  unsigned int v6; // r12d
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // r12d
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  void *v15; // rax
  __int64 v16; // rsi
  void *v17; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-70h]
  char v19; // [rsp+1Ch] [rbp-6Ch]
  void *v20; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-60h]
  char v22; // [rsp+2Ch] [rbp-5Ch]
  void *v23; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-50h]
  char v25; // [rsp+3Ch] [rbp-4Ch]
  void *v26; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-40h]
  char v28; // [rsp+4Ch] [rbp-3Ch]

  v4 = sub_97DE10(a1, a3);
  v5 = *(_DWORD *)(a2 + 504);
  v6 = v4;
  v7 = *(_QWORD *)(a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a3 + 3));
  if ( (*(_BYTE *)(v7 + 1) & 6) != 0 )
    v8 = ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8)
                                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                                   + 8LL)
                                                       & 0xFFFFFFFFFFFFFFF0LL)
                                           + 16LL)
        - 25 < 2)
       + 13;
  else
    v8 = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(v7 + 8));
  sub_97E960((__int64)&v17, *(_QWORD *)(a1 + 184), v8, v6);
  v22 = 0;
  v21 = 64;
  v20 = nullptr;
  if ( v18 != 64 )
  {
    if ( v18 > 0x40 )
    {
      sub_2587BE0(&v26, &v20, v18);
      v25 = 0;
      v24 = v27;
      v23 = v26;
      v9 = sub_804370((__int64 *)&v17, (__int64 *)&v23);
      if ( v24 <= 0x40 )
        goto LABEL_8;
    }
    else
    {
      if ( v19 )
      {
        sub_2587D60(&v26, &v17);
        v25 = 1;
      }
      else
      {
        sub_2587BE0(&v26, &v17, 64);
        v25 = 0;
      }
      v24 = v27;
      v23 = v26;
      v9 = sub_804370((__int64 *)&v23, (__int64 *)&v20);
      if ( v24 <= 0x40 )
      {
LABEL_8:
        if ( v21 > 0x40 && v20 )
          operator delete[](v20);
        goto LABEL_11;
      }
    }
    if ( v23 )
      operator delete[](v23);
    goto LABEL_8;
  }
  if ( v19 )
    v9 = sub_25867A0(&v17, &v20);
  else
    v9 = sub_2586820(&v17, &v20);
LABEL_11:
  if ( v9 )
    goto LABEL_14;
  if ( *(_DWORD *)(a2 + 504) == 345 && *(_DWORD *)(a3 + 16) == 2 )
  {
    v15 = (void *)sub_985340(
                    *(__int64 **)(a1 + 192),
                    *(_QWORD *)(*(unsigned __int8 *)(a3 + 3) + a3 + 8LL * ((*(_BYTE *)(a3 + 2) & 8) != 0) + 8 + 8));
    v16 = *(_QWORD *)(a1 + 184);
    v26 = v15;
    sub_97E960((__int64)&v26, v16, (unsigned int)v15, 0);
    sub_97E3E0(a1, (__int64)&v26, *(_QWORD *)(a3 + 8));
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
LABEL_18:
    v10 = 1;
    goto LABEL_19;
  }
  v10 = 0;
  if ( (unsigned int)(v5 - 893) <= 2 )
  {
LABEL_14:
    v11 = v18;
    v12 = *(_QWORD *)(a3 + 8);
    if ( v18 > 0x40 )
    {
      v11 = sub_2587400(&v17);
    }
    else if ( v17 )
    {
      _BitScanReverse64(&v13, (unsigned __int64)v17);
      v11 = v18 + (v13 ^ 0x3F) - 64;
    }
    v27 = 32;
    v26 = (void *)v11;
    v28 = 1;
    sub_97E3E0(a1, (__int64)&v26, v12);
    goto LABEL_18;
  }
LABEL_19:
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  return v10;
}

