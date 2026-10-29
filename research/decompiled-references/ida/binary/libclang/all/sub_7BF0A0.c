__int64 __fastcall sub_7BF0A0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // al
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 result; // rax
  _QWORD *v15; // rbx
  char v16; // al
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  _QWORD *v19; // r13
  unsigned __int64 v20; // rax
  _QWORD *v21; // rbx
  _QWORD *v22; // r13
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  _QWORD *v29; // r14
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35[6]; // [rsp+8h] [rbp-30h] BYREF

  while ( 1 )
  {
    v6 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( v6 != 17 )
      goto LABEL_7;
    v7 = *(_QWORD *)(a1 + 104);
    if ( v7 )
    {
      if ( v7 <= 7 )
        goto LABEL_21;
LABEL_4:
      v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v8 && (*(_BYTE *)(v8 + 8) & 6) != 0 )
        return 0;
      goto LABEL_6;
    }
    sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v7 = *(_QWORD *)(a1 + 104);
    if ( v7 > 7 )
      goto LABEL_4;
LABEL_6:
    v6 = *(_BYTE *)(a1 + 28) & 0x7F;
LABEL_7:
    if ( v6 != 18 )
      goto LABEL_21;
    v9 = *(_QWORD *)(a1 + 120);
    if ( v9 )
    {
      if ( v9 <= 7 )
        goto LABEL_43;
    }
    else
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v9 = *(_QWORD *)(a1 + 120);
      if ( v9 <= 7 )
      {
LABEL_43:
        v11 = 0;
        goto LABEL_13;
      }
    }
    v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v10 + 72) & 1) != 0 )
    {
      sub_7B7DB0(a1);
      v10 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v11 = *(_QWORD *)(v10 + 56);
LABEL_13:
    v35[0] = v11;
    sub_7BC620(v35);
    v12 = v35[0];
    if ( v35[0] )
    {
LABEL_19:
      result = sub_7BF0A0(v12, a2, a3);
      if ( result )
        return result;
      while ( 1 )
      {
        v12 = *(_QWORD *)(v12 + 128);
        if ( !v12 )
          break;
        if ( *(char *)(v12 + 28) >= 0 )
        {
          v13 = *(_QWORD *)(v12 + 40);
          if ( ((v13 & 7) != 0 || v13 <= 7) && (*(_BYTE *)(v12 + 8) & 6) == 0 )
            goto LABEL_19;
        }
      }
    }
LABEL_21:
    result = sub_7BDED0(a1 + 48, a2, a3);
    v15 = (_QWORD *)result;
    if ( result )
      return result;
    v16 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( v16 != 18 )
      break;
    v23 = sub_7BB1E0(a1);
    if ( v23 )
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(v23 + 40);
        if ( (v24 & 7) == 0 && v24 > 7 )
          break;
        do
        {
          v23 = *(_QWORD *)(v23 + 128);
          if ( !v23 )
            goto LABEL_53;
LABEL_47:
          ;
        }
        while ( *(char *)(v23 + 28) < 0 || (*(_BYTE *)(v23 + 8) & 6) != 0 );
      }
      result = sub_7BF0A0(v23, a2, a3);
      if ( result )
        return result;
      v23 = *(_QWORD *)(v23 + 128);
      if ( !v23 )
        goto LABEL_53;
      goto LABEL_47;
    }
