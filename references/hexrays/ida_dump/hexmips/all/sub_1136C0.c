__int64 __fastcall sub_1136C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  _DWORD *v6; // rax
  _DWORD *v7; // r14
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  _DWORD *v15; // rbp
  unsigned int v16; // r13d
  _DWORD *v17; // r14
  __int64 v18; // rax
  __int64 v20; // rbp
  __int64 v21; // r9
  __int64 v22; // rbp
  __int64 v23; // rax
  _DWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // rcx
  _DWORD *v29; // r14
  __int64 v30; // rax
  __int64 v31; // r9
  char v32; // al
  __int64 v33; // rdi
  char v34; // al
  _DWORD *v35; // rdx
  __int64 v36; // [rsp+0h] [rbp-68h] BYREF
  __int64 v37; // [rsp+8h] [rbp-60h] BYREF
  __int64 v38; // [rsp+10h] [rbp-58h] BYREF
  __int64 v39; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v40[9]; // [rsp+20h] [rbp-48h] BYREF

  v40[1] = __readfsqword(0x28u);
  v3 = sub_1186A0(a2, &v36);
  if ( !v3 )
    return 0;
  v37 = 0;
  v4 = v3;
  if ( *(_BYTE *)v36 == 4 )
  {
    v7 = *(_DWORD **)(v36 + 8);
    if ( *v7 == 10 )
    {
      if ( *((_BYTE *)v7 + 32) == 4 )
      {
        v7 = *((_DWORD **)v7 + 5);
        if ( *v7 == 13 )
          goto LABEL_29;
      }
    }
    else if ( *v7 == 13 )
    {
      goto LABEL_29;
    }
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
    return 0;
  v37 = *(_QWORD *)(a1 + 16);
  v6 = (_DWORD *)sub_125240(v5, v36, &v37, 0);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = *v6;
  if ( v8 == 4 )
  {
    if ( *((_BYTE *)v7 + 32) != 4 )
      return 0;
    v7 = *((_DWORD **)v7 + 5);
    if ( *v7 != 13 )
      return 0;
LABEL_29:
    if ( !v7 )
      return 0;
    goto LABEL_7;
  }
  if ( v8 != 13 )
    return 0;
LABEL_7:
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_WORD *)(a1 + 132) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 120) = 8 * *(_DWORD *)(a2 + 68);
  v9 = sub_325C90(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL), *(unsigned int *)(v4 + 4), 0);
  *(_QWORD *)(a1 + 64) = **(_QWORD **)(v4 + 8);
  if ( !v9 || (v9 & 1) == 0 )
    goto LABEL_24;
  v10 = v9;
  v11 = 6;
  do
  {
    v10 *= 2 - v10 * v9;
    --v11;
  }
  while ( v11 );
  v12 = *(_DWORD *)(a1 + 120);
  if ( v12 <= 63 )
  {
    v10 &= ~(-1LL << v12);
    if ( v10 )
    {
      v13 = (1LL << v12) - 1;
      goto LABEL_13;
    }
LABEL_24:
    *(_QWORD *)(a1 + 112) = 0;
    return 0;
  }
  v13 = -1;
  if ( !v10 )
    goto LABEL_24;
