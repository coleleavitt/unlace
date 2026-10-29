/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4586D0
// Address: 0x00000000004586D0

//----- (00000000004586D0) ----------------------------------------------------
__int64 __fastcall sub_4586D0(__int64 a1, __int64 a2)
{
  __int64 v2; // x3
  __int64 v3; // x8
  char v4; // w2
  __int64 v5; // x4
  void *v6; // x5
  char v7; // w2
  __int64 v8; // x8
  __int64 v9; // x3
  void *v10; // x3
  __int64 v11; // x3
  char *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x22
  __int64 v15; // x21
  char *v16; // x20
  char *v17; // x0
  __int64 v18; // x24
  __int64 v19; // x19
  char *v20; // x2
  void *v21; // x0
  void *ptr; // [xsp+48h] [xbp-1F8h]
  void *ptra; // [xsp+48h] [xbp-1F8h]
  __int64 v26; // [xsp+50h] [xbp-1F0h]
  struct __jmp_buf_tag *env; // [xsp+58h] [xbp-1E8h]
  __int64 v28; // [xsp+60h] [xbp-1E0h]
  __int64 v29; // [xsp+68h] [xbp-1D8h]
  __int64 v30; // [xsp+70h] [xbp-1D0h]
  char v31; // [xsp+78h] [xbp-1C8h]
  char v32; // [xsp+7Ch] [xbp-1C4h]
  __int64 v33; // [xsp+80h] [xbp-1C0h]
  unsigned int v35; // [xsp+9Ch] [xbp-1A4h]
  char *v36; // [xsp+A0h] [xbp-1A0h] BYREF
  void *v37; // [xsp+A8h] [xbp-198h]
  __int64 v38; // [xsp+B0h] [xbp-190h]
  __int64 v39; // [xsp+B8h] [xbp-188h]
  void *v40; // [xsp+C0h] [xbp-180h] BYREF
  __int64 v41; // [xsp+C8h] [xbp-178h]
  __int64 v42; // [xsp+D0h] [xbp-170h]
  __int16 v43; // [xsp+D8h] [xbp-168h]
  __int64 v44; // [xsp+E0h] [xbp-160h]
  char v45; // [xsp+E8h] [xbp-158h]
  __int64 v46; // [xsp+F0h] [xbp-150h]
  __int64 v47; // [xsp+F8h] [xbp-148h]
  _BYTE dest[312]; // [xsp+100h] [xbp-140h] BYREF

  v2 = *(_QWORD *)(a1 + 672);
  v40 = nullptr;
  v41 = 0;
  v26 = v2;
  env = (struct __jmp_buf_tag *)(a1 + 360);
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  if ( v2 )
    memcpy(dest, (const void *)(a1 + 360), sizeof(dest));
  v3 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = sub_450C48;
  ptr = *(void **)(a1 + 264);
  v4 = *(_BYTE *)(a1 + 144);
  *(_QWORD *)(a1 + 672) = &v40;
  v31 = v4;
  v33 = *(_QWORD *)(a1 + 272);
  v6 = *(void **)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 64);
  v28 = *(_QWORD *)(a1 + 280);
  v29 = v3;
  v7 = *(_BYTE *)(a1 + 84);
  v8 = *(_QWORD *)(a1 + 224);
  v9 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v30 = v8;
  v37 = v6;
  *(_BYTE *)(a1 + 84) = 1;
  *(_BYTE *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 224) = &v36;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 680) = 0;
  v32 = v7;
  v36 = &byte_4B31F0;
  v38 = v5;
  v39 = v9;
  v35 = _setjmp(env);
  if ( v35 )
    sub_4869C8(v35);
  else
    sub_4585C0(a1, a2, 1);
  if ( !v35 && (v43 != 1 || *(_BYTE *)(a1 + 680)) )
    v35 = sub_4869C8(47);
  *(_BYTE *)(a1 + 84) = v32;
  *(_BYTE *)(a1 + 144) = v31;
  *(_QWORD *)(a1 + 216) = v29;
  *(_QWORD *)(a1 + 224) = v30;
  v10 = *(void **)(a1 + 264);
  *(_QWORD *)(a1 + 264) = ptr;
  *(_QWORD *)(a1 + 272) = v33;
  *(_QWORD *)(a1 + 280) = v28;
  ptra = v10;
  while ( *(_QWORD *)(a1 + 64) )
    sub_450E98(a1);
  v11 = v38;
  v12 = *(char **)(a1 + 56);
  v13 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 56) = v37;
  *(_QWORD *)(a1 + 64) = v11;
  *(_QWORD *)(a1 + 72) = v39;
  v37 = v12;
  v38 = 0;
  v39 = v13;
  if ( v26 )
    memcpy(env, dest, 0x138u);
  *(_QWORD *)(a1 + 672) = v26;
  if ( ptra )
  {
    j__free(ptra);
    v12 = (char *)v37;
    if ( !v37 )
      goto LABEL_30;
    v14 = v38;
    if ( v38 )
    {
      v15 = 0;
      while ( 1 )
      {
        v16 = &v12[56 * v15];
        v17 = *(char **)v16;
        if ( *(_QWORD *)v16 )
        {
          v18 = *((_QWORD *)v16 + 1);
          if ( v18 )
          {
            v19 = 0;
            while ( 1 )
            {
              v20 = &v17[24 * v19];
              v21 = *(void **)v20;
              if ( *(_QWORD *)v20 )
              {
                *((_QWORD *)v20 + 1) = 0;
                j__free(v21);
              }
              if ( v18 == ++v19 )
                break;
              v17 = *(char **)v16;
            }
            v17 = *(char **)v16;
          }
          *((_QWORD *)v16 + 1) = 0;
          j__free(v17);
        }
        if ( v14 == ++v15 )
          break;
        v12 = (char *)v37;
      }
      v12 = (char *)v37;
    }
    goto LABEL_29;
  }
  if ( v12 )
  {
LABEL_29:
    v38 = 0;
    j__free(v12);
  }
LABEL_30:
  if ( v40 )
  {
    v41 = 0;
    j__free(v40);
  }
  return v35;
}
// 4B31F0: using guessed type char byte_4B31F0;
