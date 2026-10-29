__int64 __fastcall sub_AF66F0(__int64 *a1, __int64 *a2, unsigned __int64 *a3)
{
  unsigned int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rax
  __int64 *v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 *v23; // rdx
  int v24; // edx
  __int64 v25; // rbp
  __int64 v26; // r14
  __int64 v27; // rsi

  LOBYTE(v5) = sub_AF2F40(*a1, a2[2], a3[2]);
  if ( !(_BYTE)v5 )
    return 0;
  v6 = a2[5];
  v7 = a3[5];
  v8 = v5;
  if ( (v6 != 0) != (v7 != 0) || v6 && !sub_AF31B0(*a1, v6, v7) )
    return 0;
  v10 = *a2;
  if ( (*a2 & 0x80000) != 0 )
  {
    v11 = *((unsigned int *)a2 + 1);
    v12 = &a2[v11 + 10];
    if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
      v12 = &a2[v11 + 8];
    if ( *(_DWORD *)v12 )
    {
      if ( (v10 & 0x80000) == 0 )
        BUG();
      v13 = *a3;
      v14 = *((_DWORD *)v12 + 3);
      v15 = 0;
      if ( (*a3 & 0x80000) == 0 )
      {
LABEL_19:
        if ( v15 == v14 )
          goto LABEL_22;
        return 0;
      }
LABEL_13:
      if ( (v13 & 0x80000) == 0 )
        BUG();
      v16 = *((unsigned int *)a3 + 1);
      v17 = (__int64 *)&a3[v16 + 10];
      if ( (*(_WORD *)a3 & 0x1FF) == 0x18 )
        v17 = (__int64 *)&a3[v16 + 8];
      v15 = *(_DWORD *)v17;
      if ( *(_DWORD *)v17 )
      {
        if ( (v13 & 0x80000) == 0 )
          BUG();
        v15 = *((_DWORD *)v17 + 3);
      }
      goto LABEL_19;
    }
  }
  v13 = *a3;
  v14 = 0;
  if ( (*a3 & 0x80000) != 0 )
    goto LABEL_13;
LABEL_22:
  if ( (v10 & 0x80000) == 0 )
    goto LABEL_38;
  v18 = *((unsigned int *)a2 + 1);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
  {
    if ( LODWORD(a2[v18 + 8]) )
    {
      v19 = (__int64)&a2[2 * ((v10 & 0x80000) != 0) + 8 + v18];
      goto LABEL_26;
    }
    goto LABEL_38;
  }
  if ( !LODWORD(a2[v18 + 10]) )
  {
LABEL_38:
    v19 = 0;
    goto LABEL_26;
  }
  v19 = (__int64)&a2[2 * ((v10 & 0x80000) != 0) + 10 + v18];
LABEL_26:
  v20 = v13 >> 16;
  if ( (v20 & 8) != 0 )
  {
    v27 = *((unsigned int *)a3 + 1);
    if ( (*(_WORD *)a3 & 0x1FF) == 0x18 )
    {
      if ( LODWORD(a3[v27 + 8]) )
      {
        v21 = (__int64)&a3[2 * ((v20 & 8) != 0) + 8 + v27];
        goto LABEL_28;
      }
    }
    else if ( LODWORD(a3[v27 + 10]) )
    {
      v21 = (__int64)&a3[2 * ((v20 & 8) != 0) + 10 + v27];
      goto LABEL_28;
    }
  }
  v21 = 0;
LABEL_28:
  if ( (v10 & 0x80000) != 0 )
  {
    v22 = *((unsigned int *)a2 + 1);
    v23 = &a2[v22 + 10];
    if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
      v23 = &a2[v22 + 8];
    if ( *(_DWORD *)v23 )
    {
      if ( (v10 & 0x80000) == 0 )
        BUG();
      v24 = *((_DWORD *)v23 + 3);
      if ( v24 )
      {
        v25 = v19;
        v26 = v19 + 32LL * (unsigned int)(v24 - 1) + 32;
        while ( sub_AF1940(*a1, v25, v21) )
        {
          v25 += 32;
          v21 += 32;
          if ( v25 == v26 )
            return v8;
        }
        return 0;
      }
    }
  }
  return v8;
}
