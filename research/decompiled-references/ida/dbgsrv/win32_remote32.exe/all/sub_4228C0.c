/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4228C0
// Address: 0x004228C0

//----- (004228C0) --------------------------------------------------------
char __thiscall sub_4228C0(_DWORD *this)
{
  _DWORD *v1; // edi
  struct _RTL_CRITICAL_SECTION *v2; // esi
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  char *v8; // esi
  struct _RTL_CRITICAL_SECTION *v9; // eax
  int v10; // edx
  struct _RTL_CRITICAL_SECTION *v11; // ecx
  int v12; // eax
  _DWORD **v13; // edi
  _DWORD *v14; // edi
  int v15; // eax
  char **v16; // edi
  char **v17; // eax
  char *v18; // ecx
  char **v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  char v25[8]; // [esp+Ch] [ebp-38h] BYREF
  __int128 v26; // [esp+14h] [ebp-30h]
  char **v27; // [esp+24h] [ebp-20h] BYREF
  int v28; // [esp+28h] [ebp-1Ch]
  unsigned int v29; // [esp+2Ch] [ebp-18h]
  _DWORD *v30; // [esp+30h] [ebp-14h]
  LPCRITICAL_SECTION v31; // [esp+34h] [ebp-10h]
  int v32; // [esp+40h] [ebp-4h]

  v1 = this;
  v30 = this;
  v2 = dword_4B6B40;
  v31 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v3 = v1[14];
  v32 = 0;
  if ( !v3 || (v4 = *(_DWORD *)(v3 + 68), v4 < 1) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(487);
  }
  *(_DWORD *)(v3 + 68) = v4 - 1;
  v32 = 1;
  sub_4562F0(v2);
  v5 = v1[12] + 1;
  v32 = -1;
  if ( v5 == v1[4] )
  {
LABEL_30:
    v20 = v1[10];
    while ( v20 )
    {
      v21 = v1[10];
      if ( *(_DWORD *)(v1[9] + 4 * v21 - 4) < v1[4] )
        break;
      if ( v21 )
      {
        v20 = v21 - 1;
        v1[10] = v21 - 1;
      }
    }
    v22 = v1[6] + 16 * v1[7];
    v1[13] = *(_DWORD *)(v22 - 4);
    v1[12] = *(_DWORD *)(v22 - 8);
    v1[15] = *(_DWORD *)(v22 - 12);
    v23 = *(_DWORD *)(v22 - 16);
    v1[14] = v23;
    v24 = v1[7];
    if ( v24 )
      v1[7] = v24 - 1;
    v1[17] = v23 != 0 ? v23 + 16 : 0;
    return 1;
  }
  v25[0] = 2;
  v26 = 0;
  LODWORD(v26) = 0;
  v6 = v1[4];
  v32 = 2;
  if ( !sub_424B40(v25, v1[3] + 24 * v6 - 24) )
  {
    if ( v25[0] == 10 && SDWORD1(v26) >= v1[12] )
    {
      v8 = v25;
      v27 = nullptr;
      v28 = 0;
      v29 = 0;
      LOBYTE(v32) = 4;
      v9 = (struct _RTL_CRITICAL_SECTION *)sub_428030();
      v10 = v28;
      v11 = v9;
      v31 = v9;
      while ( 1 )
      {
        v12 = *((_DWORD *)v8 + 3);
        v13 = (_DWORD **)(v8 + 8);
        v8 = nullptr;
        if ( v12 < 0 )
        {
          v15 = sub_420810(v11, ~v12);
          v10 = v28;
          v8 = (char *)v15;
        }
        else
        {
          v14 = *v13;
          if ( v14 && *v14 == 289621065 && (unsigned int)v12 < v14[4] )
            v8 = (char *)(v14[3] + 24 * v12);
        }
        if ( !v8 )
          goto LABEL_38;
        if ( *v8 != 10 )
          break;
        v16 = v27;
        v17 = v27;
        v18 = (char *)&v27[v10];
        if ( v27 != (char **)v18 )
        {
          while ( v8 != *v17 )
          {
            if ( ++v17 == (char **)v18 )
              goto LABEL_21;
          }
LABEL_38:
          sub_45CC20(1563);
          LOBYTE(v32) = 5;
LABEL_39:
          if ( v27 )
          {
            v28 = 0;
            sub_453A20(v27);
          }
          v32 = 8;
          goto LABEL_6;
        }
LABEL_21:
        if ( v10 + 1 > v29 )
        {
          v19 = (char **)sub_453B00((int)&v27, v27, v10 + 1, 4u);
          v10 = v28;
          v16 = v19;
          v27 = v19;
        }
        v11 = v31;
        v16[v10] = v8;
        v10 = ++v28;
      }
      v25[0] = 2;
      if ( sub_423670(v25, v8) )
      {
        LOBYTE(v32) = 6;
        goto LABEL_39;
      }
      LOBYTE(v32) = 7;
      if ( v27 )
      {
        v28 = 0;
        sub_453A20(v27);
      }
      v1 = v30;
      LOBYTE(v32) = 2;
    }
    sub_422E30(v1 + 3, v1[12]);
    sub_4235A0((LPVOID *)v1, (int)v25);
    v32 = 9;
    sub_423B70((int)v25);
    goto LABEL_30;
  }
  v32 = 3;
LABEL_6:
  sub_423B70((int)v25);
  return 0;
}
// 4B70F0: using guessed type char byte_4B70F0;
