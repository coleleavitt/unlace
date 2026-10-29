__int64 __fastcall sub_16D7E40(__int64 a1, unsigned __int64 a2, int a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r12d
  unsigned __int8 v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rax
  __int64 *v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rbx
  unsigned int v22; // eax
  __int64 v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  int v40; // [rsp+Ch] [rbp-FCh]
  int v41; // [rsp+Ch] [rbp-FCh]
  unsigned int v42; // [rsp+14h] [rbp-F4h] BYREF
  __int64 v43; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v44; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v45; // [rsp+28h] [rbp-E0h]
  char v46; // [rsp+2Ch] [rbp-DCh]
  unsigned __int8 v47; // [rsp+30h] [rbp-D8h]
  void *v48; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v49; // [rsp+48h] [rbp-C0h]
  char v50; // [rsp+4Ch] [rbp-BCh]
  __int64 v51; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v52[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v53; // [rsp+B8h] [rbp-50h]
  unsigned int v54; // [rsp+C0h] [rbp-48h]
  char v55; // [rsp+C4h] [rbp-44h]

  if ( a2 )
  {
    sub_C3EB00((__int64)&v44, a2, *(_QWORD *)(a1 + 248), nullptr, a5, a6);
    v10 = v47;
    if ( v47 )
    {
      if ( a3 )
      {
        if ( a3 == 1 )
          v42 = 0xFFFF;
        v11 = 0;
      }
      else
      {
        v42 = 1;
        v11 = v47;
      }
      v49 = 64;
      v50 = 0;
      v48 = nullptr;
      v12 = sub_98E2D0(&v44, (__int64 *)&v48);
      if ( v49 > 0x40 && v48 )
      {
        v40 = v12;
        operator delete[](v48);
        v12 = v40;
      }
      if ( v12 < 0 )
        goto LABEL_19;
      v50 = 0;
      v49 = 64;
      v48 = (void *)v42;
      v16 = sub_98E2D0(&v44, (__int64 *)&v48);
      if ( v49 > 0x40 && v48 )
      {
        v41 = v16;
        operator delete[](v48);
        v16 = v41;
      }
      if ( v16 > 0 )
      {
LABEL_19:
        v18 = (__int64 *)(a1 + 8);
        if ( v11 )
        {
          v19 = sub_C00A40(a2, (__int64)&v48, v13, v14, v15);
          sub_168B9F0((__int64)&v48, v18, v19, 0x1303u, 0);
          if ( v46 )
          {
            v20 = v44;
            if ( v45 > 0x40 )
              v20 = *(_QWORD *)v44;
          }
          else if ( v45 > 0x40 )
          {
            v20 = *(_QWORD *)v44;
          }
          else
          {
            v20 = 0;
            if ( v45 )
              v20 = v44 << (64 - (unsigned __int8)v45) >> (64 - (unsigned __int8)v45);
          }
          if ( v53 )
          {
            sub_16B71B0(v52, v20);
          }
          else if ( v55 )
          {
            v34 = sub_168B9E0(&v48);
            v37 = v51;
            if ( v51 )
              v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
            v43 = v37;
            v38 = sub_1587BC0(v34, &v43, v32, v33, v35, v36);
            sub_16B71B0((unsigned __int8 **)(*v38 + 32LL * v54 + 8), v20);
          }
        }
        else
        {
          v22 = sub_C00A40(a2, (__int64)&v48, v13, v14, v15);
          sub_168B9F0((__int64)&v48, v18, v22, 0x1308u, 0);
          if ( v46 )
          {
            v23 = v44;
            if ( v45 > 0x40 )
              v23 = *(_QWORD *)v44;
          }
          else if ( v45 > 0x40 )
          {
            v23 = *(_QWORD *)v44;
          }
          else
          {
            v23 = 0;
            if ( v45 )
              v23 = v44 << (64 - (unsigned __int8)v45) >> (64 - (unsigned __int8)v45);
          }
          if ( v53 )
          {
            sub_16B71B0(v52, v23);
          }
          else if ( v55 )
          {
            v27 = sub_168B9E0(&v48);
            v30 = v51;
            if ( v51 )
              v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
            v43 = v30;
            v31 = sub_1587BC0(v27, &v43, v25, v26, v28, v29);
            sub_16B71B0((unsigned __int8 **)(*v31 + 32LL * v54 + 8), v23);
          }
          sub_1588370((__int64)&v48, &v42);
        }
        v10 = 0;
        sub_15F7200(&v48);
      }
      else
      {
        LODWORD(v17) = v44;
        if ( v45 > 0x40 )
          v17 = *(_QWORD *)v44;
        *a4 = v17;
      }
    }
    else
    {
      v24 = sub_C00A40(a2, a2, v7, v8, v9);
      sub_168B9F0((__int64)&v48, (__int64 *)(a1 + 8), v24, 0x1304u, 0);
      sub_15F7200(&v48);
    }
    sub_98E4B0((__int64)&v44);
  }
  else
  {
    *a4 = 0;
    return 1;
  }
  return v10;
}
