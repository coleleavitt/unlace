unsigned __int64 __fastcall sub_1AC5100(__int64 *a1, unsigned __int64 a2, double a3)
{
  unsigned int v3; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  void **v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r14d
  unsigned int v11; // eax
  void *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // [rsp+8h] [rbp-100h]
  __int64 v32; // [rsp+8h] [rbp-100h]
  int v33; // [rsp+8h] [rbp-100h]
  __int64 v34; // [rsp+8h] [rbp-100h]
  unsigned __int8 v35; // [rsp+17h] [rbp-F1h] BYREF
  __int64 v36; // [rsp+18h] [rbp-F0h] BYREF
  void *v37; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v38; // [rsp+28h] [rbp-E0h]
  char v39; // [rsp+2Ch] [rbp-DCh]
  void *v40; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v41; // [rsp+38h] [rbp-D0h]
  char v42; // [rsp+3Ch] [rbp-CCh]
  unsigned __int8 v43; // [rsp+40h] [rbp-C8h]
  void *v44; // [rsp+50h] [rbp-B8h] BYREF
  void *v45; // [rsp+58h] [rbp-B0h]
  unsigned int v46; // [rsp+60h] [rbp-A8h]
  char v47; // [rsp+64h] [rbp-A4h]

  v3 = sub_EEB7E0(a2, a2, a3);
  result = sub_1AA2500(a1, 20, 29, v3, a2);
  if ( result > 1 )
  {
    v5 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( (*(_DWORD *)(result & 0xFFFFFFFFFFFFFFFELL) & 0x8000) == 0 )
    {
      v6 = sub_168B6C0((__int64)a1);
      v7 = (void **)v5;
      sub_C3EB00((__int64)&v40, v5, v6, nullptr, v8, v9);
      if ( v43 )
      {
        LODWORD(v45) = 64;
        v7 = &v44;
        BYTE4(v45) = 0;
        v44 = nullptr;
        v10 = sub_98E2D0((__int64 *)&v40, (__int64 *)&v44);
        if ( (unsigned int)v45 > 0x40 && v44 )
          operator delete[](v44);
        if ( v10 > 0 )
        {
          if ( !v43 )
            goto LABEL_10;
          v7 = &v44;
          LODWORD(v45) = 64;
          v44 = &dword_0 + 3;
          BYTE4(v45) = 0;
          v18 = sub_98E2D0((__int64 *)&v40, (__int64 *)&v44);
          if ( (unsigned int)v45 > 0x40 && v44 )
          {
            v33 = v18;
            operator delete[](v44);
            v18 = v33;
          }
          if ( v18 <= 0 )
          {
LABEL_10:
            v11 = v41;
            v38 = v41;
            if ( v41 > 0x40 )
            {
              sub_2205510(&v37);
              v11 = v38;
              v12 = v37;
            }
            else
            {
              v12 = v40;
              v37 = v40;
            }
            BYTE4(v44) &= ~1u;
            v45 = v12;
            v39 = v42;
            v47 = v42;
            LODWORD(v44) = 2;
            v38 = 0;
            v46 = v11;
            v13 = (_QWORD *)sub_168B6C0((__int64)a1);
            v17 = sub_C09C20(v13, v5, (int *)&v44, v14, v15, v16);
            if ( (unsigned int)v44 > 1 )
            {
              v31 = v17;
              sub_A4F8E0((int *)&v44);
              v17 = v31;
            }
            if ( v38 > 0x40 )
            {
              if ( v37 )
              {
                v32 = v17;
                operator delete[](v37);
                v17 = v32;
              }
            }
LABEL_30:
            v34 = v17;
            sub_98E4B0((__int64)&v40);
            return v34;
          }
        }
      }
      v19 = sub_EEB7E0(v5, (__int64)v7, a3);
      sub_168B9F0((__int64)&v44, a1, v19, 0xB50u, 0);
      v35 = v43;
      v20 = sub_1588420((__int64)&v44, &v35);
      if ( !v43 )
      {
        v38 = 1;
        v21 = 0;
        v22 = 1;
        v37 = nullptr;
        v39 = 0;
LABEL_23:
        v23 = v21 << (64 - (unsigned __int8)v22) >> (64 - (unsigned __int8)v22);
LABEL_24:
        if ( *(_BYTE *)(v20 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v20 + 32), v23, 2u);
          v22 = v38;
        }
        else if ( *(_BYTE *)(v20 + 132) )
        {
          v28 = sub_168B9E0((_QWORD *)v20);
          v29 = *(_QWORD *)(v20 + 16);
          if ( v29 )
            v29 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v29 + 32LL))(*(_QWORD *)(v20 + 16));
          v36 = v29;
          v30 = sub_1587BC0(v28, &v36, v24, v25, v26, v27);
          sub_AE9DF0((unsigned __int8 **)(*v30 + 32LL * *(unsigned int *)(v20 + 128) + 8), v23, 2u);
          v22 = v38;
        }
        if ( v22 > 0x40 && v37 )
          operator delete[](v37);
        sub_15F7200(&v44);
        v17 = 1;
        goto LABEL_30;
      }
      v22 = v41;
      v38 = v41;
      if ( v41 <= 0x40 )
      {
        v21 = (__int64)v40;
        v37 = v40;
        v39 = v42;
        if ( v42 )
        {
LABEL_33:
          v23 = v21;
          goto LABEL_24;
        }
LABEL_43:
        if ( !v22 )
        {
          v23 = 0;
          goto LABEL_24;
        }
        goto LABEL_23;
      }
      sub_2205510(&v37);
      v22 = v38;
      v21 = (__int64)v37;
      v39 = v42;
      if ( v42 )
      {
        if ( v38 <= 0x40 )
          goto LABEL_33;
      }
      else if ( v38 <= 0x40 )
      {
        goto LABEL_43;
      }
      v23 = *(_QWORD *)v37;
      goto LABEL_24;
    }
  }
  return result;
}
