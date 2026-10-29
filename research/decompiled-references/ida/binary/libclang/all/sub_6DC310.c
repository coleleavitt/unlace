__int64 __fastcall sub_6DC310(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // rsi
  __int64 result; // rax
  signed __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  char v23; // dl
  __int64 v24; // rdi
  __int64 v25; // rdi
  int v26; // eax
  unsigned __int64 v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+8h] [rbp-60h]
  __int64 v30; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v31[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 112);
  v5 = *(_QWORD *)(v4 + 104);
  v6 = v5 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v5 & 1) != 0 )
    goto LABEL_2;
  if ( v6 <= 3 )
  {
    v8 = 0;
    goto LABEL_5;
  }
  v19 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCLL);
  v8 = (unsigned __int64)v19;
  if ( (v6 & 2) != 0 )
  {
    v20 = v19[2275];
    if ( v20 )
    {
      v21 = v19[274];
      v19[284] += 24LL;
      v22 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v8 + 2200) >= v22 + 24 && v21 )
        *(_QWORD *)(v8 + 2192) = v22 + 24;
      else
        v22 = sub_6A76A0(v8 + 2192, 24, 3);
      *(_QWORD *)v22 = v20;
      *(_DWORD *)(v22 + 8) = 0;
      *(_QWORD *)(v22 + 16) = v4;
      *(_QWORD *)(v4 + 104) = v22 | 5;
      v23 = v22;
      v7 = v22 & 0xFFFFFFFFFFFFFFF8LL;
      v8 = v7;
      LOBYTE(v6) = v23 & 0xFA | 4;
LABEL_3:
      if ( (v6 & 4) != 0 && v7 )
      {
        v25 = *(_QWORD *)v8;
        v26 = *(_DWORD *)(*(_QWORD *)v8 + 12LL);
        if ( *(_DWORD *)(v8 + 8) != v26 )
        {
          *(_DWORD *)(v8 + 8) = v26;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 144LL))(v25, v4);
        }
        v8 = *(_QWORD *)(v8 + 16);
      }
      goto LABEL_5;
    }
    v6 = v4 & 0xFFFFFFFFFFFFFFFALL;
    v5 = v4 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v4 + 104) = v5;
LABEL_2:
    v7 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    v8 = v7;
    if ( !v6 )
      goto LABEL_5;
    goto LABEL_3;
  }
LABEL_5:
  while ( 1 )
  {
    v9 = *(_QWORD *)(v8 + 48);
    v31[0] = &v30;
    v30 = a3;
    v31[1] = a1;
    result = sub_6DC080(a1, v9, (__int64)sub_6DDF50, (__int64)v31);
    v11 = *(_QWORD *)(v8 + 104);
    *(_QWORD *)(v8 + 48) = result;
    if ( (v11 & 1) != 0 )
      break;
    result = v11 >> 1;
    if ( (v11 & 2) != 0 )
      break;
    if ( (v11 & 1) != 0 )
    {
      result = v11 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_9;
    }
    if ( (v11 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
      break;
    v13 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (result & 1) == 0 )
      goto LABEL_22;
    v15 = v13[2275];
    if ( !v15 )
    {
      v11 = v8 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v8 + 104) = v11;
      result = v8 & 0xFFFFFFFFFFFFFFFALL;
      if ( (v8 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        break;
LABEL_9:
      v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      v13 = (_QWORD *)v12;
      if ( (result & 4) == 0 )
        goto LABEL_21;
      goto LABEL_10;
    }
    v16 = v13[274];
    v13[284] += 24LL;
    v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13[275] >= v17 + 24 && v16 )
    {
      v13[274] = v17 + 24;
    }
    else
    {
      v29 = v15;
      v17 = sub_6A76A0((__int64)(v13 + 274), 24, 3);
      v15 = v29;
    }
    *(_QWORD *)v17 = v15;
    *(_DWORD *)(v17 + 8) = 0;
    v18 = v17 | 5;
    *(_QWORD *)(v17 + 16) = v8;
    *(_QWORD *)(v8 + 104) = v17 | 5;
    result = v17 & 0xFFFFFFFFFFFFFFFALL | 4;
    v12 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    v13 = (_QWORD *)v12;
    if ( (result & 4) == 0 )
    {
LABEL_21:
      if ( !v13 )
        break;
      goto LABEL_22;
    }
LABEL_10:
    if ( !v12 )
      break;
    v24 = *(_QWORD *)v12;
    result = *(unsigned int *)(*(_QWORD *)v12 + 12LL);
    if ( *(_DWORD *)(v12 + 8) != (_DWORD)result )
    {
      *(_DWORD *)(v12 + 8) = result;
      v28 = v12;
      result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v24 + 144LL))(v24, v8);
      v12 = v28;
    }
    v13 = *(_QWORD **)(v12 + 16);
    if ( !v13 )
      break;
LABEL_22:
    v8 = (unsigned __int64)v13;
  }
  v14 = *(_QWORD *)(a1 + 18208);
  if ( v14 )
  {
    result = *(_QWORD *)(*(_QWORD *)v14 + 72LL);
    if ( (void (*)())result != nullsub_89 )
      return ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64))result)(v14, v8, a3);
  }
  return result;
}

