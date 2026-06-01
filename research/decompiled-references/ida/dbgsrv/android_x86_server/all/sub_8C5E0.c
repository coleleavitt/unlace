/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C5E0
// Address: 0x0008C5E0

//----- (0008C5E0) --------------------------------------------------------
bool __cdecl sub_8C5E0(int a1, int *a2, _DWORD *a3, char a4)
{
  int *v4; // esi
  _DWORD *v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // esi
  unsigned int v9; // eax
  _DWORD *v10; // edx
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  unsigned int v13; // edi
  bool v14; // cf
  _DWORD *v15; // edx
  int v16; // ecx
  int v17; // edi
  _DWORD *v18; // eax
  int v19; // esi
  _DWORD *v20; // edi
  char *v21; // eax
  unsigned int v22; // ecx
  char *v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // esi
  _DWORD *v28; // ecx
  int v29; // edx
  int v30; // edi
  _DWORD *v31; // eax
  _DWORD *v32; // ecx
  bool result; // al
  int v34; // edx
  int v35; // esi
  _DWORD *v36; // eax
  int v37; // ecx
  int v38; // [esp+Ch] [ebp-30h]
  unsigned int v39; // [esp+Ch] [ebp-30h]
  int v40; // [esp+Ch] [ebp-30h]
  unsigned int v41; // [esp+10h] [ebp-2Ch]
  _DWORD *v42; // [esp+10h] [ebp-2Ch]
  int v43; // [esp+14h] [ebp-28h]
  int v44; // [esp+18h] [ebp-24h] BYREF
  void *v45; // [esp+1Ch] [ebp-20h]
  int v46; // [esp+20h] [ebp-1Ch]
  int v47; // [esp+24h] [ebp-18h]
  unsigned int v48; // [esp+28h] [ebp-14h]

  v4 = a2;
  v48 = __readgsdword(0x14u);
  v5 = (_DWORD *)a1;
  if ( (*(_BYTE *)(a1 + 352) & 0x10) == 0 )
  {
LABEL_23:
    v15 = (_DWORD *)v5[46];
    v16 = v5[47];
    v17 = 4 * v16;
    v18 = v15;
    if ( 4 * v16 )
    {
      v19 = *v4;
      v18 = v15;
      while ( v19 != *v18 )
      {
        ++v18;
        v17 -= 4;
        if ( !v17 )
        {
          v20 = (_DWORD *)a1;
          v21 = (char *)&v15[v16];
          goto LABEL_31;
        }
      }
      v4 = a2;
    }
    if ( v18 != &v15[v16] )
    {
      if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
        interr(616);
      BUG();
    }
    v21 = (char *)&v15[v16];
    v19 = *v4;
    v20 = (_DWORD *)a1;
LABEL_31:
    v22 = v16 + 1;
    if ( v20[48] < v22 )
    {
      v23 = (char *)qvector_reserve((int)(v20 + 46), v15, v22, 4u);
      v20[46] = v23;
      v21 = &v23[4 * v20[47]];
    }
    *(_DWORD *)v21 = v19;
    ++v20[47];
    if ( (a4 & 1) == 0 )
    {
      v44 = -2;
      v47 = 0;
      v45 = (void *)*a2;
      v46 = 0;
      if ( (*(int (__cdecl **)(_DWORD *, _DWORD, _DWORD, int *, _DWORD))(*v20 + 116))(v20, a3[1], v20[85], &v44, 0) <= 0 )
      {
        v34 = v20[47];
        v35 = 4 * v34;
        v36 = (_DWORD *)v20[46];
        if ( 4 * v34 )
        {
          v36 = (_DWORD *)v20[46];
          while ( *a2 != *v36 )
          {
            ++v36;
            v35 -= 4;
            if ( !v35 )
              goto LABEL_69;
          }
        }
        v37 = v20[46] + 4 * v34;
        if ( v36 != (_DWORD *)v37 )
        {
          memmove(v36, v36 + 1, (v37 - 4 - (_DWORD)v36) & 0xFFFFFFFC);
          --*(_DWORD *)(a1 + 188);
        }
LABEL_69:
        if ( v44 >= -1 )
        {
          if ( v45 )
          {
            v46 = 0;
            qfree(v45);
            v45 = nullptr;
            v47 = 0;
          }
          v44 = -2;
        }
        return 0;
      }
      if ( v44 >= -1 )
      {
        if ( v45 )
        {
          v46 = 0;
          qfree(v45);
          v45 = nullptr;
          v47 = 0;
        }
        v44 = -2;
      }
    }
    v42 = a3 + 1;
    v24 = (*(int (__cdecl **)(_DWORD *, _DWORD))(*v20 + 4))(v20, a3[1]);
    if ( v24 <= 0 )
    {
      v27 = v24;
    }
    else
    {
      v25 = a2[4];
      v26 = 63;
      if ( v25 == 4 )
        v26 = 6;
      v40 = a2[v26];
      v27 = (*(int (__cdecl **)(_DWORD *, int, int, int, int))(*v20 + 160))(v20, v25, *a2, a2[5], v40);
      if ( v27 > 0 )
      {
        if ( (*(int (__cdecl **)(_DWORD *, _DWORD *, int *))*v20)(v20, a3, a2 + 8) <= 0 )
        {
          sub_1C9D0((int)v20, "%a: failed to single step\n", a3[2]);
          v27 = 0;
        }
        if ( (*(int (__cdecl **)(_DWORD *, _DWORD, int, int, int))(*v20 + 156))(v20, 0, a2[4], *a2, v40) <= 0 )
        {
          sub_24410((int)v20, "%a: could not restore deleted bpt\n", *a2);
          v27 = 0;
        }
      }
      if ( (*(int (__cdecl **)(_DWORD *, _DWORD))(*v20 + 8))(v20, *v42) <= 0 )
      {
        sub_24410((int)v20, "%d: could not resume suspended threads\n", *v42);
        v27 = 0;
      }
    }
    v28 = (_DWORD *)v20[46];
    v29 = v20[47];
    v30 = 4 * v29;
    v31 = v28;
    if ( 4 * v29 )
    {
      v31 = v28;
      while ( *a2 != *v31 )
      {
        ++v31;
        v30 -= 4;
        if ( !v30 )
          goto LABEL_57;
      }
    }
    v32 = &v28[v29];
    if ( v31 != v32 )
    {
      memmove(v31, v31 + 1, ((char *)(v32 - 1) - (char *)v31) & 0xFFFFFFFC);
      --*(_DWORD *)(a1 + 188);
    }
LABEL_57:
    if ( v27 <= 0 )
      return 0;
    v5 = (_DWORD *)a1;
    if ( (a3[4] & 0xFFFFFFF) == 6 )
      goto LABEL_59;
    return 0;
  }
  if ( a2[4] != 4 )
  {
    v41 = *a2;
    v38 = a2[63];
    v6 = (*(int (__cdecl **)(int))(*(_DWORD *)a1 + 248))(a1);
    v7 = (_DWORD *)(a1 + 264);
    v8 = *(_DWORD **)(a1 + 264);
    if ( !v8 )
      goto LABEL_12;
    v9 = v41 & -v6;
    v10 = (_DWORD *)(a1 + 264);
    do
    {
      if ( v8[4] >= v9 )
        v10 = v8;
      v8 = (_DWORD *)v8[v8[4] < v9];
    }
    while ( v8 );
    v7 = (_DWORD *)(a1 + 264);
    if ( v10 == (_DWORD *)(a1 + 264) )
    {
LABEL_12:
      v10 = v7;
      if ( v7 == *(_DWORD **)(a1 + 260) )
        goto LABEL_21;
    }
    else
    {
      if ( v10[4] < v38 + v41 )
        goto LABEL_17;
      if ( v10 == *(_DWORD **)(a1 + 260) )
        goto LABEL_21;
    }
    v11 = (_DWORD *)*v10;
    if ( *v10 )
    {
      do
      {
        v10 = v11;
        v11 = (_DWORD *)v11[1];
      }
      while ( v11 );
    }
    else
    {
      do
      {
        v12 = v10;
        v10 = (_DWORD *)v10[2];
      }
      while ( (_DWORD *)*v10 == v12 );
    }
LABEL_17:
    if ( v38 )
    {
      v43 = v10[8];
      if ( v43 )
      {
        v13 = v38 + v41 - 1;
        v39 = v10[4];
        v14 = v13 < v39;
        v5 = (_DWORD *)a1;
        if ( !v14 && v39 + v43 - 1 >= v41 )
        {
LABEL_22:
          v4 = a2;
          if ( v7 != v10 )
            goto LABEL_23;
          goto LABEL_59;
        }
      }
    }
LABEL_21:
    v10 = v7;
    goto LABEL_22;
  }
LABEL_59:
  result = 1;
  if ( (a4 & 2) == 0 )
    return (*(int (__cdecl **)(_DWORD *, _DWORD *))(*v5 + 84))(v5, a3) > 0;
  return result;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
