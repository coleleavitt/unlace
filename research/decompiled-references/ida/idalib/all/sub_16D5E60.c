__int64 __fastcall sub_16D5E60(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  unsigned int v4; // ebx
  char v5; // al
  _DWORD *v6; // r12
  unsigned int v9; // r15d
  unsigned __int64 v10; // rdi
  char v11; // al
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rbx
  unsigned int v16; // eax
  int v17; // r14d
  int v18; // r14d
  int v19; // r15d
  int v20; // r15d
  void *v21; // [rsp+10h] [rbp-F8h]
  char v22; // [rsp+18h] [rbp-F0h]
  unsigned int v23; // [rsp+18h] [rbp-F0h]
  unsigned int v24; // [rsp+1Ch] [rbp-ECh] BYREF
  void *v25; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-E0h]
  char v27; // [rsp+2Ch] [rbp-DCh]
  unsigned __int64 v28; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-D0h]
  char v30; // [rsp+3Ch] [rbp-CCh]
  void *v31; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-C0h]

  v4 = 0;
  v5 = *(_BYTE *)(a2 + 2);
  v24 = a3;
  v26 = 1;
  v27 = 0;
  v25 = nullptr;
  v6 = *(_DWORD **)(a2 + 8 * (a3 + (unsigned __int64)((v5 & 8) != 0)) + 40);
  if ( ((*v6 >> 14) & 0xC) != 0 )
    return v4;
  v4 = sub_16D4840(a1, a2, a3, (__int64)&v25);
  if ( (_BYTE)v4 )
    goto LABEL_12;
  v9 = v26;
  if ( v26 > 0x40 )
  {
    v17 = sub_22069E0(&v25);
    v18 = sub_2206780(&v25) + v17;
    v16 = v18 + sub_22068B0(&v25);
    if ( v9 == v16 )
      goto LABEL_13;
    v32 = v9;
    v22 = v27;
    sub_2205510(&v31);
    v9 = v32;
    v11 = v22;
    if ( v32 > 0x40 )
    {
      sub_2205FC0(&v31, &v25);
      v13 = (unsigned __int64)v31;
      v29 = v32;
      v28 = (unsigned __int64)v31;
      v30 = v22;
      if ( v32 <= 0x40 )
        goto LABEL_9;
      v21 = v31;
      v23 = v32;
      v19 = sub_22069E0(&v28);
      v20 = sub_2206780(&v28) + v19;
      if ( (unsigned int)sub_22068B0(&v28) + v20 == v23 )
      {
        if ( v21 )
        {
          operator delete[](v21);
          v16 = v26;
          goto LABEL_13;
        }
        goto LABEL_12;
      }
      if ( v21 )
        operator delete[](v21);
      goto LABEL_11;
    }
    v10 = (unsigned __int64)v31;
LABEL_7:
    v12 = ~v10;
    if ( v9 )
    {
      v13 = v12 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v9);
      v29 = v9;
      v28 = v13;
      v30 = v11;
LABEL_9:
      if ( v13 && (((v13 - 1) | v13) & (((v13 - 1) | v13) + 1)) == 0 )
        goto LABEL_12;
    }
LABEL_11:
    v14 = sub_BF6D70(a2);
    sub_168B9F0((__int64)&v31, (__int64 *)(a1 + 8), v14, 0xBEFu, 0);
    v15 = sub_1588370((__int64)&v31, &v24);
    v28 = sub_EEC8C0((unsigned __int64)v6, (__int64)&v24, a4);
    v4 = *(unsigned __int8 *)(sub_1587DB0(v15, (__int64 *)&v28) + 120);
    sub_15F7200(&v31);
LABEL_12:
    v16 = v26;
    goto LABEL_13;
  }
  v10 = (unsigned __int64)v25;
  if ( !v25
    || (v16 = v26,
        (((unsigned __int64)v25 | ((unsigned __int64)v25 - 1))
       & (((unsigned __int64)v25 | ((unsigned __int64)v25 - 1)) + 1)) != 0) )
  {
    v32 = v26;
    v11 = v27;
    v31 = v25;
    goto LABEL_7;
  }
LABEL_13:
  if ( v16 > 0x40 && v25 )
    operator delete[](v25);
  return v4;
}
