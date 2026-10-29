__int64 __fastcall sub_B79750(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // al
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 result; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9

  v7 = *(_BYTE *)(a2 + 28);
  v8 = a2;
  *(_BYTE *)(a2 + 83) &= ~0x10u;
  if ( (v7 & 0x7F) == 0x24 )
  {
    if ( (unsigned __int8)sub_B72A60(a2, a2, a3, a4) )
    {
      a2 = *(_QWORD *)(a1 + 104);
      sub_6E4DB0((__int64 *)(a2 + 96), a2, v9, v10, v11, v12);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 7LL) &= ~0x80u;
    }
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    if ( (*(_QWORD *)(v17 + 80) & 0x40000LL) != 0
      || (*(_QWORD *)(v17 + 80) & 0x80000LL) != 0
      || (*(_BYTE *)(v17 + 28) & 0x7F) != 0x26 && (v18 = sub_B685F0(v17), a2 = v17, (unsigned int)sub_A618A0(v18, v17)) )
    {
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v13, v14, v15, v16);
      *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x1000u;
      a2 = *(_QWORD *)(a1 + 104);
      sub_6E4DB0((__int64 *)(a2 + 96), a2, v19, v20, v21, v22);
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x40000u;
    }
    if ( (unsigned __int8)sub_B51190(v8, a2, v13, v14) )
    {
      a2 = *(_QWORD *)(a1 + 104);
      sub_6E4DB0((__int64 *)(a2 + 96), a2, a3, a4, a5, a6);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 8u;
    }
  }
  if ( (*(_BYTE *)(v8 + 29) & 2) != 0 || (result = sub_B72A60(v8, a2, a3, a4), (_BYTE)result) )
  {
    v23 = *(_QWORD *)(v8 + 80);
    v24 = *(_QWORD *)(a1 + 104);
    v25 = (__int64 *)(v24 + 96);
    v26 = v23 >> 16;
    if ( (v23 & 0x800000) != 0 )
    {
      sub_6E4DB0(v25, v24, v26, a4, a5, a6);
      *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x1000u;
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v38, v39, v40, v41);
      result = *(_QWORD *)(a1 + 128);
      *(_DWORD *)(result + 4) |= 0x40000u;
    }
    else if ( (v23 & 0x1000000) != 0 )
    {
      sub_6E4DB0(v25, v24, v26, a4, a5, a6);
      *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) |= 0x40000u;
      sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v34, v35, v36, v37);
      result = *(_QWORD *)(a1 + 128);
      *(_WORD *)(result + 6) |= 0x100u;
    }
    else
    {
      sub_6E4DB0(v25, v24, v26, a4, a5, a6);
      *(_WORD *)(*(_QWORD *)(a1 + 128) + 6LL) |= 0x100u;
      result = sub_B72A60(v8, v24, v27, v28);
      if ( !(_BYTE)result )
      {
        sub_6E4DB0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v30, v31, v32, v33);
        result = *(_QWORD *)(a1 + 128);
        *(_BYTE *)(result + 7) |= 0x40u;
      }
    }
  }
  return result;
}

