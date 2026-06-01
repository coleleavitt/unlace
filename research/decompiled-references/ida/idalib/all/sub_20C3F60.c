unsigned __int64 __fastcall sub_20C3F60(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r13
  unsigned int v9; // esi
  __int64 *v11; // rdi
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // rax
  int v15; // edx
  unsigned __int64 *v16; // r13
  unsigned __int64 result; // rax
  int v18; // eax
  int v19; // esi
  unsigned int v20; // ecx
  int v21; // edi
  __int64 v22; // rdx
  unsigned int v23; // esi
  int v24; // ebx
  int v25; // r11d
  __int64 v26; // r10
  __int64 v27; // rcx
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rdi
  unsigned int v31; // r14d
  int v32; // esi
  int v33; // r10d

  v6 = *a1;
  if ( a2 == 16 )
    return v6 + 2104;
  v7 = *a1;
  if ( a2 > 0x10 )
  {
    switch ( a2 )
    {
      case 0x40u:
        return v6 + 2152;
      case 0x80u:
        return v6 + 2176;
      case 0x20u:
        return v6 + 2128;
    }
    goto LABEL_6;
  }
  if ( a2 == 1 )
    return v6 + 2056;
  result = v6 + 2080;
  if ( a2 != 8 )
  {
LABEL_6:
    v9 = *(_DWORD *)(v6 + 2448);
    v11 = (__int64 *)(v6 + 2432);
    if ( !v9 )
      goto LABEL_18;
    a6 = v9 - 1;
    v12 = *(_QWORD *)(v6 + 2432);
    v13 = a6 & (37 * a2);
    v14 = v12 + 16LL * v13;
    v15 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 == a2 )
    {
LABEL_8:
      v16 = (unsigned __int64 *)(v14 + 8);
      result = *(_QWORD *)(v14 + 8);
      if ( result )
        return result;
      goto LABEL_24;
    }
    v25 = 1;
    v26 = 0;
    if ( v15 != -1 )
    {
      while ( 1 )
      {
        if ( !v26 && v15 == -2 )
          v26 = v14;
        v13 = a6 & (v25 + v13);
        v14 = v12 + 16LL * v13;
        v15 = *(_DWORD *)v14;
        if ( *(_DWORD *)v14 == a2 )
          goto LABEL_8;
        if ( v15 == -1 )
          break;
        ++v25;
      }
      if ( v26 )
        v14 = v26;
    }
    a4 = 3 * v9;
    a3 = (unsigned int)(*(_DWORD *)(v6 + 2440) + 1);
    a5 = (unsigned int)(4 * a3);
    if ( (unsigned int)a5 < (unsigned int)a4 )
    {
      v27 = v9 - *(_DWORD *)(v6 + 2444) - (unsigned int)a3;
      v12 = v9 >> 3;
      if ( (unsigned int)v27 > (unsigned int)v12 )
        goto LABEL_21;
      sub_20C3D70(v11, v9, a3, v27, v12, a6);
      v28 = *(_DWORD *)(v6 + 2448);
      if ( v28 )
      {
        v29 = v28 - 1;
        v30 = *(_QWORD *)(v6 + 2432);
        v31 = (v28 - 1) & (37 * a2);
        LODWORD(a3) = *(_DWORD *)(v6 + 2440) + 1;
        v14 = v30 + 16LL * v31;
        v32 = *(_DWORD *)v14;
        if ( *(_DWORD *)v14 != a2 && v32 != -1 )
        {
          a6 = 1;
          v12 = 0;
          while ( 1 )
          {
            if ( v32 == -2 && !v12 )
              v12 = v14;
            v31 = v29 & (a6 + v31);
            v14 = v30 + 16LL * v31;
            v32 = *(_DWORD *)v14;
            if ( *(_DWORD *)v14 == a2 )
              break;
            if ( v32 == -1 )
            {
              if ( v12 )
                v14 = v12;
              break;
            }
            a6 = (unsigned int)(a6 + 1);
          }
        }
LABEL_20:
        v6 = *a1;
LABEL_21:
        *(_DWORD *)(v7 + 2440) = a3;
        if ( *(_DWORD *)v14 != -1 )
          --*(_DWORD *)(v7 + 2444);
        *(_DWORD *)v14 = a2;
        v16 = (unsigned __int64 *)(v14 + 8);
        *(_QWORD *)(v14 + 8) = 0;
LABEL_24:
        v22 = *(_QWORD *)(v6 + 2208);
        *(_QWORD *)(v6 + 2288) += 24LL;
        result = (v22 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( *(_QWORD *)(v6 + 2216) >= result + 24 && v22 )
          *(_QWORD *)(v6 + 2208) = result + 24;
        else
          result = sub_986170(v6 + 2208, 24, 24, 4, v12, a6);
        *(_BYTE *)(result + 8) = 12;
        v23 = a2 << 8;
        v24 = *(unsigned __int8 *)(result + 8);
        *(_QWORD *)result = a1;
        *(_DWORD *)(result + 12) = 0;
        *(_QWORD *)(result + 16) = 0;
        *(_DWORD *)(result + 8) = v24 | v23;
        *v16 = result;
        return result;
      }
    }
    else
    {
LABEL_18:
      sub_20C3D70(v11, 2 * v9, a3, a4, a5, a6);
      v18 = *(_DWORD *)(v6 + 2448);
      if ( v18 )
      {
        v19 = v18 - 1;
        v12 = *(_QWORD *)(v6 + 2432);
        v20 = (v18 - 1) & (37 * a2);
        LODWORD(a3) = *(_DWORD *)(v6 + 2440) + 1;
        v14 = v12 + 16LL * v20;
        v21 = *(_DWORD *)v14;
        if ( *(_DWORD *)v14 != a2 && v21 != -1 )
        {
          v33 = 1;
          a6 = 0;
          while ( 1 )
          {
            if ( !a6 && v21 == -2 )
              a6 = v14;
            v20 = v19 & (v33 + v20);
            v14 = v12 + 16LL * v20;
            v21 = *(_DWORD *)v14;
            if ( *(_DWORD *)v14 == a2 )
              break;
            if ( v21 == -1 )
            {
              if ( !a6 )
                goto LABEL_20;
              v14 = a6;
              v6 = *a1;
              goto LABEL_21;
            }
            ++v33;
          }
        }
        goto LABEL_20;
      }
    }
    ++*(_DWORD *)(v6 + 2440);
    BUG();
  }
  return result;
}
