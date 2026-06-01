__int64 __fastcall sub_9AE6A0(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  unsigned __int16 v7; // si
  _DWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r13
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rdi
  unsigned __int64 v15; // rdx
  _DWORD *v16; // rax
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned int v23; // eax
  _DWORD *v24; // rax
  bool v25; // zf
  __int64 v26; // rdi
  char v27; // al
  __int64 v28; // rdi
  _BYTE *v29; // [rsp+8h] [rbp-40h]
  _BYTE *v30; // [rsp+8h] [rbp-40h]
  bool v31; // [rsp+16h] [rbp-32h] BYREF
  bool v32; // [rsp+17h] [rbp-31h] BYREF
  _DWORD *v33[6]; // [rsp+18h] [rbp-30h] BYREF

  if ( !a2 )
    return 0;
  v7 = *(_WORD *)a2 & 0x1FF;
  if ( v7 > 0x58u )
  {
    if ( v7 <= 0x5Du )
    {
      v10 = a2;
      if ( (unsigned int)sub_BD8130(a2) != 541 )
        return v10;
      v12 = (_DWORD *)*a3;
      v33[0] = *(_DWORD **)a3;
      if ( v33[0] )
        ++v12[17];
      v9 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
      goto LABEL_7;
    }
  }
  else
  {
    if ( v7 == 20 )
      goto LABEL_4;
    if ( v7 == 79 || ((v7 + 452) & 0x1FFu) <= 1 )
    {
LABEL_22:
      v13 = (_DWORD *)*a3;
      v33[0] = v13;
      if ( v13 )
        ++v13[17];
      v9 = *(_QWORD *)(a2 + 16);
      goto LABEL_7;
    }
    if ( v7 == 71 )
    {
      v14 = (_DWORD *)*a3;
      v15 = *(_QWORD *)(a2 + 16);
      v16 = (_DWORD *)*a3;
      if ( !*a3 )
      {
        v33[0] = nullptr;
        v17 = 0;
LABEL_29:
        v10 = sub_9AE6A0(a1, v17, v33);
        sub_9AE1E0(v33);
        return v10;
      }
      while ( v15 != *((_QWORD *)v16 + 6) )
      {
        if ( v15 < *((_QWORD *)v16 + 6) )
          v16 = *((_DWORD **)v16 + 1);
        else
          v16 = *((_DWORD **)v16 + 2);
        if ( !v16 )
          goto LABEL_45;
      }
      v19 = (unsigned int)v16[14];
      if ( (_DWORD)v19 )
      {
        v20 = *(_QWORD *)(a1 + 424);
        v21 = 32 * v19;
        v22 = v20 + v21;
        if ( *(_QWORD *)(v20 + v21 + 8) )
        {
LABEL_50:
          v24 = *(_DWORD **)(v22 + 24);
          v33[0] = v24;
          if ( v24 )
            ++v24[17];
          *a3 = v24;
          v33[0] = v14;
          sub_9AE1E0(v33);
          v14 = (_DWORD *)*a3;
          v25 = *a3 == 0;
          v17 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + v21 + 8);
          v33[0] = *(_DWORD **)a3;
          if ( v25 )
            goto LABEL_29;
LABEL_46:
          ++v14[17];
          goto LABEL_29;
        }
        while ( 1 )
        {
          v23 = *(_DWORD *)(v22 + 16);
          if ( !v23 )
            break;
          v21 = 32LL * v23;
          v22 = v20 + v21;
          if ( *(_QWORD *)(v20 + v21 + 8) )
            goto LABEL_50;
        }
      }
LABEL_45:
      v33[0] = *(_DWORD **)a3;
      v17 = 0;
      goto LABEL_46;
    }
    if ( v7 == 4 )
    {
      v10 = 0;
      if ( *(_BYTE *)(a2 + 2) >> 3 != 9 )
        return v10;
LABEL_49:
      *a4 ^= 1u;
      goto LABEL_22;
    }
  }
  if ( ((v7 + 394) & 0x1FFu) > 1 )
  {
    v29 = a4;
    v10 = 0;
    if ( v7 != 128 )
      return v10;
    if ( sub_9A4960(*(_QWORD *)(a2 + 32), &v31) && sub_9A4960(*(_QWORD *)(a2 + 40), &v32) )
    {
      if ( v31 )
      {
        if ( v32 )
          return 0;
LABEL_4:
        v8 = (_DWORD *)*a3;
        v33[0] = v8;
        if ( !v8 )
        {
LABEL_6:
          v9 = *(_QWORD *)(a2 + 24);
LABEL_7:
          v10 = sub_9AE6A0(a1, v9, v33);
          sub_9AE1E0(v33);
          return v10;
        }
LABEL_5:
        ++v8[17];
        goto LABEL_6;
      }
      if ( v32 )
      {
        v8 = (_DWORD *)*a3;
        *v29 ^= 1u;
        v33[0] = v8;
        if ( !v8 )
          goto LABEL_6;
        goto LABEL_5;
      }
    }
    return 0;
  }
  v18 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  switch ( v18 )
  {
    case 14:
LABEL_55:
      v26 = *(_QWORD *)(a2 + 24);
      v30 = a4;
      v32 = 0;
      v27 = sub_9A4960(v26, &v32);
      a4 = v30;
      if ( v27 )
      {
        if ( v32 )
          goto LABEL_22;
        goto LABEL_49;
      }
      v28 = *(_QWORD *)(a2 + 16);
      v32 = 0;
      if ( sub_9A4960(v28, &v32) )
      {
        if ( !v32 )
          *v30 ^= 1u;
        goto LABEL_4;
      }
      return 0;
    case 15:
      *a4 ^= 1u;
      goto LABEL_55;
    case 19:
      goto LABEL_4;
  }
  v10 = 0;
  if ( v18 == 20 )
    goto LABEL_4;
  return v10;
}

