__int64 __fastcall sub_18C6570(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rdx
  _BYTE *v24; // rax
  _BYTE *v25; // rax
  unsigned __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  _QWORD *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r9

  if ( sub_F62670(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL), nullptr, a3, a4, a5, a6) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(unsigned __int8 *)(v10 + 16);
    if ( (_BYTE)v11 == 13 )
    {
      if ( ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) != 0x1B3 )
        return 0;
    }
    else if ( (unsigned int)(v11 - 35) > 1 )
    {
      return 0;
    }
    return 4;
  }
  if ( (unsigned int)sub_F65A30(*a2, 0, v8, v9) == 4 )
    return 4;
  v17 = *(_QWORD *)(a1 + 248);
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v17 + 17448) + 248LL) - 55) <= 1 )
  {
    if ( sub_F65EB0(a2) )
      return 4;
    v17 = *(_QWORD *)(a1 + 248);
  }
  if ( (unsigned __int8)sub_F62C60(a2, v17, v13, v14, v15, v16) )
    return 0;
  v21 = *(_QWORD *)(a1 + 232);
  v22 = *(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v21 + 1) & 0x10) != 0 && (*(_BYTE *)(v22 + 17) & 4) == 0 )
  {
    v27 = sub_F63270(v22, v17, v21, v18, v19, v20);
    v30 = v27;
    if ( v27 )
    {
      v17 = v27[13];
      sub_7052B0((__int64 *)(v17 + 96), v17, v28, v18, v19, v29);
      if ( (*(_BYTE *)(v30[16] + 6LL) & 0x10) == 0 )
      {
        v17 = v30[13];
        sub_7052B0((__int64 *)(v17 + 96), v17, v31, v18, v19, v32);
        if ( (*(_BYTE *)(v30[16] + 5LL) & 1) != 0 )
        {
          v17 = v30[13];
          sub_7052B0((__int64 *)(v17 + 96), v17, v33, v18, v19, v34);
          if ( (*(_BYTE *)(v30[16] + 6LL) & 0x20) == 0 )
          {
            sub_7052B0((__int64 *)(v30[13] + 96LL), v30[13], v35, v18, v19, v36);
            if ( (*(_BYTE *)(v30[16] + 9LL) & 4) != 0
              || (sub_7052B0((__int64 *)(v30[13] + 96LL), v30[13], v37, v18, v19, v38), (*(_BYTE *)v30[16] & 4) != 0)
              || (sub_7052B0((__int64 *)(v30[13] + 96LL), v30[13], v37, v18, v19, v38), (*(_BYTE *)v30[16] & 0x10) != 0)
              || (sub_7052B0((__int64 *)(v30[13] + 96LL), v30[13], v37, v18, v19, v38), (*(_BYTE *)v30[16] & 0x20) != 0)
              || (sub_7052B0((__int64 *)(v30[13] + 96LL), v30[13], v37, v18, v19, v38), (*(_BYTE *)v30[16] & 0x40) != 0)
              || (v17 = v30[13],
                  sub_7052B0((__int64 *)(v17 + 96), v17, v37, v18, v19, v38),
                  (*(_BYTE *)(v30[16] + 5LL) & 2) != 0) )
            {
              v17 = v30[13];
              sub_7052B0((__int64 *)(v17 + 96), v17, v37, v18, v19, v38);
              result = 1;
              if ( (*(_BYTE *)(v30[16] + 5LL) & 0x10) != 0 )
                return result;
            }
          }
        }
      }
    }
    v21 = *(_QWORD *)(a1 + 232);
    v22 = *(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL);
  }
  if ( (*(_BYTE *)(v21 + 107) & 4) != 0 )
  {
    if ( sub_F6ACC0(v22, v17, v21, v18, v19) )
      return 0;
    v22 = *(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v23 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned int)(v23 - 35) <= 1 )
    return 4;
  v24 = *(_BYTE **)(a1 + 232);
  if ( (v24[89] & 1) != 0 )
  {
    if ( *(_BYTE *)(v22 + 16) == 27 )
      return 0;
    if ( (_BYTE)v23 == 27 )
    {
      if ( sub_F63050(v22, v17, v23, v18) )
        return 0;
      v25 = *(_BYTE **)(a1 + 232);
      if ( (*v25 & 0x20) == 0 )
      {
        if ( (v25[89] & 1) != 0 )
        {
          v26 = *a2 & 0xFFFFFFFFFFFFFFF0LL;
          v22 = *(_QWORD *)v26;
          if ( *(_BYTE *)(*(_QWORD *)v26 + 16LL) == 27 )
            return 0;
          goto LABEL_23;
        }
        return 2;
      }
    }
    else if ( (*v24 & 0x20) == 0 )
    {
LABEL_23:
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 27
        && sub_F63050(v22, v17, v23, v18) )
      {
        return 0;
      }
      return 2;
    }
  }
  else if ( (*v24 & 0x20) == 0 )
  {
    return 2;
  }
  return 3;
}
