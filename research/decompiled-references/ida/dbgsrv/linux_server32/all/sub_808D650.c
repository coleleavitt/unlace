/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808D650
// Address: 0x0808D650

//----- (0808D650) --------------------------------------------------------
int __cdecl sub_808D650(__m128i *a1, unsigned __int8 *a2, int a3, int a4, char a5)
{
  unsigned __int8 *v5; // edx
  unsigned __int8 v6; // al
  int v7; // eax
  int v8; // edi
  int *v9; // eax
  _DWORD *v10; // edi
  const char *v11; // edx
  const char *v12; // eax
  int v13; // eax
  _DWORD *v14; // edx
  int v15; // eax
  _DWORD *v16; // ecx
  int v17; // edx
  int result; // eax
  int v19; // edx
  void *v20; // eax
  __int64 v21; // xmm1_8
  unsigned int v22; // edx
  unsigned int v23; // ecx
  int v24; // eax
  const void *v25; // edi
  unsigned int v26; // ecx
  void *v27; // eax
  size_t v28; // edx
  const void *v29; // ecx
  char *v30; // ecx
  int v31; // eax
  char v32; // al
  int v33; // ebx
  char *s2; // [esp+4h] [ebp-8Ch]
  int *v35; // [esp+8h] [ebp-88h]
  int v36; // [esp+Ch] [ebp-84h]
  int v37; // [esp+18h] [ebp-78h]
  int v38; // [esp+1Ch] [ebp-74h]
  size_t v39; // [esp+1Ch] [ebp-74h]
  int v40; // [esp+24h] [ebp-6Ch]
  _DWORD *v41; // [esp+24h] [ebp-6Ch]
  unsigned __int8 *v42; // [esp+24h] [ebp-6Ch]
  size_t v43; // [esp+24h] [ebp-6Ch]
  int v44; // [esp+24h] [ebp-6Ch]
  unsigned int v45; // [esp+24h] [ebp-6Ch]
  int v46; // [esp+24h] [ebp-6Ch]
  void *ptr; // [esp+30h] [ebp-60h] BYREF
  __int64 v48; // [esp+34h] [ebp-5Ch]
  char v49; // [esp+40h] [ebp-50h] BYREF
  __int128 v50; // [esp+44h] [ebp-4Ch]
  char v51[32]; // [esp+54h] [ebp-3Ch] BYREF
  unsigned int v52; // [esp+74h] [ebp-1Ch]

  v52 = __readgsdword(0x14u);
  if ( !a1 )
    goto LABEL_23;
  v5 = a2;
  if ( !a2 )
    goto LABEL_23;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == 7 )
    {
      v42 = v5;
      v19 = *((_DWORD *)v5 + 2);
      if ( !v19 )
      {
LABEL_29:
        ptr = nullptr;
        v48 = 0;
LABEL_30:
        sub_8089430((int)a1);
        v20 = ptr;
        v21 = v48;
        a1->m128i_i8[0] = 7;
        a1->m128i_i32[1] = (__int32)v20;
        result = 0;
        a1->m128i_i64[1] = v21;
        goto LABEL_24;
      }
      v22 = v19 - 1;
      if ( a3 >= 0 || (a3 += v22, a3 >= 0) )
      {
        v23 = v22;
        if ( v22 > a3 )
          v23 = a3;
        if ( (a5 & 1) != 0 )
        {
          if ( (int)(v23 + 1) < 0 )
            goto LABEL_29;
          if ( v22 >= v23 + 1 )
          {
            v22 = 1;
            v29 = (const void *)(*((_DWORD *)v42 + 1) + v23);
            ptr = nullptr;
            v48 = 0;
            v25 = v29;
            goto LABEL_41;
          }
        }
        else
        {
          if ( a4 < 0 )
          {
            a4 += v22;
            if ( a4 < 0 )
              goto LABEL_29;
          }
          if ( v22 > a4 )
            v22 = a4;
        }
        if ( v22 < v23 )
          goto LABEL_29;
      }
      else
      {
        if ( (a5 & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_29;
          v26 = 2;
          v22 = 1;
          v25 = *((const void **)v42 + 1);
          ptr = nullptr;
          v48 = 0;
          goto LABEL_56;
        }
        if ( a4 >= 0 )
        {
          if ( v22 > a4 )
            v22 = a4;
          v25 = *((const void **)v42 + 1);
          ptr = nullptr;
          v48 = 0;
          v26 = v22 + 1;
          if ( !v22 )
            goto LABEL_30;
          goto LABEL_56;
        }
        if ( (int)(a4 + v22) < 0 )
          goto LABEL_29;
        if ( v22 > a4 + v22 )
          v22 += a4;
        v23 = 0;
      }
      v24 = *((_DWORD *)v42 + 1);
      ptr = nullptr;
      v48 = 0;
      v22 -= v23;
      if ( !v22 )
        goto LABEL_30;
      v25 = (const void *)(v23 + v24);
LABEL_41:
      v26 = v22 + 1;
      if ( v22 == -1 )
      {
        v27 = nullptr;
        v28 = -1;
LABEL_43:
        LODWORD(v48) = v26;
        v43 = v28;
        memmove(v27, v25, v28);
        *((_BYTE *)ptr + v43) = 0;
        goto LABEL_30;
      }
LABEL_56:
      v39 = v22;
      v45 = v26;
      v27 = sub_80CF920((int)&ptr, nullptr, v26, 1u);
      v26 = v45;
      v28 = v39;
      ptr = v27;
      goto LABEL_43;
    }
    if ( v6 != 10 )
      break;
    v5 = sub_8089920(v5, 0);
    if ( !v5 )
    {
      result = sub_80C7850();
      goto LABEL_24;
    }
  }
  v40 = (int)v5;
  if ( v6 != 5 )
  {
LABEL_23:
    result = sub_80C7880(1568);
    goto LABEL_24;
  }
  if ( (a5 & 1) != 0 )
  {
    sub_80D3B60(v51, 32, "%u", a3);
    result = sub_808CD90(a1, v40, v51, 0);
    goto LABEL_24;
  }
  v49 = 2;
  v50 = 0;
  v7 = sub_808AAF0((int)&v49, 0);
  if ( v7 )
  {
LABEL_45:
    v44 = v7;
    sub_8089430((int)&v49);
    result = v44;
    goto LABEL_24;
  }
  v8 = *(_DWORD *)(v40 + 4);
  ptr = nullptr;
  v48 = 0;
  ptr = sub_80CF920((int)&ptr, nullptr, 3u, 1u);
  LODWORD(v48) = 3;
  *(_WORD *)ptr = -209;
  *((_BYTE *)ptr + 2) = 0;
  v38 = v8 + 4;
  s2 = (char *)ptr;
  if ( !*(_DWORD *)(v8 + 8) )
  {
    if ( ptr )
    {
      LODWORD(v48) = 0;
      sub_80CF780(ptr);
    }
    goto LABEL_51;
  }
  v9 = &dword_80DDFD8;
  v41 = *(_DWORD **)(v8 + 8);
  if ( (_DWORD)v48 )
    v9 = (int *)ptr;
  v37 = v48;
  v35 = v9;
  v36 = v8 + 4;
  while ( 2 )
  {
    v15 = v41[5];
    if ( v37 )
    {
      if ( !v15 )
      {
        v10 = v41;
        v11 = s2;
        v12 = (const char *)&dword_80DDFD8;
        goto LABEL_14;
      }
LABEL_22:
      v10 = v41;
      v11 = (const char *)v35;
      v12 = (const char *)v41[4];
LABEL_14:
      v13 = strcmp(v12, v11);
      v14 = (_DWORD *)v41[2];
      v41 = (_DWORD *)v41[3];
      if ( v13 >= 0 )
      {
        v36 = (int)v10;
        v41 = v14;
      }
      if ( !v41 )
      {
        v46 = v36;
        goto LABEL_58;
      }
      continue;
    }
    break;
  }
  v16 = v41;
  if ( v15 )
  {
LABEL_21:
    v41 = v16;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v17 = v16[2];
    if ( !v17 )
      break;
    v36 = (int)v16;
    v16 = (_DWORD *)v16[2];
    if ( *(_DWORD *)(v17 + 20) )
      goto LABEL_21;
  }
  v46 = (int)v16;
