/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4315E0
// Address: 0x004315E0

//----- (004315E0) --------------------------------------------------------
_DWORD *__thiscall sub_4315E0(int *this, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  int v5; // esi
  int v6; // edi
  _DWORD *result; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // edx
  unsigned int v10; // ebx
  unsigned int v11; // edi
  int v12; // ebp
  int v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // ebp
  _DWORD *v16; // edi
  unsigned int v17; // ebx
  bool v18; // cf
  unsigned __int8 v19; // bl
  unsigned __int8 v20; // bl
  unsigned __int8 v21; // bl
  int v22; // edi
  _DWORD *v23; // edi
  _DWORD *v24; // ebp
  unsigned int v25; // ebx
  bool v26; // cf
  unsigned __int8 v27; // bl
  unsigned __int8 v28; // bl
  unsigned __int8 v29; // bl
  int v30; // edi
  _DWORD *v31; // ebp
  _DWORD *v32; // ebx
  _DWORD *v33; // edi
  _DWORD *v34; // ebx
  _DWORD *v35; // ebp
  _DWORD *v36; // edi
  _DWORD *v37; // ebp
  _DWORD *v38; // ebx
  _DWORD *v39; // edi
  _DWORD *v40; // eax
  unsigned int v41; // [esp+4h] [ebp-28h]
  unsigned int v42; // [esp+4h] [ebp-28h]
  unsigned int v43; // [esp+8h] [ebp-24h]
  _DWORD *v44; // [esp+Ch] [ebp-20h]
  int v45; // [esp+10h] [ebp-1Ch]
  unsigned int v46; // [esp+14h] [ebp-18h]
  unsigned int v47; // [esp+18h] [ebp-14h]
  unsigned int v48; // [esp+1Ch] [ebp-10h]
  unsigned int v49; // [esp+20h] [ebp-Ch]
  int *v50; // [esp+24h] [ebp-8h]
  _DWORD *v51; // [esp+30h] [ebp+4h]
  _BYTE *v52; // [esp+30h] [ebp+4h]
  unsigned int v53; // [esp+30h] [ebp+4h]

  _BitScanReverse(&v3, 0x1FFFFFFFu);
  v50 = this;
  if ( a2 > 1 << v3 )
    sub_4627A2((int)"invalid hash bucket count");
  _BitScanReverse(&v4, (a2 - 1) | 1);
  v5 = *(this + 1);
  v45 = v5;
  v6 = 1 << (v4 + 1);
  sub_40B9C0((int)(this + 3), 2 * v6, v5);
  result = (_DWORD *)(v6 - 1);
  *(this + 7) = v6;
  *(this + 6) = v6 - 1;
  v8 = *(_DWORD **)*(this + 1);
  v9 = v8;
  if ( v8 != (_DWORD *)v5 )
  {
    while ( 1 )
    {
      v10 = v8[6];
      v9 = (_DWORD *)*v9;
      v41 = v10;
      v51 = v8 + 2;
      v43 = v8[7];
      if ( v43 > 0xF )
        v51 = (_DWORD *)v8[2];
      v11 = 0;
      v46 = v8[6];
      v47 = v8[7];
      v12 = -2128831035;
      if ( v10 )
      {
        do
        {
          v13 = *((unsigned __int8 *)v51 + v11++);
          v12 = 16777619 * (v12 ^ v13);
        }
        while ( v11 < v10 );
        v10 = v8[6];
        v5 = v45;
        v41 = v10;
        v43 = v8[7];
        v46 = v10;
        v47 = v43;
      }
      result = (_DWORD *)(v50[3] + 8 * (v12 & v50[6]));
      v44 = result;
      if ( *result == v5 )
      {
        *result = v8;
        goto LABEL_59;
      }
      v14 = (_DWORD *)result[1];
      v15 = v14 + 2;
      if ( v14[7] > 0xFu )
        v15 = (_DWORD *)*v15;
      v49 = v10;
      v16 = v8 + 2;
      v52 = v8 + 2;
      v48 = v43;
      v5 = v45;
      if ( v43 > 0xF )
      {
        v16 = (_DWORD *)v8[2];
        v49 = v46;
        v48 = v47;
        v5 = v45;
        v52 = v16;
      }
      if ( v10 != v14[6] )
        goto LABEL_31;
      if ( v10 )
        break;
LABEL_56:
      v37 = (_DWORD *)*v14;
      if ( (_DWORD *)*v14 != v8 )
      {
        v38 = (_DWORD *)v8[1];
        *v38 = v9;
        v39 = (_DWORD *)v9[1];
        *v39 = v37;
        v40 = (_DWORD *)v37[1];
        *v40 = v8;
        v37[1] = v39;
        v9[1] = v38;
        v8[1] = v40;
      }
      result = v44;
LABEL_59:
      result[1] = v8;
LABEL_60:
      v8 = v9;
      if ( v9 == (_DWORD *)v5 )
        return result;
    }
    v18 = v10 < 4;
    v17 = v10 - 4;
    v42 = v17;
    if ( v18 )
    {
LABEL_19:
      if ( v17 == -4 )
        goto LABEL_28;
    }
    else
    {
      while ( *v16 == *v15 )
      {
        ++v15;
        v16 = v52 + 4;
        v18 = v17 < 4;
        v17 -= 4;
        v52 += 4;
        v42 = v17;
        if ( v18 )
          goto LABEL_19;
      }
    }
    v18 = *v52 < *(_BYTE *)v15;
    if ( *v52 != *(_BYTE *)v15
      || v42 != -3
      && ((v19 = v52[1], v18 = v19 < *((_BYTE *)v15 + 1), v19 != *((_BYTE *)v15 + 1))
       || v42 != -2
       && ((v20 = v52[2], v18 = v20 < *((_BYTE *)v15 + 2), v20 != *((_BYTE *)v15 + 2))
        || v42 != -1 && (v21 = v52[3], v18 = v21 < *((_BYTE *)v15 + 3), v21 != *((_BYTE *)v15 + 3)))) )
    {
      v22 = v18 ? -1 : 1;
      goto LABEL_29;
    }
LABEL_28:
    v22 = 0;
LABEL_29:
    v43 = v48;
    v41 = v49;
    if ( v22 )
    {
      v10 = v49;
LABEL_31:
      if ( (_DWORD *)*v44 == v14 )
      {
LABEL_54:
        v31 = (_DWORD *)v8[1];
        *v31 = v9;
        v32 = (_DWORD *)v9[1];
        *v32 = v14;
        v33 = (_DWORD *)v14[1];
        *v33 = v8;
        v14[1] = v32;
        result = v44;
        v9[1] = v31;
        v8[1] = v33;
        *v44 = v8;
        goto LABEL_60;
      }
      while ( 2 )
      {
        v14 = (_DWORD *)v14[1];
        v23 = v14 + 2;
        if ( v14[7] > 0xFu )
          v23 = (_DWORD *)*v23;
        v24 = v8 + 2;
        if ( v43 > 0xF )
          v24 = (_DWORD *)v8[2];
        if ( v10 == v14[6] )
        {
          if ( !v10 )
            goto LABEL_55;
          v18 = v10 < 4;
          v25 = v10 - 4;
          v53 = v25;
          if ( v18 )
          {
LABEL_41:
            if ( v25 != -4 )
              goto LABEL_42;
          }
          else
          {
            while ( *v24 == *v23 )
            {
              ++v24;
              ++v23;
              v18 = v53 < 4;
              v25 = v53 - 4;
              v53 -= 4;
              if ( v18 )
                goto LABEL_41;
            }
LABEL_42:
            v26 = *(_BYTE *)v24 < *(_BYTE *)v23;
            if ( *(_BYTE *)v24 != *(_BYTE *)v23
              || v53 != -3
              && ((v27 = *((_BYTE *)v24 + 1), v26 = v27 < *((_BYTE *)v23 + 1), v27 != *((_BYTE *)v23 + 1))
               || v53 != -2
               && ((v28 = *((_BYTE *)v24 + 2), v26 = v28 < *((_BYTE *)v23 + 2), v28 != *((_BYTE *)v23 + 2))
                || v53 != -1 && (v29 = *((_BYTE *)v24 + 3), v26 = v29 < *((_BYTE *)v23 + 3), v29 != *((_BYTE *)v23 + 3)))) )
            {
              v30 = v26 ? -1 : 1;
              goto LABEL_51;
            }
          }
          v30 = 0;
LABEL_51:
          if ( !v30 )
          {
LABEL_55:
            v34 = (_DWORD *)v8[1];
            v35 = (_DWORD *)*v14;
            *v34 = v9;
            v36 = (_DWORD *)v9[1];
            *v36 = v35;
            result = (_DWORD *)v35[1];
            *result = v8;
            v35[1] = v36;
            v9[1] = v34;
            v8[1] = result;
            goto LABEL_60;
          }
          v10 = v41;
        }
        if ( (_DWORD *)*v44 == v14 )
          goto LABEL_54;
        continue;
      }
    }
    goto LABEL_56;
  }
  return result;
}
