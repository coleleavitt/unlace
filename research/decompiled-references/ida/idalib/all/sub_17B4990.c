__int64 __fastcall sub_17B4990(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned int a8,
        char a9,
        char a10)
{
  unsigned int v10; // r13d
  __int64 v14; // rdx
  __int64 v15; // rsi
  char v16; // al
  __int64 v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int16 v20; // r13
  __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int16 v24; // r14
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // r15
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  char v35; // r13
  char v36; // al
  __int64 v37; // rcx
  char v38; // r13
  char v39; // al
  __int64 v40; // [rsp+10h] [rbp-F8h]
  __int64 v41; // [rsp+10h] [rbp-F8h]
  __int64 v42; // [rsp+10h] [rbp-F8h]
  __int64 v43; // [rsp+18h] [rbp-F0h]
  __int64 v45; // [rsp+18h] [rbp-F0h]
  __int64 v46; // [rsp+18h] [rbp-F0h]
  __int64 v47; // [rsp+20h] [rbp-E8h]
  __int64 v48; // [rsp+28h] [rbp-E0h]
  int v49; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE v50[200]; // [rsp+40h] [rbp-C8h] BYREF

  v14 = *(unsigned int *)(a4 + 16);
  v15 = a8;
  LOBYTE(v10) = a2 != 0 && (_DWORD)v14 != 0;
  if ( !(_BYTE)v10 )
    goto LABEL_2;
  v28 = (__int64 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v28 + 16) != 26 )
  {
    v42 = a4;
    v31 = sub_179A8B0(*v28, a8, v14, a4);
    a4 = v42;
    if ( !v31 )
    {
      sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), v42, 0);
      sub_15F7200(v50);
      sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a5, (__int64)(a5 + 2), 0);
      sub_15F7200(v50);
      return v10;
    }
    v14 = *(unsigned int *)(v42 + 16);
    v15 = a8;
LABEL_2:
    if ( !(_DWORD)v14 )
      goto LABEL_3;
  }
  v29 = (__int64 *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v29 + 16) != 26 )
  {
    v41 = a4;
    if ( !sub_179A8B0(*v29, v15, v14, a4) )
    {
      sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), v41, 0);
      v10 = v50[120];
      sub_15F7200(v50);
      return v10;
    }
  }
LABEL_3:
  if ( !(_BYTE)v15 && (unsigned int)sub_B778D0(a3) == 1 )
  {
    sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a6, (__int64)(a6 + 2), 0);
    v49 = 0;