LABEL_58:
  if ( s2 )
  {
    LODWORD(v48) = 0;
    sub_80CF780(s2);
  }
  for ( ; v38 != v46; v46 = std::_Rb_tree_increment(v46) )
  {
    if ( *(_DWORD *)(v46 + 20) )
    {
      v30 = *(char **)(v46 + 16);
      v31 = (unsigned __int8)*v30 - 58;
      if ( *v30 == 58 )
        v31 = (unsigned __int8)v30[1];
      if ( v31 >= 0 )
        break;
      v32 = *v30;
      if ( *v30 )
      {
        v33 = *(_DWORD *)(v46 + 16);
        if ( v32 == 48 )
        {
          if ( !v30[1] )
          {
LABEL_69:
            sub_80D3B90((int)v30, "%u", (int)&ptr);
            if ( (unsigned int)ptr >= a3 && ((unsigned int)ptr < a4 || a4 == 0x7FFFFFFF) )
            {
              sub_80D3B60(v51, 32, "%u", (int)ptr - a3);
              v7 = sub_808C1E0((int)&v49, v51, (unsigned __int8 *)(v46 + 28), 0);
              if ( v7 )
                goto LABEL_45;
            }
          }
        }
        else
        {
          while ( (unsigned __int8)(v32 - 48) <= 9u )
          {
            v32 = *(_BYTE *)++v33;
            if ( !v32 )
              goto LABEL_69;
          }
        }
      }
    }
  }
LABEL_51:
  sub_8084300(a1, (__m128i *)&v49);
  sub_8089430((int)&v49);
  result = 0;
LABEL_24:
  if ( v52 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
