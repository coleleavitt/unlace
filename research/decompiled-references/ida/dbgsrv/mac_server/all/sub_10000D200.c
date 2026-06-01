/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000D200
// Address: 0x000000010000D200

//----- (000000010000D200) ----------------------------------------------------
__int64 __fastcall sub_10000D200(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rbx
  __int128 v11; // xmm1
  void *v12; // rdi
  __int64 v13; // rbx
  __int128 v14; // xmm1
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int128 v18; // [rsp+0h] [rbp-B0h]
  __int128 v19; // [rsp+10h] [rbp-A0h]
  __int64 v20; // [rsp+28h] [rbp-88h]
  __int64 v21; // [rsp+30h] [rbp-80h]
  __int64 v22; // [rsp+38h] [rbp-78h]
  __int64 v23; // [rsp+40h] [rbp-70h]
  __int64 v24; // [rsp+48h] [rbp-68h]
  unsigned __int64 v25; // [rsp+68h] [rbp-48h]
  __int64 v26; // [rsp+70h] [rbp-40h]
  __int16 v27; // [rsp+78h] [rbp-38h]

  v2 = a1 + 80;
  if ( a1 != a2 && a1 + 80 != a2 )
  {
    v5 = 0;
    v6 = a1;
    v24 = a2;
    do
    {
      v8 = v6;
      v6 = v2;
      v9 = *(_QWORD *)(v8 + 80);
      if ( v9 <= *(_QWORD *)v8 && (v9 < *(_QWORD *)v8 || *(_QWORD *)(v8 + 88) < *(_QWORD *)(v8 + 8)) )
      {
        v22 = v2;
        v25 = *(_QWORD *)(v2 + 8);
        v20 = *(_QWORD *)(v8 + 96);
        *(_QWORD *)(v8 + 96) = 0;
        v18 = *(_OWORD *)(v8 + 104);
        *(_OWORD *)(v8 + 104) = 0;
        v23 = *(_QWORD *)(v8 + 120);
        *(_QWORD *)(v8 + 120) = 0;
        v19 = *(_OWORD *)(v8 + 128);
        *(_OWORD *)(v8 + 128) = 0;
        v27 = *(_WORD *)(v8 + 152);
        v26 = *(_QWORD *)(v8 + 144);
        v21 = v5;
        while ( 1 )
        {
          *(_OWORD *)(a1 + v5 + 80) = *(_OWORD *)(a1 + v5);
          v10 = *(_QWORD *)(a1 + v5 + 16);
          *(_QWORD *)(a1 + v5 + 16) = 0;
          v11 = *(_OWORD *)(a1 + v5 + 24);
          *(_OWORD *)(a1 + v5 + 24) = 0;
          v12 = *(void **)(a1 + v5 + 96);
          if ( v12 )
          {
            *(_QWORD *)(a1 + v5 + 104) = 0;
            qfree(v12);
          }
          *(_QWORD *)(a1 + v5 + 96) = v10;
          *(_OWORD *)(a1 + v5 + 104) = v11;
          v13 = *(_QWORD *)(a1 + v5 + 40);
          *(_QWORD *)(a1 + v5 + 40) = 0;
          v14 = *(_OWORD *)(a1 + v5 + 48);
          *(_OWORD *)(a1 + v5 + 48) = 0;
          v15 = *(void **)(a1 + v5 + 120);
          if ( v15 )
          {
            *(_QWORD *)(a1 + v5 + 128) = 0;
            qfree(v15);
          }
          *(_QWORD *)(a1 + v5 + 120) = v13;
          *(_OWORD *)(a1 + v5 + 128) = v14;
          *(_QWORD *)(a1 + v5 + 144) = *(_QWORD *)(a1 + v5 + 64);
          *(_WORD *)(a1 + v5 + 152) = *(_WORD *)(a1 + v5 + 72);
          if ( !v5 )
          {
            v8 = a1;
            goto LABEL_22;
          }
          if ( v9 > *(_QWORD *)(a1 + v5 - 80) )
            break;
          if ( v9 >= *(_QWORD *)(a1 + v5 - 80) && v25 >= *(_QWORD *)(a1 + v5 - 72) )
            goto LABEL_22;
          v5 -= 80;
          v8 -= 80;
        }
        v8 = a1 + v5;
LABEL_22:
        *(_QWORD *)v8 = v9;
        *(_QWORD *)(v8 + 8) = v25;
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
        v7 = a1 + v5 + 64;
        *(_QWORD *)(v8 + 40) = v23;
        *(_OWORD *)(v8 + 48) = v19;
        *(_WORD *)(v7 + 8) = v27;
        *(_QWORD *)v7 = v26;
        a2 = v24;
        v5 = v21;
        v6 = v22;
      }
      v2 = v6 + 80;
      v5 += 80;
    }
    while ( v6 + 80 != a2 );
  }
  return __stack_chk_guard;
}
