/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004CC90
// Address: 0x000000014004CC90

//----- (000000014004CC90) ----------------------------------------------------
__int64 __fastcall sub_14004CC90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  _QWORD *v8; // r12
  unsigned __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rsi
  struct _exception *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // r15
  size_t v17; // rsi
  size_t v18; // rbx
  unsigned __int64 v19; // rdx
  size_t v20; // rsi
  size_t v21; // rbx
  unsigned __int64 v22; // rdx
  size_t v23; // rsi
  size_t v24; // rbx
  unsigned __int64 v25; // rdx
  const char *v26; // rsi
  size_t v27; // rax
  size_t v28; // r15
  size_t v29; // rbx
  unsigned __int64 v30; // rdx
  _BYTE v32[3]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v33[5]; // [rsp+23h] [rbp-DDh] BYREF
  _QWORD *v34; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+38h] [rbp-C8h]
  _QWORD *v37; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall **v38)(); // [rsp+50h] [rbp-B0h] BYREF
  void *Block; // [rsp+58h] [rbp-A8h]
  __int128 v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+298h] [rbp+198h]
  _BYTE Src[10]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v43[6]; // [rsp+2BAh] [rbp+1BAh] BYREF
  _BYTE v44[10]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v45[6]; // [rsp+2CAh] [rbp+1CAh] BYREF

  v6 = a4;
  v35 = a4;
  v8 = (_QWORD *)a6;
  v36 = a6;
  v9 = *(_QWORD *)(a2 + 8) + 1LL;
  if ( v9 > *(_QWORD *)(a2 + 16) )
    *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, v9, 1u);
  *(_BYTE *)(*(_QWORD *)(a2 + 8) + *(_QWORD *)a2) = 1;
  ++*(_QWORD *)(a2 + 8);
  sub_140002D20((_QWORD *)a2, *(unsigned __int8 *)(v6 + 168));
  sub_140002D20((_QWORD *)a2, *(unsigned __int8 *)(v6 + 169));
  v10 = 0;
  v11 = 0;
  v12 = (struct _exception *)Str1;
  if ( *(_QWORD *)(a5 + 8) )
    v12 = *(struct _exception **)a5;
  v13 = sub_1400639D0(v12, 0);
  v34 = v13;
  if ( v13 )
  {
    v37 = &v34;
    if ( *(_DWORD *)(a5 + 24) == 11 )
    {
      v38 = &off_140092F30;
      Block = nullptr;
      v40 = 0;
      if ( sub_140019860((__int64)&v38, (__int64)v13, 1, 1) )
        v11 = v41;
      v38 = &off_140092F30;
      if ( Block )
      {
        *(_QWORD *)&v40 = 0;
        j_free(Block);
      }
      v13 = v34;
    }
    sub_140063970(v13);
  }
  sub_140002DC0((_QWORD *)a2, v11);
  sub_140002D20((_QWORD *)a2, *(_DWORD *)(a5 + 24));
  sub_140002D20((_QWORD *)a2, *(_DWORD *)(a6 + 8));
  v14 = *(int *)(a6 + 8);
  if ( v14 > 0 )
  {
    do
    {
      v15 = *(int *)(*v8 + 4 * v10);
      v16 = 120 * v15 + *(_QWORD *)(v6 + 104);
      v17 = sub_14005B5A0(Src, (unsigned __int64)v43, *(_QWORD *)v16) - Src;
      if ( v17 )
      {
        v18 = *(_QWORD *)(a2 + 8);
        v19 = v18 + v17;
        if ( v18 + v17 < v18 )
          v19 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0(a2, v19);
        memcpy((void *)(v18 + *(_QWORD *)a2), Src, v17);
      }
      v20 = sub_14005B5A0(v44, (unsigned __int64)v45, *(unsigned int *)(v16 + 8)) - v44;
      if ( v20 )
      {
        v21 = *(_QWORD *)(a2 + 8);
        v22 = v21 + v20;
        if ( v21 + v20 < v21 )
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0(a2, v22);
        memcpy((void *)(v21 + *(_QWORD *)a2), v44, v20);
      }
      v23 = sub_14005B5E0(v32, (unsigned __int64)v33, v15) - v32;
      if ( v23 )
      {
        v24 = *(_QWORD *)(a2 + 8);
        v25 = v24 + v23;
        if ( v24 + v23 < v24 )
          v25 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0(a2, v25);
        memcpy((void *)(v24 + *(_QWORD *)a2), v32, v23);
      }
      if ( *(_QWORD *)(v16 + 24) )
      {
        v26 = pNodeName;
        if ( *(_QWORD *)(v16 + 16) )
          v26 = *(const char **)(v16 + 16);
      }
      else
      {
        v26 = Str1;
      }
      v27 = strlen(v26);
      v28 = v27 + 1;
      if ( v27 != -1 )
      {
        v29 = *(_QWORD *)(a2 + 8);
        v30 = v29 + v28;
        if ( v29 + v28 < v29 )
          v30 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0(a2, v30);
        memcpy((void *)(v29 + *(_QWORD *)a2), v26, v28);
      }
      ++v10;
      v6 = v35;
      v8 = (_QWORD *)v36;
    }
    while ( v10 < v14 );
  }
  return 0;
}
// 140092F30: using guessed type __int64 (__fastcall *off_140092F30)();
