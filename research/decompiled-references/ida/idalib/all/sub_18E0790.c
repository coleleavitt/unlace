void __fastcall sub_18E0790(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  int v7; // r12d
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int8 v12; // dl
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // al
  __int64 *v20; // r14
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r13
  __int64 v30; // rax
  _QWORD *v31; // rax
  bool v32; // [rsp+Fh] [rbp-C9h] BYREF
  __int64 v33; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+18h] [rbp-C0h] BYREF
  unsigned __int8 *v35; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-B0h]

  v7 = a3;
  v33 = *(_QWORD *)(a2 + 8);
  switch ( sub_18C6570(a1, &v33, a3, a4, a5, a6) )
  {
    case 0LL:
      goto LABEL_11;
    case 1LL:
      sub_168B9B0((__int64)&v35, a1 + 8, 6774);
      sub_AE9DF0(&v35, v33, 8u);
      sub_AE9DF0(&v35, v7, 2u);
      v14 = sub_EEB7E0(a2, v7, a7);
      sub_18CA280(a1, v14, nullptr, 0, (__int64)&v35);
      if ( v35 && v36 )
        sub_1580C40(v36, (unsigned __int64)v35);
LABEL_11:
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 48 )
        return;
      sub_168B9B0((__int64)&v35, a1 + 8, 7244);
      sub_AE9DF0(&v35, v33, 8u);
      sub_AE9DF0(&v35, v7, 2u);
      v19 = sub_16CD5F0(a1, a2, v15, v16, v17, v18);
      sub_AE9DF0(&v35, v19, 2u);
      v12 = 1;
      v11 = (__int64)".c_str()";
      goto LABEL_4;
    case 2LL:
    case 3LL:
      sub_168B9B0((__int64)&v35, a1 + 8, 6650);
      sub_AE9DF0(&v35, (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0, 3u);
      goto LABEL_3;
    case 4LL:
      v20 = (__int64 *)(a1 + 8);
      if ( (unsigned int)sub_F65A30(v33, (__int64)&v33, v9, v10) == 4 )
      {
        v24 = sub_EEB7E0(a2, (__int64)&v33, a7);
        sub_168B9F0((__int64)&v35, v20, v24, 0xD40u, 0);
        v23 = sub_1605D30((__int64)&v35, &v33);
        if ( !*(_BYTE *)(v23 + 120) )
        {
LABEL_17:
          if ( *(_BYTE *)(v23 + 132) )
          {
            v29 = sub_168B9E0((_QWORD *)v23);
            v30 = *(_QWORD *)(v23 + 16);
            if ( v30 )
              v30 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v30 + 32LL))(*(_QWORD *)(v23 + 16));
            v34 = v30;
            v31 = sub_1587BC0(v29, &v34, v25, v26, v27, v28);
            sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * *(unsigned int *)(v23 + 128) + 8), v7, 2u);
          }
          goto LABEL_18;
        }
LABEL_20:
        sub_AE9DF0((unsigned __int8 **)(v23 + 32), v7, 2u);
LABEL_18:
        sub_15F7200(&v35);
        return;
      }
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 35 > 1 )
      {
        v21 = sub_EEB7E0(a2, (__int64)&v33, a7);
        sub_168B9F0((__int64)&v35, v20, v21, 0xD43u, 0);
        v32 = (*(_WORD *)a2 & 0x1FF) == 53;
        v22 = sub_1588420((__int64)&v35, (unsigned __int8 *)&v32);
        v23 = sub_1605D30(v22, &v33);
        if ( !*(_BYTE *)(v23 + 120) )
          goto LABEL_17;
        goto LABEL_20;
      }
      sub_168B9B0((__int64)&v35, a1 + 8, 3393);
LABEL_3:
      sub_AE9DF0(&v35, v33, 8u);
      v11 = v7;
      v12 = 2;
LABEL_4:
      sub_AE9DF0(&v35, v11, v12);
      v13 = sub_EEB7E0(a2, v11, a7);
      sub_18CA280(a1, v13, nullptr, 0, (__int64)&v35);
      if ( v35 )
      {
        if ( v36 )
          sub_1580C40(v36, (unsigned __int64)v35);
      }
      return;
    default:
      return;
  }
}
