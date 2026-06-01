void __fastcall sub_17BC0A0(__int64 *a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // r15
  __int64 *v9; // rbx
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // [rsp+18h] [rbp-100h]
  __int64 v21; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-F0h] BYREF
  unsigned int v23; // [rsp+3Ch] [rbp-DCh] BYREF
  __int64 v24; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v28; // [rsp+70h] [rbp-A8h] BYREF
  char v29; // [rsp+C8h] [rbp-50h]
  unsigned int v30; // [rsp+D0h] [rbp-48h]
  char v31; // [rsp+D4h] [rbp-44h]

  v6 = a1[29];
  v22 = a4;
  LODWORD(v6) = *(_DWORD *)(v6 + 148);
  v21 = a5;
  if ( (_DWORD)v6 )
  {
    v7 = a3;
    v8 = a2;
    if ( (*(_BYTE *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      if ( (unsigned __int8)sub_F65CA0((__int64 *)&v22, a1[31], a3, a4, a5, a6) )
      {
        v12 = sub_AAE980(a1[31], v22);
        a3 = a1[29];
        LODWORD(v25) = v12;
        if ( v12 > *(_DWORD *)(a3 + 148) )
        {
          sub_168B9F0((__int64)v26, a1 + 1, *(_DWORD *)(v21 + 24), 0x1CACu, 0);
          v13 = sub_17BA610((__int64)v26, &v21);
          sub_1588370(v13, (unsigned int *)&v25);
          sub_15F7200(v26);
        }
      }
    }
    v9 = &a2[v7];
    if ( v9 != a2 )
    {
      do
      {
        v10 = *v8;
        v24 = *(_QWORD *)(*v8 + 48);
        if ( (*(_BYTE *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
        {
          if ( (unsigned __int8)sub_F65CA0(&v24, a1[31], a3, a4, a5, a6) )
          {
            v11 = sub_AAE980(a1[31], v24);
            a3 = a1[29];
            v23 = v11;
            if ( v11 > *(_DWORD *)(a3 + 148) )
            {
              sub_168B9F0((__int64)v26, a1 + 1, *(_DWORD *)(v10 + 24), 0x1C49u, 0);
              if ( v29 )
              {
                sub_AE9DF0(&v28, v10, 0xAu);
              }
              else if ( v31 )
              {
                v14 = sub_168B9E0(v26);
                v18 = v27;
                if ( v27 )
                {
                  v20 = v14;
                  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 32LL))(v27);
                  v14 = v20;
                }
                v25 = v18;
                v19 = sub_1587BC0(v14, &v25, v14, v15, v16, v17);
                sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * v30 + 8), v10, 0xAu);
              }
              sub_1588370((__int64)v26, &v23);
              sub_15F7200(v26);
            }
          }
        }
        ++v8;
      }
      while ( v9 != v8 );
    }
  }
}
