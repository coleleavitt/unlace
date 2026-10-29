__int64 __fastcall sub_4AF940(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *exception; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  _DWORD *v9; // rax
  unsigned __int64 v10; // rdx
  char v11; // si
  _QWORD *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int64 *v16; // rdx
  unsigned int v18; // r12d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rax
  _DWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  _DWORD *v27; // rax
  _QWORD *v28; // [rsp+10h] [rbp-38h] BYREF
  __int64 v29; // [rsp+18h] [rbp-30h]
  _QWORD v30[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_5;
  v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v9 )
    goto LABEL_5;
  v10 = a2;
  v11 = 0;
  if ( !*v9 )
  {
    if ( v9[1] != 8 )
      goto LABEL_5;
    if ( *(_DWORD *)(a2 + 24) != 1 )
      goto LABEL_5;
    v10 = *(_QWORD *)(a2 + 32);
    if ( *(_WORD *)(v10 + 4) )
      goto LABEL_5;
    v9 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL);
    if ( !v9 )
      goto LABEL_5;
    v11 = 1;
  }
  if ( *v9 == 5 )
  {
    v22 = v9[1];
    if ( v22 != 4 && v22 != 2 )
      goto LABEL_21;
    if ( *(_DWORD *)(v10 + 24) != 2 )
      goto LABEL_5;
    v26 = *(_QWORD *)(v10 + 32);
    if ( !*(_WORD *)(v26 + 4)
      && (v27 = *(_DWORD **)(*(_QWORD *)(v26 + 16) + 24LL)) != nullptr
      && *v27 == 5
      && v27[1] == 6 )
    {
      if ( !v11 )
        goto LABEL_36;
    }
    else
    {
LABEL_21:
      if ( v22 != 5 && v22 != 3 )
        goto LABEL_5;
      if ( *(_DWORD *)(v10 + 24) != 2 )
        goto LABEL_5;
      v23 = *(_QWORD *)(v10 + 32);
      if ( *(_WORD *)(v23 + 4) )
        goto LABEL_5;
      v24 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL);
      if ( !v24 || *v24 != 5 || v24[1] != 6 )
        goto LABEL_5;
      if ( v11 )
      {
LABEL_36:
        sub_4AED50(a1, a2, a3);
        return 1;
      }
    }
    sub_4AF340(a1, a2, a3);
    return 1;
  }
LABEL_5:
  v12 = *(_QWORD **)(a3 + 8);
  ++*(_DWORD *)(a2 + 8);
  if ( v12 )
  {
    v13 = *((_DWORD *)v12 - 1);
    if ( v13 == *((_DWORD *)v12 - 2) )
    {
      v18 = (3 * v13 + 1) >> 1;
      v19 = 8 * v18 + 8;
      if ( 8 * v13 + 8 >= (unsigned int)v19 || v13 >= v18 )
      {
        exception = __cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v28, "Overflow encountered when expanding vector");
        v4 = v28;
        exception[1] = exception + 3;
        v5 = v29;
        *exception = off_1C63128;
        if ( v4 == v30 )
        {
          qmemcpy(exception + 3, v30, (unsigned int)(v5 + 1));
        }
        else
        {
          v6 = v30[0];
          exception[1] = v4;
          exception[3] = v6;
        }
        exception[2] = v5;
        v28 = v30;
        v29 = 0;
        LOBYTE(v30[0]) = 0;
        sub_233E40((__int64)&v28);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = (unsigned int *)sub_186B300(v12 - 1, v19);
      v21 = v20[1];
      v12 = v20 + 2;
      *v20 = v18;
      *(_QWORD *)(a3 + 8) = v20 + 2;
      LODWORD(v20) = v21;
      v16 = &v12[v21];
      v15 = (_DWORD)v20 + 1;
    }
    else
    {
      v14 = v13;
      v15 = v13 + 1;
      v16 = &v12[v14];
    }
  }
  else
  {
    v25 = (_QWORD *)sub_186B270(0x18u);
    v12 = v25 + 1;
    *v25 = 2;
    v15 = 1;
    *(_QWORD *)(a3 + 8) = v12;
    v16 = v12;
  }
  *v16 = a2;
  *((_DWORD *)v12 - 1) = v15;
  return 1;
}

