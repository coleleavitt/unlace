__int64 __fastcall sub_C10940(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rdi
  _DWORD *v7; // rax
  unsigned int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rax
  char v18; // al
  char v19; // r10
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  char v25; // [rsp+1Fh] [rbp-49h]
  unsigned __int8 v26; // [rsp+1Fh] [rbp-49h]
  _QWORD v27[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = *a1;
  if ( *(_WORD *)(a2 + 4) )
  {
    v6 = *a1;
    goto LABEL_13;
  }
  v6 = *a1;
  v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  v8 = *(_BYTE *)(a2 + 30) & 1;
  if ( (*(_BYTE *)(a2 + 30) & 1) == 0 )
  {
LABEL_3:
    if ( !v7 || *v7 )
      goto LABEL_13;
    goto LABEL_5;
  }
  if ( !v7 || *v7 )
    goto LABEL_13;
  if ( v7[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
  {
LABEL_5:
    if ( v7[1] == 8 && *(_DWORD *)(a2 + 24) == 1 )
    {
      v9 = *(_QWORD *)(a2 + 32);
      v10 = 0;
      if ( *(_DWORD *)(v6 + 712) )
      {
        v17 = sub_15DE2F0(v6);
        v6 = *a1;
        v10 = v17;
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
      }
      v11 = *(_QWORD *)(v6 + 864);
      v8 = sub_1692D10(a1[12], v9);
      if ( !(_BYTE)v8 )
      {
        sub_1692DB0(a1[12], v9, v11, v10, 0);
        v27[0] = v9;
        if ( v9 )
          ++*(_DWORD *)(v9 + 8);
        sub_C10880(a1 + 14, v27);
        goto LABEL_17;
      }
LABEL_16:
      v8 = 0;
      goto LABEL_17;
    }
LABEL_13:
    v10 = 0;
    if ( *(_DWORD *)(v6 + 712) )
    {
      v15 = sub_15DE270(v6);
      v6 = *a1;
      v10 = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
    }
    v12 = *(_QWORD *)(v6 + 856);
    if ( !(unsigned __int8)sub_1692D10(a1[12], a2) )
    {
      sub_1692DB0(a1[12], a2, v12, v10, 0);
      ++*(_DWORD *)(a2 + 8);
      v27[0] = a2;
      sub_C10880(a1 + 14, v27);
    }
    goto LABEL_16;
  }
  v23 = *(_QWORD *)(a2 + 32);
  v24 = *(_QWORD *)(a2 + 40);
  if ( !sub_C0F510(a1, v23, v24) )
  {
    v16 = sub_C0F510(a1, v24, v23);
    v6 = *a1;
    if ( !v16 )
    {
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_13;
      v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      goto LABEL_3;
    }
    v25 = v16;
    if ( *(_DWORD *)(v6 + 712) )
    {
      v20 = sub_15E2180(v6);
      v21 = a1[12];
      v10 = v20;
      if ( v20 )
      {
        ++*(_DWORD *)(v20 + 8);
        v22 = sub_1692D10(v21, v24);
        v19 = v25;
        v8 = v22;
        if ( (_BYTE)v22 )
        {
LABEL_18:
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
            sub_15D7BC0(v5, v10);
          return v8;
        }
        goto LABEL_41;
      }
      v18 = sub_1692D10(v21, v24);
    }
    else
    {
      v18 = sub_1692D10(a1[12], v24);
    }
    v19 = v25;
    if ( v18 )
      return v8;
    v10 = 0;
LABEL_41:
    v26 = v19;
    sub_1692DB0(a1[12], v24, v23, v10, 0);
    v27[0] = v24;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    sub_C10880(a1 + 14, v27);
    v8 = v26;
LABEL_17:
    if ( !v10 )
      return v8;
    goto LABEL_18;
  }
  if ( !(unsigned __int8)sub_1692D10(a1[12], v23) )
  {
    sub_1692DB0(a1[12], v23, v24, a3, 0);
    v27[0] = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    sub_C10880(a1 + 14, v27);
  }
  return v8;
}

