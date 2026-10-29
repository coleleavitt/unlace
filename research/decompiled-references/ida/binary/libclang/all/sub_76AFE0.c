__int64 __fastcall sub_76AFE0(__int64 a1)
{
  unsigned __int8 v1; // al
  _DWORD *v2; // rcx
  int v3; // edx
  unsigned int v4; // eax
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int16 v7; // dx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 *v11; // rbp
  bool v12; // zf
  __int64 *v13; // rax
  __int64 *v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 *i; // rax
  int v18; // eax
  int v19; // r12d
  int v20; // eax
  __int64 *v21; // rax
  char v23; // dl

  v1 = *(_BYTE *)(a1 + 2);
  v2 = *(_DWORD **)(a1 + 16);
  if ( (v1 & 0x40) == 0 )
  {
    v3 = *v2 >> 14;
    v4 = ((v1 >> 3) & 7) - 2;
    v5 = v3 & 0x13;
    if ( (v3 & 4) != 0 )
    {
      v5 |= 8u;
      if ( v4 > 1 || (v3 & 2) != 0 )
        return v5;
    }
    else if ( v4 > 1 )
    {
      return v5;
    }
    v6 = sub_80F230(*(_QWORD *)(a1 + 16));
    v7 = *(_WORD *)v6 & 0x1FF;
    if ( v7 == 72 )
    {
      v8 = *(_QWORD *)(v6 + 16);
LABEL_7:
      if ( v8 && (*(_BYTE *)(v8 + 29) & 1) != 0 )
      {
        v9 = sub_79A2B0(v8);
        v10 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
        if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
          v11 = *(__int64 **)sub_79A2B0(v8);
        else
          v11 = nullptr;
        v12 = v11 == (__int64 *)v10;
        if ( (unsigned __int64)v11 >= v10 )
          goto LABEL_20;
LABEL_12:
        v13 = v11;
        while ( 1 )
        {
          v14 = v13;
          if ( *(_WORD *)(*v13 + 32) == 118 )
            break;
          if ( (__int64 *)v10 == ++v13 )
            return v5;
        }
        v15 = v10;
        while ( v14 != (__int64 *)v15 )
        {
          v16 = *v11;
          for ( i = v11 + 1; *(_WORD *)(v16 + 32) != 118; ++i )
          {
            v16 = *i;
            v11 = i;
          }
          ++v11;
          LOBYTE(v18) = sub_7275A0(v16);
          v19 = v18;
          LOBYTE(v20) = sub_727560(v16);
          v5 |= -v20 & 0xA | (16 * v19);
          v12 = v11 == (__int64 *)v10;
          if ( (unsigned __int64)v11 < v10 )
            goto LABEL_12;
LABEL_20:
          if ( v12 )
            return v5;
          v21 = (__int64 *)v10;
          while ( 1 )
          {
            v15 = (unsigned __int64)v21;
            if ( *(_WORD *)(*v21 + 32) == 118 )
              break;
            if ( v11 == ++v21 )
              return v5;
          }
          v14 = v11;
        }
      }
      return v5;
    }
    if ( v7 == 47 )
    {
      v8 = *(_QWORD *)(v6 + 24);
      goto LABEL_7;
    }
    return v5;
  }
  v23 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  return (2 * ((v23 & 2) != 0)) & 0x1B | (16 * ((v23 & 0x1Fu) > 0xF)) & 0x1B | v23 & 1u | ((v23 & 4) != 0 ? 8 : 0);
}

