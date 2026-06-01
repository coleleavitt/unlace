/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73CF0
// Address: 0x00073CF0

//----- (00073CF0) --------------------------------------------------------
int __cdecl sub_73CF0(int a1, int a2)
{
  struct __jmp_buf_tag *v2; // edx
  __int64 v3; // xmm0_8
  int v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  __int64 v8; // xmm0_8
  char v10; // [esp+1Ah] [ebp-A2h]
  char v11; // [esp+1Bh] [ebp-A1h]
  int v12; // [esp+1Ch] [ebp-A0h]
  int v13; // [esp+20h] [ebp-9Ch]
  int v14; // [esp+24h] [ebp-98h]
  int v15; // [esp+28h] [ebp-94h]
  void *v16; // [esp+2Ch] [ebp-90h]
  void *v17; // [esp+30h] [ebp-8Ch]
  int v18; // [esp+38h] [ebp-84h]
  int v19; // [esp+3Ch] [ebp-80h]
  int v20; // [esp+40h] [ebp-7Ch]
  int v21; // [esp+44h] [ebp-78h]
  int v22; // [esp+48h] [ebp-74h]
  int v23; // [esp+50h] [ebp-6Ch]
  char *v24; // [esp+54h] [ebp-68h] BYREF
  __int64 v25; // [esp+58h] [ebp-64h]
  __int64 v26; // [esp+60h] [ebp-5Ch]
  __int64 v27; // [esp+68h] [ebp-54h]
  __int64 v28; // [esp+70h] [ebp-4Ch]
  __int64 v29; // [esp+78h] [ebp-44h]
  void *v30[5]; // [esp+80h] [ebp-3Ch] BYREF
  char v31; // [esp+94h] [ebp-28h]
  int v32; // [esp+98h] [ebp-24h]
  int v33; // [esp+9Ch] [ebp-20h]
  int v34; // [esp+A0h] [ebp-1Ch]
  int v35; // [esp+A4h] [ebp-18h]
  unsigned int v36; // [esp+A8h] [ebp-14h]

  v36 = __readgsdword(0x14u);
  v30[4] = nullptr;
  v31 = 0;
  v33 = 0;
  v32 = 0;
  v35 = 0;
  v34 = 0;
  memset(v30, 0, 14);
  v2 = (struct __jmp_buf_tag *)(a1 + 188);
  v23 = *(_DWORD *)(a1 + 228);
  if ( v23 )
  {
    v29 = *(_QWORD *)(a1 + 220);
    v28 = *(_QWORD *)(a1 + 212);
    v27 = *(_QWORD *)(a1 + 204);
    v3 = *(_QWORD *)v2->__jmpbuf;
    v26 = *(_QWORD *)(a1 + 196);
    v25 = v3;
  }
  *(_DWORD *)(a1 + 228) = v30;
  v13 = *(_DWORD *)(a1 + 28);
  v4 = *(_DWORD *)(a1 + 32);
  v22 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  v21 = *(_DWORD *)(a1 + 104);
  v11 = *(_BYTE *)(a1 + 68);
  v10 = *(_BYTE *)(a1 + 44);
  v20 = *(_DWORD *)(a1 + 108);
  v24 = &byte_DCEE2;
  *(_DWORD *)(a1 + 104) = sub_6A9E0;
  *(_DWORD *)(a1 + 108) = &v24;
  v14 = *(_DWORD *)(a1 + 128);
  v19 = *(_DWORD *)(a1 + 132);
  v18 = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 44) = 1;
  *(_BYTE *)(a1 + 232) = 0;
  v12 = setjmp(v2);
  if ( v12 )
    set_qerrno(v12);
  else
    sub_70F20(a1, a2, 1);
  if ( !v12 && (LOWORD(v30[3]) != 1 || *(_BYTE *)(a1 + 232)) )
    v12 = set_qerrno(47);
  *(_BYTE *)(a1 + 44) = v10;
  *(_BYTE *)(a1 + 68) = v11;
  *(_DWORD *)(a1 + 104) = v21;
  *(_DWORD *)(a1 + 108) = v20;
  v5 = *(_DWORD *)(a1 + 32);
  v17 = *(void **)(a1 + 128);
  *(_DWORD *)(a1 + 128) = v14;
  *(_DWORD *)(a1 + 132) = v19;
  for ( *(_DWORD *)(a1 + 136) = v18; v5; v5 = *(_DWORD *)(a1 + 32) )
  {
    v6 = *(_DWORD *)(a1 + 28);
    v15 = v5 - 1;
    v7 = v5 + 27 * (v5 - 1) - 1;
    *(_DWORD *)a1 = *(_DWORD *)(v6 + v7 + 12);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(v6 + v7 + 16);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(v6 + v7 + 24);
    *(_DWORD *)(a1 + 32) = v15;
    sub_1BC40((char **)(v6 + v7));
  }
  v16 = *(void **)(a1 + 28);
  *(_DWORD *)(a1 + 28) = v13;
  *(_DWORD *)(a1 + 32) = v4;
  *(_DWORD *)(a1 + 36) = v22;
  if ( v23 )
  {
    *(_QWORD *)(a1 + 220) = v29;
    *(_QWORD *)(a1 + 212) = v28;
    *(_QWORD *)(a1 + 204) = v27;
    v8 = v25;
    *(_QWORD *)(a1 + 196) = v26;
    *(_QWORD *)(a1 + 188) = v8;
  }
  *(_DWORD *)(a1 + 228) = v23;
  if ( v17 )
    qfree(v17);
  if ( v16 )
    qfree(v16);
  if ( v30[0] )
  {
    v30[1] = nullptr;
    qfree(v30[0]);
    v30[0] = nullptr;
    v30[2] = nullptr;
  }
  return v12;
}
// DCEE2: using guessed type char byte_DCEE2;