LABEL_28:
    v10 = *(unsigned __int8 *)(sub_17B4830((__int64)v50, &v49) + 120);
    sub_15F7200(v50);
    return v10;
  }
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 35 <= 3 )
  {
    if ( sub_AED5B0(a3) )
    {
      sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a6, (__int64)(a6 + 2), 0);
      v49 = 1;
      goto LABEL_28;
    }
    v16 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( v16 == 38 )
    {
      sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a6, (__int64)(a6 + 2), 0);
      v49 = 3;
      goto LABEL_28;
    }
    if ( v16 == 36 )
    {
      sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a6, (__int64)(a6 + 2), 0);
      v49 = 4;
      goto LABEL_28;
    }
  }
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3) + 82) & 0x40) != 0 )
  {
    sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a6, (__int64)(a6 + 2), 0);
    v49 = 5;
    goto LABEL_28;
  }
  if ( (*(_BYTE *)(a3 + 83) & 2) != 0 )
  {
    sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a6, (__int64)(a6 + 2), 0);
    v49 = 6;
    goto LABEL_28;
  }
  if ( !a9 && (*(_BYTE *)(a3 + 84) & 3) != 0 )
  {
    sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a6, (__int64)(a6 + 2), 0);
    v49 = ((*(_BYTE *)(a3 + 84) & 3) == 2) + 7;
    goto LABEL_28;
  }
  v17 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v40 = *(_QWORD *)(v17 + 24);
  v10 = sub_179FCB0(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL));
  if ( (_BYTE)v10 )
  {
    sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a6, (__int64)(a6 + 2), 0);
    v49 = 2;
    goto LABEL_28;
  }
  if ( a2 )
  {
    v19 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v20 = *(_WORD *)(v17 + 20) >> 2;
    v21 = *(_QWORD *)v19;
    v22 = *(_QWORD *)&byte_8[v19] & 0xFFFFFFFFFFFFFFF0LL;
    v23 = *(_QWORD *)v22;
    v24 = *(_WORD *)(*(_QWORD *)v22 + 20LL) >> 2;
    if ( *(_BYTE *)(*(_QWORD *)v19 + 16LL) == 26 )
    {
      v25 = *(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      v26 = *(_QWORD *)v25;
      if ( *(_BYTE *)(*(_QWORD *)v25 + 16LL) == 26 )
        goto LABEL_16;
    }
    else
    {
      v45 = *(_QWORD *)v22;
      v32 = sub_179A8B0(*(_QWORD *)v19, v21, v18, v22);
      v23 = v45;
      v21 = v32;
      v33 = *(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      v26 = *(_QWORD *)v33;
      if ( *(_BYTE *)(*(_QWORD *)v33 + 16LL) == 26 )
      {
LABEL_38:
        if ( !v21 || !v26 )
        {
          if ( (v24 & 0x3F) == (v20 & 0x3F) )
            goto LABEL_18;
          goto LABEL_41;
        }
LABEL_16:
        v48 = v23;
        v43 = v26;
        v27 = sub_1629270(v21);
        if ( ((v27 ^ (unsigned __int8)sub_1629270(v43)) & 3) == 0 )
        {
          v26 = v43;
          v23 = v48;
          if ( (v24 & 0x3F) == (v20 & 0x3F) )
          {
LABEL_18:
            if ( *(_QWORD *)(v23 + 24) == v40 )
            {
              if ( (*(_BYTE *)(a3 + 84) & 3) == (*(_BYTE *)(a2 + 84) & 3) )
              {
                if ( ((*(_QWORD *)(a3 + 80) & 0x20000LL) != 0) == ((*(_QWORD *)(a2 + 80) & 0x20000LL) != 0) )
                {
                  v46 = v26;
                  v35 = sub_B844D0((_BYTE *)a2);
                  v36 = sub_B844D0((_BYTE *)a3);
                  v37 = v46;
                  if ( v35 == v36 )
                  {
                    if ( a10 )
                      return (unsigned int)sub_18B1360(
                                             a1,
                                             v21,
                                             *(unsigned int *)(a2 + 24),
                                             v37,
                                             *(unsigned int *)(a3 + 24));
                    v38 = sub_B82220(a2);
                    v39 = sub_B82220(a3);
                    v37 = v46;
                    if ( v38 == v39 )
                      return (unsigned int)sub_18B1360(
                                             a1,
                                             v21,
                                             *(unsigned int *)(a2 + 24),
                                             v37,
                                             *(unsigned int *)(a3 + 24));
                    sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a7, (__int64)(a7 + 2), 0);
                    v49 = 5;
                  }
                  else
                  {
                    sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a7, (__int64)(a7 + 2), 0);
                    v49 = 4;
                  }
                }
                else
                {
                  sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a7, (__int64)(a7 + 2), 0);
                  v49 = 3;
                }
              }
              else
              {
                sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a7, (__int64)(a7 + 2), 0);
                v49 = 2;
              }
            }
            else
            {
              sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a7, (__int64)(a7 + 2), 0);
              v49 = 1;
            }
            goto LABEL_20;
          }
        }
LABEL_41:
        sub_168CDE0((__int64)v50, (__int64 *)(a1 + 8), *a7, (__int64)(a7 + 2), 0);
        v49 = 0;
LABEL_20:
        v10 = *(unsigned __int8 *)(sub_17B48E0((__int64)v50, &v49) + 120);
        sub_15F7200(v50);
        return v10;
      }
    }
    v47 = v23;
    v34 = sub_179A8B0(v26, v21, v18, v26);
    v23 = v47;
    v26 = v34;
    goto LABEL_38;
  }
  return v10;
}
