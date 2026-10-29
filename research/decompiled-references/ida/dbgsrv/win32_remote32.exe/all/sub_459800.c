/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459800
// Address: 0x00459800

//----- (00459800) --------------------------------------------------------
int __cdecl sub_459800(int a1, int *a2, int *a3, _DWORD *a4, _DWORD *a5)
{
  int *v5; // esi
  int *v6; // edi
  int v7; // ecx
  int v8; // ebp
  int (__cdecl *v9)(int, int, int, unsigned __int16 *, int *); // eax
  int v10; // eax
  bool v11; // zf
  int v12; // ebp
  _DWORD *v13; // edi
  unsigned int v14; // edx
  int v15; // esi
  int v16; // ecx
  _DWORD *v17; // eax
  unsigned int v18; // eax
  _DWORD *v19; // esi
  int v20; // ecx
  _DWORD *v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  _DWORD *v24; // ebp
  int v25; // ecx
  int (__cdecl *v27)(int, _DWORD, _DWORD); // ecx
  int v28; // esi
  int v29; // eax
  _DWORD *v30; // edx
  int v31; // [esp-10h] [ebp-64h]
  int v32; // [esp+10h] [ebp-44h] BYREF
  _DWORD *v33; // [esp+14h] [ebp-40h]
  _DWORD *v34; // [esp+18h] [ebp-3Ch]
  int *v35; // [esp+1Ch] [ebp-38h]
  int v36; // [esp+20h] [ebp-34h]
  int v37; // [esp+24h] [ebp-30h]
  int *v38; // [esp+28h] [ebp-2Ch]
  int v39; // [esp+2Ch] [ebp-28h]
  unsigned __int16 v40; // [esp+30h] [ebp-24h] BYREF
  __int16 v41; // [esp+32h] [ebp-22h]

  v5 = a3;
  v6 = a2;
  v38 = a2;
  v35 = a3;
  v34 = a4;
  v33 = a5;
  if ( a2 && *a2 )
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( !*v5 )
        return 0;
      v8 = *(_DWORD *)(a1 + 40);
      v36 = *(_DWORD *)(a1 + 72);
      v9 = *(int (__cdecl **)(int, int, int, unsigned __int16 *, int *))(a1 + 24);
      v31 = *v6;
      v39 = v8;
      v32 = 16;
      v10 = v9(a1 + 16, v31, v7, &v40, &v32);
      v5 = v35;
      v37 = v10;
      if ( v10 == -1 )
      {
        v11 = (*(_DWORD *)(a1 + 52) & 4) == 0;
        *(_DWORD *)(a1 + 40) = v8;
        if ( v11 )
          return -1;
        ++*v6;
        --*v5;
      }
      else
      {
        v12 = v32;
        if ( v32 )
        {
          v13 = *(_DWORD **)(a1 + 44);
          LOWORD(v14) = v40;
          if ( v13 )
          {
            v15 = v40;
            if ( (unsigned __int16)(v40 + 10240) <= 0x3FFu )
              v15 = (v41 & 0x3FF) + (((v40 & 0x3FF) + 64) << 10);
            v16 = 0;
            if ( *v13 )
            {
              v17 = *(_DWORD **)(a1 + 44);
              while ( (v17[2] & 1) == 0 || v17[1] != v15 )
              {
                ++v16;
                v17 = &v13[3 * v16];
                if ( !*v17 )
                  goto LABEL_22;
              }
              v18 = v13[3 * v16];
              if ( v18 >= 0x10000 )
              {
                v12 = 2;
                v14 = ((v18 - 0x10000) >> 10) & 0x3FF | 0xD800;
                v41 = v18 & 0x3FF | 0xDC00;
              }
              else
              {
                LOWORD(v14) = v13[3 * v16];
                v12 = 1;
              }
              v32 = v12;
              v40 = v14;
            }
          }
LABEL_22:
          v19 = *(_DWORD **)(a1 + 76);
          if ( v19 )
          {
            v14 = (unsigned __int16)v14;
            if ( (unsigned __int16)(v40 + 10240) <= 0x3FFu )
              v14 = (v41 & 0x3FF) + (((v14 & 0x3FF) + 64) << 10);
            v20 = 0;
            if ( *v19 )
            {
              v21 = *(_DWORD **)(a1 + 76);
              while ( (v21[2] & 2) == 0 || *v21 != v14 )
              {
                ++v20;
                v21 = &v19[3 * v20];
                if ( !*v21 )
                  goto LABEL_35;
              }
              v22 = v19[3 * v20 + 1];
              if ( v22 >= 0x10000 )
              {
                v12 = 2;
                v40 = ((v22 - 0x10000) >> 10) & 0x3FF | 0xD800;
                v41 = v22 & 0x3FF | 0xDC00;
              }
              else
              {
                v40 = v22;
                v12 = 1;
              }
              v32 = v12;
            }
          }
LABEL_35:
          v23 = (*(int (__cdecl **)(int, unsigned __int16 *, int, _DWORD, _DWORD))(a1 + 60))(
                  a1 + 48,
                  &v40,
                  v12,
                  *v34,
                  *v33);
          if ( v23 == -1 )
          {
            if ( (*(_BYTE *)(a1 + 52) & 4) == 0 || *sub_46B984() == 7 )
            {
              *(_DWORD *)(a1 + 40) = v39;
              *(_DWORD *)(a1 + 72) = v36;
              return -1;
            }
            *(_DWORD *)(a1 + 72) = v36;
            v23 = 0;
          }
          v6 = v38;
          v24 = v34;
          v25 = v37;
          v5 = v35;
          *v38 += v37;
          *v24 += v23;
          *v5 -= v25;
          *v33 -= v23;
        }
        else
        {
          *v6 += v10;
          *v5 -= v10;
        }
      }
    }
  }
  if ( !a4 || !*a4 || (v27 = *(int (__cdecl **)(int, _DWORD, _DWORD))(a1 + 68)) == nullptr )
  {
LABEL_49:
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 72) = 0;
    return 0;
  }
  v28 = *(_DWORD *)(a1 + 72);
  v29 = v27(a1 + 48, *a4, *a5);
  if ( v29 != -1 )
  {
LABEL_48:
    v30 = v33;
    *a4 += v29;
    *v30 -= v29;
    goto LABEL_49;
  }
  if ( (*(_BYTE *)(a1 + 52) & 4) != 0 && *sub_46B984() != 7 )
  {
    v29 = 0;
    goto LABEL_48;
  }
  *(_DWORD *)(a1 + 72) = v28;
  return -1;
}
