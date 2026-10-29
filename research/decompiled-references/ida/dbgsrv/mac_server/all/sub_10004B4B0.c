/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B4B0
// Address: 0x000000010004B4B0

//----- (000000010004B4B0) ----------------------------------------------------
__int64 __fastcall sub_10004B4B0(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  char v3; // r15
  void *v4; // r14
  __int64 v5; // r12
  __int64 v6; // r13
  void *v7; // r15
  __int64 i; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // r14
  __int64 v12; // rax
  __int128 v14; // [rsp+0h] [rbp-180h]
  __int64 v15; // [rsp+18h] [rbp-168h]
  unsigned int v16; // [rsp+30h] [rbp-150h]
  char v17; // [rsp+37h] [rbp-149h]
  const char *v18; // [rsp+38h] [rbp-148h] BYREF
  void *v19; // [rsp+40h] [rbp-140h]
  __int128 v20; // [rsp+48h] [rbp-138h]
  void *v21; // [rsp+58h] [rbp-128h] BYREF
  __int128 v22; // [rsp+60h] [rbp-120h]
  _BYTE __dst[148]; // [rsp+70h] [rbp-110h] BYREF
  _OWORD v24[2]; // [rsp+110h] [rbp-70h] BYREF
  __int64 v25; // [rsp+130h] [rbp-50h]
  char v26; // [rsp+138h] [rbp-48h]
  __int128 v27; // [rsp+140h] [rbp-40h]

  v25 = 0;
  v26 = 0;
  v2 = 0;
  v27 = 0;
  memset(v24, 0, 26);
  v15 = *(_QWORD *)(a1 + 496);
  if ( v15 )
  {
    memcpy(__dst, (const void *)(a1 + 344), sizeof(__dst));
    v2 = 0;
  }
  *(_QWORD *)(a1 + 496) = v24;
  v21 = *(void **)(a1 + 56);
  v22 = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a1 + 56) = v2;
  *(_QWORD *)(a1 + 72) = 0;
  v14 = *(_OWORD *)(a1 + 200);
  v3 = *(_BYTE *)(a1 + 84);
  v17 = *(_BYTE *)(a1 + 128);
  v18 = &_s;
  *(_QWORD *)(a1 + 200) = sub_100045C40;
  *(_QWORD *)(a1 + 208) = &v18;
  v4 = *(void **)(a1 + 248);
  v19 = v4;
  v5 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)&v20 = v5;
  v6 = *(_QWORD *)(a1 + 264);
  *((_QWORD *)&v20 + 1) = v6;
  *(_BYTE *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 248) = v2;
  *(_QWORD *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 84) = 1;
  *(_BYTE *)(a1 + 504) = 0;
  v16 = setjmp((int *)(a1 + 344));
  if ( v16 )
    set_qerrno();
  else
    sub_10004A600(a1, a2, 1);
  if ( !v16 && (WORD4(v24[1]) != 1 || *(_BYTE *)(a1 + 504) == 1) )
    v16 = set_qerrno();
  *(_BYTE *)(a1 + 84) = v3;
  *(_BYTE *)(a1 + 128) = v17;
  *(_OWORD *)(a1 + 200) = v14;
  v7 = *(void **)(a1 + 248);
  v19 = v7;
  v20 = *(_OWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 248) = v4;
  *(_QWORD *)(a1 + 256) = v5;
  *(_QWORD *)(a1 + 264) = v6;
  for ( i = *(_QWORD *)(a1 + 64); i; i = *(_QWORD *)(a1 + 64) )
  {
    v9 = *(_QWORD *)(a1 + 56);
    v10 = 56 * i;
    *(_QWORD *)a1 = *(_QWORD *)(v9 + v10 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v9 + v10 - 24);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v9 + v10 - 8);
    sub_100044BA0((__int64 *)(a1 + 56));
  }
  v11 = *(void **)(a1 + 56);
  v12 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 56) = v21;
  *(_OWORD *)(a1 + 64) = v22;
  v21 = v11;
  *(_QWORD *)&v22 = 0;
  *((_QWORD *)&v22 + 1) = v12;
  if ( v15 )
    memcpy((void *)(a1 + 344), __dst, 0x94u);
  *(_QWORD *)(a1 + 496) = v15;
  if ( v7 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v7);
    v19 = nullptr;
    v11 = v21;
  }
  if ( v11 )
  {
    sub_10004CD30(&v21, 0);
    qfree(v21);
  }
  if ( *(_QWORD *)&v24[0] )
  {
    *((_QWORD *)&v24[0] + 1) = 0;
    qfree(*(void **)&v24[0]);
  }
  return v16;
}
