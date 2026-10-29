__int64 __fastcall sub_16D1580(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rbx
  char v5; // al
  unsigned __int64 v6; // r13
  __int64 *v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 *v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rbp
  __int64 *v25; // rsi
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v36[32]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int8 *v37[11]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int8 v38; // [rsp+98h] [rbp-40h]
  unsigned __int8 v39; // [rsp+A4h] [rbp-34h]

  v4 = a2;
  v5 = *(_BYTE *)(a2 + 2);
  v6 = *(_QWORD *)(a2 + 8 * (((v5 & 8) != 0) + 1LL) + 32);
  v7 = (__int64 *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*v7 + 17) & 4) != 0 )
  {
    v9 = 1;
    goto LABEL_6;
  }
  LOBYTE(v8) = sub_F58100(*v7);
  v9 = v8;
  if ( !(_BYTE)v8 )
    goto LABEL_25;
  a2 = v6;
  v10 = sub_19146F0(a1, v6);
  if ( v10 != 1 )
  {
    v9 = 0;
    *(_QWORD *)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 32) = v10 & 0xFFFFFFFFFFFFFFFELL;
    v5 = *(_BYTE *)(v4 + 2);
LABEL_6:
    v6 = *(_QWORD *)(v4 + 8 * (((v5 & 8) != 0) + 1LL) + 40);
    v11 = (__int64 *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*v11 + 17) & 4) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 248);
      goto LABEL_16;
    }
    LOBYTE(v12) = sub_F58100(*v11);
    v13 = v12;
    if ( (_BYTE)v12 )
    {
      v14 = sub_19146F0(a1, v6);
      if ( v14 == 1 )
        return v13;
      *(_QWORD *)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 40) = v14 & 0xFFFFFFFFFFFFFFFELL;
      v15 = *(_QWORD *)(a1 + 248);
      if ( !(_BYTE)v9 )
      {
        v16 = 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL);
        v17 = *(_QWORD *)(v4 + v16 + 32);
        v18 = *(_QWORD *)(v4 + v16 + 40);
        v19 = *(_QWORD *)(v17 + 8);
        v20 = *(_QWORD *)&byte_8[*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL];
        if ( (*(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)v19 | (unsigned __int8)*(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (v20 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v20 | (unsigned __int8)*(_QWORD *)(v18 + 8)) & 7) )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v27 + 16) == 13 && ((*(_WORD *)(v27 + 18) >> 3) & 0x1FF) == 0x1E4 )
          {
            v28 = sub_BF6D70(v4);
            sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), v28, 0xFB0u, 0);
            if ( v38 )
            {
              sub_16B7630(v37, (__int64)"_Float16");
              v9 = v38;
            }
            else
            {
              v9 = v39;
              if ( v39 )
              {
                sub_16CEE40((__int64)v36, (__int64)"_Float16");
                v9 = v38;
              }
            }
          }
          else
          {
            v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v29 + 16) != 13 || ((*(_WORD *)(v29 + 18) >> 3) & 0x1FF) != 0x1E0 )
            {
              *(_QWORD *)(v4 + 8) = sub_A74CE0(v15, v19);
              return v9;
            }
            v31 = sub_BF6D70(v4);
            sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), v31, 0xFB0u, 0);
            if ( v38 )
            {
              sub_16B7630(v37, (__int64)"half");
              v9 = v38;
            }
            else
            {
              v9 = v39;
              if ( v39 )
              {
                sub_16CEE40((__int64)v36, (__int64)"half");
                v9 = v38;
              }
            }
          }
          goto LABEL_13;
        }
        v21 = sub_EEB7E0(v17, v19, a3);
        sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), v21, 0x1463u, 0);
        v33 = *(_QWORD *)(v17 + 8);
        v22 = sub_162B6D0((__int64)v36, &v33);
        v32 = *(_QWORD *)(v18 + 8);
        v23 = sub_162B6D0(v22, &v32);
        v35 = sub_EEC8C0(v17, (__int64)&v32, a3);
        v24 = sub_1587DB0(v23, &v35);
        v25 = &v34;
        v34 = sub_EEC8C0(v18, (__int64)&v35, a3);
LABEL_12:
        v9 = *(unsigned __int8 *)(sub_1587DB0(v24, v25) + 120);
LABEL_13:
        sub_15F7200(v36);
        return v9;
      }
LABEL_16:
      v9 = 0;
      *(_QWORD *)(v4 + 8) = *(_QWORD *)(v15 + 19072);
      return v9;
    }
LABEL_25:
    v30 = sub_EEB7E0(v6, a2, a3);
    sub_168B9F0((__int64)v36, (__int64 *)(a1 + 8), v30, 0x1467u, 0);
    v34 = *(_QWORD *)(v6 + 8);
    v24 = sub_162B6D0((__int64)v36, &v34);
    v25 = &v35;
    v35 = sub_EEC8C0(v6, (__int64)&v34, a3);
    goto LABEL_12;
  }
  return v9;
}
