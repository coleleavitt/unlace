/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000D4C0
// Address: 0x000000010000D4C0

//----- (000000010000D4C0) ----------------------------------------------------
__int64 __fastcall sub_10000D4C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rbx
  __int128 v10; // xmm1
  void *v11; // rdi
  __int64 v12; // rbx
  __int128 v13; // xmm1
  void *v14; // rdi
  unsigned __int64 v15; // rcx
  void *v16; // rdi
  void *v17; // rdi
  __int128 v18; // [rsp+0h] [rbp-90h]
  __int128 v19; // [rsp+10h] [rbp-80h]
  __int64 v20; // [rsp+28h] [rbp-68h]
  __int64 v21; // [rsp+30h] [rbp-60h]
  __int64 v22; // [rsp+38h] [rbp-58h]
  __int64 v23; // [rsp+50h] [rbp-40h]
  __int16 v24; // [rsp+58h] [rbp-38h]

  v2 = a1 + 80;
  if ( a1 != a2 && a1 + 80 != a2 )
  {
    v4 = a1;
    v22 = a2;
    do
    {
      v5 = v4;
      v4 = v2;
      v6 = *(_QWORD *)(v5 + 80);
      if ( v6 <= *(_QWORD *)v5 && (v6 < *(_QWORD *)v5 || *(_QWORD *)(v5 + 88) < *(_QWORD *)(v5 + 8)) )
      {
        v7 = *(_QWORD *)(v2 + 8);
        v20 = *(_QWORD *)(v5 + 96);
        *(_QWORD *)(v5 + 96) = 0;
        v18 = *(_OWORD *)(v5 + 104);
        *(_OWORD *)(v5 + 104) = 0;
        v21 = *(_QWORD *)(v5 + 120);
        *(_QWORD *)(v5 + 120) = 0;
        v19 = *(_OWORD *)(v5 + 128);
        *(_OWORD *)(v5 + 128) = 0;
        v24 = *(_WORD *)(v5 + 152);
        v23 = *(_QWORD *)(v5 + 144);
        do
        {
          v8 = v5;
          *(_OWORD *)(v5 + 80) = *(_OWORD *)v5;
          v9 = *(_QWORD *)(v5 + 16);
          *(_QWORD *)(v5 + 16) = 0;
          v10 = *(_OWORD *)(v5 + 24);
          *(_OWORD *)(v5 + 24) = 0;
          v11 = *(void **)(v5 + 96);
          if ( v11 )
          {
            *(_QWORD *)(v5 + 104) = 0;
            qfree(v11);
          }
          *(_QWORD *)(v8 + 96) = v9;
          *(_OWORD *)(v8 + 104) = v10;
          v12 = *(_QWORD *)(v8 + 40);
          *(_QWORD *)(v8 + 40) = 0;
          v13 = *(_OWORD *)(v8 + 48);
          *(_OWORD *)(v8 + 48) = 0;
          v14 = *(void **)(v8 + 120);
          if ( v14 )
          {
            *(_QWORD *)(v8 + 128) = 0;
            qfree(v14);
          }
          *(_QWORD *)(v8 + 120) = v12;
          *(_OWORD *)(v8 + 128) = v13;
          v15 = *(_QWORD *)(v8 - 80);
          *(_QWORD *)(v8 + 144) = *(_QWORD *)(v8 + 64);
          *(_WORD *)(v8 + 152) = *(_WORD *)(v8 + 72);
          v5 = v8 - 80;
        }
        while ( v6 <= v15 && (v6 < v15 || v7 < *(_QWORD *)(v8 - 72)) );
        *(_QWORD *)v8 = v6;
        *(_QWORD *)(v8 + 8) = v7;
        v16 = *(void **)(v8 + 16);
        if ( v16 )
        {
          *(_QWORD *)(v8 + 24) = 0;
          qfree(v16);
        }
        *(_QWORD *)(v8 + 16) = v20;
        *(_OWORD *)(v8 + 24) = v18;
        v17 = *(void **)(v8 + 40);
        if ( v17 )
        {
          *(_QWORD *)(v8 + 48) = 0;
          qfree(v17);
        }
        *(_QWORD *)(v8 + 40) = v21;
        *(_OWORD *)(v8 + 48) = v19;
        *(_WORD *)(v8 + 72) = v24;
        *(_QWORD *)(v8 + 64) = v23;
        a2 = v22;
      }
      v2 = v4 + 80;
    }
    while ( v4 + 80 != a2 );
  }
  return __stack_chk_guard;
}
