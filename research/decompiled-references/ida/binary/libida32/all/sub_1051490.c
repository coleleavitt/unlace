__int64 __fastcall sub_1051490(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int32 v6; // r12d
  bool v7; // zf
  bool v8; // r15
  unsigned int v9; // ecx
  __int64 v10; // rax
  const char *v11; // rsi
  void *v12; // rdi
  int v13; // eax
  size_t v14; // rax
  char *v15; // rsi
  const char *v16; // rdx
  int v17; // eax
  int v18; // edx
  char v19; // al
  __int32 v20; // eax
  const char *v21; // rax
  __int64 v22; // r13
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // r15
  int v28; // edx
  int v29; // edx
  __int64 result; // rax
  int v31; // eax
  void *v32[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v33[72]; // [rsp+10h] [rbp-48h] BYREF

  sub_10094E0(a1, a2, a3);
  *(_BYTE *)(a1 + 628) |= 0x80u;
  *(_BYTE *)(a1 + 528) = 0;
  *(_BYTE *)(a1 + 560) = 0;
  v6 = a2[2].m128i_i32[3];
  *(_QWORD *)a1 = &off_2C00700;
  *(_QWORD *)(a1 + 512) = a1 + 528;
  v7 = a2[3].m128i_i32[0] == 49;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 544) = a1 + 560;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_DWORD *)(a1 + 608) = 0;
  *(_DWORD *)(a1 + 616) = 2;
  *(_QWORD *)(a1 + 632) = 0;
  if ( v7 )
  {
    v8 = 1;
    goto LABEL_4;
  }
  if ( v6 != 39 )
  {
    v8 = v6 == 17;
LABEL_4:
    if ( v6 == 1 || ((v6 - 5) & 0xFFFFFFFB) == 0 || (unsigned int)(v6 - 27) <= 4 )
      goto LABEL_7;
    goto LABEL_23;
  }
  v8 = 1;
LABEL_23:
  if ( a2[3].m128i_i32[1] != 5 )
  {
    if ( (unsigned int)(v6 - 11) > 1 )
    {
      *(_QWORD *)(a1 + 144) = 0x500000005LL;
      v13 = 6;
    }
    else
    {
      *(_QWORD *)(a1 + 144) = 0x700000007LL;
      v13 = 8;
    }
    *(_DWORD *)(a1 + 136) = v13;
    goto LABEL_9;
  }
LABEL_7:
  v7 = a2[2].m128i_i32[1] == 26;
  *(_DWORD *)(a1 + 136) = 8;
  *(_QWORD *)(a1 + 144) = 0x700000007LL;
  if ( !v7 )
    *(_DWORD *)(a1 + 144) = 5;
LABEL_9:
  sub_104D7C0(a1);
  v7 = a2[3].m128i_i32[1] == 5;
  *(_BYTE *)(a1 + 275) = 1;
  if ( v7 )
  {
    if ( a2[3].m128i_i32[0] == 15 || !a2[2].m128i_i32[3] || *(_DWORD *)(a1 + 620) == 3 )
    {
      v32[0] = v33;
      v14 = j__strlen("aapcs");
      v15 = "aapcs";
LABEL_28:
      v16 = &v15[v14];
      goto LABEL_29;
    }
    if ( a2[2].m128i_i32[1] != 26 )
      goto LABEL_62;
    v11 = "aapcs16";
  }
  else
  {
    if ( a2[2].m128i_i32[3] == 15 )
    {
      v16 = "";
      v15 = "aapcs";
      v32[0] = v33;
LABEL_29:
      sub_104C2D0(v32, v15, (__int64)v16);
      sub_10513C0(a1, (__int64)v32);
      v12 = v32[0];
      if ( v32[0] == v33 )
        goto LABEL_31;
      goto LABEL_30;
    }
    v9 = a2[3].m128i_u32[0];
    if ( v9 > 0x31 )
      goto LABEL_15;
    v10 = 1LL << v9;
    if ( ((1LL << v9) & 0x20000006201E0LL) == 0 )
    {
      if ( (v10 & 2) != 0 )
      {
LABEL_62:
        v11 = "apcs-gnu";
        goto LABEL_20;
      }
      if ( (v10 & 0x18000) != 0 )
      {
LABEL_19:
        v11 = "aapcs";
        goto LABEL_20;
      }
LABEL_15:
      if ( v6 != 11 )
      {
        if ( v6 != 3 && v6 != 12 && !v8 )
          goto LABEL_19;
        v32[0] = v33;
        v14 = j__strlen("aapcs-linux");
        v15 = "aapcs-linux";
        goto LABEL_28;
      }
      goto LABEL_62;
    }
    v11 = "aapcs-linux";
  }
