/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_slice
// Address: 0x00059F80

//----- (00059F80) --------------------------------------------------------
char *__cdecl get_idcv_slice(__int64 *a1, char *a2, unsigned int a3, unsigned int a4, char a5)
{
  char *v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // esi
  char *v9; // eax
  int v12; // ecx
  unsigned int v13; // edi
  int v14; // ecx
  char *v15; // esi
  _DWORD *v16; // edi
  int v17; // edi
  char *v18; // edi
  char *v19; // eax
  const char *v20; // eax
  int v21; // eax
  void *v22; // eax
  char v23; // al
  char *v24; // ecx
  char *v25; // ecx
  char *v26; // eax
  int v27; // edi
  bool v28; // zf
  __int64 v29; // xmm0_8
  __int64 v30; // xmm0_8
  int v31; // edi
  char *v32; // [esp+0h] [ebp-8Ch]
  void *v33; // [esp+18h] [ebp-74h]
  const char *v34; // [esp+1Ch] [ebp-70h]
  int v35; // [esp+24h] [ebp-68h]
  __int64 v36; // [esp+28h] [ebp-64h] BYREF
  __int64 v37; // [esp+30h] [ebp-5Ch]
  int v38; // [esp+38h] [ebp-54h]
  char s2[32]; // [esp+40h] [ebp-4Ch] BYREF
  __int64 v40; // [esp+60h] [ebp-2Ch] BYREF
  __int64 v41; // [esp+68h] [ebp-24h]
  int v42; // [esp+70h] [ebp-1Ch]
  unsigned int v43; // [esp+78h] [ebp-14h]

  v43 = __readgsdword(0x14u);
  if ( !a1 )
    return (char *)set_qerrno(1568);
  v5 = a2;
  if ( !a2 )
    return (char *)set_qerrno(1568);
  v6 = a3;
  while ( 1 )
  {
    v7 = *v5;
    if ( v7 != 10 )
      break;
    v32 = v5;
    v8 = v6;
    v9 = deref_idcv(v32, 0);
    v6 = v8;
    v5 = v9;
    if ( !v9 )
      return (char *)get_qerrno();
  }
  if ( v7 != 5 )
  {
    if ( v7 != 7 )
      return (char *)set_qerrno(1568);
    v12 = *((_DWORD *)v5 + 2);
    v13 = v12 - 1;
    if ( !v12 )
      v13 = 0;
    if ( v6 < 0 )
    {
      v6 += v13;
      if ( v6 < 0 )
        v6 = 0;
    }
    if ( v6 > v13 )
      v6 = v13;
    v14 = v6 + 1;
    if ( (a5 & 1) == 0 )
      v14 = a4;
    if ( v14 < 0 )
    {
      v14 += v13;
      if ( v14 < 0 )
        v14 = 0;
    }
    if ( v14 > v13 )
      v14 = v13;
    if ( v6 > (unsigned int)v14 )
      v14 = v6;
    sub_2DCA0(&v40, (void *)(*((_DWORD *)v5 + 1) + v6), v14 - v6);
    free_idcv((char *)a1);
    *(_BYTE *)a1 = 7;
    *(__int64 *)((char *)a1 + 4) = v40;
    *((_DWORD *)a1 + 3) = v41;
    return nullptr;
  }
  if ( (a5 & 1) != 0 )
  {
    qsnprintf(s2, 32, "%u", v6);
    return (char *)get_idcv_attr((int)a1, (int)v5, s2, 0);
  }
  v37 = 0;
  v38 = 0;
  LOBYTE(v36) = 5;
  v16 = operator new(0x14u);
  sub_51020(v16, 0);
  HIDWORD(v36) = v16;
  v17 = *((_DWORD *)v5 + 1);
  sub_1B530((int)&v40, byte_EA40C);
  v15 = *(char **)(v17 + 4);
  v18 = (char *)(v17 + 4);
  v35 = (int)v18;
  if ( !v15 )
  {
    v22 = (void *)v40;
    if ( !(_DWORD)v40 )
      goto LABEL_45;
    goto LABEL_44;
  }
  v19 = (char *)v40;
  v33 = (void *)v40;
  if ( !HIDWORD(v40) )
    v19 = byte_EF875;
  v34 = v19;
  do
  {
    v20 = byte_EF875;
    if ( *((_DWORD *)v15 + 5) )
      v20 = *((const char **)v15 + 4);
    v21 = strcmp(v20, v34);
    if ( v21 >= 0 )
      v18 = v15;
    v15 = *(char **)&v15[4 * ((unsigned int)v21 >> 31)];
  }
  while ( v15 );
  v22 = v33;
  if ( v33 )
  {
LABEL_44:
    HIDWORD(v40) = 0;
    qfree(v22);
    LODWORD(v40) = 0;
    LODWORD(v41) = 0;
  }
LABEL_45:
  if ( v18 != (char *)v35 )
  {
    do
    {
      v15 = byte_EF875;
      if ( *((_DWORD *)v18 + 5) )
        v15 = *((char **)v18 + 4);
      if ( strcmp(v15, ":") >= 0 )
        break;
      v23 = *v15;
      if ( *v15 )
      {
        if ( v23 == 48 )
        {
          if ( !v15[1] )
          {
LABEL_57:
            qsscanf((int)v15, "%u", (int)&v40);
            if ( (unsigned int)v40 >= a3 && ((unsigned int)v40 < a4 || a4 == 0x7FFFFFFF) )
            {
              qsnprintf(s2, 32, "%u", v40 - a3);
              v15 = (char *)set_idcv_attr((int)&v36, s2, v18 + 28, 0);
              if ( v15 )
              {
                v31 = 1;
                goto LABEL_68;
              }
            }
          }
        }
        else
        {
          v24 = v15 + 1;
          while ( v23 >= 0 && (unsigned int)(unsigned __int8)v23 - 48 <= 9 )
          {
            v23 = *v24++;
            if ( !v23 )
              goto LABEL_57;
          }
        }
      }
      v25 = *((char **)v18 + 1);
      if ( v25 )
      {
        do
        {
          v26 = v25;
          v25 = *(char **)v25;
        }
        while ( v25 );
      }
      else
      {
        v26 = *((char **)v18 + 2);
        if ( *(char **)v26 != v18 )
        {
          v27 = (int)(v18 + 8);
          do
          {
            v26 = *(char **)(*(_DWORD *)v27 + 8);
            v28 = *(_DWORD *)v26 == *(_DWORD *)v27;
            v27 = *(_DWORD *)v27 + 8;
          }
          while ( !v28 );
        }
      }
      v18 = v26;
    }
    while ( v26 != (char *)v35 );
  }
  v42 = *((_DWORD *)a1 + 4);
  v29 = *a1;
  v41 = a1[1];
  v40 = v29;
  *((_DWORD *)a1 + 4) = v38;
  v30 = v36;
  a1[1] = v37;
  *a1 = v30;
  v38 = v42;
  v37 = v41;
  v36 = v40;
  v31 = 0;
LABEL_68:
  if ( (char)v36 == 5 )
  {
    sub_59680((void *)HIDWORD(v36), (char *)&v36);
  }
  else if ( (char)v36 == 7 && HIDWORD(v36) )
  {
    LODWORD(v37) = 0;
    qfree((void *)HIDWORD(v36));
    HIDWORD(v36) = 0;
    HIDWORD(v37) = 0;
    if ( !v31 )
      return nullptr;
    return v15;
  }
  if ( !v31 )
    return nullptr;
  return v15;
}
