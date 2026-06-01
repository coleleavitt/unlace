/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54E2C
// Address: 0x00054E2C

//----- (00054E2C) --------------------------------------------------------
int __fastcall sub_54E2C(int a1, int a2)
{
  _DWORD *v3; // r4
  struct __jmp_buf_tag *v4; // r6
  struct __jmp_buf_tag *v5; // r4
  int v6; // r6
  void **v7; // r7
  int v8; // r1
  int v9; // r0
  int v10; // r2
  int v11; // r0
  void *v12; // r6
  void *v14; // [sp+8h] [bp-188h]
  int v15; // [sp+1Ch] [bp-174h]
  int v16; // [sp+20h] [bp-170h]
  char v17; // [sp+24h] [bp-16Ch]
  int v18; // [sp+28h] [bp-168h]
  int v19; // [sp+2Ch] [bp-164h]
  void *v20; // [sp+30h] [bp-160h]
  char v21; // [sp+34h] [bp-15Ch]
  int v23; // [sp+40h] [bp-150h]
  int v24; // [sp+48h] [bp-148h]
  _DWORD *v25; // [sp+4Ch] [bp-144h]
  int v26; // [sp+50h] [bp-140h]
  int v27; // [sp+5Ch] [bp-134h]
  char *v28; // [sp+60h] [bp-130h] BYREF
  _BYTE v29[256]; // [sp+64h] [bp-12Ch] BYREF
  void *v30; // [sp+164h] [bp-2Ch] BYREF
  int v31; // [sp+168h] [bp-28h]
  int v32; // [sp+16Ch] [bp-24h]
  __int16 v33; // [sp+170h] [bp-20h]
  int v34; // [sp+174h] [bp-1Ch]
  char v35; // [sp+178h] [bp-18h]
  int v36; // [sp+17Ch] [bp-14h]
  int v37; // [sp+180h] [bp-10h]
  int v38; // [sp+184h] [bp-Ch]
  int v39; // [sp+188h] [bp-8h]

  v35 = 0;
  v33 = 0;
  v34 = 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v32 = 0;
  v31 = 0;
  v30 = nullptr;
  v3 = (_DWORD *)(a1 + 444);
  v4 = (struct __jmp_buf_tag *)(a1 + 188);
  v24 = *(_DWORD *)(a1 + 444);
  if ( v24 )
    qmemcpy(v29, v4, sizeof(v29));
  v25 = v3;
  *v3 = &v30;
  v26 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 28) = 0;
  v5 = v4;
  v6 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 0;
  v23 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = 0;
  v21 = *(_BYTE *)(a1 + 68);
  v17 = *(_BYTE *)(a1 + 44);
  v19 = *(_DWORD *)(a1 + 104);
  v18 = *(_DWORD *)(a1 + 108);
  v28 = &byte_A0742;
  *(_BYTE *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 44) = 1;
  *(_BYTE *)(a1 + 448) = 0;
  v20 = *(void **)(a1 + 128);
  *(_DWORD *)(a1 + 128) = 0;
  v16 = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a1 + 132) = 0;
  v15 = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 104) = sub_4EFDC;
  *(_DWORD *)(a1 + 108) = &v28;
  v7 = (void **)(a1 + 128);
  v27 = setjmp(v5);
  if ( v27 )
    set_qerrno(v27);
  else
    sub_53128(a1, a2, 1);
  if ( !v27 && (v33 != 1 || *(_BYTE *)(a1 + 448)) )
    v27 = set_qerrno(47);
  *(_BYTE *)(a1 + 44) = v17;
  *(_BYTE *)(a1 + 68) = v21;
  *(_DWORD *)(a1 + 104) = v19;
  *(_DWORD *)(a1 + 108) = v18;
  v14 = *v7;
  *v7 = v20;
  *(_DWORD *)(a1 + 132) = v16;
  *(_DWORD *)(a1 + 136) = v15;
  while ( 1 )
  {
    v11 = *(_DWORD *)(a1 + 32);
    if ( !v11 )
      break;
    v8 = v11 - 1;
    v9 = *(_DWORD *)(a1 + 28) + 28 * (v11 - 1);
    *(_DWORD *)a1 = *(_DWORD *)(v9 + 12);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(v9 + 16);
    v10 = *(_DWORD *)(v9 + 24);
    *(_DWORD *)(a1 + 32) = v8;
    *(_DWORD *)(a1 + 40) = v10;
    sub_1B3BC((char **)v9);
  }
  *(_DWORD *)(a1 + 32) = v6;
  *(_DWORD *)(a1 + 36) = v23;
  v12 = *(void **)(a1 + 28);
  *(_DWORD *)(a1 + 28) = v26;
  if ( v24 )
    qmemcpy(v5, v29, 0x100u);
  *v25 = v24;
  if ( v14 )
    qfree(v14);
  if ( v12 )
    qfree(v12);
  if ( v30 )
  {
    v31 = 0;
    qfree(v30);
    v32 = 0;
    v30 = nullptr;
  }
  return v27;
}
// A0742: using guessed type char byte_A0742;
