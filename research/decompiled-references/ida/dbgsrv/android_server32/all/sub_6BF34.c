/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BF34
// Address: 0x0006BF34

//----- (0006BF34) --------------------------------------------------------
int __fastcall sub_6BF34(int a1)
{
  int *v2; // r5
  unsigned int v3; // r7
  _BYTE *v4; // r0
  unsigned int v5; // r7
  const void *v6; // r1
  void *v7; // r0
  unsigned int v8; // r7
  const void *v9; // r1
  void *v10; // r0
  size_t v11; // r6
  void *v12; // r2
  const char *v13; // r0
  const char *v14; // r1
  void *v15; // r6
  size_t v16; // r2
  size_t v17; // r7
  size_t v18; // r3
  unsigned int v19; // r6
  _BYTE *v20; // r1
  _BYTE *v21; // r0
  size_t v22; // r6
  size_t v23; // r2
  unsigned int v24; // r6
  size_t v25; // r3
  unsigned int v26; // r7
  _BYTE *v27; // r1
  _BYTE *v28; // r0
  __suseconds_t v29; // r0
  int v30; // r1
  const char *v31; // r2
  const char *v32; // r0
  int *v33; // r1
  const char *v35; // r6
  int v36; // r7
  const char *v37; // r0
  size_t v38; // [sp+8h] [bp-48Ch]
  size_t v39; // [sp+8h] [bp-48Ch]
  const void *v40; // [sp+Ch] [bp-488h]
  const void *v41; // [sp+Ch] [bp-488h]
  const void *v42; // [sp+Ch] [bp-488h]
  size_t v43; // [sp+Ch] [bp-488h]
  size_t v44; // [sp+Ch] [bp-488h]
  const void **v45; // [sp+1Ch] [bp-478h]
  int v46; // [sp+24h] [bp-470h]
  _BYTE *v47; // [sp+28h] [bp-46Ch] BYREF
  char *v48; // [sp+2Ch] [bp-468h]
  int v49; // [sp+30h] [bp-464h]
  int v50; // [sp+34h] [bp-460h]
  void *v51; // [sp+38h] [bp-45Ch] BYREF
  unsigned int v52; // [sp+3Ch] [bp-458h]
  unsigned int v53; // [sp+40h] [bp-454h]
  int v54; // [sp+44h] [bp-450h] BYREF
  _BYTE *v55; // [sp+48h] [bp-44Ch] BYREF
  unsigned int v56; // [sp+4Ch] [bp-448h]
  int v57; // [sp+50h] [bp-444h]
  __int16 v58; // [sp+54h] [bp-440h]
  void *ptr; // [sp+58h] [bp-43Ch] BYREF
  unsigned int v60; // [sp+5Ch] [bp-438h]
  unsigned int v61; // [sp+60h] [bp-434h]
  void *v62; // [sp+64h] [bp-430h] BYREF
  unsigned int v63; // [sp+68h] [bp-42Ch]
  unsigned int v64; // [sp+6Ch] [bp-428h]
  char v65[28]; // [sp+70h] [bp-424h] BYREF
  _BYTE v66[1032]; // [sp+8Ch] [bp-408h] BYREF

  *(_DWORD *)(a1 + 40) = sub_6C6C4();
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v55 = nullptr;
  v54 = 44;
  v64 = 0;
  v63 = 0;
  v62 = nullptr;
  v61 = 0;
  v60 = 0;
  ptr = nullptr;
  v45 = (const void **)(a1 + 4);
  v2 = (int *)(a1 + 40);
  if ( &v54 != (int *)a1 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( v3 < 2 )
    {
      v56 = 0;
    }
    else
    {
      v40 = *v45;
      v4 = qvector_reserve((int)&v55, nullptr, v3, 1u);
      v56 = v3;
      v55 = v4;
      memmove(v4, v40, v3 - 1);
      v55[v3 - 1] = 0;
    }
  }
  v58 = *(_WORD *)(a1 + 56);
  if ( &ptr != (void **)(a1 + 16) )
  {
    v5 = *(_DWORD *)(a1 + 20);
    if ( v5 < 2 )
    {
      v60 = 0;
    }
    else
    {
      v6 = *(const void **)(a1 + 16);
      if ( v61 >= v5 )
      {
        v7 = ptr;
      }
      else
      {
        v41 = *(const void **)(a1 + 16);
        v7 = qvector_reserve((int)&ptr, ptr, v5, 1u);
        ptr = v7;
        v6 = v41;
      }
      v60 = v5;
      memmove(v7, v6, v5 - 1);
      *((_BYTE *)ptr + v5 - 1) = 0;
    }
  }
  if ( &v62 != (void **)(a1 + 28) )
  {
    v8 = *(_DWORD *)(a1 + 32);
    if ( v8 < 2 )
    {
      v63 = 0;
    }
    else
    {
      v9 = *(const void **)(a1 + 28);
      if ( v64 >= v8 )
      {
        v10 = v62;
      }
      else
      {
        v42 = *(const void **)(a1 + 28);
        v10 = qvector_reserve((int)&v62, v62, v8, 1u);
        v62 = v10;
        v9 = v42;
      }
      v63 = v8;
      memmove(v10, v9, v8 - 1);
      *((_BYTE *)v62 + v8 - 1) = 0;
    }
  }
  if ( !sub_6C708(*v2) )
  {
    if ( *(_DWORD *)(a1 + 8) >= 2u )
      v35 = (const char *)*v45;
    else
      v35 = "0.0.0.0";
    v36 = *(unsigned __int16 *)(a1 + 56);
    v37 = (const char *)sub_6C6EA(*(_DWORD *)(a1 + 40));
    sub_6F20C("%s:%u: %s\n", v35, v36, v37);
    sub_6C74E((_DWORD *)(a1 + 40));
    exit(1);
  }
  v52 = 0;
  v51 = nullptr;
  v53 = 0;
  v49 = 0;
  v48 = nullptr;
  v50 = 0;
  sub_6C730(*v2);
  if ( sub_7EBF4() )
  {
    v11 = _strlen_chk(v66, 1025);
    if ( v11 )
    {
      v12 = v51;
      if ( v53 < v11 + 1 )
      {
        v12 = qvector_reserve((int)&v51, v51, v11 + 1, 1u);
        v51 = v12;
      }
      v52 = v11 + 1;
      memmove(v12, v66, v11);
      *((_BYTE *)v51 + v11) = 0;
      if ( v49 )
        v13 = v48;
      else
        v13 = &byte_B3CBE;
      v15 = v51;
      v14 = (const char *)v51;
      if ( v52 )
        goto LABEL_30;
    }
    else
    {
      v52 = 0;
      v13 = &byte_B3CBE;
      v15 = v51;
    }
    v14 = &byte_B3CBE;
LABEL_30:
    if ( !strcmp(v13, v14) )
    {
      if ( v15 )
      {
        v52 = 0;
        qfree(v15);
        v53 = 0;
        v51 = nullptr;
      }
    }
    else
    {
      v16 = _strlen_chk(" (my ip ", 9);
      v17 = v52 - 1;
      if ( !v52 )
        v17 = 0;
      v18 = v17 + v16;
      v19 = v17 + v16 + 1;
      v20 = v51;
      if ( v53 < v19 )
      {
        v38 = v17 + v16;
        v43 = v16;
        v21 = qvector_reserve((int)&v51, v51, v17 + v16 + 1, 1u);
        v16 = v43;
        v20 = v21;
        v51 = v21;
        v18 = v38;
      }
      v52 = v19;
      v20[v18] = 0;
      if ( v17 )
      {
        v22 = v16;
        memmove((char *)v51 + v16, v51, v17);
        v16 = v22;
      }
      memmove(v51, " (my ip ", v16);
      v23 = _strlen_chk(")", 2);
      v24 = v52 - 1;
      if ( !v52 )
        v24 = 0;
      v25 = v24 + v23;
      v26 = v24 + v23 + 1;
      v27 = v51;
      if ( v53 < v26 )
      {
        v39 = v24 + v23;
        v44 = v23;
        v28 = qvector_reserve((int)&v51, v51, v24 + v23 + 1, 1u);
        v23 = v44;
        v27 = v28;
        v51 = v28;
        v25 = v39;
      }
      v52 = v26;
      v27[v25] = 0;
      memmove((char *)v51 + v24, ")", v23);
    }
  }
  v29 = qtime64();
  format_timestamp(v65, 25, v29, v30, 0);
  v31 = &byte_B3CBE;
  v32 = &byte_B3CBE;
  if ( v52 )
    v32 = (const char *)v51;
  if ( v49 )
    v31 = v48;
  sub_6F20C("%s Listening on %s:%u%s...\n", v65, v31, *(unsigned __int16 *)(a1 + 56), v32);
  while ( *v2 )
  {
    v47 = sub_6C6C4();
    if ( sub_6C712((int)v47)
      && (v33 = (int *)(*(int (__fastcall **)(int, _BYTE *))(*(_DWORD *)a1 + 12))(a1, v47)) != nullptr )
    {
      sub_6BC68(a1, v33);
    }
    else
    {
      sub_6C74E(&v47);
      if ( !*v2 )
        break;
      sub_6F20C("Rejected client\n");
    }
  }
  if ( v48 )
  {
    v49 = 0;
    qfree(v48);
    v50 = 0;
    v48 = nullptr;
  }
  if ( v51 )
  {
    v52 = 0;
    qfree(v51);
    v53 = 0;
    v51 = nullptr;
  }
  if ( v62 )
  {
    v63 = 0;
    qfree(v62);
    v64 = 0;
    v62 = nullptr;
  }
  if ( ptr )
  {
    v60 = 0;
    qfree(ptr);
    v61 = 0;
    ptr = nullptr;
  }
  if ( v55 )
  {
    v56 = 0;
    qfree(v55);
    v57 = 0;
    v55 = nullptr;
  }
  return _stack_chk_guard - v46;
}
// 6C0D2: conditional instruction was optimized away because %var_464.4==0
// 6C1C8: variable 'v30' is possibly undefined
// 6C2B6: variable 'v46' is possibly undefined
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
