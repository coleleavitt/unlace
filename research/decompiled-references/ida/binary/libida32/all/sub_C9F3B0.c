__int64 __fastcall sub_C9F3B0(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // r11
  unsigned int v7; // r11d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 *v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r8
  unsigned int v20; // eax
  unsigned int v21; // r12d
  char v22; // dl
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rdx
  __int64 v27; // rax
  char v28; // al
  unsigned int v29; // eax
  __int64 v30; // [rsp+8h] [rbp-60h]
  unsigned int v31; // [rsp+8h] [rbp-60h]
  unsigned __int64 v32; // [rsp+8h] [rbp-60h]
  unsigned int v33; // [rsp+8h] [rbp-60h]
  unsigned __int64 v34; // [rsp+18h] [rbp-50h]
  int v35; // [rsp+18h] [rbp-50h]
  __int64 v36[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 8);
  v30 = *(_QWORD *)(v3 + 8);
  v5 = sub_CC2440(*(_QWORD *)(a1 + 488), v4);
  if ( *(_BYTE *)(a1 + 584) )
  {
    if ( !*(_BYTE *)(a1 + 586) && !BYTE4(v5) )
    {
      v36[0] = a2 | 2;
      v27 = sub_C986D0(a1, v36, 0, 0, 1, 0);
      v7 = 0;
      if ( !BYTE4(v27) )
        return v7;
      v36[0] = a2 | 4;
      v28 = sub_C80E60(a1, v27, v36);
      v7 = 0;
      if ( !v28 )
        return v7;
    }
  }
  if ( (*(_BYTE *)(v3 + 1) & 6) != 0
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v3) )
      return 0;
    v11 = a2 | 4;
  }
  else
  {
    v6 = sub_C8D6A0(a1, v3);
    if ( !BYTE4(v6) )
      return 0;
    v36[0] = v3 | 2;
    v35 = v6;
    v33 = sub_C9B2B0(a1, v36, v6, 1u, 0, 1, 0);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v3) )
      return 0;
    v11 = a2 | 4;
    v36[0] = a2 | 4;
    if ( !(unsigned __int8)sub_C81650(a1, v35, v33, v36) )
      return 0;
    v36[0] = a2 | 4;
    if ( !(unsigned __int8)sub_C80E60(a1, v33, v36) )
      return 0;
  }
  if ( BYTE4(v5) )
  {
    v12 = *(__int64 **)(a1 + 488);
    v13 = 0;
    if ( (_DWORD)v5 == 12 )
    {
      v14 = sub_CC2920(v12, v4);
      v12 = *(__int64 **)(a1 + 488);
      v13 = v14;
    }
    v15 = *v12;
    v16 = v4 & 0xFFFFFFFFFFFFFFF0LL;
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v17 + 16) == 13 )
    {
      v34 = v4 & 0xFFFFFFFFFFFFFFF0LL;
      v18 = v4;
      v19 = (*(_WORD *)(v17 + 18) >> 3) & 0x1FF;
      v31 = v19;
      if ( (_WORD)v19 == 438 )
      {
        v20 = sub_A884B0(v15, v4, v16, v9, v19);
        v21 = 8;
        v36[0] = v11;
        v22 = 1;
        if ( v20 >= 8 )
          v21 = v20;
LABEL_18:
        v7 = sub_C83180((_QWORD *)a1, v5, v22, v21, v13, v36);
        if ( (_BYTE)v7 )
        {
          if ( *(_BYTE *)(a1 + 584) )
          {
            v36[0] = v11;
            return (unsigned int)sub_C7EAD0(a1, v5, v36);
          }
          return v7;
        }
        return 0;
      }
      v29 = sub_A884B0(v15, v4, v16, v9, v19);
      v25 = v31;
      v21 = 8;
      v36[0] = v11;
      v26 = (_QWORD *)v34;
      if ( v29 >= 8 )
        v21 = v29;
      if ( (_WORD)v31 == 437 )
      {
        v22 = 1;
        goto LABEL_18;
      }
    }
    else
    {
      v18 = v4;
      v32 = v4 & 0xFFFFFFFFFFFFFFF0LL;
      v21 = 8;
      v23 = sub_A884B0(v15, v18, v16, v9, v10);
      v36[0] = v11;
      v26 = (_QWORD *)v32;
      if ( v23 >= 8 )
        v21 = v23;
    }
    v22 = sub_F3D510(*v26, v18, v26, v24, v25);
    goto LABEL_18;
  }
  v36[0] = v11;
  v7 = sub_C7C620(a1, v36);
  if ( !(_BYTE)v7 )
    return 0;
  if ( *(_BYTE *)(a1 + 584) )
  {
    v36[0] = v11;
    return (unsigned int)sub_C7EAC0(a1, v36);
  }
  return v7;
}

