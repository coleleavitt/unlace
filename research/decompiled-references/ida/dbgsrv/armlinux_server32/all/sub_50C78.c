/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50C78
// Address: 0x00050C78

//----- (00050C78) --------------------------------------------------------
int __fastcall sub_50C78(int a1, int a2)
{
  int v2; // r1
  __int64 v3; // kr00_8
  int v4; // r1
  int v5; // r6
  int v6; // r5
  int v7; // r5
  char v8; // r2
  void *v9; // r3
  void *v10; // r1
  int v11; // r1
  int v12; // r4
  _DWORD *v13; // r3
  _DWORD *v14; // r4
  int v15; // r0
  int v16; // r8
  int v17; // r7
  int v18; // r10
  _DWORD *v19; // r3
  char *v20; // r9
  int v21; // r11
  int v22; // r4
  void *v23; // r0
  char *v24; // r3
  void *ptr; // [sp+4h] [bp-200h]
  void *ptra; // [sp+4h] [bp-200h]
  int v29; // [sp+8h] [bp-1FCh]
  struct __jmp_buf_tag *env; // [sp+Ch] [bp-1F8h]
  int v31; // [sp+10h] [bp-1F4h]
  int v32; // [sp+14h] [bp-1F0h]
  char v33; // [sp+18h] [bp-1ECh]
  char v34; // [sp+1Ch] [bp-1E8h]
  int v35; // [sp+24h] [bp-1E0h]
  char *v37; // [sp+34h] [bp-1D0h] BYREF
  int v38; // [sp+38h] [bp-1CCh]
  _DWORD *v39; // [sp+3Ch] [bp-1C8h]
  int v40; // [sp+40h] [bp-1C4h]
  int v41; // [sp+44h] [bp-1C0h]
  void *v42; // [sp+48h] [bp-1BCh] BYREF
  int v43; // [sp+4Ch] [bp-1B8h]
  int v44; // [sp+50h] [bp-1B4h]
  __int16 v45; // [sp+54h] [bp-1B0h]
  int v46; // [sp+58h] [bp-1ACh]
  char v47; // [sp+5Ch] [bp-1A8h]
  int v48; // [sp+60h] [bp-1A4h]
  int v49; // [sp+64h] [bp-1A0h]
  int v50; // [sp+68h] [bp-19Ch]
  int v51; // [sp+6Ch] [bp-198h]
  _BYTE dest[392]; // [sp+70h] [bp-194h] BYREF

  v29 = *(_DWORD *)(a1 + 592);
  v42 = nullptr;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  env = (struct __jmp_buf_tag *)(a1 + 200);
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  if ( v29 )
    memcpy(dest, (const void *)(a1 + 200), sizeof(dest));
  v2 = *(_DWORD *)(a1 + 112);
  v3 = *(_QWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 112) = sub_4B750;
  v31 = v2;
  *(_DWORD *)(a1 + 592) = &v42;
  v4 = *(_DWORD *)(a1 + 116);
  v5 = *(_DWORD *)(a1 + 36);
  v40 = HIDWORD(v3);
  v32 = v4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 596) = 0;
  *(_DWORD *)(a1 + 116) = &v37;
  LOBYTE(v4) = *(_BYTE *)(a1 + 76);
  ptr = *(void **)(a1 + 136);
  v6 = *(_DWORD *)(a1 + 140);
  v39 = (_DWORD *)v3;
  *(_DWORD *)(a1 + 136) = 0;
  v35 = v6;
  v7 = *(_DWORD *)(a1 + 144);
  v41 = v5;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  v37 = &byte_8DFE8;
  v33 = v4;
  *(_BYTE *)(a1 + 76) = 0;
  v8 = *(_BYTE *)(a1 + 44);
  *(_BYTE *)(a1 + 44) = 1;
  v34 = v8;
  v38 = setjmp(env);
  if ( v38 )
    sub_70B98(v38);
  else
    sub_50BC8(a1, a2, 1);
  if ( !v38 && (v45 != 1 || *(_BYTE *)(a1 + 596)) )
    v38 = sub_70B98(47);
  v9 = ptr;
  v10 = *(void **)(a1 + 136);
  *(_BYTE *)(a1 + 44) = v34;
  ptra = v10;
  *(_DWORD *)(a1 + 136) = v9;
  *(_BYTE *)(a1 + 76) = v33;
  *(_DWORD *)(a1 + 112) = v31;
  *(_DWORD *)(a1 + 116) = v32;
  *(_DWORD *)(a1 + 140) = v35;
  *(_DWORD *)(a1 + 144) = v7;
  while ( *(_DWORD *)(a1 + 32) )
    sub_4B8A4((_DWORD *)a1);
  v12 = v40;
  v11 = v41;
  v40 = 0;
  v13 = v39;
  *(_DWORD *)(a1 + 32) = v12;
  v14 = *(_DWORD **)(a1 + 28);
  *(_DWORD *)(a1 + 28) = v13;
  v15 = *(_DWORD *)(a1 + 36);
  v39 = v14;
  *(_DWORD *)(a1 + 36) = v11;
  v41 = v15;
  if ( v29 )
    memcpy(env, dest, 0x188u);
  v16 = v38;
  *(_DWORD *)(a1 + 592) = v29;
  if ( ptra )
  {
    sub_77F70(ptra);
    v14 = v39;
    if ( !v39 )
      goto LABEL_30;
    v17 = v40;
    if ( v40 )
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = (_DWORD *)v14[7 * v18];
        v20 = (char *)&v14[7 * v18];
        if ( v19 )
        {
          v21 = *((_DWORD *)v20 + 1);
          if ( v21 )
          {
            v22 = 0;
            while ( 1 )
            {
              v23 = (void *)v19[3 * v22];
              v24 = (char *)&v19[3 * v22];
              if ( v23 )
              {
                *((_DWORD *)v24 + 1) = 0;
                sub_77F70(v23);
              }
              if ( v21 == ++v22 )
                break;
              v19 = *(_DWORD **)v20;
            }
            v19 = *(_DWORD **)v20;
          }
          *((_DWORD *)v20 + 1) = 0;
          sub_77F70(v19);
        }
        if ( v17 == ++v18 )
          break;
        v14 = v39;
      }
      v14 = v39;
    }
    goto LABEL_29;
  }
  if ( v14 )
  {
LABEL_29:
    v40 = 0;
    sub_77F70(v14);
  }
LABEL_30:
  if ( v42 )
  {
    v43 = 0;
    sub_77F70(v42);
  }
  return v16;
}
// 8DFE8: using guessed type char byte_8DFE8;
