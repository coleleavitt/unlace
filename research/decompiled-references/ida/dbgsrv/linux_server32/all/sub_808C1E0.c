/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808C1E0
// Address: 0x0808C1E0

//----- (0808C1E0) --------------------------------------------------------
int __cdecl sub_808C1E0(int a1, char *a2, unsigned __int8 *a3, char a4)
{
  char v4; // dl
  int v5; // esi
  _DWORD *v7; // esi
  unsigned __int8 *v8; // edi
  const char *v9; // ebx
  int *v10; // eax
  const char *v11; // ecx
  const char *v12; // eax
  unsigned __int8 *v13; // esi
  int v14; // eax
  unsigned __int8 *v15; // ecx
  int v16; // eax
  int v17; // edx
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // ecx
  unsigned __int8 *v20; // edx
  const char *v21; // eax
  int v22; // eax
  unsigned __int8 *v23; // [esp+18h] [ebp-B4h]
  _DWORD *v24; // [esp+1Ch] [ebp-B0h]
  int *v25; // [esp+28h] [ebp-A4h]
  unsigned __int8 *v26; // [esp+2Ch] [ebp-A0h]
  size_t v27; // [esp+30h] [ebp-9Ch]
  size_t v28; // [esp+30h] [ebp-9Ch]
  unsigned __int8 *v29; // [esp+30h] [ebp-9Ch]
  unsigned __int8 *v30; // [esp+3Ch] [ebp-90h] BYREF
  char **v31; // [esp+4Ch] [ebp-80h] BYREF
  char *v32; // [esp+50h] [ebp-7Ch] BYREF
  size_t v33; // [esp+54h] [ebp-78h]
  int v34; // [esp+58h] [ebp-74h]
  _DWORD v35[20]; // [esp+5Ch] [ebp-70h] BYREF
  unsigned int v36; // [esp+ACh] [ebp-20h]

  v36 = __readgsdword(0x14u);
  v4 = a4;
  if ( !a1 )
  {
    v18 = (unsigned __int8 *)sub_8080B10(a2);
    if ( v18 )
    {
      v5 = 0;
      sub_8089810(v18, a3);
    }
    else
    {
      sub_80C7910(0, a2);
      v5 = sub_80C7880(1538);
    }
    goto LABEL_4;
  }
  if ( *(_BYTE *)a1 != 5 )
  {
    v5 = sub_80C7880(1532);
    goto LABEL_4;
  }
  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  if ( a2 )
  {
    v27 = strlen(a2);
    v32 = (char *)sub_80CF920((int)&v32, nullptr, v27 + 1, 1u);
    v33 = v27 + 1;
    memmove(v32, a2, v27);
    v32[v27] = 0;
    v4 = a4;
  }
  if ( v4 )
  {
    sub_808ACA0((int)v35, 0, 1);
    v5 = 0;
    if ( !(unsigned __int8)sub_808BFF0(v35, *(_DWORD **)(a1 + 4), (const char **)&v32, a3) )
      v5 = sub_80C7850();
    sub_808AE30((int)v35);
    goto LABEL_12;
  }
  v7 = *(_DWORD **)(a1 + 4);
  v8 = (unsigned __int8 *)v7[2];
  if ( !v8 )
  {
    v19 = (unsigned __int8 *)(v7 + 1);
    goto LABEL_37;
  }
  v9 = v32;
  v24 = *(_DWORD **)(a1 + 4);
  v26 = (unsigned __int8 *)(v7 + 1);
  v28 = v33;
  v10 = &dword_80DDFD8;
  v23 = (unsigned __int8 *)(v7 + 1);
  if ( v33 )
    v10 = (int *)v32;
  v25 = v10;
  while ( 1 )
  {
    v16 = *((_DWORD *)v8 + 5);
    if ( !v28 )
      break;
    if ( v16 )
      goto LABEL_27;
    v11 = v9;
    v12 = (const char *)&dword_80DDFD8;
    v13 = v8;
LABEL_20:
    v14 = strcmp(v12, v11);
    v15 = *((unsigned __int8 **)v8 + 2);
    v8 = *((unsigned __int8 **)v8 + 3);
    if ( v14 >= 0 )
    {
      v26 = v13;
      v8 = v15;
    }
    if ( !v8 )
    {
      v7 = v24;
      v19 = v26;
      v20 = v23;
      goto LABEL_32;
    }
  }
  if ( v16 )
  {
LABEL_27:
    v12 = *((const char **)v8 + 4);
    v11 = (const char *)v25;
    v13 = v8;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v17 = *((_DWORD *)v8 + 2);
    if ( !v17 )
      break;
    v26 = v8;
    v8 = *((unsigned __int8 **)v8 + 2);
    if ( *(_DWORD *)(v17 + 20) )
      goto LABEL_27;
  }
  v7 = v24;
  v20 = v23;
  v19 = v8;
LABEL_32:
  if ( v20 == v19 )
    goto LABEL_37;
  if ( *((_DWORD *)v19 + 5) )
  {
    v21 = *((const char **)v19 + 4);
    if ( !v28 )
      v9 = (const char *)&dword_80DDFD8;
LABEL_36:
    v29 = v19;
    v22 = strcmp(v9, v21);
    v19 = v29;
    if ( v22 < 0 )
    {
LABEL_37:
      v31 = &v32;
      sub_8089660(&v30, v7, v19, (int *)&v31);
      v19 = v30;
    }
  }
  else if ( v28 )
  {
    v21 = (const char *)&dword_80DDFD8;
    goto LABEL_36;
  }
  sub_8089810(v19 + 28, a3);
  v5 = 0;
LABEL_12:
  if ( v32 )
  {
    v33 = 0;
    sub_80CF780(v32);
  }
LABEL_4:
  if ( v36 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v5;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
