/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431260
// Address: 0x00431260

//----- (00431260) --------------------------------------------------------
_DWORD *__thiscall sub_431260(int *this, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  int v6; // esi
  int v7; // edi
  _DWORD *result; // eax
  _DWORD *v9; // ecx
  _DWORD *v10; // edx
  unsigned int v11; // ebx
  unsigned int v12; // edi
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // esi
  int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // edi
  unsigned int v19; // ebx
  bool v20; // cf
  unsigned __int8 v21; // bl
  unsigned __int8 v22; // bl
  unsigned __int8 v23; // bl
  int v24; // edi
  _DWORD *v25; // edi
  _DWORD *v26; // ebx
  bool v27; // cf
  unsigned __int8 v28; // bl
  unsigned __int8 v29; // bl
  unsigned __int8 v30; // bl
  int v31; // edi
  _DWORD *v32; // ebx
  _DWORD *v33; // edi
  _DWORD *v34; // ebx
  _DWORD *v35; // esi
  _DWORD *v36; // edi
  _DWORD *v37; // eax
  _DWORD *v38; // ebx
  _DWORD *v39; // edi
  _DWORD *v40; // eax
  _DWORD *v41; // [esp+10h] [ebp-3Ch]
  _DWORD *v42; // [esp+10h] [ebp-3Ch]
  _DWORD *v43; // [esp+14h] [ebp-38h]
  unsigned int v45; // [esp+1Ch] [ebp-30h]
  unsigned int v46; // [esp+20h] [ebp-2Ch]
  unsigned int v47; // [esp+24h] [ebp-28h]
  unsigned int v48; // [esp+28h] [ebp-24h]
  int v49; // [esp+2Ch] [ebp-20h]
  _DWORD *v50; // [esp+2Ch] [ebp-20h]
  unsigned int v51; // [esp+30h] [ebp-1Ch]
  unsigned int v52; // [esp+34h] [ebp-18h]
  unsigned int v53; // [esp+34h] [ebp-18h]
  _DWORD *v54; // [esp+38h] [ebp-14h]
  _DWORD *v55; // [esp+38h] [ebp-14h]
  unsigned int v56; // [esp+38h] [ebp-14h]
  _BYTE *v57; // [esp+3Ch] [ebp-10h]
  _BYTE *v58; // [esp+3Ch] [ebp-10h]
  int v59; // [esp+54h] [ebp+8h]

  _BitScanReverse(&v3, 0x1FFFFFFFu);
  v4 = 1 << v3;
  v5 = a2;
  if ( a2 > v4 )
    sub_4627A2((int)"invalid hash bucket count");
  v6 = *(this + 1);
  v59 = v6;
  _BitScanReverse(&v5, (v5 - 1) | 1);
  v7 = 1 << (v5 + 1);
  v43 = this + 3;
  sub_40B9C0((int)(this + 3), 2 * v7, v6);
  result = (_DWORD *)(v7 - 1);
  *(this + 7) = v7;
  *(this + 6) = v7 - 1;
  v9 = *(_DWORD **)*(this + 1);
  v10 = v9;
  if ( v9 != (_DWORD *)v6 )
  {
    while ( 1 )
    {
      v10 = (_DWORD *)*v10;
      v11 = v9[6];
      v52 = v11;
      v54 = v9 + 2;
      v51 = v9[7];
      if ( v51 > 0xF )
        v54 = (_DWORD *)v9[2];
      v12 = 0;
      v47 = v9[7];
      v13 = -2128831035;
      v14 = (_DWORD *)v59;
      v48 = v9[6];
      if ( v11 )
      {
        v15 = -2128831035;
        do
        {
          v16 = *((unsigned __int8 *)v54 + v12++);
          v15 = 16777619 * (v15 ^ v16);
        }
        while ( v12 < v11 );
        v11 = v9[6];
        v49 = v15;
        v14 = (_DWORD *)v59;
        v51 = v9[7];
        v47 = v51;
        v13 = v49;
        v52 = v11;
        v48 = v11;
      }
      result = (_DWORD *)(*v43 + 8 * (v13 & *(this + 6)));
      v50 = result;
      if ( (_DWORD *)*result == v14 )
      {
        *result = v9;
        goto LABEL_60;
      }
      v17 = (_DWORD *)result[1];
      v55 = v17 + 2;
      if ( v17[7] > 0xFu )
        v55 = (_DWORD *)v17[2];
      v18 = v9 + 2;
      v46 = v51;
      v14 = (_DWORD *)v59;
      v57 = v9 + 2;
      v45 = v11;
      if ( v51 > 0xF )
      {
        v18 = (_DWORD *)v9[2];
        v45 = v48;
        v46 = v47;
        v14 = (_DWORD *)v59;
        v57 = v18;
      }
      if ( v11 != v17[6] )
      {
LABEL_33:
        if ( (_DWORD *)*v50 == v17 )
        {
LABEL_55:
          v41 = (_DWORD *)v9[1];
          *v41 = v10;
          v32 = (_DWORD *)v10[1];
          *v32 = v17;
          v33 = (_DWORD *)v17[1];
          *v33 = v9;
          v17[1] = v32;
          v10[1] = v41;
          result = v50;
          v9[1] = v33;
          *v50 = v9;
          goto LABEL_61;
        }
        while ( 2 )
        {
          v17 = (_DWORD *)v17[1];
          v25 = v17 + 2;
          if ( v17[7] > 0xFu )
            v25 = (_DWORD *)*v25;
          v26 = v9 + 2;
          v58 = v9 + 2;
          if ( v51 > 0xF )
          {
            v26 = (_DWORD *)v9[2];
            v58 = v26;
          }
          v14 = (_DWORD *)v59;
          if ( v52 != v17[6] )
            goto LABEL_54;
          if ( !v52 )
            goto LABEL_56;
          v56 = v52 - 4;
          v14 = (_DWORD *)v59;
          if ( v52 < 4 )
          {
LABEL_43:
            if ( v56 != -4 )
              goto LABEL_44;
          }
          else
          {
            while ( *v26 == *v25 )
            {
              ++v25;
              v26 = v58 + 4;
              v20 = v56 < 4;
              v56 -= 4;
              v58 += 4;
              if ( v20 )
                goto LABEL_43;
            }
LABEL_44:
            v27 = *v58 < *(_BYTE *)v25;
            if ( *v58 != *(_BYTE *)v25
              || v56 != -3
              && ((v28 = v58[1], v27 = v28 < *((_BYTE *)v25 + 1), v28 != *((_BYTE *)v25 + 1))
               || v56 != -2
               && ((v29 = v58[2], v27 = v29 < *((_BYTE *)v25 + 2), v29 != *((_BYTE *)v25 + 2))
                || v56 != -1 && (v30 = v58[3], v27 = v30 < *((_BYTE *)v25 + 3), v30 != *((_BYTE *)v25 + 3)))) )
            {
              v31 = v27 ? -1 : 1;
LABEL_53:
              if ( !v31 )
              {
LABEL_56:
                v34 = (_DWORD *)v9[1];
                v35 = (_DWORD *)*v17;
                *v34 = v10;
                v36 = (_DWORD *)v10[1];
                *v36 = v35;
                result = (_DWORD *)v35[1];
                *result = v9;
                v35[1] = v36;
                v14 = (_DWORD *)v59;
                v10[1] = v34;
                v9[1] = result;
                goto LABEL_61;
              }
LABEL_54:
              if ( (_DWORD *)*v50 == v17 )
                goto LABEL_55;
              continue;
            }
          }
          break;
        }
        v31 = 0;
        goto LABEL_53;
      }
      if ( v11 )
        break;
LABEL_57:
      v37 = (_DWORD *)*v17;
      v42 = v37;
      if ( v37 != v9 )
      {
        v38 = (_DWORD *)v9[1];
        *v38 = v10;
        v39 = (_DWORD *)v10[1];
        *v39 = v37;
        v40 = (_DWORD *)v37[1];
        *v40 = v9;
        v42[1] = v39;
        v14 = (_DWORD *)v59;
        v10[1] = v38;
        v9[1] = v40;
      }
      result = v50;
LABEL_60:
      result[1] = v9;
LABEL_61:
      v9 = v10;
      if ( v10 == v14 )
        return result;
    }
    v20 = v11 < 4;
    v19 = v11 - 4;
    v53 = v19;
    if ( v20 )
    {
LABEL_22:
      if ( v19 == -4 )
        goto LABEL_31;
    }
    else
    {
      while ( 1 )
      {
        v14 = (_DWORD *)v59;
        if ( *v18 != *v55 )
          break;
        v57 += 4;
        ++v55;
        v20 = v19 < 4;
        v19 -= 4;
        v53 = v19;
        if ( v20 )
          goto LABEL_22;
        v18 = v57;
      }
    }
    v20 = *v57 < *(_BYTE *)v55;
    if ( *v57 != *(_BYTE *)v55
      || v53 != -3
      && ((v21 = v57[1], v20 = v21 < *((_BYTE *)v55 + 1), v14 = (_DWORD *)v59, v21 != *((_BYTE *)v55 + 1))
       || v53 != -2
       && ((v22 = v57[2], v20 = v22 < *((_BYTE *)v55 + 2), v14 = (_DWORD *)v59, v22 != *((_BYTE *)v55 + 2))
        || v53 != -1 && (v23 = v57[3], v20 = v23 < *((_BYTE *)v55 + 3), v23 != *((_BYTE *)v55 + 3)))) )
    {
      v24 = v20 ? -1 : 1;
      goto LABEL_32;
    }
LABEL_31:
    v24 = 0;
LABEL_32:
    v51 = v46;
    v52 = v45;
    if ( v24 )
      goto LABEL_33;
    goto LABEL_57;
  }
  return result;
}
