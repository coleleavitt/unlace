/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44FE00
// Address: 0x0044FE00

//----- (0044FE00) --------------------------------------------------------
int __thiscall sub_44FE00(unsigned __int8 **this, char *cp, char *name, int *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  int result; // eax
  unsigned int v8; // ebp
  u_short v9; // cx
  bool v10; // zf
  __int16 v11; // bp
  struct servent *v12; // eax
  struct servent *v13; // eax
  __int16 v14; // ax
  char v15; // cl
  int v16; // edx
  char *v17; // esi
  int v18; // eax
  unsigned int v19; // esi
  int v20; // ebx
  _DWORD *v21; // ebp
  _DWORD *v22; // edi
  int v23; // ebp
  int v24; // ebx
  _DWORD *v25; // esi
  _DWORD *v26; // eax
  u_long v27; // eax
  _DWORD *v28; // eax
  char *v29; // eax
  int v30; // edi
  int v31; // esi
  int v32; // [esp+Ch] [ebp-14h]
  BOOL v33; // [esp+10h] [ebp-10h]
  u_short s_port; // [esp+14h] [ebp-Ch]
  int v35; // [esp+18h] [ebp-8h]
  _BYTE *v36; // [esp+1Ch] [ebp-4h] BYREF
  u_short cpa; // [esp+24h] [ebp+4h]

  LOBYTE(v32) = 0;
  v5 = 0;
  v36 = nullptr;
  v33 = 0;
  s_port = 0;
  v35 = 0;
  *a5 = 0;
  if ( !cp && !name )
    return 11001;
  if ( a4 )
  {
    if ( a4[4] || a4[5] || a4[6] || a4[7] )
      return 11003;
    v32 = *a4;
    if ( (*a4 & 2) != 0 && !cp )
      return 10022;
    this = (unsigned __int8 **)a4[1];
    if ( this && this != (unsigned __int8 **)2 )
      return 10047;
    v5 = a4[2];
    if ( v5 >= 4 )
      return 10044;
    v35 = a4[3];
  }
  v8 = v5;
  if ( !name )
  {
    v11 = 0;
    goto LABEL_43;
  }
  v9 = sub_46BE26(this, v5, (int)cp, (int)name, &v36, 10);
  cpa = v9;
  if ( !*v36 )
  {
    s_port = htons(v9);
    if ( !v5 )
      v5 = 1;
    v10 = v8 == 0;
    v11 = s_port;
    v33 = v10;
    goto LABEL_43;
  }
  if ( v5 && v5 != 2 )
    goto LABEL_29;
  v12 = getservbyname(name, "udp");
  if ( v12 )
  {
    s_port = v12->s_port;
    cpa = s_port;
  }
  if ( v5 )
  {
LABEL_29:
    if ( v5 != 1 )
      goto LABEL_32;
  }
  v13 = getservbyname(name, "tcp");
  if ( v13 )
  {
    v14 = v13->s_port;
    v11 = v14;
  }
  else
  {
LABEL_32:
    v11 = cpa;
    v14 = 0;
  }
  if ( v11 )
  {
    if ( !v5 )
    {
      v5 = (v14 == 0) + 1;
      v33 = v14 && s_port;
    }
LABEL_43:
    if ( cp )
    {
      v15 = *cp;
      v16 = 0;
      v17 = cp;
      if ( !*cp )
        goto LABEL_50;
      do
      {
        v10 = v15 == 46;
        v18 = v16 + 1;
        v15 = *++v17;
        if ( !v10 )
          v18 = v16;
        v16 = v18;
      }
      while ( v15 );
      if ( v18 != 3 || (v19 = inet_addr(cp), v19 == -1) )
      {
LABEL_50:
        if ( (v32 & 4) != 0 )
        {
          v20 = 11001;
LABEL_71:
          v30 = *a5;
          if ( *a5 )
          {
            do
            {
              if ( *(_DWORD *)(v30 + 20) )
                sub_46C918(*(LPVOID *)(v30 + 20));
              if ( *(_DWORD *)(v30 + 24) )
                sub_46C918(*(LPVOID *)(v30 + 24));
              v31 = *(_DWORD *)(v30 + 28);
              sub_46C918((LPVOID)v30);
              v30 = v31;
            }
            while ( v31 );
          }
          *a5 = 0;
          return v20;
        }
        v20 = sub_450580((int)cp, cp, v5, v35, v11, v32 & 2, a5);
        if ( v20 )
          goto LABEL_71;
        v21 = a5;
LABEL_54:
        if ( !v33 )
          return v20;
        v22 = (_DWORD *)*v21;
        if ( *v21 )
        {
          do
          {
            v23 = v22[3];
            v24 = *(_DWORD *)(v22[6] + 4);
            v25 = sub_46C90D(1u, 0x20u);
            if ( !v25 )
              break;
            v26 = sub_46C90D(1u, 0x10u);
            if ( !v26 )
            {
              sub_46C918(v25);
              break;
            }
            v26[1] = v24;
            *(_WORD *)v26 = 2;
            *((_WORD *)v26 + 1) = s_port;
            v25[1] = 2;
            v25[2] = 2;
            v25[3] = v23;
            v25[4] = 16;
            v25[6] = v26;
            v25[7] = v22[7];
            v22[7] = v25;
            v22 = (_DWORD *)v25[7];
          }
          while ( v22 );
        }
        v20 = v22 != nullptr ? 8 : 0;
        if ( !v22 )
          return v20;
        goto LABEL_71;
      }
    }
    else
    {
      v27 = 2130706433;
      if ( (v32 & 1) != 0 )
        v27 = 0;
      v19 = htonl(v27);
    }
    v28 = sub_4507B0(v5, v35, v11, v19);
    v21 = a5;
    *a5 = v28;
    if ( !v28 )
    {
      v20 = 8;
      goto LABEL_71;
    }
    v20 = 0;
    if ( cp )
    {
      *v28 |= 4u;
      if ( (v32 & 2) != 0 )
      {
        v29 = inet_ntoa((struct in_addr)v19);
        *(_DWORD *)(*a5 + 20) = sub_450830(v29);
        if ( !*(_DWORD *)(*a5 + 20) )
        {
          v20 = 8;
          goto LABEL_71;
        }
      }
    }
    goto LABEL_54;
  }
  result = 11001;
  if ( v5 )
    return 10109;
  return result;
}
