/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446530
// Address: 0x00446530

//----- (00446530) --------------------------------------------------------
void __thiscall sub_446530(_DWORD **this, int a2)
{
  unsigned int *v2; // ebx
  unsigned int *v3; // edi
  const CHAR *v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  _BYTE *v7; // eax
  const char *v8; // ecx
  unsigned int v9; // eax
  bool v10; // zf
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // esi
  char *v15; // eax
  char *v16; // edx
  unsigned int v17; // esi
  unsigned int v18; // edi
  _BYTE *v19; // eax
  int v20; // eax
  void *v22; // [esp+18h] [ebp-44h]
  unsigned int v23; // [esp+1Ch] [ebp-40h]
  unsigned int *i; // [esp+20h] [ebp-3Ch]
  const char *v25; // [esp+24h] [ebp-38h]
  unsigned int v26; // [esp+24h] [ebp-38h]
  char *v27; // [esp+28h] [ebp-34h] BYREF
  unsigned int v28; // [esp+2Ch] [ebp-30h]
  unsigned int v29; // [esp+30h] [ebp-2Ch]
  char v30; // [esp+37h] [ebp-25h]
  _BYTE v31[10]; // [esp+38h] [ebp-24h] BYREF
  char v32[2]; // [esp+42h] [ebp-1Ah] BYREF
  _BYTE v33[5]; // [esp+44h] [ebp-18h] BYREF
  char v34[3]; // [esp+49h] [ebp-13h] BYREF
  int v35; // [esp+58h] [ebp-4h]

  v2 = *(unsigned int **)a2;
  if ( *(_DWORD *)a2 == *(_DWORD *)a2 + 28 * *(_DWORD *)(a2 + 4) )
    return;
  v3 = v2 + 5;
  v22 = this + 28;
  for ( i = v2 + 5; ; i += 7 )
  {
    v4 = MultiByteStr;
    v5 = *v2;
    if ( *(v3 - 3) )
      v4 = (const CHAR *)*(v3 - 4);
    v25 = v4;
    sub_44DD50((int *)&v27, 57);
    v6 = 0;
    v35 = 0;
    if ( v5 == -1 )
      v6 = -1;
    v7 = sub_454140(v31, (unsigned int)v32, v5 + 1, (__PAIR64__(v6, v5) + 1) >> 32);
    sub_401600((int)&v27, (unsigned int)v31, v7 - v31);
    v8 = pNodeName;
    if ( v25 )
      v8 = v25;
    v23 = (unsigned int)v8;
    v9 = strlen(v8);
    v10 = v9 == -1;
    v11 = v9 + 1;
    v26 = v11;
    if ( !v10 )
    {
      v12 = v28;
      v13 = v28;
      v14 = v28 + v11;
      if ( v28 + v11 < v28 )
        v14 = 0x7FFFFFFF;
      if ( v14 <= v28 )
      {
        if ( v14 == v28 )
        {
LABEL_22:
          sub_464310((unsigned int)&v27[v13], v23, v11);
          v3 = i;
          goto LABEL_23;
        }
        if ( v14 < v28 )
          v12 = v14;
        v28 = v12;
      }
      else
      {
        if ( v14 <= v29 )
        {
          v16 = v27;
        }
        else
        {
          v15 = (char *)sub_453B00((int)&v27, v27, v14, 1u);
          v12 = v28;
          v16 = v15;
          v27 = v15;
        }
        sub_464890((__m128i *)&v16[v12], 0, v14 - v12);
        v11 = v26;
        v28 = v14;
      }
      v30 = 0;
      goto LABEL_22;
    }
LABEL_23:
    v17 = *v3;
    v18 = *(v3 - 1);
    v19 = sub_4540B0(v33, (unsigned int)v34, v17);
    sub_401600((int)&v27, (unsigned int)v33, v19 - v33);
    sub_401600((int)&v27, v18, v17);
    v20 = sub_44ACB0(v22, (int)&v27, -1, 0);
    if ( v20 < 0 )
      break;
    if ( v20 )
      (*(void (__thiscall **)(_DWORD, unsigned int *))(**(this + 64) + 280))(*(this + 64), v2);
    v35 = 2;
    if ( v27 )
    {
      v28 = 0;
      sub_453A20(v27);
      v27 = nullptr;
      v29 = 0;
    }
    v2 += 7;
    v3 = i + 7;
    v35 = -1;
    if ( v2 == (unsigned int *)(*(_DWORD *)a2 + 28 * *(_DWORD *)(a2 + 4)) )
      return;
  }
  v35 = 1;
  if ( v27 )
  {
    v28 = 0;
    sub_453A20(v27);
  }
}
