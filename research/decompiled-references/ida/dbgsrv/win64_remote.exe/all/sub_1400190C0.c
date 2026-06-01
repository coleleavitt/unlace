/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400190C0
// Address: 0x00000001400190C0

//----- (00000001400190C0) ----------------------------------------------------
__int64 __fastcall sub_1400190C0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  unsigned int v8; // eax
  bool v9; // r13
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebp
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdx
  int v17; // esi
  __int64 v18; // rcx
  char *v19; // rdx
  char *v20; // rbx
  unsigned int v21; // eax
  int v22; // edx
  __int16 v23; // ax
  _DWORD *v24; // r15
  unsigned int v25; // ebp
  int v26; // edx
  __int64 v27; // rcx
  _DWORD *v28; // rbx
  unsigned int v29; // esi
  unsigned __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r10d
  int v33; // edx
  int v34; // r8d
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // eax
  unsigned int v38; // edx
  __int16 v39; // ax
  int v40; // eax
  unsigned int v41; // eax
  unsigned int *v42; // rbx
  unsigned int v43; // ecx
  __int16 v44; // ax
  int v45; // eax
  _OWORD *v46; // rbx
  unsigned __int64 v47; // r8
  __int64 v49; // [rsp+20h] [rbp-88h]
  const char *v50; // [rsp+28h] [rbp-80h]
  __int64 v51; // [rsp+30h] [rbp-78h]
  void *Block; // [rsp+38h] [rbp-70h] BYREF
  __int64 v53; // [rsp+40h] [rbp-68h]
  unsigned __int64 v54; // [rsp+48h] [rbp-60h]
  __int128 v55; // [rsp+50h] [rbp-58h]
  __int128 v56; // [rsp+60h] [rbp-48h]
  __int64 v57; // [rsp+B0h] [rbp+8h]
  int v59; // [rsp+C0h] [rbp+18h]

  v5 = a4;
  v6 = a2;
  *(_QWORD *)(a1 + 16) = 0;
  Block = nullptr;
  v53 = 0;
  v54 = 0;
  v8 = *(_DWORD *)(a1 + 128);
  v9 = v8 == *(_DWORD *)(a1 + 132) && v8 < 0x1000;
  v10 = a3;
  sub_140063BF0(a2, a3, 0);
  if ( v10 == -1 )
    v10 = sub_140063BF0(v6, 0, 1);
  v12 = sub_140063C70(v6) - v10;
  v14 = -1;
  if ( v10 < 0 || v12 < 0 )
  {
    LODWORD(v16) = 0;
  }
  else
  {
    v15 = v5;
    if ( !(_DWORD)v5 || (v11 = 0xFFFFFFFFFFFFFFFFuLL % v5, 0xFFFFFFFFFFFFFFFFuLL / v5 >= 0x28) )
    {
      if ( v12 >= 40 * v5 )
        goto LABEL_15;
    }
    v16 = v12 / 0x28uLL;
  }
  LODWORD(v5) = v16;
  v50 = ". Do you want to continue with the new value?";
  v49 = (int)v16;
  if ( (unsigned int)sub_1400049D0(1) != 1 )
    sub_140018160(0);
LABEL_15:
  v17 = 0;
  if ( (int)v5 <= 0 )
  {
LABEL_23:
    if ( !v9 && *(_DWORD *)(a1 + 72) != 23126 )
      goto LABEL_29;
    v21 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, unsigned __int64, __int64, const char *))(*(_QWORD *)a5 + 8LL))(
            a5,
            v11,
            v13,
            v15,
            v49,
            v50);
    if ( v21 )
    {
      v14 = v21;
      goto LABEL_78;
    }
    if ( v9 )
      v22 = *(_DWORD *)(a1 + 132);
    else
LABEL_29:
      v22 = 512;
    v23 = *(_WORD *)(a1 + 164);
    if ( v23 == 10 || (unsigned __int16)(v23 - 11) <= 2u )
    {
      v24 = (_DWORD *)(a1 + 72);
    }
    else
    {
      v24 = (_DWORD *)(a1 + 72);
      if ( *(_DWORD *)(a1 + 72) != 23126 )
        goto LABEL_36;
    }
    v22 = 1;
