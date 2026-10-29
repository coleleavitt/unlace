/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47764
// Address: 0x00047764

//----- (00047764) --------------------------------------------------------
int __fastcall sub_47764(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 *a5, int a6)
{
  int v8; // r5
  _DWORD *v9; // r0
  int v10; // r1
  _DWORD *v11; // r0
  int v12; // r5
  void **v13; // r6
  int v14; // r1
  _BYTE *v15; // r0
  int v16; // r1
  char *v17; // r7
  size_t v18; // r7
  void *v19; // r0
  int v20; // r1
  _BYTE *v21; // r0
  unsigned __int8 *v22; // r7
  int v23; // r0
  unsigned __int8 v26[8]; // [sp+1Ch] [bp-4Ch] BYREF
  void *v27; // [sp+24h] [bp-44h]
  int v28; // [sp+28h] [bp-40h]
  int v29; // [sp+2Ch] [bp-3Ch]
  int v30; // [sp+30h] [bp-38h]
  unsigned __int8 v31[8]; // [sp+34h] [bp-34h] BYREF
  void *v32; // [sp+3Ch] [bp-2Ch]
  size_t v33; // [sp+40h] [bp-28h]
  size_t v34; // [sp+44h] [bp-24h]
  unsigned __int8 v35[8]; // [sp+4Ch] [bp-1Ch] BYREF
  void *v36; // [sp+54h] [bp-14h]
  int v37; // [sp+58h] [bp-10h]
  int v38; // [sp+5Ch] [bp-Ch]
  int v39; // [sp+60h] [bp-8h]

  if ( a3 < 0 )
  {
    if ( a3 == -1 || dword_DD60C <= (unsigned int)-a3 )
      goto LABEL_8;
  }
  else if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) <= (unsigned int)a3 )
  {
LABEL_8:
    v12 = 0;
    set_error_string(0, "?");
    set_qerrno(88);
    sub_468C4((_DWORD *)a1);
    return v12;
  }
  v8 = *(_DWORD *)(a1 + 16);
  v9 = (_DWORD *)(a1 + 36);
  v10 = *(_DWORD *)(a1 + 40);
  if ( *(_DWORD *)(a1 + 44) >= (unsigned int)(v10 + 1) )
  {
    v11 = (_DWORD *)*v9;
  }
  else
  {
    v11 = qvector_reserve((int)v9, *(void **)(a1 + 36), v10 + 1, 4u);
    *(_DWORD *)(a1 + 36) = v11;
    v10 = *(_DWORD *)(a1 + 40);
  }
  v11[v10] = v8;
  ++*(_DWORD *)(a1 + 40);
  v35[0] = 5;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  v36 = a2;
  ++a2[3];
  v13 = (void **)(a1 + 12);
  v14 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v14 + 1) )
  {
    v15 = *v13;
  }
  else
  {
    v15 = qvector_reserve(a1 + 12, *v13, v14 + 1, 0x18u);
    *(_DWORD *)(a1 + 12) = v15;
    v14 = *(_DWORD *)(a1 + 16);
  }
  v16 = 24 * v14;
  v15[v16] = 2;
  v17 = &v15[v16];
  memset(&v15[v16 + 8], 0, 0x10u);
  *((_DWORD *)v17 + 2) = 0;
  ++*(_DWORD *)(a1 + 16);
  move_idcv((unsigned __int8 *)v17, v35);
  v31[0] = 7;
  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  v18 = *(_DWORD *)(a4 + 4);
  if ( v18 )
  {
    v19 = qalloc_or_throw(*(_DWORD *)(a4 + 4));
    v34 = v18;
    v32 = v19;
    qmemcpy(v19, *(const void **)a4, v18);
    v33 = v18;
  }
  v20 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 20) >= (unsigned int)(v20 + 1) )
  {
    v21 = *v13;
  }
  else
  {
    v21 = qvector_reserve(a1 + 12, *v13, v20 + 1, 0x18u);
    *(_DWORD *)(a1 + 12) = v21;
    v20 = *(_DWORD *)(a1 + 16);
  }
  v21[24 * v20] = 2;
  v22 = &v21[24 * v20];
  memset(v22 + 8, 0, 0x10u);
  *((_DWORD *)v22 + 2) = 0;
  ++*(_DWORD *)(a1 + 16);
  move_idcv(v22, v31);
  if ( a6 )
  {
    v23 = sub_47A68((void **)a1, (int)a5, nullptr);
  }
  else
  {
    v26[0] = 2;
    v30 = 0;
    v29 = 0;
    v28 = 0;
    v27 = nullptr;
    copy_idcv(v26, a5);
    sub_3DC40(a1 + 12, v26);
    if ( v26[0] == 5 )
    {
      sub_448A0((int)v27, v26);
    }
    else if ( v26[0] == 7 && v27 )
    {
      v28 = 0;
      qfree(v27);
      v29 = 0;
      v27 = nullptr;
    }
    v23 = sub_47A68((void **)a1, 0, nullptr);
  }
  v12 = v23;
  if ( v31[0] == 5 )
  {
    sub_448A0((int)v32, v31);
  }
  else if ( v31[0] == 7 && v32 )
  {
    v33 = 0;
    qfree(v32);
    v34 = 0;
    v32 = nullptr;
  }
  if ( v35[0] == 5 )
  {
    sub_448A0((int)v36, v35);
  }
  else if ( v35[0] == 7 && v36 )
  {
    v37 = 0;
    qfree(v36);
    v38 = 0;
    v36 = nullptr;
  }
  return v12;
}
// DD60C: using guessed type int dword_DD60C;
