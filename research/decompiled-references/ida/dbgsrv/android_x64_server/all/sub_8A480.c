/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A480
// Address: 0x000000000008A480

//----- (000000000008A480) ----------------------------------------------------
__int64 __fastcall sub_8A480(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  char v8; // r12
  char v9; // r14
  __m128 v10; // xmm1
  __int64 v11; // r13
  __int64 v12; // rax
  void *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdi
  void *v16; // r13
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  unsigned int v21; // [rsp+Ch] [rbp-12Ch]
  void *v22; // [rsp+10h] [rbp-128h]
  __int128 v23; // [rsp+30h] [rbp-108h]
  __int128 v24; // [rsp+40h] [rbp-F8h]
  const char *v25; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-D8h]
  __int128 v27; // [rsp+70h] [rbp-C8h]
  __int128 v28; // [rsp+80h] [rbp-B8h]
  __int128 v29; // [rsp+90h] [rbp-A8h]
  __int128 v30; // [rsp+A0h] [rbp-98h]
  __int64 v31; // [rsp+B0h] [rbp-88h]
  void *ptr[5]; // [rsp+C0h] [rbp-78h] BYREF
  char v33; // [rsp+E8h] [rbp-50h]
  __int128 v34; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v35; // [rsp+100h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  ptr[4] = nullptr;
  v33 = 0;
  v34 = 0;
  memset(ptr, 0, 26);
  v3 = *(_QWORD *)(a1 + 432);
  v4 = a1 + 344;
  if ( v3 )
  {
    v31 = *(_QWORD *)(a1 + 424);
    v30 = *(_OWORD *)(a1 + 408);
    v5 = *(_OWORD *)v4;
    v6 = *(_OWORD *)(a1 + 360);
    v7 = *(_OWORD *)(a1 + 376);
    v29 = *(_OWORD *)(a1 + 392);
    v28 = v7;
    v27 = v6;
    v26 = v5;
  }
  *(_QWORD *)(a1 + 432) = ptr;
  v22 = *(void **)(a1 + 56);
  v23 = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v24 = *(_OWORD *)(a1 + 200);
  v8 = *(_BYTE *)(a1 + 128);
  v9 = *(_BYTE *)(a1 + 84);
  v25 = &byte_EB522;
  *(_QWORD *)(a1 + 200) = sub_82620;
  *(_QWORD *)(a1 + 208) = &v25;
  v10 = *(__m128 *)(a1 + 248);
  v11 = *(_QWORD *)(a1 + 264);
  *(_BYTE *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 84) = 1;
  *(_BYTE *)(a1 + 440) = 0;
  v21 = setjmp((struct __jmp_buf_tag *)(a1 + 344));
  if ( v21 )
    set_qerrno(v21);
  else
    sub_88330(a1, a2, 1, 0.0, v10);
  if ( !v21 && (LOWORD(ptr[3]) != 1 || *(_BYTE *)(a1 + 440)) )
    v21 = set_qerrno(0x2Fu);
  *(_BYTE *)(a1 + 84) = v9;
  *(_BYTE *)(a1 + 128) = v8;
  *(_OWORD *)(a1 + 200) = v24;
  v12 = *(_QWORD *)(a1 + 64);
  v13 = *(void **)(a1 + 248);
  *(__m128 *)(a1 + 248) = v10;
  for ( *(_QWORD *)(a1 + 264) = v11; v12; v12 = *(_QWORD *)(a1 + 64) )
  {
    v14 = v12 - 1;
    v15 = *(_QWORD *)(a1 + 56) + 56 * v14;
    *(_QWORD *)a1 = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v15 + 32);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v15 + 48);
    *(_QWORD *)(a1 + 64) = v14;
    sub_38490((char **)v15);
  }
  v16 = *(void **)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v22;
  *(_OWORD *)(a1 + 64) = v23;
  if ( v3 )
  {
    *(_QWORD *)(v4 + 80) = v31;
    *(_OWORD *)(v4 + 64) = v30;
    v17 = v26;
    v18 = v27;
    v19 = v28;
    *(_OWORD *)(v4 + 48) = v29;
    *(_OWORD *)(v4 + 32) = v19;
    *(_OWORD *)(v4 + 16) = v18;
    *(_OWORD *)v4 = v17;
  }
  *(_QWORD *)(a1 + 432) = v3;
  if ( v13 )
    qfree(v13);
  if ( v16 )
    qfree(v16);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return v21;
}