LABEL_20:
  sub_104C820((__int64 *)v32, v11);
  sub_10513C0(a1, (__int64)v32);
  v12 = v32[0];
  if ( v32[0] != v33 )
LABEL_30:
    operator delete(v12);
LABEL_31:
  v17 = *(_DWORD *)(a1 + 612);
  v18 = *(_DWORD *)(a1 + 620);
  *(_DWORD *)(a1 + 340) = 1;
  if ( v17 == 1 )
  {
    if ( *(_DWORD *)(a1 + 624) > 5u )
    {
      if ( v18 == 3 )
      {
LABEL_66:
        *(_WORD *)(a1 + 286) = 8224;
        goto LABEL_36;
      }
      goto LABEL_56;
    }
  }
  else if ( v17 == 2 && *(_DWORD *)(a1 + 624) > 6u )
  {
    if ( v18 == 3 )
      goto LABEL_66;
LABEL_56:
    *(_WORD *)(a1 + 286) = 16448;
    goto LABEL_36;
  }
  v19 = 32;
  if ( v18 != 3 )
    v19 = 64;
  *(_BYTE *)(a1 + 286) = v19;
LABEL_36:
  if ( *(char *)(a1 + 628) < 0 && a2[3].m128i_i32[0] != 17 )
  {
    *(_DWORD *)(a1 + 68) = 64;
    *(_BYTE *)(a1 + 60) = 64;
  }
  v20 = a2[2].m128i_i32[3];
  *(_BYTE *)(a1 + 184) |= 4u;
  if ( !v20 || v20 == 7 )
  {
    v21 = "llvm.arm.gnu.eabi.mcount";
    if ( *(_DWORD *)(a3 + 192) != 4 )
      v21 = (const char *)&unk_22D6A7B;
    *(_QWORD *)(a1 + 328) = v21;
  }
  v22 = *(_QWORD *)(a3 + 240);
  v23 = *(_QWORD *)(a3 + 232);
  v24 = (v22 - v23) >> 7;
  v25 = (v22 - v23) >> 5;
  if ( v24 > 0 )
  {
    v26 = v23 + (v24 << 7);
    while ( sub_990D60(v23, "+soft-float-abi") )
    {
      v27 = v23 + 32;
      if ( !sub_990D60(v23 + 32, "+soft-float-abi")
        || (v27 = v23 + 64, !sub_990D60(v23 + 64, "+soft-float-abi"))
        || (v27 = v23 + 96, !sub_990D60(v23 + 96, "+soft-float-abi")) )
      {
        LOBYTE(v28) = v22 != v27;
        goto LABEL_50;
      }
      v23 += 128;
      if ( v26 == v23 )
      {
        v25 = (v22 - v23) >> 5;
        goto LABEL_68;
      }
    }
    goto LABEL_49;
  }
LABEL_68:
  if ( v25 == 2 )
  {
LABEL_75:
    if ( sub_990D60(v23, "+soft-float-abi") )
    {
      v23 += 32;
LABEL_77:
      v31 = sub_990D60(v23, "+soft-float-abi");
      v28 = 0;
      if ( v31 )
        goto LABEL_50;
      goto LABEL_49;
    }
    goto LABEL_49;
  }
  if ( v25 != 3 )
  {
    if ( v25 != 1 )
    {
      v28 = 0;
      goto LABEL_50;
    }
    goto LABEL_77;
  }
  if ( sub_990D60(v23, "+soft-float-abi") )
  {
    v23 += 32;
    goto LABEL_75;
  }
LABEL_49:
  LOBYTE(v28) = v22 != v23;
LABEL_50:
  v29 = 8 * v28;
  result = v29 | *(_BYTE *)(a1 + 629) & 0xF7u;
  *(_BYTE *)(a1 + 629) = v29 | *(_BYTE *)(a1 + 629) & 0xF7;
  return result;
}

