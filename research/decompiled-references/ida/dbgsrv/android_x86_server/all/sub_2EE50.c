/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2EE50
// Address: 0x0002EE50

//----- (0002EE50) --------------------------------------------------------
_DWORD *__userpurge sub_2EE50@<eax>(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, int a7)
{
  int v7; // edx
  _DWORD *v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  _DWORD *v13; // ecx
  _DWORD *v14; // edi
  _DWORD *v15; // edx
  int v16; // eax
  char *v17; // esi
  int v18; // eax
  int v19; // ecx
  bool v20; // cc
  _DWORD *v21; // eax
  int v22; // esi
  int v23; // eax
  unsigned int v24; // ecx
  signed int v25; // edi
  int v26; // edi
  int v27; // ecx
  int v28; // ecx
  _DWORD *v29; // ecx
  int v31; // [esp+4h] [ebp-38h]
  _DWORD *v32; // [esp+8h] [ebp-34h]
  _DWORD *v33; // [esp+Ch] [ebp-30h]
  _DWORD *v34; // [esp+10h] [ebp-2Ch]
  _DWORD *v35; // [esp+14h] [ebp-28h]
  _DWORD *v36; // [esp+18h] [ebp-24h]
  int v37; // [esp+1Ch] [ebp-20h]
  int v38; // [esp+1Ch] [ebp-20h]
  _DWORD *v39; // [esp+20h] [ebp-1Ch]
  int v40; // [esp+24h] [ebp-18h]
  int v41; // [esp+28h] [ebp-14h]
  _DWORD *v42; // [esp+48h] [ebp+Ch]

  if ( a5 == a3 || (v7 = 93 * (a4 - a2) - 1171354717 * (((int)a5 - *a4) >> 2) + ((int)a3 - *a2) / -44, v7 <= 0) )
  {
    v29 = a6;
    v9 = a7;
  }
  else
  {
    v36 = a3;
    v8 = a2;
    v33 = a6;
    v9 = a7;
    do
    {
      v32 = v8;
      v10 = *v8 + 4092;
      v11 = -1171354717 * ((v10 - (int)v36) >> 2);
      v12 = (int)&v36[11 * v7];
      if ( v11 > v7 )
        v11 = v7;
      else
        v12 = v10;
      v34 = (_DWORD *)v12;
      v37 = v7;
      v40 = v11;
      if ( v36 != (_DWORD *)v12 )
      {
        v13 = v33;
        v14 = v36;
        v15 = v34;
        do
        {
          while ( 1 )
          {
            v39 = v13;
            v31 = v9;
            v16 = *v13 + 4092 - v9;
            v17 = (char *)v14 + v16;
            v18 = -1171354717 * (v16 >> 2);
            v19 = -1171354717 * (v15 - v14);
            v20 = v19 <= v18;
            if ( v19 > v18 )
              v19 = v18;
            v21 = v17;
            v41 = v19;
            if ( v20 )
              v21 = v15;
            v35 = v21;
            if ( v14 != v21 )
            {
              v22 = v31;
              do
              {
                copy_debug_event(v22, v14);
                v14 += 11;
                v22 += 44;
              }
              while ( v35 != v14 );
            }
            if ( v41 )
              break;
            v9 = v31;
            v15 = v34;
            v14 = v35;
            v13 = v39;
            if ( v35 == v34 )
              goto LABEL_23;
          }
          v23 = (v31 - *v39) >> 2;
          v24 = v41 - 1171354717 * v23;
          if ( ((v24 & 0x80000000) != 0) ^ __OFADD__(v41, -1171354717 * v23) | (v41 == 1171354717 * v23) )
          {
            v25 = 92 - v24;
            v13 = &v39[(int)(92 - v24) / -93];
            v33 = v13;
            v9 = *v13 + 44 * (93 * (v25 / 93) - v25) + 4048;
          }
          else
          {
            v9 = v39[v24 / 0x5D] + 44 * (v24 % 0x5D);
            v33 = &v39[v24 / 0x5D];
            v13 = v33;
          }
          v15 = v34;
          v14 = v35;
        }
        while ( v35 != v34 );
      }
LABEL_23:
      v26 = v37 - v40;
      if ( v40 )
      {
        v27 = v40 - 1171354717 * (((int)v36 - *v32) >> 2);
        v38 = v37 - v40;
        if ( v27 <= 0 )
        {
          v42 = &v32[(92 - v27) / -93];
          v28 = *v42 + 44 * (93 * ((92 - v27) / 93) - (92 - v27)) + 4048;
        }
        else
        {
          v42 = &v32[v27 / 0x5Du];
          v28 = *v42 + 44 * (v27 % 0x5Du);
        }
        v32 = v42;
        v36 = (_DWORD *)v28;
        v26 = v38;
      }
      v20 = v26 <= 0;
      v7 = v26;
      v8 = v32;
    }
    while ( !v20 );
    v29 = v33;
  }
  *a1 = v29;
  a1[1] = v9;
  return a1;
}
