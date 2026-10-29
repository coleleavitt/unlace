void __fastcall sub_D16A30(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v7; // rbx
  _DWORD *v8; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // edi
  __int64 *v12; // rcx
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *i; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // edi
  __int64 *v21; // rcx
  unsigned int v22; // edx
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 *v25; // r8
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdi
  bool v30; // zf
  __int64 v31; // rax
  __int64 v32; // rax

  v7 = a2;
  if ( *(_WORD *)(a2 + 4) )
  {
LABEL_11:
    if ( !a3 )
      goto LABEL_34;
    goto LABEL_12;
  }
  while ( 1 )
  {
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_11;
    v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
    if ( !v8 || *v8 )
      goto LABEL_11;
    v9 = v8[1];
    if ( v9 == 6 )
    {
      v10 = *(unsigned int *)(a1 + 24);
      v11 = *(_DWORD *)(v7 + 12);
      v12 = *(__int64 **)(a1 + 16);
      v13 = v10 - 1;
      v10 *= 16;
      v14 = (__int64 *)((char *)v12 + v10);
      v15 = 16LL * (v11 & v13);
      v16 = &v12[(unsigned __int64)v15 / 8];
      if ( v15 != v10 )
      {
        for ( i = &v12[(unsigned __int64)v15 / 8]; v14 != i; i += 2 )
        {
          v18 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v18 + 12) == v11 && v18 == v7 )
              goto LABEL_39;
          }
          else if ( !v18 )
          {
            goto LABEL_21;
          }
        }
      }
      for ( ; v16 != v12; v12 += 2 )
      {
        v31 = *v12;
        if ( (unsigned __int64)*v12 > 1 )
        {
          if ( *(_DWORD *)(v31 + 12) == v11 && v31 == v7 )
          {
            i = v12;
LABEL_39:
            v7 = i[1];
            if ( !a3 )
              goto LABEL_33;
LABEL_12:
            v7 = sub_15E1A70(*(_QWORD *)a1);
            if ( v7 )
              goto LABEL_34;
            goto LABEL_35;
          }
        }
        else if ( !v31 )
        {
          break;
        }
      }
LABEL_21:
      v7 = 0;
      if ( !a3 )
        goto LABEL_35;
      goto LABEL_12;
    }
    if ( v9 <= 6 )
      break;
    if ( v9 != 8 )
      goto LABEL_8;
    v7 = *(_QWORD *)(v7 + 32);
    a3 ^= 1u;
    if ( *(_WORD *)(v7 + 4) )
      goto LABEL_11;
  }
  if ( ((v9 - 2) & 0xFFFFFFFD) != 0 )
  {
LABEL_8:
    sub_1872CE0("");
    sub_1873130(114, 163);
  }
  if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)a1, *(_QWORD *)(v7 + 40)) )
  {
    if ( a3 )
      goto LABEL_32;
    goto LABEL_34;
  }
  v19 = *(unsigned int *)(a1 + 24);
  v20 = *(_DWORD *)(v7 + 12);
  v21 = *(__int64 **)(a1 + 16);
  v22 = v19 - 1;
  v19 *= 16;
  v23 = (__int64 *)((char *)v21 + v19);
  v24 = 16LL * (v20 & v22);
  v25 = &v21[(unsigned __int64)v24 / 8];
  if ( v24 == v19 )
  {
LABEL_55:
    while ( v25 != v21 )
    {
      v32 = *v21;
      if ( (unsigned __int64)*v21 > 1 )
      {
        if ( *(_DWORD *)(v32 + 12) == v20 && v32 == v7 )
        {
          v26 = v21;
          goto LABEL_53;
        }
      }
      else if ( !v32 )
      {
        break;
      }
      v21 += 2;
    }
LABEL_31:
    v7 = 0;
    if ( a3 )
    {
LABEL_32:
      v7 = sub_15E1A70(*(_QWORD *)a1);
      goto LABEL_33;
    }
    goto LABEL_35;
  }
  v26 = &v21[(unsigned __int64)v24 / 8];
  while ( 1 )
  {
    v27 = *v26;
    if ( (unsigned __int64)*v26 > 1 )
      break;
    if ( !v27 )
      goto LABEL_31;
LABEL_28:
    v26 += 2;
    if ( v23 == v26 )
      goto LABEL_55;
  }
  if ( *(_DWORD *)(v27 + 12) != v20 || v27 != v7 )
    goto LABEL_28;
LABEL_53:
  v7 = v26[1];
  if ( a3 )
    goto LABEL_32;
LABEL_33:
  if ( v7 )
LABEL_34:
    ++*(_DWORD *)(v7 + 8);
LABEL_35:
  v28 = *a4;
  if ( *a4 && (v29 = a4[1], v30 = *(_DWORD *)(v28 + 8) == 1, --*(_DWORD *)(v28 + 8), v30) )
  {
    sub_15D7BC0(v29, v28);
    *a4 = v7;
  }
  else
  {
    *a4 = v7;
  }
}

