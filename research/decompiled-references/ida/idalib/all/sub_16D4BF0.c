__int64 __fastcall sub_16D4BF0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, double a5)
{
  unsigned int v5; // r15d
  char v6; // al
  _DWORD *v7; // r13
  char v10; // al
  char v11; // r12
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r14d
  int v16; // [rsp+8h] [rbp-100h]
  void *v17; // [rsp+8h] [rbp-100h]
  void *v18; // [rsp+10h] [rbp-F8h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-F0h]
  char v20; // [rsp+1Ch] [rbp-ECh]
  void *v21; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-E0h]
  char v23; // [rsp+2Ch] [rbp-DCh]
  void *v24; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-D0h]
  void *v26; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-C0h]
  char v28; // [rsp+4Ch] [rbp-BCh]

  v5 = 0;
  v6 = *(_BYTE *)(a2 + 2);
  v19 = 1;
  v20 = 0;
  v18 = nullptr;
  v7 = *(_DWORD **)(a2 + 8 * (((v6 & 8) != 0) + (unsigned __int64)a3 + 1) + 32);
  if ( ((*v7 >> 14) & 0xC) != 0 )
    return v5;
  v5 = sub_16D4840(a1, a2, a3, (__int64)&v18);
  if ( !(_BYTE)v5 )
  {
    sub_2206590(&v26, &v18, a4);
    if ( v19 > 0x40 && v18 )
      operator delete[](v18);
    v20 = 1;
    v18 = v26;
    v19 = v27;
    v22 = v27;
    if ( v27 > 0x40 )
    {
      sub_2205510(&v21);
      v10 = v20;
    }
    else
    {
      v21 = v26;
      v10 = 1;
    }
    v23 = v10;
    v11 = sub_16BE0F0((__int64)&v21);
    if ( v11 )
      goto LABEL_13;
    v27 = 64;
    v26 = nullptr;
    v28 = 0;
    v13 = sub_98E2D0((__int64 *)&v18, (__int64 *)&v26);
    if ( v27 > 0x40 && v26 )
    {
      v16 = v13;
      operator delete[](v26);
      v13 = v16;
    }
    if ( v13 <= 0 || !(unsigned __int8)sub_16BE060((__int64 *)&v18, &stru_10000) )
      goto LABEL_13;
    LODWORD(v14) = v19;
    v25 = v19;
    if ( v19 > 0x40 )
    {
      sub_2205510(&v24);
      v14 = v25;
      if ( v25 > 0x40 )
      {
        *(_QWORD *)v24 = (unsigned __int8)*(_QWORD *)v24;
        memset((char *)v24 + 8, 0, 8 * ((unsigned int)((unsigned __int64)(v14 + 63) >> 6) + 0x1FFFFFFF));
        v15 = v25;
        v25 = 0;
        v27 = v15;
        v26 = v24;
        v17 = v24;
        v11 = sub_9954A0((__int64)&v26, (_UNKNOWN **)((char *)&off_F8 + 7));
        if ( v15 > 0x40 )
        {
          if ( v17 )
          {
            operator delete[](v17);
            if ( v25 > 0x40 )
            {
              if ( v24 )
                operator delete[](v24);
            }
          }
        }
        goto LABEL_13;
      }
    }
    else
    {
      v24 = v18;
    }
    v27 = v14;
    v24 = (void *)(unsigned __int8)v24;
    v25 = 0;
    v26 = (void *)(unsigned __int8)v24;
    v11 = sub_9954A0((__int64)&v26, (_UNKNOWN **)((char *)&off_F8 + 7));
LABEL_13:
    if ( v22 > 0x40 && v21 )
      operator delete[](v21);
    if ( !v11 )
    {
      v12 = sub_BF6D70(a2);
      sub_168B9F0((__int64)&v26, (__int64 *)(a1 + 8), v12, 0xBF3u, 0);
      v24 = (void *)sub_EEC8C0((unsigned __int64)v7, a1 + 8, a5);
      v5 = *(unsigned __int8 *)(sub_1587DB0((__int64)&v26, (__int64 *)&v24) + 120);
      sub_15F7200(&v26);
    }
  }
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  return v5;
}
