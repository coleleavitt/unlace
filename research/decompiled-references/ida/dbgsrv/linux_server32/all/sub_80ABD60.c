/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80ABD60
// Address: 0x080ABD60

//----- (080ABD60) --------------------------------------------------------
int __cdecl sub_80ABD60(int a1)
{
  int v1; // esi
  unsigned __int8 *v2; // eax
  int v3; // ecx
  int v4; // eax
  unsigned __int8 *v5; // edx
  char *v6; // eax
  int v7; // eax
  int (__cdecl *v8)(int); // eax
  char v9; // al
  int v10; // esi
  size_t v12; // eax
  int v13; // ebx
  __int64 v14; // xmm0_8
  char *v15; // edx
  int v16; // eax
  unsigned __int8 *(__cdecl *v17)(int, unsigned __int8, int *); // eax
  unsigned __int8 *v18; // eax
  int v19; // eax
  int v20; // ebx
  int i; // ecx
  char v22; // al
  int (*v23)(); // eax
  unsigned __int8 *v24; // [esp+4h] [ebp-5Ch]
  char *v25; // [esp+8h] [ebp-58h]
  signed int v26; // [esp+10h] [ebp-50h]
  char *s; // [esp+18h] [ebp-48h]
  char *sa; // [esp+18h] [ebp-48h]
  _BYTE *v29; // [esp+1Ch] [ebp-44h]
  unsigned __int8 *ptr; // [esp+20h] [ebp-40h]
  void *ptra; // [esp+20h] [ebp-40h]
  unsigned __int8 *ptrd; // [esp+20h] [ebp-40h]
  unsigned __int8 ptrb; // [esp+20h] [ebp-40h]
  size_t ptrc; // [esp+20h] [ebp-40h]
  void *v35; // [esp+28h] [ebp-38h] BYREF
  __int64 v36; // [esp+2Ch] [ebp-34h]
  void *v37; // [esp+38h] [ebp-28h] BYREF
  __int64 v38; // [esp+3Ch] [ebp-24h]
  unsigned int v39; // [esp+44h] [ebp-1Ch]

  v39 = __readgsdword(0x14u);
  v1 = a1;
  sub_80BD060((int *)&v35, 3);
  sub_80A6580((char **)&v35, 0x1Fu);
  sub_80A6580((char **)&v35, 1u);
  sub_80A6580((char **)&v35, 4u);
  v29 = (_BYTE *)(a1 + 100);
  v2 = sub_80B79D0(a1 + 100, 3u, (int *)&v35, 0);
  if ( !v2 )
  {
    sub_80A69A0(a1, "[%d] Could not establish the connection\n", *(_DWORD *)(a1 + 84));
    goto LABEL_9;
  }
  v3 = *(_DWORD *)v2;
  ptr = v2;
  v37 = v2 + 5;
  LODWORD(v38) = &v2[v3 + 5];
  v4 = sub_80CDEC0((unsigned int *)&v37, v38);
  v5 = ptr;
  if ( !v4 )
  {
    sub_80A69A0(a1, "[%d] Incompatible IDA version\n", *(_DWORD *)(a1 + 84));
    *(_BYTE *)(a1 + 137) = 0;
    sub_80CF780(ptr);
    goto LABEL_9;
  }
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 248) + 64) > 1u )
  {
    v6 = (char *)v37;
    ptra = *(void **)(a1 + 248);
    s = (char *)v37;
    do
    {
      if ( (unsigned int)v6 >= (unsigned int)v38 )
        goto LABEL_7;
      ++v6;
    }
    while ( *(v6 - 1) );
    v37 = v6;
    if ( !s )
      goto LABEL_7;
    v24 = v5;
    v25 = *((char **)ptra + 15);
    ptrc = strlen(s);
    v12 = strlen(v25);
    v5 = v24;
    v26 = v12;
    v13 = v12 ^ ptrc;
    if ( v12 && ptrc )
    {
      for ( i = 0; i != ptrc; ++i )
      {
        v22 = s[i] ^ v25[i % v26];
        v13 |= v22;
      }
      v5 = v24;
      v1 = a1;
      if ( v13 )
        goto LABEL_7;
      goto LABEL_20;
    }
    if ( v13 )
    {
LABEL_7:
      ptrd = v5;
      sub_80A69A0(v1, "[%d] Bad password\n", *(_DWORD *)(v1 + 84));
      *(_BYTE *)(v1 + 137) = 0;
      sub_80CF780(ptrd);
      ptrb = 0;
      goto LABEL_21;
    }
  }