LABEL_13:
  if ( (v13 & (v10 * v9)) != 1 || (unsigned __int64)(v10 - 2) > 0x7FFFFFFD )
    goto LABEL_24;
  *(_QWORD *)(a1 + 112) = v10;
  v14 = sub_111E70((__int64)(v7 + 12));
  v15 = (_DWORD *)v14;
  if ( v14 )
  {
    v16 = sub_11BB80(v14 + 48, v40, 0);
    if ( (_BYTE)v16 && *(_QWORD *)(a1 + 112) == v40[0] && v7[9] <= *(_DWORD *)(a2 + 68) )
    {
      if ( v37 )
      {
        v17 = v7 + 8;
        if ( (unsigned __int8)sub_121960(v17, v15 + 8, 1) )
        {
LABEL_21:
          *(_QWORD *)(a1 + 48) = v17;
          sub_120F80(a1 + 32);
          v18 = v37;
          if ( !v37 )
            v18 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 56) = v18;
          *(_BYTE *)(a1 + 133) = *v15 == 18;
          *(_QWORD *)(a1 + 96) = v9;
          *(_QWORD *)(a1 + 104) = 0;
          return v16;
        }
      }
      else
      {
        v17 = v7 + 8;
        if ( (unsigned __int8)sub_12A880(
                                *(_QWORD *)a1,
                                *(_QWORD *)(a1 + 8),
                                *(_QWORD *)(a1 + 16),
                                (_DWORD)v17,
                                *(_QWORD *)(a1 + 16),
                                (int)v15 + 32,
                                1) )
          goto LABEL_21;
      }
    }
    return 0;
  }
  if ( *((_BYTE *)v7 + 48) != 4 )
    return 0;
  v20 = *((_QWORD *)v7 + 7);
  if ( (unsigned int)(*(_DWORD *)v20 - 8) <= 1 )
  {
    v32 = *(_BYTE *)(v20 + 32);
    if ( v32 == 4 )
    {
      v20 = *(_QWORD *)(v20 + 40);
      if ( *(_DWORD *)v20 != 12 )
        return 0;
    }
    else
    {
      if ( v32 != 1 )
        return 0;
      v33 = *(_QWORD *)(a1 + 8);
      if ( !v33 )
        return 0;
      v40[0] = *(_QWORD *)(a1 + 16);
      v20 = sub_125240(v33, v20 + 32, v40, 0);
      v34 = *((_BYTE *)v7 + 48);
      if ( !v20 )
        goto LABEL_82;
      if ( *(_DWORD *)v20 == 12 )
      {
        if ( v34 != 4 || **((_DWORD **)v7 + 7) != 12 )
          goto LABEL_43;
        v20 = *((_QWORD *)v7 + 7);
        goto LABEL_42;
      }
      if ( *(_DWORD *)v20 == 4 && *(_BYTE *)(v20 + 32) == 4 && (v35 = *(_DWORD **)(v20 + 40), *v35 == 12) )
      {
        if ( v34 != 4 || (v20 = *((_QWORD *)v7 + 7), *(_DWORD *)v20 != 12) )
        {
          v20 = (__int64)v35;
          if ( !v35 )
            return 0;
          goto LABEL_43;
        }
      }
      else
      {
LABEL_82:
        if ( v34 != 4 )
          return 0;
        v20 = *((_QWORD *)v7 + 7);
        if ( *(_DWORD *)v20 != 12 )
          return 0;
      }
    }
  }
  else if ( *(_DWORD *)v20 != 12 )
  {
    return 0;
  }
LABEL_42:
  if ( !v20 )
    return 0;
LABEL_43:
  v21 = v20 + 32;
  v22 = v20 + 48;
  v23 = sub_111E70(v21);
  if ( !v23 )
  {
    v23 = sub_111E70(v22);
    if ( !v23 )
      return 0;
    v22 = v31;
  }
  if ( !(unsigned __int8)sub_11BB80(v23 + 48, &v38, 0) )
    return 0;
  if ( *(_QWORD *)(a1 + 112) != v38 )
    return 0;
  if ( *(_BYTE *)v22 != 4 )
    return 0;
  v24 = *(_DWORD **)(v22 + 8);
  if ( *v24 != 20 )
    return 0;
  v25 = sub_1186A0(v24, &v39);
  if ( !v25 )
    return 0;
  v26 = sub_325C90(*(_QWORD *)(*(_QWORD *)(v25 + 8) + 16LL), *(unsigned int *)(v25 + 4), 0);
  if ( sub_325C90(1LL - *(_QWORD *)(a1 + 112), (unsigned int)(*(_DWORD *)(a1 + 120) / 8), 0) != v26 )
    return 0;
  v27 = *(_QWORD *)(a1 + 8);
  v40[0] = *(_QWORD *)(a1 + 16);
  v28 = sub_125240(v27, v39, v40, 1);
  if ( !v28 )
    return 0;
  v29 = v7 + 8;
  v16 = sub_309070(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), v40[0], v28, *(_QWORD *)(a1 + 16), v29);
  if ( !(_BYTE)v16 )
    return 0;
  *(_QWORD *)(a1 + 48) = v29;
  sub_120F80(a1 + 32);
  v30 = v37;
  if ( !v37 )
    v30 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 56) = v30;
  *(_BYTE *)(a1 + 133) = 1;
  *(_QWORD *)(a1 + 96) = v9;
  *(_QWORD *)(a1 + 104) = 0;
  return v16;
}
