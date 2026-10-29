void __fastcall sub_166A770(__int64 a1, unsigned __int32 a2, int a3, const void *a4, size_t a5, _DWORD *a6)
{
  bool v8; // bl
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned __int16 v12; // ax
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  void *v24; // rax
  _QWORD *v25; // rax
  int v26; // eax
  int v27; // eax
  char v30; // [rsp+14h] [rbp-104h]
  bool v32; // [rsp+29h] [rbp-EFh]
  char v33; // [rsp+2Ah] [rbp-EEh]
  char v34; // [rsp+2Bh] [rbp-EDh]
  int v35; // [rsp+2Ch] [rbp-ECh]
  unsigned int v36; // [rsp+2Ch] [rbp-ECh]
  int v37; // [rsp+2Ch] [rbp-ECh]
  void *v38[2]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-D8h]
  void *v40; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-C0h]
  char v42; // [rsp+5Ch] [rbp-BCh]
  void *v43; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v44[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v45; // [rsp+C8h] [rbp-50h]
  unsigned int v46; // [rsp+D0h] [rbp-48h]
  char v47; // [rsp+D4h] [rbp-44h]

  v8 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 156LL) & 2) != 0;
  v33 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 156LL) & 2;
  v32 = a5 != 0;
  if ( !v33 || !a5 )
  {
    v9 = *(unsigned __int8 *)(a1 + 1238);
    v34 = *(_BYTE *)(a1 + 1236);
    v30 = *(_BYTE *)(a1 + 1237);
    if ( !a6 )
    {
      LOBYTE(v11) = 0;
      goto LABEL_6;
    }
    v10 = *(_QWORD *)(a1 + 248);
    *(_OWORD *)v38 = 0;
    v39 = 0;
    sub_C3EB00((__int64)&v40, (unsigned __int64)a6, v10, nullptr, a5, (__int64)a6);
    if ( (_BYTE)v43 )
    {
      v13 = v41;
      LOBYTE(v39) = 1;
      v41 = 0;
      LODWORD(v38[1]) = v13;
      v38[0] = v40;
      BYTE4(v38[1]) = v42;
    }
    sub_98E4B0((__int64)&v40);
    if ( (*a6 & 0x10000) != 0 || !(_BYTE)v39 )
      goto LABEL_17;
    v41 = 64;
    v40 = nullptr;
    v42 = 0;
    v16 = sub_98E2D0((__int64 *)v38, (__int64 *)&v40);
    if ( v41 > 0x40 && v40 )
    {
      v35 = v16;
      operator delete[](v40);
      v16 = v35;
    }
    v17 = (unsigned int)v38[1];
    if ( v16 )
    {
      if ( LODWORD(v38[1]) <= 0x40 )
      {
        v18 = v38[0];
        if ( !v38[0] || ((unsigned __int64)v38[0] & ((unsigned __int64)v38[0] - 1)) != 0 )
          goto LABEL_17;
LABEL_46:
        if ( (unsigned __int64)v18 <= 0x10 )
        {
          if ( v33 )
          {
            v41 = 64;
            v40 = nullptr;
            v42 = 0;
            v27 = sub_98E2D0((__int64 *)v38, (__int64 *)&v40);
            if ( v41 > 0x40 && v40 )
            {
              v37 = v27;
              operator delete[](v40);
              v27 = v37;
            }
            if ( !v27 )
            {
              v14 = a1 + 8;
              v15 = 4831;
              goto LABEL_18;
            }
            v17 = (unsigned int)v38[1];
          }
          LOBYTE(v11) = v38[0];
          if ( v17 > 0x40 )
            v11 = *(_QWORD *)v38[0];
          sub_98E4B0((__int64)v38);
LABEL_6:
          if ( a3 == 8 )
          {
            if ( (unsigned __int8)(v9 - 1) > 0xFDu )
              v9 = 8;
            if ( v30 == 3 && (v33 || !v34) )
            {
              sub_168B9F0(&v40, a1 + 8, a2, 7266, 0);
              if ( v45 )
              {
                sub_AE9DF0(v44, (__int64)"mac68k", 1u);
              }
              else if ( v47 )
              {
                sub_1669EA0((__int64)&v40, (__int64)"mac68k");
              }
            }
            else
            {
              sub_168B9F0(&v40, a1 + 8, a2, 7266, 0);
              if ( v45 )
              {
                sub_AE9DF0(v44, (unsigned __int8)v9, 3u);
              }
              else if ( v47 )
              {
                v23 = sub_168B9E0(&v40);
                v24 = v43;
                if ( v43 )
                  v24 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v43 + 32LL))(v43);
                v38[0] = v24;
                v25 = sub_1587BC0(v23, (__int64 *)v38, v19, v20, v21, v22);
                sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v46 + 8), (unsigned __int8)v9, 3u);
              }
            }
            goto LABEL_30;
          }
          v9 = (unsigned __int8)v11;
          if ( (a3 & 4) == 0 )
            goto LABEL_12;
          if ( a6 && v32 )
          {
            sub_168B9F0(&v40, a1 + 8, a2, 7265, 0);
            sub_15F7200(&v40);
          }
          if ( *(_DWORD *)(a1 + 1160) )
            goto LABEL_12;
          sub_168B9F0(&v40, a1 + 8, a2, 7267, 0);
          if ( v45 )
          {
            sub_AE9DF0(v44, (__int64)"pack", 1u);
          }
          else
          {
            if ( !v47 )
            {
LABEL_30:
              sub_15F7200(&v40);
LABEL_12:
              LOBYTE(v12) = 1;
              HIBYTE(v12) = v30;
              sub_1665BB0(a1 + 1152, a2, a3, a4, a5, (v9 << 16) | v12 | (v8 << 24));
              return;
            }
            sub_1669EA0((__int64)&v40, (__int64)"pack");
          }
          if ( v45 )
          {
            sub_AE9DF0(v44, (__int64)"stack empty", 1u);
          }
          else if ( v47 )
          {
            sub_1669EA0((__int64)&v40, (__int64)"stack empty");
          }
          goto LABEL_30;
        }
LABEL_17:
        v14 = a1 + 8;
        v15 = 7261;
LABEL_18:
        sub_168B9F0(&v40, v14, a2, v15, 0);
        sub_15F7200(&v40);
        sub_98E4B0((__int64)v38);
        return;
      }
      v36 = (unsigned int)v38[1];
      v26 = sub_22069E0(v38);
      v18 = v38[0];
      v17 = v36;
      if ( v26 != 1 )
        goto LABEL_17;
    }
    else
    {
      v18 = v38[0];
      if ( LODWORD(v38[1]) <= 0x40 )
        goto LABEL_46;
    }
    v18 = (_QWORD *)*v18;
    goto LABEL_46;
  }
  sub_168B9F0(&v40, a1 + 8, a2, 4830, 0);
  sub_15F7200(&v40);
}