LABEL_20:
  *(_BYTE *)(v1 + 137) = 1;
  sub_80CF780(v5);
  ptrb = 1;
LABEL_21:
  sub_80BD060((int *)&v37, 0);
  v14 = v38;
  v38 = 0;
  v15 = (char *)v37;
  v37 = nullptr;
  if ( v35 )
  {
    sa = v15;
    LODWORD(v36) = 0;
    sub_80CF780(v35);
    v35 = sa;
    v36 = v14;
    if ( v37 )
    {
      LODWORD(v38) = 0;
      sub_80CF780(v37);
    }
  }
  else
  {
    v35 = v15;
    v36 = v14;
  }
  sub_80A6580((char **)&v35, ptrb);
  sub_80BC530((int)v29, (int *)&v35);
  *(_BYTE *)(v1 + 137) = 1;
  *(_DWORD *)(v1 + 132) = -1;
  if ( ptrb )
  {
    v16 = *(_DWORD *)(v1 + 100);
    v37 = nullptr;
    v38 = 0;
    v17 = *(unsigned __int8 *(__cdecl **)(int, unsigned __int8, int *))(v16 + 8);
    if ( v17 == sub_80A5C40 )
      v18 = sub_80B79D0((int)v29, 3u, (int *)&v37, 0);
    else
      v18 = v17((int)v29, 3u, (int *)&v37);
    if ( v18 )
      sub_80CF780(v18);
    if ( v37 )
    {
      LODWORD(v38) = 0;
      sub_80CF780(v37);
    }
  }
LABEL_9:
  v7 = *(_DWORD *)v1;
  *(_BYTE *)(v1 + 104) = 0;
  v8 = *(int (__cdecl **)(int))(v7 + 28);
  if ( v8 == sub_80A5870 )
    v9 = *(_BYTE *)(*(_DWORD *)(v1 + 244) + 452);
  else
    v9 = v8(v1);
  if ( !v9 )
  {
LABEL_12:
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v1 + 244) + 56))(*(_DWORD *)(v1 + 244));
    sub_80BA320(v1);
    v10 = 1;
    goto LABEL_13;
  }
  sub_80A69A0(v1, "[%d] Broken connection (mode=%d)\n", *(_DWORD *)(v1 + 84), *(_DWORD *)(*(_DWORD *)(v1 + 248) + 76));
  v19 = *(_DWORD *)(*(_DWORD *)(v1 + 248) + 76);
  if ( v19 != 1 )
  {
    if ( v19 == 2 )
    {
      v20 = *(_DWORD *)(*(_DWORD *)(v1 + 244) + 336);
      sub_80A69A0(v1, "[%d] Debugged process PID: %d\n", *(_DWORD *)(v1 + 84), v20);
      if ( v20 > 0 )
      {
        sub_80A69A0(
          v1,
          "[%d] Killing debugged process %d\n",
          *(_DWORD *)(v1 + 84),
          *(_DWORD *)(*(_DWORD *)(v1 + 244) + 336));
        if ( sub_80ABC90(v1) )
          sub_80A69A0(v1, "[%d] Failed to kill process after %d seconds. Giving up\n", *(_DWORD *)(v1 + 84), 5);
      }
    }
    goto LABEL_12;
  }
  sub_80BA320(v1);
  sub_80A69A0(v1, "[%d] Debugged session entered into sleeping mode\n", *(_DWORD *)(v1 + 84));
  if ( !(_BYTE)dword_811E720 )
    goto LABEL_47;
  v23 = *(int (**)())(**(_DWORD **)(v1 + 244) + 252);
  if ( v23 == sub_8053380 || !((unsigned __int8 (__cdecl *)(_DWORD))v23)(*(_DWORD *)(v1 + 244)) )
  {
    sub_80A69D0(v29, "Error preparing debugger server to handle a broken connection\n");
LABEL_47:
    v10 = 0;
    goto LABEL_13;
  }
  v10 = 0;
LABEL_13:
  if ( v35 )
  {
    LODWORD(v36) = 0;
    sub_80CF780(v35);
  }
  if ( v39 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v10;
}
// 811E720: using guessed type int dword_811E720;
