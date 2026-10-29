/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448100
// Address: 0x00448100

//----- (00448100) --------------------------------------------------------
char *__thiscall sub_448100(char *this, int *a2, const CHAR **a3, int a4)
{
  int *v4; // esi
  char *result; // eax
  int v6; // eax
  const CHAR *v7; // edi
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebx
  _BYTE *v11; // eax
  _BYTE *v12; // eax
  int v13; // eax
  unsigned int v14; // esi
  const CHAR *v15; // ebx
  CHAR v16; // cl
  const CHAR *v17; // eax
  int v18; // edi
  _BYTE *v19; // eax
  const char *v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  unsigned int v24; // edi
  unsigned int v25; // esi
  char *v26; // eax
  char *v27; // edx
  signed int v28; // ebx
  int v29; // edi
  _BYTE *v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // edi
  unsigned int v34; // esi
  char *v35; // eax
  char *v36; // edx
  int v37; // esi
  void *v38; // [esp+10h] [ebp-6Ch]
  unsigned int v39; // [esp+14h] [ebp-68h]
  int v40; // [esp+18h] [ebp-64h]
  int v41; // [esp+1Ch] [ebp-60h]
  unsigned int v42; // [esp+1Ch] [ebp-60h]
  const CHAR *v43; // [esp+20h] [ebp-5Ch]
  unsigned int v44; // [esp+20h] [ebp-5Ch]
  int *v45; // [esp+24h] [ebp-58h]
  char *v47; // [esp+2Ch] [ebp-50h] BYREF
  unsigned int v48; // [esp+30h] [ebp-4Ch]
  unsigned int v49; // [esp+34h] [ebp-48h]
  char *v50; // [esp+38h] [ebp-44h] BYREF
  unsigned int v51; // [esp+3Ch] [ebp-40h]
  unsigned int v52; // [esp+40h] [ebp-3Ch]
  char v53; // [esp+47h] [ebp-35h]
  _BYTE v54[10]; // [esp+48h] [ebp-34h] BYREF
  char v55[2]; // [esp+52h] [ebp-2Ah] BYREF
  _BYTE v56[5]; // [esp+54h] [ebp-28h] BYREF
  char v57[3]; // [esp+59h] [ebp-23h] BYREF
  _BYTE v58[5]; // [esp+5Ch] [ebp-20h] BYREF
  char v59[3]; // [esp+61h] [ebp-1Bh] BYREF
  _BYTE v60[5]; // [esp+64h] [ebp-18h] BYREF
  char v61[3]; // [esp+69h] [ebp-13h] BYREF
  int v62; // [esp+78h] [ebp-4h]

  v4 = a2;
  result = nullptr;
  v45 = a2;
  if ( !a4 )
    return result;
  v50 = nullptr;
  v51 = 0;
  v52 = 0;
  v62 = 0;
  if ( a4 <= 0 )
    goto LABEL_48;
  v38 = this + 112;
  do
  {
    v6 = 0;
    v51 = 0;
    v7 = pNodeName;
    v40 = 0;
    do
    {
      v8 = *v4 - v6;
      v9 = v6 - *v4;
      v10 = (unsigned int)v8 >> 31;
      if ( v8 >= 0 )
        v9 = v8;
      v11 = sub_454140(v54, (unsigned int)v55, v9 + 1, (unsigned __int64)(v9 + 1LL) >> 32);
      sub_401600((int)&v50, (unsigned int)v54, v11 - v54);
      v12 = sub_4540B0(v60, (unsigned int)v61, (unsigned __int8)v10);
      sub_401600((int)&v50, (unsigned int)v60, v12 - v60);
      v13 = *v4;
      v14 = 0;
      v41 = v13;
      v15 = *a3;
      v43 = *a3;
      v16 = **a3;
      if ( v16 )
      {
        v17 = *a3;
        v18 = v7 - v15;
        do
        {
          if ( v16 != v17[v18] )
            break;
          v16 = *++v17;
          ++v14;
        }
        while ( v16 );
      }
      v19 = sub_4540B0(v58, (unsigned int)v59, v14);
      sub_401600((int)&v50, (unsigned int)v58, v19 - v58);
      v20 = pNodeName;
      if ( &v15[v14] )
        v20 = &v15[v14];
      v39 = (unsigned int)v20;
      v21 = strlen(v20);
      v22 = v21 + 1;
      if ( v21 != -1 )
      {
        v23 = v51;
        v24 = v51;
        v25 = v51 + v22;
        if ( v51 + v22 < v51 )
          v25 = 0x7FFFFFFF;
        if ( v25 <= v51 )
        {
          if ( v25 == v51 )
          {
LABEL_26:
            sub_464310((unsigned int)&v50[v24], v39, v22);
            goto LABEL_27;
          }
          if ( v25 < v51 )
            v23 = v25;
          v51 = v23;
        }
        else
        {
          if ( v25 <= v52 )
          {
            v27 = v50;
          }
          else
          {
            v26 = (char *)sub_453B00((int)&v50, v50, v25, 1u);
            v23 = v51;
            v27 = v26;
            v50 = v26;
          }
          sub_464890((__m128i *)&v27[v23], 0, v25 - v23);
          v51 = v25;
        }
        v53 = 0;
        goto LABEL_26;
      }
LABEL_27:
      v4 = v45 + 1;
      ++a3;
      v28 = v40 + 1;
      v7 = v43;
      ++v45;
      ++v40;
      if ( v51 > 0x100000 )
        break;
      v6 = v41;
    }
    while ( v28 < a4 );
    v29 = a4 - v28;
    a4 -= v28;
    sub_44DD50((int *)&v47, 50);
    LOBYTE(v62) = 1;
    v30 = sub_4540B0(v56, (unsigned int)v57, v28);
    sub_401600((int)&v47, (unsigned int)v56, v30 - v56);
    v31 = v51;
    v42 = v51;
    v44 = (unsigned int)v50;
    if ( v51 )
    {
      v32 = v48;
      v33 = v48;
      v34 = v51 + v48;
      if ( v51 + v48 < v48 )
        v34 = 0x7FFFFFFF;
      if ( v34 > v48 )
      {
        if ( v34 <= v49 )
        {
          v36 = v47;
        }
        else
        {
          v35 = (char *)sub_453B00((int)&v47, v47, v34, 1u);
          v32 = v48;
          v36 = v35;
          v47 = v35;
        }
        sub_464890((__m128i *)&v36[v32], 0, v34 - v32);
        v31 = v42;
        v48 = v34;
        goto LABEL_41;
      }
      if ( v34 != v48 )
      {
        if ( v34 < v48 )
          v32 = v34;
        v48 = v32;
LABEL_41:
        v53 = 0;
      }
      sub_464310((unsigned int)&v47[v33], v44, v31);
      v4 = v45;
      v29 = a4;
    }
    if ( v28 != sub_44ACB0(v38, (int)&v47, -1, 0) )
    {
      LOBYTE(v62) = 2;
      if ( v47 )
      {
        v48 = 0;
        sub_453A20(v47);
      }
      result = v50;
      v37 = 1;
      goto LABEL_49;
    }
    LOBYTE(v62) = 4;
    if ( v47 )
    {
      v48 = 0;
      sub_453A20(v47);
      v47 = nullptr;
      v49 = 0;
    }
    LOBYTE(v62) = 0;
  }
  while ( v29 > 0 );
  result = v50;
LABEL_48:
  v37 = 0;
LABEL_49:
  v62 = 5;
  if ( result )
  {
    v51 = 0;
    sub_453A20(result);
  }
  return (char *)v37;
}
