/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446A20
// Address: 0x00446A20

//----- (00446A20) --------------------------------------------------------
void __cdecl sub_446A20(int a1, unsigned int a2, unsigned int a3, int a4, const char *a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  char *v13; // ecx
  const char *v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  unsigned int v19; // esi
  char *v20; // eax
  char *v21; // ecx
  char *v22; // ecx
  _BYTE *v23; // eax
  void *v24; // eax
  unsigned int v25; // [esp+14h] [ebp-30h]
  char v26; // [esp+1Bh] [ebp-29h] BYREF
  char *v27; // [esp+1Ch] [ebp-28h] BYREF
  unsigned int v28; // [esp+20h] [ebp-24h]
  unsigned int v29; // [esp+24h] [ebp-20h]
  char v30[4]; // [esp+28h] [ebp-1Ch] BYREF
  _BYTE v31[5]; // [esp+2Ch] [ebp-18h] BYREF
  char v32; // [esp+31h] [ebp-13h] BYREF
  _BYTE v33[2]; // [esp+32h] [ebp-12h] BYREF
  int v34; // [esp+40h] [ebp-4h]

  v5 = a1;
  if ( a3 == 1 )
  {
    v6 = a1 + 144;
    if ( !a1 )
      v6 = 256;
    v7 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)v6 + 200))(*(_DWORD *)v6);
  }
  else
  {
    v7 = a4;
  }
  sub_44DD50((int *)&v27, 56);
  v8 = 0;
  v34 = 0;
  if ( a2 == -1 )
    v8 = -1;
  v9 = sub_454140(v30, (unsigned int)v33, a2 + 1, (__PAIR64__(v8, a2) + 1) >> 32);
  sub_401600((int)&v27, (unsigned int)v30, v9 - v30);
  v10 = sub_4540B0(v31, (unsigned int)&v32, a3);
  sub_401600((int)&v27, (unsigned int)v31, v10 - v31);
  v11 = v28;
  v12 = v28 + 1;
  if ( (const char *)v7 == a5 )
  {
    if ( v12 <= v29 )
    {
      v13 = v27;
    }
    else
    {
      v13 = (char *)sub_453B00((int)&v27, v27, v28 + 1, 1u);
      v11 = v28;
      v27 = v13;
    }
    v13[v11] = 1;
    v14 = pNodeName;
    v15 = v28 + 1;
    v16 = v28 + 1;
    if ( a5 )
      v14 = a5;
    ++v28;
    v25 = (unsigned int)v14;
    v17 = strlen(v14);
    v18 = v17 + 1;
    if ( v17 != -1 )
    {
      v19 = v15 + v18;
      if ( v15 + v18 < v15 )
        v19 = 0x7FFFFFFF;
      if ( v19 <= v15 )
      {
        if ( v19 != v15 )
        {
          v26 = 0;
          if ( v19 >= v15 )
          {
            if ( v19 > v16 )
              sub_402900((int)&v27, v19, &v26);
          }
          else
          {
            v28 = v19;
          }
        }
      }
      else
      {
        if ( v19 <= v29 )
        {
          v21 = v27;
        }
        else
        {
          v20 = (char *)sub_453B00((int)&v27, v27, v19, 1u);
          v16 = v28;
          v21 = v20;
          v27 = v20;
        }
        sub_464890((__m128i *)&v21[v16], 0, v19 - v16);
        v28 = v19;
      }
      sub_464310((unsigned int)&v27[v15], v25, v18);
      v5 = a1;
    }
  }
  else
  {
    if ( v12 <= v29 )
    {
      v22 = v27;
    }
    else
    {
      v22 = (char *)sub_453B00((int)&v27, v27, v28 + 1, 1u);
      v11 = v28;
      v27 = v22;
    }
    v22[v11] = 0;
    ++v28;
    v23 = sub_454140(v30, (unsigned int)v33, v7 + 1, (unsigned __int64)(v7 + 1LL) >> 32);
    sub_401600((int)&v27, (unsigned int)v30, v23 - v30);
  }
  v24 = (void *)(*(int (__thiscall **)(int, int, char **))(*(_DWORD *)v5 + 4))(v5, 56, &v27);
  sub_453A20(v24);
  v34 = 1;
  if ( v27 )
  {
    v28 = 0;
    sub_453A20(v27);
  }
}
