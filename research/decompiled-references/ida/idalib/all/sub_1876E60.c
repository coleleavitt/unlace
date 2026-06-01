unsigned __int64 __fastcall sub_1876E60(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __m128 a7,
        __int64 a8,
        int a9,
        unsigned int a10)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  __int64 *v16; // r9
  __int64 *v17; // r12
  __int64 *i; // r14
  __int64 v19; // rax
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rsi
  unsigned __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  void **v28; // rax
  _QWORD *v29; // rax
  __int64 v32; // [rsp+28h] [rbp-F0h]
  __int64 v33; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v34; // [rsp+38h] [rbp-E0h] BYREF
  bool v35; // [rsp+47h] [rbp-D1h] BYREF
  void **v36; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-C8h] BYREF
  void **v38; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v39; // [rsp+70h] [rbp-A8h] BYREF
  char v40; // [rsp+C8h] [rbp-50h]
  unsigned int v41; // [rsp+D0h] [rbp-48h]
  char v42; // [rsp+D4h] [rbp-44h]

  v34 = a2;
  v33 = a3;
  if ( !a2 )
    return 1;
  sub_1CB44B0(a1, &v34);
  v15 = v34;
  if ( (*(_BYTE *)(v34 + 28) & 0x7Fu) - 59 > 2 )
    return 1;
  sub_7052B0((__int64 *)(*(_QWORD *)(v34 + 104) + 96LL), *(_QWORD *)(v34 + 104), v11, v12, v13, v14);
  *(_BYTE *)(*(_QWORD *)(v15 + 128) + 10LL) |= 0x40u;
  v16 = *(__int64 **)(a4 + 8);
  v17 = &v16[*(unsigned int *)(a4 + 16)];
  if ( v17 != v16 )
  {
    for ( i = *(__int64 **)(a4 + 8); v17 != i; ++i )
    {
      while ( 1 )
      {
        v20 = *i;
        if ( (*(_BYTE *)(*i + 58) & 1) == 0 )
        {
          v21 = *(unsigned __int16 *)(*(_QWORD *)(v20 + 72) + 8LL);
          if ( v21 != 419 )
            break;
        }
LABEL_8:
        if ( v17 == ++i )
          goto LABEL_13;
      }
      if ( v21 != 420 )
      {
        sub_168B9F0((__int64)v37, a1 + 1, *(_DWORD *)(v20 + 24), 0xCF7u, 0);
        if ( v40 )
        {
          sub_AE9DF0(&v39, v20, 0x10u);
        }
        else if ( v42 )
        {
          v24 = sub_168B9E0(v37);
          v28 = v38;
          if ( v38 )
          {
            v32 = v24;
            v28 = (void **)(*((__int64 (__fastcall **)(void **))*v38 + 4))(v38);
            v24 = v32;
          }
          v36 = v28;
          v29 = sub_1587BC0(v24, (__int64 *)&v36, v24, v25, v26, v27);
          sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v41 + 8), v20, 0x10u);
        }
        v35 = (*(_BYTE *)(v20 + 35) & 2) != 0;
        v19 = sub_1588420((__int64)v37, (unsigned __int8 *)&v35);
        v36 = *(void ***)(v20 + 24);
        sub_1587DB0(v19, (__int64 *)&v36);
        sub_15F7200(v37);
        goto LABEL_8;
      }
      v22 = *i;
      sub_1815810(a1, v22);
    }
  }
LABEL_13:
  v36 = nullptr;
  sub_1E5F010(a8, &v36);
  if ( !a10 )
  {
    if ( (unsigned __int8)sub_1E535C0(a1, (unsigned int)v33, v36, 1) )
      return 1;
  }
  if ( *(_BYTE *)(v15 + 73) >> 5 == 2 )
  {
    sub_168B9F0((__int64)v37, a1 + 1, *(_DWORD *)(v15 + 24), 0xCF3u, 0);
    sub_15884C0((__int64)v37, &v33);
    sub_15F7200(v37);
    return 1;
  }
  result = sub_18762A0(a1, v15, v33, a5, a6, v36, a7, a10);
  if ( !result )
  {
    sub_B88650(v15, 1);
    return 1;
  }
  return result;
}
