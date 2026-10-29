/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476A30
// Address: 0x0000000000476A30

//----- (0000000000476A30) ----------------------------------------------------
__int64 __fastcall sub_476A30(__int64 a1)
{
  __int64 v2; // x0
  unsigned __int64 v3; // x21
  unsigned __int64 v4; // x21
  unsigned __int64 v5; // x21
  __int64 v6; // x0
  size_t v7; // x0
  _BYTE *v8; // x22
  size_t v9; // x23
  __time_t v10; // x0
  char *v11; // x2
  const char *v12; // x4
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 *v16; // x1
  char *v17; // x0
  const void *v18; // x24
  const void *v19; // x24
  void *v20; // x0
  const void *v21; // x24
  void *v22; // x0
  unsigned __int64 v23; // x24
  __int64 v24; // x21
  unsigned __int64 v25; // x23
  size_t v26; // x24
  __int64 v27; // x21
  __int64 v28; // x21
  __int64 v29; // x23
  unsigned __int64 v30; // x22
  void *v31; // x0
  const char *v32; // x20
  int v33; // w21
  const char *v34; // x0
  __int64 v35; // [xsp+40h] [xbp-4C0h] BYREF
  void *ptr; // [xsp+48h] [xbp-4B8h] BYREF
  __int64 v37; // [xsp+50h] [xbp-4B0h]
  unsigned __int64 v38; // [xsp+58h] [xbp-4A8h]
  char *s1; // [xsp+60h] [xbp-4A0h]
  __int64 v40; // [xsp+68h] [xbp-498h]
  __int64 v41; // [xsp+70h] [xbp-490h]
  __int64 v42; // [xsp+78h] [xbp-488h]
  void *v43; // [xsp+80h] [xbp-480h] BYREF
  unsigned __int64 v44; // [xsp+88h] [xbp-478h]
  __int64 v45; // [xsp+90h] [xbp-470h]
  __int16 v46; // [xsp+98h] [xbp-468h]
  void *dest; // [xsp+A0h] [xbp-460h] BYREF
  unsigned __int64 v48; // [xsp+A8h] [xbp-458h]
  unsigned __int64 v49; // [xsp+B0h] [xbp-450h]
  void *v50; // [xsp+B8h] [xbp-448h] BYREF
  unsigned __int64 v51; // [xsp+C0h] [xbp-440h]
  unsigned __int64 v52; // [xsp+C8h] [xbp-438h]
  char v53[32]; // [xsp+D0h] [xbp-430h] BYREF
  char v54[1032]; // [xsp+F0h] [xbp-410h] BYREF
  __int64 v55; // [xsp+4F8h] [xbp-8h]

  v2 = sub_477000(*(unsigned __int8 *)(a1 + 106), &_stack_chk_guard, 0);
  v3 = *(_QWORD *)(a1 + 16);
  v44 = 0;
  v45 = 0;
  *(_QWORD *)(a1 + 80) = v2;
  v42 = 88;
  v43 = nullptr;
  v46 = 0;
  dest = nullptr;
  v48 = 0;
  v49 = 0;
  v50 = nullptr;
  v51 = 0;
  v52 = 0;
  if ( v3 > 1 )
  {
    v18 = *(const void **)(a1 + 8);
    v43 = sub_491288((__int64)&v43, nullptr, v3, 1u);
    v44 = v3;
    memmove(v43, v18, v3 - 1);
    *((_BYTE *)v43 + v3 - 1) = 0;
  }
  v4 = *(_QWORD *)(a1 + 40);
  v46 = *(_WORD *)(a1 + 104);
  if ( v4 > 1 )
  {
    v19 = *(const void **)(a1 + 32);
    v20 = dest;
    if ( v4 > v49 )
    {
      v20 = sub_491288((__int64)&dest, dest, v4, 1u);
      dest = v20;
    }
    v48 = v4;
    memmove(v20, v19, v4 - 1);
    *((_BYTE *)dest + v4 - 1) = 0;
  }
  else
  {
    v48 = 0;
  }
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 > 1 )
  {
    v21 = *(const void **)(a1 + 56);
    v22 = v50;
    if ( v5 > v52 )
    {
      v22 = sub_491288((__int64)&v50, v50, *(_QWORD *)(a1 + 64), 1u);
      v50 = v22;
    }
    v51 = v5;
    memmove(v22, v21, v5 - 1);
    *((_BYTE *)v50 + v5 - 1) = 0;
  }
  else
  {
    v51 = 0;
  }
  if ( !(unsigned __int8)sub_477068(*(_QWORD *)(a1 + 80)) )
  {
    if ( *(_QWORD *)(a1 + 16) <= 1u )
      v32 = "0.0.0.0";
    else
      v32 = *(const char **)(a1 + 8);
    v33 = *(unsigned __int16 *)(a1 + 104);
    v34 = (const char *)sub_477038(*(_QWORD *)(a1 + 80));
    sub_47B4D0("%s:%u: %s\n", v32, v33, v34);
    sub_4770D8((_QWORD *)(a1 + 80));
    exit(1);
  }
  v6 = *(_QWORD *)(a1 + 80);
  ptr = nullptr;
  v37 = 0;
  v38 = 0;
  s1 = nullptr;
  v40 = 0;
  v41 = 0;
  sub_4770A8(v6);
  if ( (unsigned __int8)sub_491578(v54, 2u) )
  {
    v7 = strlen(v54);
    v8 = ptr;
    v9 = v7;
    if ( v7 )
    {
      v23 = v7 + 1;
      if ( v7 + 1 > v38 )
      {
        v8 = sub_491288((__int64)&ptr, ptr, v23, 1u);
        ptr = v8;
      }
      v37 = v23;
      memmove(v8, v54, v9);
      *((_BYTE *)ptr + v9) = 0;
      if ( v40 )
      {
        v8 = ptr;
        v24 = v37;
        v17 = s1;
      }
      else
      {
        v17 = (char *)&qword_4B2D48;
        v8 = ptr;
        v24 = v37;
      }
      if ( v24 )
      {
        if ( !strcmp(v17, v8) )
        {
LABEL_12:
          if ( v8 )
          {
            v37 = 0;
            j__free(v8);
            ptr = nullptr;
            v38 = 0;
          }
          goto LABEL_14;
        }
        v25 = v24 + 8;
        v26 = v24 - 1;
        v27 = v24 + 7;
        if ( v25 <= v38 )
          goto LABEL_49;
        goto LABEL_61;
      }
    }
    else
    {
      v37 = 0;
      v17 = (char *)&qword_4B2D48;
    }
    if ( !strcmp(v17, (const char *)&qword_4B2D48) )
      goto LABEL_12;
    if ( v38 > 8 )
    {
      v37 = 9;
      v8[8] = 0;
LABEL_51:
      *(_QWORD *)v8 = *(_QWORD *)" (my ip ";
      v28 = v37;
      if ( v37 )
      {
        v29 = v37 - 1;
        v30 = v37 + 1;
      }
      else
      {
        v30 = 2;
        v28 = 1;
        v29 = 0;
      }
      v31 = ptr;
      if ( v30 > v38 )
      {
        v31 = sub_491288((__int64)&ptr, ptr, v30, 1u);
        ptr = v31;
      }
      v37 = v30;
      *((_BYTE *)v31 + v28) = 0;
      *((_BYTE *)ptr + v29) = 41;
      goto LABEL_14;
    }
    v25 = 9;
    v27 = 8;
    v26 = 0;
LABEL_61:
    v8 = sub_491288((__int64)&ptr, v8, v25, 1u);
    ptr = v8;
LABEL_49:
    v37 = v25;
    v8[v27] = 0;
    v8 = ptr;
    if ( v26 )
      memmove((char *)ptr + 8, ptr, v26);
    goto LABEL_51;
  }
