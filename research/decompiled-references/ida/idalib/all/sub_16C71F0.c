void __fastcall sub_16C71F0(__int64 a1, unsigned __int64 a2, _WORD *a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int16 v7; // ax
  int v8; // r13d
  __int64 v9; // r14
  unsigned int v10; // r12d
  __int64 v12; // r15
  __int64 v13; // rsi
  int v14; // eax
  __int64 *v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rsi
  unsigned int v18; // r15d
  __int64 *v19; // rbp
  int v20; // eax
  unsigned int v21; // eax
  int v23; // [rsp+1Ch] [rbp-DCh]
  bool v24; // [rsp+2Fh] [rbp-C9h] BYREF
  bool v25[200]; // [rsp+30h] [rbp-C8h] BYREF

  v7 = *(_WORD *)a2 & 0x1FF;
  if ( v7 == 243 )
  {
    v8 = *(_DWORD *)(a2 + 52);
    v9 = *(_QWORD *)(a2 + 40);
    v10 = 6866;
  }
  else
  {
    if ( v7 != 1 )
      return;
    v8 = *(_DWORD *)(a2 + 12);
    v10 = 6872;
    v9 = *(_QWORD *)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16);
  }
  if ( (*(_WORD *)v9 & 0x1FF) == 0xEE
    && (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                          v10,
                          *(unsigned int *)(v9 + 4),
                          *(_QWORD *)(a1 + 264),
                          a6,
                          a7) != 1 )
  {
    v12 = *(_QWORD *)(a1 + 272);
    if ( (*(_WORD *)v9 & 0x200) == 0 )
    {
      v23 = sub_1022B40(*(__int64 **)(a1 + 272), v8, &v24);
      if ( !v24 )
      {
        v13 = *(unsigned int *)(v9 + 4);
        v14 = sub_10228C0(v12, v13, v25);
        if ( !v25[0] && v23 == v14 )
        {
          if ( (*a3 & 0x1FF) == 0xF9
            || (v15 = *(__int64 **)(a1 + 272),
                v16 = sub_EEB7E0((unsigned __int64)a3, v13, a4),
                v17 = v16,
                v18 = sub_1022B90(v15, v16, &v24),
                !v24)
            && (v19 = *(__int64 **)(a1 + 272), v20 = sub_EEB7E0(a2, v17, a4), v21 = sub_1022B90(v19, v20, v25), !v25[0])
            && v18 > v21 )
          {
            sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), *(_DWORD *)(v9 + 4), v10, 0);
            sub_15F7200(v25);
            sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), *(_DWORD *)(v9 + 4), 0x1722u, 0);
            sub_15F7200(v25);
          }
        }
      }
    }
  }
}