LABEL_53:
    v25 = *(_QWORD *)(a1 + 120);
    if ( v25 )
    {
      if ( v25 <= 7 )
        goto LABEL_63;
    }
    else
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v25 = *(_QWORD *)(a1 + 120);
      if ( v25 <= 7 )
        goto LABEL_70;
    }
    v26 = v25 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)((v25 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
    {
      v27 = *(unsigned int *)(v26 + 48);
      v28 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (_DWORD)v27 )
      {
        v29 = *(_QWORD **)(v26 + 40);
        v30 = (__int64)&v29[v27];
        goto LABEL_58;
      }
LABEL_86:
      if ( (*(_BYTE *)(v28 + 72) & 1) != 0 )
      {
        sub_7B7DB0(a1);
        v25 = *(_QWORD *)(a1 + 120);
        v30 = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF8LL) + 16)
            + 8LL * *(unsigned int *)((v25 & 0xFFFFFFFFFFFFFFF8LL) + 24);
        if ( !v25 )
        {
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
          v25 = *(_QWORD *)(a1 + 120);
        }
        v29 = nullptr;
        if ( v25 <= 7 )
          goto LABEL_60;
      }
      else
      {
        v30 = *(_QWORD *)(v28 + 16) + 8LL * *(unsigned int *)(v28 + 24);
      }
      goto LABEL_73;
    }
    sub_7B7DB0(a1);
    v25 = *(_QWORD *)(a1 + 120);
    v28 = v25 & 0xFFFFFFFFFFFFFFF8LL;
    v34 = *(unsigned int *)((v25 & 0xFFFFFFFFFFFFFFF8LL) + 48);
    if ( (_DWORD)v34 )
    {
      v29 = *(_QWORD **)(v28 + 40);
      v30 = (__int64)&v29[v34];
      if ( v25 )
      {
LABEL_58:
        if ( v25 <= 7 )
          goto LABEL_83;
        if ( (*(_BYTE *)(v28 + 72) & 1) == 0 )
          goto LABEL_60;
        goto LABEL_78;
      }
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v25 = *(_QWORD *)(a1 + 120);
      if ( v25 <= 7 )
      {
LABEL_83:
        v29 = nullptr;
LABEL_61:
        while ( 1 )
        {
          result = sub_7BF0A0(*v29, a2, a3);
          if ( result )
            return result;
          if ( (_QWORD *)v30 == ++v29 )
            goto LABEL_63;
        }
      }
LABEL_73:
      v32 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)((v25 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
      {
        if ( *(_DWORD *)(v32 + 48) )
        {
LABEL_79:
          v29 = *(_QWORD **)(v32 + 40);
          goto LABEL_60;
        }
        goto LABEL_75;
      }
LABEL_78:
      sub_7B7DB0(a1);
      v25 = *(_QWORD *)(a1 + 120);
      v32 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_DWORD *)((v25 & 0xFFFFFFFFFFFFFFF8LL) + 48) )
        goto LABEL_79;
      if ( !v25 )
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
        v25 = *(_QWORD *)(a1 + 120);
      }
      v29 = nullptr;
      if ( v25 <= 7 )
      {
LABEL_60:
        if ( v29 != (_QWORD *)v30 )
          goto LABEL_61;
        goto LABEL_63;
      }
LABEL_75:
      v33 = v25 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v33 + 72) & 1) != 0 )
      {
        sub_7B7DB0(a1);
        v33 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v29 = *(_QWORD **)(v33 + 16);
      goto LABEL_60;
    }
    if ( v25 )
    {
      if ( v25 > 7 )
        goto LABEL_86;
      goto LABEL_63;
    }
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v25 = *(_QWORD *)(a1 + 120);
    v28 = v25 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v25 > 7 )
      goto LABEL_86;
LABEL_70:
    if ( !v25 )
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v25 = *(_QWORD *)(a1 + 120);
      if ( v25 > 7 )
      {
        v30 = 0;
        goto LABEL_73;
      }
    }
LABEL_63:
    a1 = sub_7BACE0(a1);
    if ( !a1 )
      return 0;
  }
  if ( v16 == 21 )
  {
    v20 = *(_QWORD *)(a1 + 40);
    if ( (v20 & 7) != 0 )
      return 0;
    if ( v20 <= 7 )
      return 0;
    v21 = *(_QWORD **)(a1 + 104);
    v22 = &v21[*(unsigned int *)(a1 + 112)];
    if ( v21 == v22 )
      return 0;
    while ( 1 )
    {
      result = sub_7BF0A0(*v21, a2, a3);
      if ( result )
        break;
      if ( v22 == ++v21 )
        return 0;
    }
  }
  else
  {
    if ( v16 != 17 )
      return 0;
    v17 = *(_QWORD *)(a1 + 104);
    if ( v17 )
    {
      if ( v17 > 7 )
        goto LABEL_27;
      return 0;
    }
    else
    {
      sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v17 = *(_QWORD *)(a1 + 104);
      if ( v17 > 7 )
      {
LABEL_27:
        v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
        v19 = *(_QWORD **)(v18 + 8);
        v15 = &v19[*(unsigned int *)(v18 + 16)];
      }
      else
      {
        if ( v17 )
          return 0;
        sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
        v31 = *(_QWORD *)(a1 + 104);
        if ( v31 <= 7 )
          return 0;
        v19 = *(_QWORD **)((v31 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      }
      if ( v15 == v19 )
        return 0;
      while ( 1 )
      {
        result = sub_7BF0A0(*v19, a2, a3);
        if ( result )
          break;
        if ( v15 == ++v19 )
          return 0;
      }
    }
  }
  return result;
}

