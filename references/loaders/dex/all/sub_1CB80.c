__int64 __fastcall sub_1CB80(_QWORD *a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned int v7; // r8d
  char *v8; // rcx
  char *v9; // r11
  char *v10; // r10
  char *v11; // r9
  char *v12; // rbx
  char *v13; // rsi
  char *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r12
  unsigned int v18; // ebp
  __int64 v19; // r13
  __int64 v20; // r15
  unsigned int v21; // r14d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  bool v26; // cf
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned int *v34; // rbp
  __int64 v35; // r13
  unsigned int v36; // r15d
  unsigned __int16 *v37; // r12
  unsigned int v38; // ebx
  int v39; // r14d
  __int64 v40; // rdx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  __int16 v43; // si
  __int64 v44; // rax

  a1[4] = a2;
  v4 = a2[9];
  if ( v4 != 112 )
  {
    sub_72E0((__int64)"Wrong header size %ud, struct %zud", v4, 0x70u);
    return 0;
  }
  a1[5] = a2;
  v5 = a2[15];
  if ( v5 >= a3 )
    goto LABEL_58;
  if ( a2[17] >= a3 )
    goto LABEL_58;
  if ( a2[21] >= a3 )
    goto LABEL_58;
  if ( a2[23] >= a3 )
    goto LABEL_58;
  if ( a2[19] >= a3 )
    goto LABEL_58;
  if ( a2[25] >= a3 )
    goto LABEL_58;
  if ( a2[12] >= a3 )
    goto LABEL_58;
  v6 = a2[27];
  if ( v6 >= a3 )
    goto LABEL_58;
  v7 = v6 + a2[26];
  if ( a2[27] >= v7 )
    goto LABEL_58;
  if ( a3 < v7 )
    goto LABEL_58;
  v8 = (char *)a2 + v5;
  a1[6] = v8;
  v9 = (char *)a2 + a2[17];
  a1[7] = v9;
  v10 = (char *)a2 + a2[21];
  a1[8] = v10;
  v11 = (char *)a2 + a2[23];
  a1[9] = v11;
  v12 = (char *)a2 + a2[19];
  a1[10] = v12;
  v13 = (char *)a2 + a2[25];
  a1[11] = v13;
  v14 = (char *)a2 + a2[12];
  a1[12] = v14;
  v15 = a1[19] + a2[27];
  a1[21] = v15;
  a1[22] = a2[26] + v15;
  v16 = a2[14];
  if ( (unsigned int)v16 > 0x3FFFFFFF
    || (v17 = a2[16], (unsigned int)v17 > 0x3FFFFFFF)
    || (v18 = a2[18], v18 > 0x15555555)
    || (v19 = a2[20], (unsigned int)v19 > 0x1FFFFFFF)
    || (v20 = a2[22], (unsigned int)v20 > 0x1FFFFFFF)
    || (v21 = a2[24], v21 > 0x7FFFFFF)
    || v8 < (char *)a2
    || (v22 = (unsigned __int64)&v8[4 * v16], v22 < (unsigned __int64)v8)
    || (v23 = (unsigned __int64)a2 + a2[8], v23 < v22)
    || v9 < (char *)a2
    || (v24 = (unsigned __int64)&v9[4 * v17], v24 < (unsigned __int64)v9)
    || v23 < v24
    || v12 < (char *)a2
    || (v25 = 12LL * v18, v26 = __CFADD__(v12, v25), v27 = (unsigned __int64)&v12[v25], v26)
    || v23 < v27
    || v10 < (char *)a2
    || (v28 = (unsigned __int64)&v10[8 * v19], v23 < v28)
    || v28 < (unsigned __int64)v10
    || v11 < (char *)a2
    || (v29 = (unsigned __int64)&v11[8 * v20], v23 < v29)
    || v29 < (unsigned __int64)v11
    || v13 < (char *)a2
    || (v30 = 32LL * v21, v26 = __CFADD__(v30, v13), v31 = (unsigned __int64)&v13[v30], v26)
    || v23 < v31
    || v14 < (char *)a2
    || (v32 = (unsigned __int64)&v14[a2[11]], v23 < v32)
    || v32 < (unsigned __int64)v14 )
  {
LABEL_58:
    sub_72E0((__int64)"Header contains inconsistent section references");
    return 0;
  }
  v33 = a2[13];
  if ( !(_DWORD)v33 )
  {
    sub_72E0((__int64)"PFX Cannot load DEX files that do not contain a map");
    return 0;
  }
  v34 = (unsigned int *)((char *)a2 + v33);
  v35 = *(unsigned int *)((char *)a2 + v33);
  if ( (unsigned int)v35 > 0x15555555 || v34 < a2 || __CFADD__(v34, 12 * v35) || v23 < (unsigned __int64)&v34[3 * v35] )
    return 0;
  v36 = a2[26];
  v37 = (unsigned __int16 *)(v34 + 1);
  v38 = -1;
  v39 = 0;
  while ( v35 )
  {
    v40 = sub_1C6E0(a1, *v37);
    if ( !v40 )
    {
      sub_72E0((__int64)"No such map item: %x", *v37);
      return 0;
    }
    if ( v38 != -1 )
    {
      v41 = *((_DWORD *)v37 + 2);
      if ( v41 < v38 )
      {
        sub_72E0((__int64)"Out-of-order map item: %#x then %#x", v38, v41);
        return 0;
      }
    }
    if ( *(_DWORD *)(v40 + 24) != -1 )
    {
      sub_72E0((__int64)"Duplicate map section of type %x", *v37);
      return 0;
    }
    v42 = *((_DWORD *)v37 + 1);
    if ( *(_BYTE *)(v40 + 16) )
    {
      v39 += v42;
      if ( v36 < v42 )
      {
        sub_72E0((__int64)"Unrealistically many items in the data section: at least %ud", v39);
        return 0;
      }
      v36 -= v42;
    }
    *(_DWORD *)(v40 + 20) = v42;
    v43 = *(_WORD *)v40;
    v44 = *((unsigned int *)v37 + 2);
    *(_DWORD *)(v40 + 24) = v44;
    switch ( v43 )
    {
      case 7:
        a1[13] = a1[4] + v44;
        break;
      case 8:
        a1[14] = a1[4] + v44;
        break;
      case 4096:
        if ( v42 != 1 )
        {
          sub_72E0((__int64)"Section of type TYPE_MAP_LIST must contain 1 item, but have %ud", *((_DWORD *)v37 + 1));
          return 0;
        }
        *(_WORD *)(v40 + 2) = 12 * *(_WORD *)v34 + 4;
        break;
    }
    v38 = *(_DWORD *)(v40 + 24);
    v37 += 6;
    --v35;
  }
  if ( !(unsigned __int8)sub_1C7E0((__int64)a1) )
    return 0;
  return sub_1C880(a1);
}
