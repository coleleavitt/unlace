__int64 __fastcall sub_19FE430(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, unsigned __int64 *a5, __int64 a6)
{
  __int64 v8; // r8
  __int64 *v9; // rcx
  int v10; // ebx
  __int64 *v12; // r11
  unsigned int v13; // ebp
  __int64 *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int16 v17; // r10
  unsigned int v18; // r9d
  unsigned __int8 v19; // al
  unsigned __int64 v20; // rax
  __int64 *v22; // rsi
  unsigned int v23; // ecx
  bool v24; // zf
  int v25; // [rsp+Ch] [rbp-DCh]
  __int16 v26; // [rsp+16h] [rbp-D2h] BYREF
  __int64 v27; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v28[200]; // [rsp+20h] [rbp-C8h] BYREF

  v8 = a4;
  v9 = &a3[a4];
  v10 = *(_DWORD *)(*a3 + 28);
  v25 = *(_DWORD *)(*a3 + 24);
  v26 = v26 & 0xFC00 | 1;
  if ( a3 != v9 )
  {
    v12 = a3;
    v13 = 0;
    v14 = nullptr;
    v15 = 0;
    while ( 1 )
    {
      v16 = *v12;
      v27 = v16;
      if ( !v16 )
        goto LABEL_5;
      v17 = *(_WORD *)(v16 + 36);
      v18 = *(_DWORD *)(v16 + 24);
      v10 = *(_DWORD *)(v16 + 28);
      if ( v17 == 18 )
        break;
      if ( v17 <= 0x12u )
      {
        if ( v17 != 16 )
          return sub_19FE640(a1, a2, v15);
        v14 = *(__int64 **)(v16 + 40);
        if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v22 = (__int64 *)(a1 + 8);
          v24 = v15 == *v14;
          goto LABEL_26;
        }
        v15 = *v14;
LABEL_5:
        if ( v9 == ++v12 )
          goto LABEL_13;
      }
      else
      {
        if ( v17 == 19 )
        {
          if ( (v26 & 0x200) != 0 )
            goto LABEL_22;
          HIBYTE(v26) |= 2u;
          goto LABEL_5;
        }
        if ( v17 != 20 )
          return sub_19FE640(a1, a2, v15);
        v19 = *(_BYTE *)(v16 + 39);
        if ( (_BYTE)v13 )
        {
          v22 = (__int64 *)(a1 + 8);
          v24 = (_BYTE)v26 == v19;
LABEL_26:
          v23 = v24 + 6859;
LABEL_23:
          v13 = 0;
          sub_168B9F0((__int64)v28, v22, v18, v23, 0);
          sub_19FE380((__int64)v28, &v27);
          sub_15F7200(v28);
          return v13;
        }
        ++v12;
        LOBYTE(v26) = v19;
        v13 = 1;
        if ( v9 == v12 )
        {
LABEL_13:
          if ( !(_BYTE)v13 )
            goto LABEL_24;
          v20 = sub_A77770(*(_QWORD *)(a1 + 248), a2, v15, (unsigned __int8 *)&v26);
          *a5 = v20;
          if ( v14 != nullptr && a6 != 0 )
          {
            *(_DWORD *)(a6 + 4) = v10;
            LOBYTE(v20) = v14 != nullptr && a6 != 0;
            v13 = v20;
            *(_QWORD *)(a6 + 8) = v14;
            *(_DWORD *)a6 = v25;
          }
          return v13;
        }
      }
    }
    if ( (v26 & 0x100) != 0 )
    {
LABEL_22:
      v22 = (__int64 *)(a1 + 8);
      v23 = 6860;
      goto LABEL_23;
    }
    HIBYTE(v26) |= 1u;
    goto LABEL_5;
  }
LABEL_24:
  v13 = 0;
  sub_168B9F0((__int64)v28, (__int64 *)(a1 + 8), *(_DWORD *)(a3[v8 - 1] + 28), 0xF3Fu, 0);
  sub_15F7200(v28);
  return v13;
}
