__int64 __fastcall sub_1F42380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64); // rdx
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  unsigned __int8 v28; // al
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  bool v31; // zf
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  bool (__fastcall *v34)(__int64); // rdx

  v6 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( (unsigned int)v6 - 59 > 2 )
  {
    if ( v6 == 20 )
    {
      v15 = a1 - 48;
      if ( a1 != 48 )
        goto LABEL_9;
    }
  }
  else
  {
    v7 = a1 - 64;
    if ( a1 != 64 )
    {
      v8 = *(_QWORD *)(a1 - 64);
      v9 = a1 - 64;
      v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v8 + 32);
      if ( (char *)v10 == (char *)sub_A01140 )
        v11 = sub_B70A60(v9);
      else
        v11 = v10(v9, a2, v7);
      v12 = *(_QWORD *)(v11 + 128);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 88);
        if ( v13 )
          return v13 + 64;
      }
      return 0;
    }
    v15 = 16;
    if ( v6 == 20 )
    {
LABEL_9:
      v16 = sub_A55E60;
      v17 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 48) + 32LL);
      if ( v17 == sub_A55E60 )
        v18 = *(_QWORD *)(a1 + 48);
      else
        v18 = v17(v15);
      v19 = *(_QWORD *)(v18 + 120);
      if ( !v19 )
      {
        sub_A794E0((__int64 *)(*(_QWORD *)(v18 + 96) + 88LL), *(_QWORD *)(v18 + 96), (__int64)v16, v15, a5, a6);
        v19 = *(_QWORD *)(v18 + 120);
      }
      v20 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v20 )
      {
        v21 = *v20;
        if ( v21 )
          return v21 + 48;
      }
      return 0;
    }
  }
  v22 = 0;
  v24 = sub_B8C1B0(a1);
  v27 = v24;
  if ( !v24 )
    return 0;
  while ( 1 )
  {
    v28 = *(_BYTE *)(v27 + 28) & 0x7F;
    if ( (unsigned int)v28 - 34 <= 5 )
    {
      v29 = *(_QWORD *)(v27 + 80);
      if ( (*(_BYTE *)(v27 + 82) & 0x40) != 0 && (v29 & 0x2000000) == 0 )
        return v27 + 72;
      if ( (v29 & 0x2000000) != 0
        || (*(_BYTE *)(v27 + 83) & 8) == 0 && ((*(_BYTE *)(v27 + 128) & 1) != 0 || *(_QWORD *)(v27 + 128)) )
      {
        return v27 + 72;
      }
      if ( (*(_BYTE *)(v27 + 83) & 0x40) != 0 )
        return v27 + 72;
      v33 = HIDWORD(v29);
      if ( (v33 & 0x20) != 0 || (v33 & 0x40) != 0 || sub_B8CF80(v27, a2, *(_BYTE *)(v27 + 83) & 0x40, v23, v25, v26) )
        return v27 + 72;
      v28 = *(_BYTE *)(v27 + 28) & 0x7F;
    }
    if ( v28 != 18 )
      break;
    v30 = *(_QWORD *)v27;
    v34 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v27 + 72LL);
    if ( v34 != sub_6EE910 )
    {
      if ( v34(v27) )
        return v27 + 48;
      v28 = *(_BYTE *)(v27 + 28) & 0x7F;
      break;
    }
    if ( (*(_BYTE *)(v27 + 112) & 1) != 0 || *(_QWORD *)(v27 + 112) )
      return v27 + 48;
LABEL_32:
    v31 = (*(__int64 (__fastcall **)(__int64))(v30 + 48))(v27) == 0;
    v32 = *(_QWORD *)v27;
    if ( v31 )
    {
      v22 = v27;
      v27 = (*(__int64 (__fastcall **)(__int64))(v32 + 56))(v27);
    }
    else
    {
      v27 = (*(__int64 (__fastcall **)(__int64))(v32 + 48))(v27);
    }
    if ( v24 == v27 || v22 == v27 || !v27 )
      return 0;
  }
  if ( (unsigned int)v28 - 58 > 3 || (*(_BYTE *)(v27 + 74) & 1) == 0 )
  {
    v30 = *(_QWORD *)v27;
    goto LABEL_32;
  }
  return v27 + 64;
}
