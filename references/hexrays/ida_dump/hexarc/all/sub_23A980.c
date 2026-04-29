unsigned __int64 __fastcall sub_23A980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r14
  _QWORD *v13; // rax
  _QWORD *v14; // r12
  __int64 v15; // rax
  __int64 (__fastcall **v16)(); // [rsp+0h] [rbp-B8h] BYREF
  int v17; // [rsp+8h] [rbp-B0h]
  __int64 v18; // [rsp+10h] [rbp-A8h]
  __int128 v19; // [rsp+18h] [rbp-A0h]
  __int64 v20; // [rsp+28h] [rbp-90h]
  __int128 v21; // [rsp+30h] [rbp-88h]
  __int64 v22; // [rsp+40h] [rbp-78h] BYREF
  int v23; // [rsp+48h] [rbp-70h]
  __int64 v24; // [rsp+4Ch] [rbp-6Ch]
  __int64 v25; // [rsp+58h] [rbp-60h]
  __int64 v26; // [rsp+60h] [rbp-58h]
  __int64 v27; // [rsp+68h] [rbp-50h]
  __int64 v28; // [rsp+70h] [rbp-48h] BYREF
  int v29; // [rsp+78h] [rbp-40h]
  unsigned __int64 v30; // [rsp+88h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 480LL) != -1 )
  {
    v5 = a1 + 16;
    if ( (unsigned __int8)sub_23A7C0(a1 + 16, a2, a3, a4, a5) )
    {
      v13 = sub_23A040(v5, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL));
      *((_DWORD *)v13 + 2) = 80;
      v14 = v13;
      v15 = j__qalloc_or_throw(64);
      *(_QWORD *)(v15 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)v15 = -1;
      *(_QWORD *)(v15 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v15 + 40) = 0;
      *(_QWORD *)(v15 + 48) = 0;
      *(_DWORD *)(v15 + 56) = 0;
      *(_OWORD *)(v15 + 24) = 0;
      v14[3] = v15;
    }
    v6 = *(_QWORD *)(a1 + 8);
    v16 = off_4AC258;
    v7 = *(int *)(v6 + 480);
    v25 = v6;
    v26 = 0;
    v8 = v7;
    v17 = 0;
    v9 = 13 * v7;
    v10 = *(_QWORD *)(v6 + 432);
    v18 = 0;
    v20 = 0;
    v11 = v10 + 8 * v9;
    LODWORD(v26) = v8;
    v19 = 0;
    v22 = -1;
    v24 = -1;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v23 = 65;
    v21 = 0;
    copy_tinfo_t(&v28, v11 + 80);
    LODWORD(v27) = *(_DWORD *)(v11 + 88);
    sub_24E700(&v16, v5, 0);
    v16 = off_4AC258;
    sub_24E2B0(&v22);
    clear_tinfo_t(&v28);
    v16 = off_4A8538;
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
  }
  return v30 - __readfsqword(0x28u);
}
