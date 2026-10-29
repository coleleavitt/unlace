/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4400A0
// Address: 0x004400A0

//----- (004400A0) --------------------------------------------------------
__int8 *__thiscall sub_4400A0(__int8 *this, char *a2, int a3, const char *a4, const char *a5, int a6, const char *a7)
{
  __int8 *v7; // esi
  char **v8; // edi
  const char *v9; // ecx
  _DWORD *v10; // ebx
  unsigned int v11; // esi
  LPVOID v12; // eax
  unsigned int v13; // ecx
  _DWORD *v14; // ebx
  unsigned int v15; // esi
  LPVOID v16; // eax
  unsigned int v17; // ecx
  _DWORD *v18; // ebx
  unsigned int v19; // esi
  LPVOID v20; // eax
  unsigned int v21; // ecx
  char *v22; // ebx
  _BYTE *v23; // ecx
  unsigned int v24; // esi
  unsigned int v25; // eax
  char *v26; // ecx
  char *v27; // edx
  _BYTE *v28; // esi
  unsigned int v29; // ebx
  char *v30; // eax
  unsigned int v31; // eax
  char *v32; // eax
  int v33; // eax
  unsigned int v34; // eax
  char *v35; // ecx
  unsigned int v37; // [esp-8h] [ebp-5Ch]
  const char *v38; // [esp-8h] [ebp-5Ch]
  char *v39; // [esp-8h] [ebp-5Ch]
  __int8 *v40; // [esp+28h] [ebp-2Ch] BYREF
  const char *v41; // [esp+2Ch] [ebp-28h]
  const char *v42; // [esp+30h] [ebp-24h]
  char *v43; // [esp+34h] [ebp-20h]
  __int8 *v44; // [esp+38h] [ebp-1Ch]
  _BYTE *v45; // [esp+3Ch] [ebp-18h] BYREF
  unsigned int v46; // [esp+40h] [ebp-14h]
  char *v47; // [esp+44h] [ebp-10h]
  int v48; // [esp+50h] [ebp-4h]
  __int8 v49[260]; // [esp+54h] [ebp+0h] BYREF

  v7 = this;
  v44 = this;
  v40 = this;
  v8 = (char **)(this + 1028);
  v9 = a5;
  *(_DWORD *)v44 = &off_48DE78;
  v43 = a2;
  v42 = a5;
  v41 = a7;
  *v8 = nullptr;
  v8[1] = nullptr;
  v8[2] = nullptr;
  v10 = v7 + 1040;
  v48 = 0;
  *((_DWORD *)v7 + 260) = 0;
  *((_DWORD *)v7 + 261) = 0;
  *((_DWORD *)v7 + 262) = 0;
  LOBYTE(v48) = 1;
  if ( a4 )
  {
    v11 = strlen(a4);
    v12 = nullptr;
    v13 = v11 + 1;
    if ( v11 != -1 )
    {
      v12 = sub_453B00((int)v10, nullptr, v11 + 1, 1u);
      *v10 = v12;
      v13 = v11 + 1;
    }
    v10[1] = v13;
    sub_464310((unsigned int)v12, (unsigned int)a4, v11);
    v9 = v42;
    *(_BYTE *)(v11 + *v10) = 0;
    v7 = v44;
  }
  v14 = v7 + 1052;
  *((_DWORD *)v7 + 263) = 0;
  *((_DWORD *)v7 + 264) = 0;
  *((_DWORD *)v7 + 265) = 0;
  LOBYTE(v48) = 3;
  if ( v9 )
  {
    v15 = strlen(v9);
    v16 = nullptr;
    v17 = v15 + 1;
    if ( v15 != -1 )
    {
      v16 = sub_453B00((int)v14, nullptr, v15 + 1, 1u);
      *v14 = v16;
      v17 = v15 + 1;
    }
    v37 = (unsigned int)v42;
    v14[1] = v17;
    sub_464310((unsigned int)v16, v37, v15);
    *(_BYTE *)(v15 + *v14) = 0;
    v7 = v44;
  }
  v18 = v7 + 1064;
  *((_DWORD *)v7 + 266) = 0;
  *((_DWORD *)v7 + 267) = 0;
  *((_DWORD *)v7 + 268) = 0;
  LOBYTE(v48) = 5;
  if ( v41 )
  {
    v19 = strlen(v41);
    v20 = nullptr;
    v21 = v19 + 1;
    if ( v19 != -1 )
    {
      v20 = sub_453B00((int)v18, nullptr, v19 + 1, 1u);
      *v18 = v20;
      v21 = v19 + 1;
    }
    v38 = v41;
    v18[1] = v21;
    sub_464310((unsigned int)v20, (unsigned int)v38, v19);
    *(_BYTE *)(v19 + *v18) = 0;
    v7 = v44;
  }
  v39 = v43;
  *((_DWORD *)v7 + 269) = a6;
  LOBYTE(v48) = 6;
  v7[4] = 0;
  sub_45ACB0((unsigned int)v49, v39, 260);
  v22 = sub_45ADE0(v49, ";", &v40);
  if ( !v22 )
    return v7;
  do
  {
    v23 = nullptr;
    v45 = nullptr;
    v46 = 0;
    v47 = nullptr;
    LOBYTE(v48) = 7;
    v24 = strlen(v22);
    v25 = v24 + 1;
    if ( v24 != -1 )
    {
      v23 = sub_453B00((int)&v45, nullptr, v24 + 1, 1u);
      v25 = v24 + 1;
      v45 = v23;
    }
    v46 = v25;
    sub_464310((unsigned int)v23, (unsigned int)v22, v24);
    v45[v24] = 0;
    v26 = *v8;
    LOBYTE(v48) = 8;
    if ( &v45 < (_BYTE **)v26 || &v45 >= (_BYTE **)&v26[12 * (_DWORD)v8[2]] )
    {
      v34 = (unsigned int)(v8[1] + 1);
      if ( v34 > (unsigned int)v8[2] )
      {
        v26 = (char *)sub_453B00((int)v8, v26, v34, 0xCu);
        *v8 = v26;
      }
      v35 = &v26[12 * (_DWORD)v8[1]];
      *(_DWORD *)v35 = v45;
      v45 = nullptr;
      *((_DWORD *)v35 + 1) = v46;
      v46 = 0;
      *((_DWORD *)v35 + 2) = v47;
      v47 = nullptr;
    }
    else
    {
      v27 = v47;
      v28 = v45;
      v29 = v46;
      v30 = v8[1];
      v45 = nullptr;
      v46 = 0;
      v43 = v47;
      v47 = nullptr;
      v31 = (unsigned int)(v30 + 1);
      LOBYTE(v48) = 9;
      if ( v31 > (unsigned int)v8[2] )
      {
        v32 = (char *)sub_453B00((int)v8, v26, v31, 0xCu);
        v27 = v43;
        v26 = v32;
        *v8 = v32;
      }
      v33 = 3 * (_DWORD)v8[1];
      *(_DWORD *)&v26[4 * v33] = v28;
      *(_DWORD *)&v26[4 * v33 + 4] = v29;
      *(_DWORD *)&v26[4 * v33 + 8] = v27;
    }
    ++v8[1];
    LOBYTE(v48) = 13;
    if ( v45 )
    {
      v46 = 0;
      sub_453A20(v45);
      v45 = nullptr;
      v47 = nullptr;
    }
    LOBYTE(v48) = 6;
    v22 = sub_45ADE0(nullptr, ";", &v40);
  }
  while ( v22 );
  return v44;
}
// 48DE78: using guessed type int (__stdcall *off_48DE78)(int);
