/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42DDA0
// Address: 0x0042DDA0

//----- (0042DDA0) --------------------------------------------------------
int __thiscall sub_42DDA0(int this, const char *a2)
{
  int v3; // edi
  bool v4; // zf
  _DWORD **v5; // edi
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // edi
  const char *v9; // edx
  unsigned int v10; // edi
  unsigned int v11; // eax
  char *v12; // eax
  int v13; // eax
  const char *v14; // eax
  int v15; // eax
  char v16; // cl
  unsigned int v17; // edi
  char *v18; // eax
  int v19; // eax
  int *v20; // edx
  int v21; // ecx
  int v23; // esi
  int v24; // ecx
  int v25; // [esp-4h] [ebp-48h]
  char v26[8]; // [esp+Ch] [ebp-38h] BYREF
  __int128 v27; // [esp+14h] [ebp-30h]
  char *v28; // [esp+24h] [ebp-20h] BYREF
  unsigned int v29; // [esp+28h] [ebp-1Ch]
  unsigned int v30; // [esp+2Ch] [ebp-18h]
  int *v31; // [esp+30h] [ebp-14h]
  char *v32; // [esp+34h] [ebp-10h]
  int v33; // [esp+40h] [ebp-4h]

  sub_42EDD0((_DWORD *)(this + 60), 0);
  sub_42EDD0((_DWORD *)(this + 72), 0);
  sub_42EDD0((_DWORD *)(this + 84), 0);
  v32 = *(char **)(this + 228);
  if ( v32 )
  {
    v26[0] = 2;
    v27 = 0;
    LODWORD(v27) = 0;
    v33 = 1;
    v3 = 0;
    do
    {
      v25 = v3 + *(_DWORD *)(this + 224);
      LOBYTE(v33) = 2;
      sub_423B70(v25);
      v3 += 24;
      --v32;
    }
    while ( v32 );
    *(_DWORD *)(this + 228) = 0;
    v33 = 7;
    sub_423B70((int)v26);
    v33 = -1;
  }
  if ( *(_DWORD *)(this + 128) )
    *(_DWORD *)(this + 128) = 0;
  if ( *(_DWORD *)(this + 140) )
    *(_DWORD *)(this + 140) = 0;
  if ( *(_DWORD *)(this + 152) )
    *(_DWORD *)(this + 152) = 0;
  if ( *(_DWORD *)(this + 164) )
    *(_DWORD *)(this + 164) = 0;
  if ( *(_DWORD *)(this + 176) )
    *(_DWORD *)(this + 176) = 0;
  if ( *(_DWORD *)(this + 188) )
    *(_DWORD *)(this + 188) = 0;
  sub_42ED20(this + 196, 0);
  sub_42ED20(this + 208, 0);
  v4 = *(_DWORD *)(this + 96) == 0;
  *(_DWORD *)(this + 116) = 0;
  *(_DWORD *)(this + 236) = -1;
  if ( v4 )
  {
    v5 = (_DWORD **)(this + 56);
    v6 = sub_427180(*(LPVOID **)(this + 56), a2);
LABEL_46:
    if ( v6 == -1 )
    {
      sub_45CB10(0, a2);
      return sub_45CC20(40);
    }
    else
    {
      v24 = *(_DWORD *)(**v5 + 4 * v6);
      *(_DWORD *)(this + 100) = v24;
      *(_DWORD *)(this + 108) = 0;
      *(_BYTE *)(this + 112) = -90;
      *(_DWORD *)(this + 104) = v24 + 16;
      if ( *(_DWORD *)(v24 + 68) != -1 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(484);
      }
      return 0;
    }
  }
  v7 = 0;
  v8 = 0;
  v32 = nullptr;
  v28 = nullptr;
  v29 = 0;
  v30 = 0;
  v9 = a2;
  v33 = 8;
  if ( a2 )
  {
    v31 = (int *)(a2 + 1);
    v10 = strlen(a2);
    v11 = v10 + 1;
    if ( v10 != -1 )
    {
      v12 = (char *)sub_453B00((int)&v28, nullptr, v10 + 1, 1u);
      v9 = a2;
      v7 = (unsigned int)v12;
      v28 = v12;
      v11 = v10 + 1;
    }
    v29 = v11;
    sub_464310(v7, (unsigned int)v9, v10);
    v9 = a2;
    v28[v10] = 0;
    v8 = v29;
    v32 = v28;
  }
  v13 = *(_DWORD *)(this + 96);
  v33 = 9;
  v31 = (int *)v13;
  if ( *(_DWORD *)(v13 + 20) )
    v14 = *(const char **)(v13 + 16);
  else
    v14 = MultiByteStr;
  v15 = strcmp(v14, v9);
  if ( v15 )
    v15 = v15 < 0 ? -1 : 1;
  v16 = *(_BYTE *)(this + 120);
  if ( !v15 )
  {
    if ( v16 )
    {
      v17 = v8 != 0 ? v8 - 1 : 0;
      if ( v17 + 2 <= v30 )
      {
        v18 = v32;
      }
      else
      {
        v18 = (char *)sub_453B00((int)&v28, v32, v17 + 2, 1u);
        v28 = v18;
      }
      v29 = v17 + 2;
      v18[v17 + 1] = 0;
      if ( v17 )
      {
        sub_464310((unsigned int)(v28 + 1), (unsigned int)v28, v17);
        v17 = 0;
      }
      v28[v17] = 126;
      v19 = 2;
      v20 = *(int **)(this + 96);
    }
    else
    {
      v20 = v31;
      v19 = 1;
    }
    *(_DWORD *)(this + 116) = v19;
    goto LABEL_38;
  }
  v20 = v31;
  if ( !v16 )
  {
LABEL_38:
    v5 = (_DWORD **)(this + 56);
    v21 = sub_426BC0(v20, *(LPVOID **)(this + 56), (int)&v28);
    v31 = (int *)v21;
    if ( v21 != -1 )
    {
      if ( *(_DWORD *)(this + 116) == 2 )
      {
        v5 = (_DWORD **)(this + 56);
        *(_DWORD *)(*(_DWORD *)(this + 96) + 36) = v21;
      }
      if ( sub_42D310((_DWORD *)(this + 72), "this") == -1 )
        sub_42EB90((char **)(this + 72), "this");
    }
    v33 = 11;
    if ( v28 )
    {
      v29 = 0;
      sub_453A20(v28);
      v28 = nullptr;
      v30 = 0;
    }
    v6 = (int)v31;
    v33 = -1;
    goto LABEL_46;
  }
  v23 = sub_45CC20(1584);
  v33 = 10;
  if ( v28 )
  {
    v29 = 0;
    sub_453A20(v28);
  }
  return v23;
}
// 4B70F0: using guessed type char byte_4B70F0;