LABEL_36:
    v25 = 0;
    if ( (int)v5 <= 0 )
    {
LABEL_63:
      v42 = (unsigned int *)(a1 + 152);
      if ( *v24 == 23126 )
        *v42 = v25;
      if ( !(_DWORD)v5 || v9 )
      {
        *(_QWORD *)&v55 = 0;
        *((_QWORD *)&v56 + 1) = sub_140063C70(v6);
        v43 = *v42;
        v44 = *(_WORD *)(a1 + 164);
        if ( v44 != 10 && (unsigned __int16)(v44 - 11) > 2u )
        {
          if ( *(_DWORD *)(a1 + 128) == 4096 || (v45 = *(_DWORD *)(a1 + 132)) == 0 )
            v45 = 512;
          v43 = -v45 & (v45 + v43 - 1);
        }
        *((_QWORD *)&v55 + 1) = v43;
        LODWORD(v56) = 0;
        v46 = *(_OWORD **)(a1 + 8);
        v47 = *(_QWORD *)(a1 + 16) + 1LL;
        if ( v47 > *(_QWORD *)(a1 + 24) )
        {
          v46 = sub_14005ABE0(a1 + 8, *(void **)(a1 + 8), v47, 0x20u);
          *(_QWORD *)(a1 + 8) = v46;
        }
        memcpy(v46 + 2, v46, 32LL * *(_QWORD *)(a1 + 16));
        *v46 = v55;
        v46[1] = v56;
        ++*(_QWORD *)(a1 + 16);
      }
      v14 = 0;
    }
    else
    {
      v57 = 0;
      v26 = -v22;
      v59 = v26;
      v27 = 0;
      v51 = 0;
      while ( 1 )
      {
        v28 = (char *)Block + v27;
        v29 = v26 & *(_DWORD *)((_BYTE *)Block + v27 + 20);
        v30 = *(_QWORD *)(a1 + 16) + 1LL;
        if ( v30 > *(_QWORD *)(a1 + 24) )
          *(_QWORD *)(a1 + 8) = sub_14005ABE0(a1 + 8, *(void **)(a1 + 8), v30, 0x20u);
        v31 = *(_QWORD *)(a1 + 8) + 32LL * (*(_QWORD *)(a1 + 16))++;
        *(_QWORD *)v31 = (unsigned int)v28[3];
        v32 = *(_DWORD *)(a1 + 128);
        v33 = 1;
        if ( v32 )
          v33 = *(_DWORD *)(a1 + 128);
        v34 = v28[2];
        v35 = v34;
        if ( !v34 )
          v35 = v28[4];
        v36 = v28[4];
        if ( v36 >= (-v33 & (unsigned int)(v33 + v35 - 1)) )
        {
          v37 = 1;
          if ( v32 )
            v37 = *(_DWORD *)(a1 + 128);
          if ( v34 )
            v36 = v28[2];
          v36 = -v37 & (v37 + v36 - 1);
        }
        *(_QWORD *)(v31 + 24) = v36;
        v38 = v36 + v28[3];
        v39 = *(_WORD *)(a1 + 164);
        if ( v39 != 10 && (unsigned __int16)(v39 - 11) > 2u )
        {
          if ( *(_DWORD *)(a1 + 128) == 4096 || (v40 = *(_DWORD *)(a1 + 132)) == 0 )
            v40 = 512;
          v38 = -v40 & (v40 + v38 - 1);
        }
        *(_QWORD *)(v31 + 8) = v38;
        *(_DWORD *)(v31 + 16) = v29;
        if ( *v24 == 23126 )
          *(_DWORD *)(v31 + 16) = v29 - *(unsigned __int16 *)(a1 + 38) + 40;
        v41 = (**(__int64 (__fastcall ***)(__int64, _DWORD *, _QWORD))a5)(a5, v28, v29);
        if ( v41 )
          break;
        if ( v25 < v28[2] + v28[3] )
          v25 = v28[2] + v28[3];
        ++v57;
        v27 = v51 + 40;
        v51 += 40;
        v26 = v59;
        if ( v57 >= (int)v5 )
        {
          v24 = (_DWORD *)(a1 + 72);
          v6 = a2;
          goto LABEL_63;
        }
      }
      v14 = v41;
    }
    goto LABEL_78;
  }
  while ( 1 )
  {
    v18 = v53;
    v19 = (char *)Block;
    if ( v53 + 1 > v54 )
    {
      v19 = (char *)sub_14005ABE0((__int64)&Block, Block, v53 + 1, 0x28u);
      Block = v19;
      v18 = v53;
    }
    v20 = &v19[40 * v18];
    v53 = v18 + 1;
    if ( sub_140063BD0(v6, v20, 40) != 40 )
      break;
    if ( *((_DWORD *)v20 + 3) != *((_DWORD *)v20 + 5) || *((_DWORD *)v20 + 2) > *((_DWORD *)v20 + 4) )
      v9 = 0;
    if ( ++v17 >= (int)v5 )
      goto LABEL_23;
  }
LABEL_78:
  if ( Block )
  {
    v53 = 0;
    j_free(Block);
  }
  return v14;
}
// 140019270: variable 'v11' is possibly undefined
// 140019270: variable 'v13' is possibly undefined
// 140019270: variable 'v15' is possibly undefined
// 140019270: variable 'v49' is possibly undefined
// 140019270: variable 'v50' is possibly undefined
