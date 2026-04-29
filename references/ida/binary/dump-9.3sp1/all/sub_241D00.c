unsigned __int64 __fastcall sub_241D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 (__fastcall **v21)(); // [rsp+0h] [rbp-B8h] BYREF
  int v22; // [rsp+8h] [rbp-B0h]
  __int64 v23; // [rsp+10h] [rbp-A8h]
  __int128 v24; // [rsp+18h] [rbp-A0h]
  __int64 v25; // [rsp+28h] [rbp-90h]
  __int128 v26; // [rsp+30h] [rbp-88h]
  __int64 v27; // [rsp+40h] [rbp-78h] BYREF
  int v28; // [rsp+48h] [rbp-70h]
  __int64 v29; // [rsp+4Ch] [rbp-6Ch]
  __int64 v30; // [rsp+58h] [rbp-60h]
  __int64 v31; // [rsp+60h] [rbp-58h]
  __int64 v32; // [rsp+68h] [rbp-50h]
  __int64 v33; // [rsp+70h] [rbp-48h]
  int v34; // [rsp+78h] [rbp-40h]
  unsigned __int64 v35; // [rsp+88h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 480LL) != -1 )
  {
    v5 = a1 + 16;
    if ( (unsigned __int8)sub_241B40(a1 + 16, a2, a3, a4, a5) )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
      v16 = sub_2413C0(v5, v15, v6, v7);
      *((_DWORD *)v16 + 2) = 80;
      v17 = v16;
      v20 = j__qalloc_or_throw(64, v15, v18, v19);
      *(_QWORD *)(v20 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)v20 = -1;
      *(_QWORD *)(v20 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v20 + 40) = 0;
      *(_QWORD *)(v20 + 48) = 0;
      *(_DWORD *)(v20 + 56) = 0;
      *(_OWORD *)(v20 + 24) = 0;
      v17[3] = v20;
    }
    v8 = *(_QWORD *)(a1 + 8);
    v21 = off_4DFA58;
    v9 = *(int *)(v8 + 480);
    v30 = v8;
    v31 = 0;
    v10 = v9;
    v22 = 0;
    v11 = 13 * v9;
    v12 = *(_QWORD *)(v8 + 432);
    v23 = 0;
    v25 = 0;
    v13 = v12 + 8 * v11;
    LODWORD(v31) = v10;
    v24 = 0;
    v27 = -1;
    v29 = -1;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v28 = 65;
    v26 = 0;
    copy_tinfo_t();
    LODWORD(v32) = *(_DWORD *)(v13 + 88);
    sub_255A80(&v21, v5, 0);
    v21 = off_4DFA58;
    sub_255630(&v27);
    clear_tinfo_t();
    v21 = off_4DBCF8;
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
  }
  return v35 - __readfsqword(0x28u);
}
