unsigned __int64 __fastcall sub_16CEEA0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        unsigned int a4,
        int a5,
        double a6)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // r13d
  __int64 v16; // rsi
  __int64 *v17; // rsi
  unsigned int v18; // ecx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // [rsp+8h] [rbp-E0h]
  __int64 v23; // [rsp+8h] [rbp-E0h]
  __int64 *v24; // [rsp+10h] [rbp-D8h]
  __int64 *v25; // [rsp+10h] [rbp-D8h]
  int v26; // [rsp+1Ch] [rbp-CCh]
  int v27; // [rsp+1Ch] [rbp-CCh]
  __int64 v28; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v29[32]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int8 *v30[11]; // [rsp+50h] [rbp-98h] BYREF
  char v31; // [rsp+A8h] [rbp-40h]
  char v32; // [rsp+B4h] [rbp-34h]

  v9 = *a3;
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
  {
    if ( (*(_BYTE *)(v10 + 17) & 4) == 0 )
    {
      v17 = (__int64 *)(a1 + 8);
      v18 = 3518;
      goto LABEL_11;
    }
    v12 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1 )
      goto LABEL_15;
  }
  else
  {
    v11 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    v12 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1 )
    {
      if ( (*(_BYTE *)(v10 + 17) & 4) == 0 && (*(_BYTE *)(v12 + 17) & 4) == 0 )
      {
        v13 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 57;
        if ( (unsigned int)v13 > 1 )
        {
          v26 = a5;
          v24 = a3;
          v22 = *a3;
          v14 = sub_F63050(v10, v13, a3, v9);
          a5 = v26;
          a3 = v24;
          v10 = v14;
          v9 = v22;
          v12 = *v11;
        }
        v15 = *(_DWORD *)(v10 + 20);
        v16 = (unsigned int)*(unsigned __int8 *)(v12 + 16) - 57;
        if ( (unsigned int)v16 > 1 )
        {
          v27 = a5;
          v25 = a3;
          v23 = v9;
          v12 = sub_F63050(v12, v16, a3, v9);
          a5 = v27;
          a3 = v25;
          v9 = v23;
        }
        if ( v15 != *(_DWORD *)(v12 + 20) )
        {
          v17 = (__int64 *)(a1 + 8);
          v18 = 3517;
LABEL_11:
          sub_168B9F0((__int64)v29, v17, a4, v18, 0);
          v28 = sub_EEC8C0(a2, (__int64)v17, a6);
          sub_1587DB0((__int64)v29, &v28);
          sub_15F7200(v29);
          return 1;
        }
      }
      goto LABEL_15;
    }
  }
  if ( (*(_BYTE *)(v12 + 17) & 4) == 0 )
  {
    sub_168B9F0((__int64)v29, (__int64 *)(a1 + 8), a4, 0xD23u, 0);
    if ( v31 )
    {
      sub_16B7630(v30, (__int64)"second");
    }
    else
    {
      if ( !v32 )
      {
LABEL_21:
        sub_15F7200(v29);
        return 1;
      }
      sub_16CEE40((__int64)v29, (__int64)"second");
    }
    if ( v31 )
    {
      sub_16B7630(v30, (__int64)"__builtin_convertvector");
    }
    else if ( v32 )
    {
      sub_16CEE40((__int64)v29, (__int64)"__builtin_convertvector");
    }
    goto LABEL_21;
  }
LABEL_15:
  v20 = *(unsigned int *)(a1 + 1952);
  v21 = *(unsigned int *)(a1 + 1956);
  if ( __PAIR64__(v21, v20) == *(_QWORD *)(a1 + 1944) )
  {
    v21 = 0;
    v20 = 0;
  }
  return sub_C09FE0(*(_QWORD **)(a1 + 248), a2, (__int64)a3, v9, 0, 0, a4, a5, (v21 << 32) | v20);
}
