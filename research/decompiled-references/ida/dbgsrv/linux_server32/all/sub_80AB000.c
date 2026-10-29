/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AB000
// Address: 0x080AB000

//----- (080AB000) --------------------------------------------------------
int __cdecl sub_80AB000(int a1, int *a2, const char **a3, int a4)
{
  char *v4; // esi
  __int64 v5; // rax
  unsigned int v6; // edi
  __int16 *v7; // eax
  size_t v8; // ecx
  unsigned int v9; // edx
  char *v10; // eax
  unsigned int v11; // ebx
  __int16 *v12; // edi
  _BYTE *v13; // edi
  unsigned int v14; // edx
  char *v15; // eax
  unsigned int v16; // ecx
  const char *v17; // edi
  unsigned int v18; // eax
  char v19; // dl
  __int16 *v20; // esi
  _BYTE *v21; // esi
  unsigned int v22; // edx
  char *v23; // eax
  int v24; // ecx
  size_t v25; // eax
  int v26; // esi
  unsigned int v27; // edx
  char *v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // edi
  size_t v31; // edi
  unsigned int v32; // edx
  char *v33; // eax
  unsigned int v34; // ecx
  int v35; // edx
  int v36; // esi
  __int64 v38; // [esp+4h] [ebp-94h]
  int v39; // [esp+18h] [ebp-80h]
  char *v40; // [esp+1Ch] [ebp-7Ch]
  unsigned int v41; // [esp+20h] [ebp-78h]
  unsigned int *v42; // [esp+24h] [ebp-74h]
  const char *i; // [esp+28h] [ebp-70h]
  int v44; // [esp+2Ch] [ebp-6Ch]
  char *v45; // [esp+30h] [ebp-68h]
  const char **v46; // [esp+34h] [ebp-64h]
  int v47; // [esp+38h] [ebp-60h]
  int *v48; // [esp+3Ch] [ebp-5Ch]
  unsigned int v49; // [esp+40h] [ebp-58h]
  __int16 *v50; // [esp+44h] [ebp-54h]
  char *v51; // [esp+54h] [ebp-44h] BYREF
  unsigned int v52; // [esp+58h] [ebp-40h]
  unsigned int v53; // [esp+5Ch] [ebp-3Ch]
  char *v54; // [esp+60h] [ebp-38h] BYREF
  unsigned int v55; // [esp+64h] [ebp-34h]
  unsigned int v56; // [esp+68h] [ebp-30h]
  __int16 v57; // [esp+6Eh] [ebp-2Ah] BYREF
  char v58; // [esp+73h] [ebp-25h] BYREF
  unsigned int v59; // [esp+78h] [ebp-20h] BYREF

  v39 = a1;
  v48 = a2;
  v46 = a3;
  v59 = __readgsdword(0x14u);
  if ( !a4 || (v51 = nullptr, v53 = 0, a4 <= 0) )
  {
    v36 = 0;
    goto LABEL_64;
  }
  v40 = "";
  v50 = &v57;
  v42 = &v59;
  v45 = &v58;
  while ( 2 )
  {
    v52 = 0;
    v4 = v40;
    v49 = 0;
    v47 = 0;
    while ( 1 )
    {
      HIDWORD(v5) = 0;
      v44 = *v48;
      LODWORD(v5) = v44 - v47;
      v6 = (unsigned int)(v44 - v47) >> 31;
      if ( v44 - v47 < 0 )
        v5 = v47 - v44;
      v7 = (__int16 *)sub_80CDDF0(v50, (unsigned int)v42, v5 + 1, (unsigned __int64)(v5 + 1) >> 32);
      v8 = (char *)v7 - (char *)v50;
      if ( v7 != v50 )
      {
        v47 = v52;
        v9 = v8 + v52;
        if ( __CFADD__(v8, v52) )
        {
          if ( v52 > 0x7FFFFFFE )
          {
            if ( v47 != 0x7FFFFFFF )
              v52 = 0x7FFFFFFF;
            goto LABEL_12;
          }
          v9 = 0x7FFFFFFF;
        }
        v10 = v51;
        v11 = v47;
        if ( v53 < v9 )
        {
          i = (const char *)v8;
          v44 = v9;
          v10 = (char *)sub_80CF920((int)&v51, v51, v9, 1u);
          v11 = v52;
          v8 = (size_t)i;
          v51 = v10;
          v9 = v44;
        }
        i = (const char *)v8;
        v44 = v9;
        memset(&v10[v11], 0, v9 - v11);
        v8 = (size_t)i;
        v52 = v44;
LABEL_12:
        memcpy(&v51[v47], v50, v8);
      }
      LODWORD(v38) = v6;
      v12 = v50;
      v13 = (_BYTE *)(sub_80CDC90(v50, (unsigned int)v45, v38) - (_BYTE *)v12);
      if ( !v13 )
        goto LABEL_19;
      v47 = v52;
      v14 = (unsigned int)&v13[v52];
      if ( __CFADD__(v13, v52) )
      {
        if ( v52 > 0x7FFFFFFE )
        {
          if ( v47 != 0x7FFFFFFF )
            v52 = 0x7FFFFFFF;
          goto LABEL_18;
        }
        v14 = 0x7FFFFFFF;
      }
      v15 = v51;
      v16 = v47;
      if ( v53 < v14 )
      {
        v44 = v14;
        v15 = (char *)sub_80CF920((int)&v51, v51, v14, 1u);
        v16 = v52;
        v14 = v44;
        v51 = v15;
      }
      v44 = v14;
      memset(&v15[v16], 0, v14 - v16);
      v52 = v44;
LABEL_18:
      memcpy(&v51[v47], v50, (size_t)v13);
LABEL_19:
      v47 = *v48;
      v17 = *v46;
      v18 = 0;
      v19 = **v46;
      for ( i = *v46; v19; ++v18 )
      {
        if ( v4[v18] != v19 )
          break;
        v19 = *++v17;
      }
      v20 = v50;
      v21 = (_BYTE *)(sub_80CDC90(v50, (unsigned int)v45, v18) - (_BYTE *)v20);
      if ( v21 )
      {
        v44 = v52;
        v22 = (unsigned int)&v21[v52];
        if ( __CFADD__(v21, v52) )
        {
          if ( v52 > 0x7FFFFFFE )
          {
            if ( v44 != 0x7FFFFFFF )
              v52 = 0x7FFFFFFF;
            goto LABEL_28;
          }
          v22 = 0x7FFFFFFF;
        }
        v23 = v51;
        v24 = v44;
        if ( v53 < v22 )
        {
          v41 = v22;
          v23 = (char *)sub_80CF920((int)&v51, v51, v22, 1u);
          v24 = v52;
          v22 = v41;
          v51 = v23;
        }
        v41 = v22;
        memset(&v23[v24], 0, v22 - v24);
        v52 = v41;
LABEL_28:
        memcpy(&v51[v44], v50, (size_t)v21);
      }
      if ( !v17 )
      {
        v26 = v52;
        v44 = 1;
        v27 = v52 + 1;
        if ( v52 == -1 )
        {
          v17 = v40;
          v26 = -1;
LABEL_33:
          v52 = 0x7FFFFFFF;
          goto LABEL_34;
        }
        v17 = v40;
        goto LABEL_39;
      }
      v25 = strlen(v17);
      v26 = v52;
      v44 = v25 + 1;
      v27 = v52 + v25 + 1;
      if ( !__CFADD__(v52, v25 + 1) )
        goto LABEL_39;
      if ( v52 <= 0x7FFFFFFE )
      {
        v27 = 0x7FFFFFFF;
LABEL_39:
        v28 = v51;
        v29 = v26;
        if ( v53 < v27 )
        {
          v41 = v27;
          v28 = (char *)sub_80CF920((int)&v51, v51, v27, 1u);
          v29 = v52;
          v27 = v41;
          v51 = v28;
        }
        v41 = v27;
        memset(&v28[v29], 0, v27 - v29);
        v52 = v41;
        goto LABEL_34;
      }
      if ( v52 != 0x7FFFFFFF )
        goto LABEL_33;
LABEL_34:
      memcpy(&v51[v26], v17, v44);
      ++v49;
      ++v48;
      ++v46;
      if ( v52 > 0x100000 || v49 == a4 )
        break;
      v4 = (char *)i;
    }
    v30 = v49;
    a4 -= v49;
    sub_80BD060((int *)&v54, 50);
    sub_80A6580(&v54, v30);
    v31 = v52;
    if ( v52 )
    {
      v44 = (int)v51;
      v47 = v55;
      v32 = v52 + v55;
      if ( __CFADD__(v52, v55) )
      {
        if ( v55 <= 0x7FFFFFFE )
        {
          v33 = v54;
          v34 = v47;
          v32 = 0x7FFFFFFF;
          if ( v56 < 0x7FFFFFFF )
            goto LABEL_74;
          goto LABEL_55;
        }
        if ( v47 != 0x7FFFFFFF )
          v55 = 0x7FFFFFFF;
      }
      else
      {
        v33 = v54;
        v34 = v47;
        if ( v56 >= v32 )
          goto LABEL_55;
LABEL_74:
        i = (const char *)v32;
        v33 = (char *)sub_80CF920((int)&v54, v33, v32, 1u);
        v34 = v55;
        v32 = (unsigned int)i;
        v54 = v33;
LABEL_55:
        i = (const char *)v32;
        memset(&v33[v34], 0, v32 - v34);
        v55 = (unsigned int)i;
      }
      memcpy(&v54[v47], (const void *)v44, v31);
    }
    v35 = sub_80B7C10(v39 + 100, (int *)&v54, -1, nullptr);
    if ( v49 == v35 )
    {
      if ( v54 )
      {
        v55 = 0;
        sub_80CF780(v54);
      }
      if ( a4 <= 0 )
      {
        v36 = 0;
        goto LABEL_62;
      }
      continue;
    }
    break;
  }
  if ( v54 )
  {
    v55 = 0;
    sub_80CF780(v54);
  }
  v36 = 1;
LABEL_62:
  if ( v51 )
  {
    v52 = 0;
    sub_80CF780(v51);
  }
LABEL_64:
  if ( v59 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v36;
}
