/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D3A0
// Address: 0x0005D3A0

//----- (0005D3A0) --------------------------------------------------------
char __cdecl sub_5D3A0(int a1, char *a2, int a3, int a4, char *a5, char *a6, int a7)
{
  int v7; // esi
  int v8; // ecx
  _DWORD *v9; // eax
  char *v11; // edi
  int v12; // esi
  int v13; // eax
  size_t v14; // edi
  int v15; // esi
  _DWORD *v16; // ecx
  void *v17; // eax
  _DWORD *v18; // esi
  char *v19; // ecx
  char v20; // al
  char *v21; // eax
  const char *v22; // edx
  size_t v23; // ecx
  _DWORD *v24; // edx
  int v25; // eax
  int v26; // edi
  unsigned int v27; // esi
  _BYTE *v28; // eax
  const char *v29; // eax
  int v30; // ecx
  _DWORD *v31; // edx
  int v32; // eax
  int v33; // edi
  unsigned int v34; // esi
  _BYTE *v35; // eax
  int v36; // eax
  int v38; // [esp+8h] [ebp-84h]
  const char *v39; // [esp+8h] [ebp-84h]
  int v40; // [esp+Ch] [ebp-80h]
  int v41; // [esp+Ch] [ebp-80h]
  char v42; // [esp+10h] [ebp-7Ch]
  size_t v43; // [esp+14h] [ebp-78h]
  int v44; // [esp+18h] [ebp-74h] BYREF
  void *v45; // [esp+1Ch] [ebp-70h]
  int v46; // [esp+20h] [ebp-6Ch]
  int v47; // [esp+24h] [ebp-68h]
  int v48; // [esp+28h] [ebp-64h]
  int v49; // [esp+30h] [ebp-5Ch] BYREF
  void *v50; // [esp+34h] [ebp-58h]
  unsigned int v51; // [esp+38h] [ebp-54h]
  int v52; // [esp+3Ch] [ebp-50h]
  int v53; // [esp+40h] [ebp-4Ch]
  int v54; // [esp+48h] [ebp-44h] BYREF
  void *v55; // [esp+4Ch] [ebp-40h]
  int v56; // [esp+50h] [ebp-3Ch]
  int v57; // [esp+54h] [ebp-38h]
  int v58; // [esp+58h] [ebp-34h]
  int v59; // [esp+60h] [ebp-2Ch] BYREF
  char *v60; // [esp+64h] [ebp-28h]
  int v61; // [esp+68h] [ebp-24h]
  int v62; // [esp+6Ch] [ebp-20h]
  int v63; // [esp+70h] [ebp-1Ch]
  unsigned int v64; // [esp+78h] [ebp-14h]

  v7 = a4;
  v64 = __readgsdword(0x14u);
  v8 = *(_DWORD *)(a1 + 40);
  if ( *(_DWORD *)(a1 + 44) >= (unsigned int)(v8 + 1) )
  {
    v9 = *(_DWORD **)(a1 + 36);
  }
  else
  {
    v9 = qvector_reserve(a1 + 36, *(void **)(a1 + 36), v8 + 1, 4u);
    *(_DWORD *)(a1 + 36) = v9;
    v8 = *(_DWORD *)(a1 + 40);
  }
  v9[v8] = 0;
  ++*(_DWORD *)(a1 + 40);
  if ( a4 > 0 )
  {
    do
    {
      sub_4E740(a1 + 12, a5);
      a5 += 20;
      --v7;
    }
    while ( v7 );
  }
  v11 = a6;
  v12 = a1;
  v42 = sub_5E940((void **)a1, a6, a2, a3);
  if ( !v42 )
  {
    if ( !a7 )
      goto LABEL_75;
    v38 = *(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20;
    v13 = __strlen_chk("Runtime error", 14);
    if ( v13 )
    {
      v14 = v13;
      v15 = v13 + 1;
      v16 = (_DWORD *)a7;
      if ( *(_DWORD *)(a7 + 8) >= (unsigned int)(v13 + 1) )
      {
        v17 = *(void **)a7;
      }
      else
      {
        v17 = qvector_reserve(a7, *(void **)a7, v13 + 1, 1u);
        v16 = (_DWORD *)a7;
        *(_DWORD *)a7 = v17;
      }
      v16[1] = v15;
      v18 = v16;
      memmove(v17, "Runtime error", v14);
      *(_BYTE *)(*v18 + v14) = 0;
    }
    else
    {
      *(_DWORD *)(a7 + 4) = 0;
    }
    LOBYTE(v59) = 2;
    v61 = 0;
    v60 = nullptr;
    v63 = 0;
    v62 = 0;
    LOBYTE(v54) = 2;
    v56 = 0;
    v55 = nullptr;
    v58 = 0;
    v57 = 0;
    get_idcv_attr((int)&v54, v38, "line", 0);
    get_idcv_attr((int)&v59, v38, "file", 0);
    if ( (_BYTE)v54 == 2 && (int)v55 > 0 && (_BYTE)v59 == 7 )
    {
      if ( v61 )
        v19 = v60;
      else
        v19 = byte_EF875;
      v22 = "<unknown>";
      if ( *v19 )
        v22 = v19;
      sub_31370(a7, " on %s:%d", v22, v55);
      goto LABEL_39;
    }
    LOBYTE(v49) = 2;
    v51 = 0;
    v50 = nullptr;
    v53 = 0;
    v52 = 0;
    get_idcv_attr((int)&v49, v38, "func", 0);
    v20 = v49;
    if ( (_BYTE)v49 == 7 )
    {
      if ( v51 < 2 )
      {
LABEL_36:
        if ( v50 )
        {
          v51 = 0;
          qfree(v50);
          v50 = nullptr;
          v52 = 0;
        }
LABEL_39:
        v23 = __strlen_chk(": ", 3);
        v24 = (_DWORD *)a7;
        v25 = *(_DWORD *)(a7 + 4);
        v26 = v25 - 1;
        if ( !v25 )
          v26 = 0;
        v27 = v26 + v23 + 1;
        if ( *(_DWORD *)(a7 + 8) >= v27 )
        {
          v28 = *(_BYTE **)a7;
        }
        else
        {
          v43 = v23;
          v28 = qvector_reserve(a7, *(void **)a7, v26 + v23 + 1, 1u);
          v23 = v43;
          v24 = (_DWORD *)a7;
          *(_DWORD *)a7 = v28;
        }
        v24[1] = v27;
        v28[v26 + v23] = 0;
        memmove((void *)(*v24 + v26), ": ", v23);
        LOBYTE(v49) = 2;
        v51 = 0;
        v50 = nullptr;
        v53 = 0;
        v52 = 0;
        get_idcv_attr((int)&v49, v38, "description", 0);
        if ( (_BYTE)v49 == 7 )
        {
          if ( v51 )
          {
            v29 = (const char *)v50;
            if ( !v50 )
            {
LABEL_59:
              if ( (char)v49 == 5 )
              {
                sub_59680(v50, (char *)&v49);
                v12 = a1;
                v11 = a6;
              }
              else
              {
                v12 = a1;
                v11 = a6;
                if ( (char)v49 == 7 && v50 )
                {
                  v51 = 0;
                  qfree(v50);
                  v50 = nullptr;
                  v52 = 0;
                }
              }
              if ( (char)v54 == 5 )
              {
                sub_59680(v55, (char *)&v54);
              }
              else if ( (char)v54 == 7 && v55 )
              {
                v56 = 0;
                qfree(v55);
                v55 = nullptr;
                v57 = 0;
              }
              if ( (char)v59 == 5 )
              {
                sub_59680(v60, (char *)&v59);
              }
              else if ( (char)v59 == 7 && v60 )
              {
                v61 = 0;
                qfree(v60);
                v60 = nullptr;
                v62 = 0;
                if ( !v11 )
                  goto LABEL_77;
LABEL_76:
                sub_63A30((_DWORD *)(v12 + 12), v11);
                goto LABEL_77;
              }
LABEL_75:
              if ( !v11 )
                goto LABEL_77;
              goto LABEL_76;
            }
          }
          else
          {
            v29 = byte_EF875;
          }
          v39 = v29;
          v30 = strlen(v29);
          v31 = (_DWORD *)a7;
          v36 = *(_DWORD *)(a7 + 4);
          v33 = v36 - 1;
          if ( !v36 )
            v33 = 0;
          v34 = v33 + v30 + 1;
          if ( *(_DWORD *)(a7 + 8) < v34 )
          {
            v41 = v30;
            v35 = qvector_reserve(a7, *(void **)a7, v33 + v30 + 1, 1u);
            v31 = (_DWORD *)a7;
            *(_DWORD *)a7 = v35;
            v30 = v41;
            goto LABEL_58;
          }
        }
        else
        {
          v39 = "Unhandled exception";
          v30 = __strlen_chk("Unhandled exception", 20);
          v31 = (_DWORD *)a7;
          v32 = *(_DWORD *)(a7 + 4);
          v33 = v32 - 1;
          if ( !v32 )
            v33 = 0;
          v34 = v33 + v30 + 1;
          if ( *(_DWORD *)(a7 + 8) < v34 )
          {
            v40 = v30;
            v35 = qvector_reserve(a7, *(void **)a7, v33 + v30 + 1, 1u);
            v30 = v40;
            v31 = (_DWORD *)a7;
            *(_DWORD *)a7 = v35;
LABEL_58:
            v31[1] = v34;
            v35[v33 + v30] = 0;
            memmove((void *)(*v31 + v33), v39, v30);
            goto LABEL_59;
          }
        }
        v35 = (_BYTE *)*v31;
        goto LABEL_58;
      }
      LOBYTE(v44) = 2;
      v46 = 0;
      v45 = nullptr;
      v48 = 0;
      v47 = 0;
      get_idcv_attr((int)&v44, v38, "pc", 0);
      if ( v51 )
        v21 = (char *)v50;
      else
        v21 = byte_EF875;
      sub_31370(a7, " at %s+0x%a", v21, v45);
      if ( (char)v44 == 5 )
      {
        sub_59680(v45, (char *)&v44);
      }
      else if ( (char)v44 == 7 && v45 )
      {
        v46 = 0;
        qfree(v45);
        v45 = nullptr;
        v47 = 0;
      }
      v20 = v49;
    }
    if ( v20 == 5 )
    {
      sub_59680(v50, (char *)&v49);
      goto LABEL_39;
    }
    if ( v20 != 7 )
      goto LABEL_39;
    goto LABEL_36;
  }
LABEL_77:
  if ( *(_BYTE *)(*(_DWORD *)(v12 + 4) + 68) )
  {
    callui((int)&v59);
    *(_BYTE *)(*(_DWORD *)(v12 + 4) + 68) = 0;
  }
  return v42;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 13BC20: using guessed type int (__stdcall *callui)(int);
