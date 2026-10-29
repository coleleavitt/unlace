/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E430
// Address: 0x0005E430

//----- (0005E430) --------------------------------------------------------
int __cdecl sub_5E430(int a1, _DWORD *a2, int a3, int a4, char *a5, char a6)
{
  int v6; // edi
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // ecx
  void **v10; // edi
  int v11; // ecx
  char *v12; // eax
  char *v13; // edx
  size_t v14; // edi
  int v15; // ecx
  char *v16; // eax
  int v17; // edi
  char *v18; // edx
  int v19; // eax
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  void **v25; // [esp+1Ch] [ebp-60h]
  int v26; // [esp+20h] [ebp-5Ch] BYREF
  void *v27; // [esp+24h] [ebp-58h]
  int v28; // [esp+28h] [ebp-54h]
  int v29; // [esp+2Ch] [ebp-50h]
  int v30; // [esp+30h] [ebp-4Ch]
  int v31; // [esp+38h] [ebp-44h] BYREF
  void *v32; // [esp+3Ch] [ebp-40h]
  size_t v33; // [esp+40h] [ebp-3Ch]
  size_t v34; // [esp+44h] [ebp-38h]
  int v35; // [esp+50h] [ebp-2Ch] BYREF
  void *v36; // [esp+54h] [ebp-28h]
  int v37; // [esp+58h] [ebp-24h]
  int v38; // [esp+5Ch] [ebp-20h]
  int v39; // [esp+60h] [ebp-1Ch]
  unsigned int v40; // [esp+68h] [ebp-14h]

  v40 = __readgsdword(0x14u);
  if ( a3 < 0 )
  {
    if ( a3 == -1 || (unsigned int)off_13B614 <= -a3 )
      goto LABEL_8;
  }
  else if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) <= (unsigned int)a3 )
  {
LABEL_8:
    set_error_string(0, "?");
    set_qerrno(88);
    sub_5CBC0(a1);
    return 0;
  }
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 40);
  if ( *(_DWORD *)(a1 + 44) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(_DWORD **)(a1 + 36);
  }
  else
  {
    v8 = qvector_reserve(a1 + 36, *(void **)(a1 + 36), v7 + 1, 4u);
    *(_DWORD *)(a1 + 36) = v8;
    v7 = *(_DWORD *)(a1 + 40);
  }
  v8[v7] = v6;
  ++*(_DWORD *)(a1 + 40);
  v38 = 0;
  v37 = 0;
  v39 = 0;
  LOBYTE(v35) = 5;
  v36 = a2;
  ++a2[3];
  v10 = (void **)(a1 + 12);
  v11 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v11 + 1) )
  {
    v12 = (char *)*v10;
  }
  else
  {
    v12 = (char *)qvector_reserve(a1 + 12, *v10, v11 + 1, 0x14u);
    *(_DWORD *)(a1 + 12) = v12;
    v11 = *(_DWORD *)(a1 + 16);
  }
  v13 = &v12[20 * v11];
  *v13 = 2;
  *((_DWORD *)v13 + 4) = 0;
  *((_DWORD *)v13 + 3) = 0;
  *((_DWORD *)v13 + 2) = 0;
  *((_DWORD *)v13 + 1) = 0;
  ++*(_DWORD *)(a1 + 16);
  move_idcv(v13, (char *)&v35);
  v25 = (void **)(a1 + 12);
  LOBYTE(v31) = 7;
  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  v14 = *(_DWORD *)(a4 + 4);
  if ( v14 )
  {
    v32 = qalloc_or_throw(*(_DWORD *)(a4 + 4));
    v34 = v14;
    memcpy(v32, *(const void **)a4, v14);
    v33 = v14;
  }
  v15 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v15 + 1) )
  {
    v16 = (char *)*v25;
    v17 = a3;
  }
  else
  {
    v16 = (char *)qvector_reserve((int)v25, *v25, v15 + 1, 0x14u);
    v17 = a3;
    *(_DWORD *)(a1 + 12) = v16;
    v15 = *(_DWORD *)(a1 + 16);
  }
  v18 = &v16[20 * v15];
  *v18 = 2;
  *((_DWORD *)v18 + 4) = 0;
  *((_DWORD *)v18 + 3) = 0;
  *((_DWORD *)v18 + 2) = 0;
  *((_DWORD *)v18 + 1) = 0;
  ++*(_DWORD *)(a1 + 16);
  move_idcv(v18, (char *)&v31);
  if ( a6 )
  {
    v19 = sub_5E940((void **)a1, a5, nullptr, v17);
  }
  else
  {
    LOBYTE(v26) = 2;
    v28 = 0;
    v27 = nullptr;
    v30 = 0;
    v29 = 0;
    copy_idcv((char *)&v26, a5);
    sub_4E740((int)v25, (char *)&v26);
    if ( (char)v26 == 5 )
    {
      sub_59680(v27, (char *)&v26);
    }
    else if ( (char)v26 == 7 && v27 )
    {
      v28 = 0;
      qfree(v27);
      v27 = nullptr;
      v29 = 0;
    }
    v19 = sub_5E940((void **)a1, nullptr, nullptr, a3);
  }
  v9 = v19;
  if ( (char)v31 == 5 )
  {
    v21 = v19;
    sub_59680(v32, (char *)&v31);
    v9 = v21;
  }
  else if ( (char)v31 == 7 && v32 )
  {
    v20 = v19;
    v33 = 0;
    qfree(v32);
    v32 = nullptr;
    v34 = 0;
    v9 = v20;
  }
  if ( (char)v35 == 5 )
  {
    v23 = v9;
    sub_59680(v36, (char *)&v35);
    return v23;
  }
  else if ( (char)v35 == 7 && v36 )
  {
    v22 = v9;
    v37 = 0;
    qfree(v36);
    v36 = nullptr;
    v38 = 0;
    return v22;
  }
  return v9;
}
// 13B614: using guessed type int *off_13B614;