LABEL_14:
  v10 = sub_4926B8();
  sub_477950(v53, 0x19u, v10, 0);
  v11 = s1;
  v12 = (const char *)ptr;
  if ( !v40 )
    v11 = (char *)&qword_4B2D48;
  if ( !v37 )
    v12 = (const char *)&qword_4B2D48;
  sub_47B4D0("%s Listening on %s:%u%s...\n", v53, v11, *(unsigned __int16 *)(a1 + 104), v12);
  while ( *(_QWORD *)(a1 + 80) )
  {
    v35 = sub_477000(*(unsigned __int8 *)(a1 + 106), v13, v14);
    if ( (unsigned __int8)sub_477078(v35)
      && (v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, v35)) != nullptr )
    {
      sub_476900(a1, v16);
    }
    else
    {
      sub_4770D8(&v35);
      if ( !*(_QWORD *)(a1 + 80) )
        break;
      sub_47B4D0("Rejected client\n");
    }
  }
  if ( s1 )
  {
    v40 = 0;
    j__free(s1);
  }
  if ( ptr )
  {
    v37 = 0;
    j__free(ptr);
  }
  if ( v50 )
  {
    v51 = 0;
    j__free(v50);
  }
  if ( dest )
  {
    v48 = 0;
    j__free(dest);
  }
  if ( v43 )
  {
    v44 = 0;
    j__free(v43);
  }
  return v55 ^ _stack_chk_guard;
}
// 476B30: conditional instruction was optimized away because %var_498.8==0
// 476BCC: variable 'v13' is possibly undefined
// 476BCC: variable 'v14' is possibly undefined
// 477000: using guessed type __int64 __fastcall sub_477000(_QWORD, _QWORD, _QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4C8FE0: using guessed type __int64 qword_4C8FE0[16];
