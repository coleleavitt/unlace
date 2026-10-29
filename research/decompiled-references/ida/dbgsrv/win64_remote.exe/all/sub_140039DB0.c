/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140039DB0
// Address: 0x0000000140039DB0

//----- (0000000140039DB0) ----------------------------------------------------
__int64 __fastcall sub_140039DB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _OWORD *v4; // rcx
  _OWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  void *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  void *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  _OWORD *v19; // rax
  _OWORD *v20; // rdx
  unsigned int v21; // esi
  void **v22; // rbx
  __int64 v24; // [rsp+0h] [rbp-100h] BYREF
  char v25; // [rsp+20h] [rbp-E0h]
  char v26; // [rsp+21h] [rbp-DFh]
  unsigned int v27; // [rsp+24h] [rbp-DCh]
  void *v28; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+30h] [rbp-D0h]
  __int64 v30; // [rsp+38h] [rbp-C8h]
  _QWORD *v31; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  const char *v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  void *Block; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int16 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  char v43; // [rsp+A8h] [rbp-58h]
  __int128 v44; // [rsp+B0h] [rbp-50h]
  _BYTE v45[256]; // [rsp+C0h] [rbp-40h] BYREF

  Block = nullptr;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v37 = *(_QWORD *)(a1 + 624);
  v3 = 2;
  if ( v37 )
  {
    v4 = (_OWORD *)(a1 + 368);
    v5 = v45;
    v6 = 2;
    do
    {
      *v5 = *v4;
      v5[1] = v4[1];
      v5[2] = v4[2];
      v5[3] = v4[3];
      v5[4] = v4[4];
      v5[5] = v4[5];
      v5[6] = v4[6];
      v5 += 8;
      *(v5 - 1) = v4[7];
      v4 += 8;
      --v6;
    }
    while ( v6 );
  }
  *(_QWORD *)(a1 + 624) = &Block;
  v31 = *(_QWORD **)(a1 + 56);
  v32 = *(_QWORD *)(a1 + 64);
  v33 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v35 = *(_QWORD *)(a1 + 224);
  v36 = *(_QWORD *)(a1 + 232);
  v26 = *(_BYTE *)(a1 + 152);
  v25 = *(_BYTE *)(a1 + 84);
  v34 = pNodeName;
  *(_QWORD *)(a1 + 224) = sub_14003B940;
  *(_QWORD *)(a1 + 232) = &v34;
  v28 = *(void **)(a1 + 272);
  v29 = *(_QWORD *)(a1 + 280);
  v30 = *(_QWORD *)(a1 + 288);
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  sub_14005C830();
  *(_BYTE *)(a1 + 152) = 0;
  *(_BYTE *)(a1 + 84) = 1;
  *(_BYTE *)(a1 + 632) = 0;
  v27 = unknown_libname_15(a1 + 368, &v24);
  if ( v27 )
  {
    sub_1400640B0(v27);
  }
  else
  {
    LOBYTE(v7) = 1;
    sub_140039610((_JBTYPE *)a1, a2, v7);
  }
  if ( !v27 && (v41 != 1 || *(_BYTE *)(a1 + 632) != (_BYTE)v27) )
    v27 = sub_1400640B0(0x2Fu);
  *(_BYTE *)(a1 + 84) = v25;
  *(_BYTE *)(a1 + 152) = v26;
  *(_QWORD *)(a1 + 224) = v35;
  *(_QWORD *)(a1 + 232) = v36;
  v8 = v28;
  v9 = v29;
  v10 = v30;
  v11 = *(void **)(a1 + 272);
  v28 = v11;
  v29 = *(_QWORD *)(a1 + 280);
  v30 = *(_QWORD *)(a1 + 288);
  *(_QWORD *)(a1 + 272) = v8;
  *(_QWORD *)(a1 + 280) = v9;
  *(_QWORD *)(a1 + 288) = v10;
  while ( *(_QWORD *)(a1 + 64) )
  {
    v12 = *(_QWORD *)(a1 + 56) + 56LL * *(_QWORD *)(a1 + 64);
    *(_QWORD *)a1 = *(_QWORD *)(v12 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v12 - 24);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v12 - 8);
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      *(_QWORD *)(a1 + 64) = v13 - 1;
      v14 = *(_QWORD *)(a1 + 56) + 56 * v13;
      if ( *(_QWORD *)(v14 - 56) )
      {
        sub_14001A6C0((_QWORD *)(v14 - 56), 0);
        j_free(*(void **)(v14 - 56));
        *(_QWORD *)(v14 - 56) = 0;
        *(_QWORD *)(v14 - 40) = 0;
      }
    }
  }
  v15 = *(_QWORD **)(a1 + 56);
  v16 = *(_QWORD *)(a1 + 64);
  v17 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 56) = v31;
  *(_QWORD *)(a1 + 64) = v32;
  *(_QWORD *)(a1 + 72) = v33;
  v31 = v15;
  v32 = v16;
  v33 = v17;
  v18 = v37;
  if ( v37 )
  {
    v19 = (_OWORD *)(a1 + 368);
    v20 = v45;
    do
    {
      *v19 = *v20;
      v19[1] = v20[1];
      v19[2] = v20[2];
      v19[3] = v20[3];
      v19[4] = v20[4];
      v19[5] = v20[5];
      v19[6] = v20[6];
      v19 += 8;
      *(v19 - 1) = v20[7];
      v20 += 8;
      --v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(a1 + 624) = v18;
  v21 = v27;
  if ( v11 )
  {
    v29 = 0;
    j_free(v11);
    v28 = nullptr;
    v30 = 0;
  }
  if ( v15 )
  {
    if ( v16 )
    {
      v22 = (void **)v15;
      do
      {
        if ( *v22 )
        {
          sub_14001A6C0(v22, 0);
          j_free(*v22);
          *v22 = nullptr;
          v22[2] = nullptr;
        }
        v22 += 7;
        --v16;
      }
      while ( v16 );
    }
    v32 = 0;
    j_free(v15);
    v31 = nullptr;
    v33 = 0;
  }
  if ( Block )
  {
    v39 = 0;
    j_free(Block);
  }
  return v21;
}
// 140039F8F: variable 'v7' is possibly undefined
// 14008CD90: using guessed type __int64 __fastcall unknown_libname_15(_QWORD, _QWORD);
