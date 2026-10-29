_QWORD *__fastcall Z3_model_get_func_interp(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // bp
  __int64 v7; // rax
  int v8; // edi
  __int64 *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r13
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    sub_29B540();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      goto LABEL_31;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is null");
      return nullptr;
    }
  }
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_DWORD *)(a3 + 12);
  v9 = *(__int64 **)(v7 + 48);
  v10 = *(unsigned int *)(v7 + 56);
  v11 = v10 - 1;
  v10 *= 16;
  v12 = (__int64 *)((char *)v9 + v10);
  v13 = 16LL * (v8 & v11);
  v14 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 == v10 )
  {
LABEL_19:
    if ( v9 != v14 )
    {
      while ( 1 )
      {
        v22 = *v9;
        if ( (unsigned __int64)*v9 > 1 )
        {
          if ( *(_DWORD *)(v22 + 12) == v8 && a3 == v22 )
          {
            v15 = v9;
            goto LABEL_14;
          }
        }
        else if ( !v22 )
        {
          goto LABEL_10;
        }
        v9 += 2;
        if ( v14 == v9 )
          goto LABEL_10;
      }
    }
    goto LABEL_10;
  }
  v15 = &v9[(unsigned __int64)v13 / 8];
  while ( 1 )
  {
    v16 = *v15;
    if ( (unsigned __int64)*v15 > 1 )
      break;
    if ( !v16 )
      goto LABEL_10;
LABEL_7:
    v15 += 2;
    if ( v12 == v15 )
      goto LABEL_19;
  }
  if ( *(_DWORD *)(v16 + 12) != v8 || a3 != v16 )
    goto LABEL_7;
LABEL_14:
  v19 = v15[1];
  if ( v19 )
  {
    v20 = sub_186B270(0x28u);
    v21 = *(_QWORD *)(a2 + 24);
    v17 = (_QWORD *)v20;
    sub_2518F0(v20, a1);
    v17[3] = v21;
    *v17 = &off_1C4CBC8;
    if ( v21 )
      ++*(_DWORD *)(v21 + 16);
    v17[4] = v19;
    sub_24FBE0(a1, (__int64)v17);
    if ( v6 )
    {
      sub_2BB620(v17);
      goto LABEL_32;
    }
    return v17;
  }
LABEL_10:
  if ( !v6 )
    return nullptr;
  sub_2BB620(0);
LABEL_31:
  v17 = nullptr;
LABEL_32:
  byte_1C7EBA0 = 1;
  return v17;
}

