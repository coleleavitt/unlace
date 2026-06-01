/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140056B50
// Address: 0x0000000140056B50

//----- (0000000140056B50) ----------------------------------------------------
__int64 __fastcall sub_140056B50(char *Source, char *String, int *a3, __int64 *a4)
{
  unsigned int v6; // esi
  int v7; // ebp
  int v8; // ebx
  __int16 v9; // r13
  __int16 v10; // r15
  int v12; // eax
  int v13; // r12d
  u_short v14; // ax
  bool v15; // zf
  u_short v16; // r12
  struct servent *v17; // rax
  struct servent *v18; // rax
  BOOL v19; // r15d
  int v20; // ecx
  char *v21; // r8
  char v22; // dl
  int v23; // eax
  u_long v24; // edi
  __int64 *v25; // rbx
  __int64 i; // rdi
  int v27; // ebp
  int v28; // esi
  _QWORD *v29; // rbx
  _WORD *v30; // rax
  u_long v31; // ecx
  _DWORD *v32; // rax
  char *v33; // rax
  _QWORD *v34; // rdi
  void *v35; // rcx
  void *v36; // rcx
  _QWORD *v37; // rbx
  BOOL v38; // [rsp+30h] [rbp-48h]
  int v39; // [rsp+34h] [rbp-44h]
  char *EndPtr; // [rsp+38h] [rbp-40h] BYREF
  __int16 s_port; // [rsp+80h] [rbp+8h]

  v39 = 0;
  v6 = 0;
  EndPtr = nullptr;
  LOBYTE(v7) = 0;
  v38 = 0;
  v8 = 0;
  s_port = 0;
  v9 = 0;
  *a4 = 0;
  v10 = 0;
  if ( __PAIR128__((unsigned __int64)Source, (unsigned __int64)String) == 0 )
    return 11001;
  if ( a3 )
  {
    if ( *((_QWORD *)a3 + 2) || *((_QWORD *)a3 + 3) || *((_QWORD *)a3 + 4) || *((_QWORD *)a3 + 5) )
      return 11003;
    v7 = *a3;
    if ( (*a3 & 2) != 0 && !Source )
      return 10022;
    v12 = a3[1];
    if ( v12 && v12 != 2 )
      return 10047;
    v8 = a3[2];
    if ( v8 && (unsigned int)(v8 - 1) > 2 )
      return 10044;
    v39 = a3[3];
  }
  v13 = v8;
  if ( !String )
  {
    v16 = 0;
LABEL_41:
    v19 = v38;
    goto LABEL_42;
  }
  v9 = strtoul(String, &EndPtr, 10);
  if ( !*EndPtr )
  {
    v14 = htons(v9);
    v9 = v14;
    if ( !v8 )
      v8 = 1;
    v15 = v13 == 0;
    v16 = v14;
    v38 = v15;
    goto LABEL_41;
  }
  if ( (v8 & 0xFFFFFFFD) == 0 )
  {
    v17 = getservbyname(String, "udp");
    if ( v17 )
    {
      s_port = v17->s_port;
      v9 = s_port;
    }
    if ( !v8 )
      goto LABEL_29;
  }
  if ( v8 == 1 )
  {
LABEL_29:
    v18 = getservbyname(String, "tcp");
    if ( v18 )
    {
      v10 = v18->s_port;
      v9 = v10;
    }
  }
  if ( !v9 )
  {
    v6 = 11001;
    if ( v8 )
      return 10109;
    return v6;
  }
  v16 = s_port;
  if ( v8 )
    goto LABEL_41;
  v8 = 2 - (v10 != 0);
  v19 = v10 && s_port;
LABEL_42:
  if ( !Source )
  {
    v31 = 2130706433;
    if ( (v7 & 1) != 0 )
      v31 = 0;
    v24 = htonl(v31);
    goto LABEL_62;
  }
  v20 = 0;
  v21 = Source;
  v22 = *Source;
  if ( *Source )
  {
    do
    {
      v15 = v22 == 46;
      v23 = v20 + 1;
      v22 = *++v21;
      if ( !v15 )
        v23 = v20;
      v20 = v23;
    }
    while ( v22 );
    if ( v23 == 3 )
    {
      v24 = inet_addr(Source);
      if ( v24 != -1 )
      {
LABEL_62:
        v32 = sub_140057610(v8, v39, v9, v24);
        v25 = a4;
        *a4 = (__int64)v32;
        if ( !v32 )
        {
          v6 = 8;
          goto LABEL_70;
        }
        if ( Source )
        {
          *v32 |= 4u;
          if ( (v7 & 2) != 0 )
          {
            v33 = inet_ntoa((struct in_addr)v24);
            *(_QWORD *)(*a4 + 24) = sub_1400576B0(v33);
            if ( !*(_QWORD *)(*a4 + 24) )
            {
              v6 = 8;
              goto LABEL_70;
            }
          }
        }
        goto LABEL_53;
      }
    }
  }
  if ( (v7 & 4) == 0 )
  {
    v6 = sub_1400573D0(Source, v8, v39, v9, v7 & 2, a4);
    if ( v6 )
      goto LABEL_70;
    v25 = a4;
LABEL_53:
    if ( !v19 )
      return v6;
    for ( i = *v25; i; i = v29[5] )
    {
      v27 = *(_DWORD *)(i + 12);
      v28 = *(_DWORD *)(*(_QWORD *)(i + 32) + 4LL);
      v29 = j__calloc_base(1u, 0x30u);
      if ( !v29 )
        break;
      v30 = j__calloc_base(1u, 0x10u);
      if ( !v30 )
      {
        free(v29);
        break;
      }
      *v30 = 2;
      v30[1] = v16;
      *((_DWORD *)v30 + 1) = v28;
      *((_DWORD *)v29 + 1) = 2;
      *((_DWORD *)v29 + 2) = 2;
      *((_DWORD *)v29 + 3) = v27;
      v29[2] = 16;
      v29[4] = v30;
      v29[5] = *(_QWORD *)(i + 40);
      *(_QWORD *)(i + 40) = v29;
    }
    v6 = i != 0 ? 8 : 0;
    if ( !i )
      return v6;
    goto LABEL_70;
  }
  v6 = 11001;
LABEL_70:
  v34 = (_QWORD *)*a4;
  if ( *a4 )
  {
    do
    {
      v35 = (void *)v34[3];
      if ( v35 )
        free(v35);
      v36 = (void *)v34[4];
      if ( v36 )
        free(v36);
      v37 = (_QWORD *)v34[5];
      free(v34);
      v34 = v37;
    }
    while ( v37 );
  }
  *a4 = 0;
  return v6;
}
