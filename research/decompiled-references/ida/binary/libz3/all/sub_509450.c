__int64 __fastcall sub_509450(__int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // zf
  _DWORD *v7; // rax
  void *v8; // rbx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // r14
  _DWORD *v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rax
  _DWORD *v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rdx
  _DWORD *v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rdx
  _DWORD *v36; // rcx
  int v37; // ecx
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rcx
  _DWORD *v41; // rdx
  __int64 v42; // r15
  __int64 v43; // r14
  char v44; // [rsp+6h] [rbp-72h] BYREF
  char v45; // [rsp+7h] [rbp-71h] BYREF
  unsigned int v46; // [rsp+8h] [rbp-70h] BYREF
  unsigned int v47; // [rsp+Ch] [rbp-6Ch] BYREF
  unsigned int v48; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v49; // [rsp+14h] [rbp-64h] BYREF
  unsigned int v50; // [rsp+18h] [rbp-60h] BYREF
  unsigned int v51; // [rsp+1Ch] [rbp-5Ch] BYREF
  _QWORD v52[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v53[9]; // [rsp+30h] [rbp-48h] BYREF

  *(_QWORD *)a1 = &off_1C503D0;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a2;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a2;
  sub_16669D0(a1 + 40, a2);
  v6 = *(_WORD *)(a3 + 4) == 0;
  *(_DWORD *)(a1 + 72) = 0;
  v52[0] = 0;
  v52[1] = 0;
  v53[0] = 1;
  v53[1] = 0;
  *(_OWORD *)(a1 + 56) = 0;
  if ( !v6 || (v7 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL)) == nullptr )
  {
    if ( a3 == *(_QWORD *)(a2 + 864) )
      *(_DWORD *)(a1 + 72) = 5;
    goto LABEL_9;
  }
  if ( *v7 == 5 )
  {
    v17 = v7[1];
    if ( v17 == 4 )
    {
      if ( *(_DWORD *)(a3 + 24) == 2 )
      {
        v26 = *(_QWORD *)(a3 + 32);
        v27 = *(_QWORD *)(a3 + 40);
LABEL_74:
        if ( *(_WORD *)(v26 + 4) == 1 && *(_WORD *)(v27 + 4) == 1 )
        {
          sub_5075A0(a1, v26, v27);
          goto LABEL_9;
        }
LABEL_33:
        if ( a3 == *(_QWORD *)(a2 + 864) )
          goto LABEL_8;
        goto LABEL_27;
      }
    }
    else
    {
      if ( v17 == 5 )
      {
        if ( *(_DWORD *)(a3 + 24) != 2 )
          goto LABEL_33;
        v27 = *(_QWORD *)(a3 + 32);
        v26 = *(_QWORD *)(a3 + 40);
        goto LABEL_74;
      }
      if ( v17 == 2 && *(_DWORD *)(a3 + 24) == 2 )
      {
        v29 = *(_QWORD *)(a3 + 32);
        v28 = *(_QWORD *)(a3 + 40);
        goto LABEL_77;
      }
    }
    if ( v7[1] != 3 )
      goto LABEL_33;
    if ( *(_DWORD *)(a3 + 24) != 2 )
    {
      if ( *(_QWORD *)(a2 + 864) == a3 )
        goto LABEL_8;
      goto LABEL_27;
    }
    v28 = *(_QWORD *)(a3 + 32);
    v29 = *(_QWORD *)(a3 + 40);
LABEL_77:
    if ( *(_WORD *)(v29 + 4) != 1 || *(_WORD *)(v28 + 4) != 1 )
    {
LABEL_7:
      if ( a3 == *(_QWORD *)(a2 + 864) )
      {
LABEL_8:
        *(_DWORD *)(a1 + 72) = 5;
        goto LABEL_9;
      }
      goto LABEL_27;
    }
    v47 = *(_DWORD *)(v29 + 16);
    sub_5070D0((_QWORD *)(a1 + 64), &v47);
    v46 = *(_DWORD *)(v28 + 16);
    sub_5070D0((_QWORD *)(a1 + 64), &v46);
LABEL_80:
    *(_DWORD *)(a1 + 72) = 4;
    goto LABEL_9;
  }
  if ( *v7 )
    goto LABEL_7;
  if ( v7[1] == 8 )
  {
    if ( *(_DWORD *)(a3 + 24) == 1 )
    {
      v30 = *(_QWORD *)(a3 + 32);
      if ( !*(_WORD *)(v30 + 4) )
      {
        v31 = *(_DWORD **)(*(_QWORD *)(v30 + 16) + 24LL);
        if ( v31 )
        {
          if ( *v31 == 5 )
          {
            v32 = v31[1];
            if ( v32 == 3 )
            {
              if ( *(_DWORD *)(v30 + 24) != 2 )
                goto LABEL_36;
              v34 = *(_QWORD *)(v30 + 32);
              v33 = *(_QWORD *)(v30 + 40);
            }
            else
            {
              if ( v32 != 2 || *(_DWORD *)(v30 + 24) != 2 )
                goto LABEL_36;
              v33 = *(_QWORD *)(v30 + 32);
              v34 = *(_QWORD *)(v30 + 40);
            }
            if ( *(_WORD *)(v34 + 4) == 1 && *(_WORD *)(v33 + 4) == 1 )
            {
              sub_5075A0(a1, v34, v33);
              goto LABEL_9;
            }
          }
        }
      }
    }
LABEL_36:
    v10 = v7[1];
    if ( v10 != 8 )
      goto LABEL_14;
    if ( *(_DWORD *)(a3 + 24) == 1 )
    {
      v35 = *(_QWORD *)(a3 + 32);
      if ( !*(_WORD *)(v35 + 4) )
      {
        v36 = *(_DWORD **)(*(_QWORD *)(v35 + 16) + 24LL);
        if ( v36 )
        {
          if ( *v36 == 5 )
          {
            v37 = v36[1];
            if ( v37 == 5 )
            {
              if ( *(_DWORD *)(v35 + 24) != 2 )
                goto LABEL_38;
              v39 = *(_QWORD *)(v35 + 32);
              v38 = *(_QWORD *)(v35 + 40);
            }
            else
            {
              if ( v37 != 4 || *(_DWORD *)(v35 + 24) != 2 )
                goto LABEL_38;
              v38 = *(_QWORD *)(v35 + 32);
              v39 = *(_QWORD *)(v35 + 40);
            }
            if ( *(_WORD *)(v39 + 4) == 1 && *(_WORD *)(v38 + 4) == 1 )
            {
              v49 = *(_DWORD *)(v39 + 16);
              sub_5070D0((_QWORD *)(a1 + 64), &v49);
              v48 = *(_DWORD *)(v38 + 16);
              sub_5070D0((_QWORD *)(a1 + 64), &v48);
              goto LABEL_80;
            }
          }
        }
      }
    }
LABEL_38:
    if ( a3 == *(_QWORD *)(a2 + 864) )
      goto LABEL_8;
    goto LABEL_39;
  }
  v10 = v7[1];
LABEL_14:
  if ( a3 == *(_QWORD *)(a2 + 864) )
    goto LABEL_8;
  if ( v10 == 2 && *(_DWORD *)(a3 + 24) == 2 )
  {
    v11 = *(_QWORD *)(a3 + 32);
    v12 = *(_QWORD *)(a3 + 40);
    if ( *(_WORD *)(v11 + 4) == 1 && *(_WORD *)(v12 + 4) == 1 )
    {
      v51 = *(_DWORD *)(v11 + 16);
      sub_5070D0((_QWORD *)(a1 + 64), &v51);
      v50 = *(_DWORD *)(v12 + 16);
      sub_5070D0((_QWORD *)(a1 + 64), &v50);
      *(_DWORD *)(a1 + 72) = 1;
      goto LABEL_9;
    }
    if ( !*(_WORD *)(v12 + 4) )
    {
      v13 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
      if ( v13 )
      {
        if ( *v13 == 5 && v13[1] == 7 && *(_DWORD *)(v12 + 24) == 2 )
        {
          v14 = *(_QWORD *)(a3 + 32);
          if ( *(_WORD *)(v14 + 4) == 1 )
          {
            v15 = *(_QWORD *)(v12 + 32);
            if ( *(_WORD *)(v15 + 4) == 1 )
            {
              v16 = *(_QWORD *)(v12 + 40);
              if ( *(_WORD *)(v16 + 4) == 1 )
              {
                sub_509210(a1, v14, v15, v16);
                goto LABEL_9;
              }
            }
          }
        }
      }
    }
  }
LABEL_39:
  if ( v7[1] != 2 )
    goto LABEL_9;
  if ( *(_DWORD *)(a3 + 24) == 2 )
  {
    v22 = *(_QWORD *)(a3 + 32);
    if ( !*(_WORD *)(v22 + 4) )
    {
      v23 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
      if ( v23 )
      {
        if ( *v23 == 5 && v23[1] == 7 && *(_DWORD *)(v22 + 24) == 2 )
        {
          v24 = *(_QWORD *)(a3 + 40);
          if ( *(_WORD *)(v24 + 4) == 1 && *(_WORD *)(*(_QWORD *)(v22 + 32) + 4LL) == 1 )
          {
            v25 = *(_QWORD *)(v22 + 40);
            if ( *(_WORD *)(v25 + 4) == 1 )
            {
              sub_509210(a1, v24, *(_QWORD *)(v22 + 32), v25);
              goto LABEL_9;
            }
          }
        }
      }
    }
    if ( v7[1] != 2 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(a3 + 24) != 2 || (v40 = *(_QWORD *)(a3 + 40), *(_WORD *)(v40 + 4)) )
  {
    if ( *v7 )
      goto LABEL_9;
LABEL_43:
    if ( *(_DWORD *)(a3 + 24) == 2 )
    {
      v18 = *(_QWORD *)(a3 + 40);
      if ( !*(_WORD *)(v18 + 4) )
      {
        v19 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL);
        if ( v19 )
        {
          if ( *v19 == 5 && v19[1] == 6 && *(_DWORD *)(v18 + 24) == 2 )
          {
            v20 = *(_QWORD *)(a3 + 32);
            v21 = *(_QWORD *)(v18 + 32);
            if ( (unsigned __int8)sub_1666AE0(a1 + 40, *(_QWORD *)(v18 + 40), v52, &v45) )
            {
              if ( SLODWORD(v52[0]) > 0 && *(_WORD *)(v20 + 4) == 1 && *(_WORD *)(v21 + 4) == 1 )
                sub_5075A0(a1, v21, v20);
            }
          }
        }
      }
    }
    goto LABEL_9;
  }
  v41 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL);
  if ( !v41 || *v41 != 5 || v41[1] != 6 || *(_DWORD *)(v40 + 24) != 2 )
    goto LABEL_27;
  v42 = *(_QWORD *)(v40 + 40);
  v43 = *(_QWORD *)(a3 + 32);
  if ( (unsigned __int8)sub_1666AE0(a1 + 40, *(_QWORD *)(v40 + 32), v52, &v44)
    && SLODWORD(v52[0]) > 0
    && *(_WORD *)(v43 + 4) == 1
    && *(_WORD *)(v42 + 4) == 1 )
  {
    sub_5075A0(a1, v42, v43);
    goto LABEL_9;
  }
  if ( !*(_WORD *)(a3 + 4) )
  {
    v7 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( v7 )
    {
LABEL_27:
      if ( *v7 || v7[1] != 2 )
        goto LABEL_9;
      goto LABEL_43;
    }
  }
LABEL_9:
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v52);
  return sub_182CBA0(v8, v53);
}

