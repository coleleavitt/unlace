__int64 __fastcall sub_16D5090(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  unsigned int v4; // ebp
  char v5; // al
  _DWORD *v6; // r13
  unsigned int v8; // r15d
  unsigned int v9; // eax
  void *v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // edx
  _QWORD *v13; // r14
  bool v14; // r15
  unsigned int v15; // r15d
  unsigned int v16; // eax
  void *v17; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-F0h]
  char v19; // [rsp+Ch] [rbp-ECh]
  void *v20; // [rsp+10h] [rbp-E8h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-E0h]
  void *v22; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-D0h]
  void *v24; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-C0h]

  v4 = 0;
  v5 = *(_BYTE *)(a2 + 2);
  v18 = 1;
  v17 = nullptr;
  v19 = 0;
  v6 = *(_DWORD **)(a2 + 8 * (((v5 & 8) != 0) + (unsigned __int64)a3 + 1) + 32);
  if ( ((*v6 >> 14) & 0xC) != 0 )
    return v4;
  v4 = sub_16D4840(a1, a2, a3, (__int64)&v17);
  if ( !(_BYTE)v4 )
  {
    v8 = v18;
    if ( v19 )
    {
      if ( v18 > 0x40 )
      {
LABEL_6:
        if ( v8 == (unsigned int)sub_2206780(&v17) )
        {
LABEL_7:
          v9 = sub_BF6D70(a2);
          sub_168B9F0((__int64)&v24, (__int64 *)(a1 + 8), v9, 0xBF1u, 0);
          v22 = (void *)sub_EEC8C0((unsigned __int64)v6, a1 + 8, a4);
          v4 = *(unsigned __int8 *)(sub_1587DB0((__int64)&v24, (__int64 *)&v22) + 120);
          sub_15F7200(&v24);
          goto LABEL_8;
        }
        v21 = v8;
        sub_2205510(&v20);
LABEL_17:
        sub_2205B00(&v20, 1);
        v12 = v21;
        v21 = 0;
        v23 = v12;
        v22 = v20;
        if ( v12 > 0x40 )
        {
          sub_2205B60(&v22, &v17);
          v15 = v23;
          v13 = v22;
          v23 = 0;
          v25 = v15;
          v24 = v22;
          if ( v15 > 0x40 )
          {
            v16 = v15 - sub_2206780(&v24);
            v14 = 0;
            if ( v16 <= 0x40 )
              v14 = *v13 == 0;
            if ( v24 )
            {
              operator delete[](v24);
              if ( v23 > 0x40 )
              {
                if ( v22 )
                  operator delete[](v22);
              }
            }
LABEL_20:
            if ( v21 > 0x40 && v20 )
              operator delete[](v20);
            if ( v14 )
              goto LABEL_8;
            goto LABEL_7;
          }
        }
        else
        {
          v13 = (_QWORD *)((unsigned __int64)v17 & (unsigned __int64)v20);
        }
        v14 = v13 == nullptr;
        goto LABEL_20;
      }
      v10 = v17;
    }
    else
    {
      v10 = v17;
      v11 = 1LL << ((unsigned __int8)v18 - 1);
      if ( v18 > 0x40 )
      {
        if ( (v11 & *((_QWORD *)v17 + ((v18 - 1) >> 6))) != 0 )
          goto LABEL_7;
        goto LABEL_6;
      }
      if ( (v11 & (unsigned __int64)v17) != 0 )
        goto LABEL_7;
    }
    if ( !v10 )
      goto LABEL_7;
    v20 = v10;
    v21 = v18;
    goto LABEL_17;
  }
LABEL_8:
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  return v4;
}
