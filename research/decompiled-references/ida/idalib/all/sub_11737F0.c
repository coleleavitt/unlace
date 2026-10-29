char __fastcall sub_11737F0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rax
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r12
  void *v10; // rcx
  __int64 (__fastcall *v11)(__int64, void **); // rdx
  unsigned __int64 v12; // rax
  void *v13; // rdx
  __int64 v14; // rbx
  unsigned __int8 (__fastcall *v15)(__int64, void **); // rax
  size_t v16; // rax
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(__int64, void **); // rax
  __int64 v25; // [rsp+8h] [rbp-120h]
  void *v26; // [rsp+8h] [rbp-120h]
  unsigned __int64 v27; // [rsp+28h] [rbp-100h]
  _QWORD v28[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v29; // [rsp+50h] [rbp-D8h]
  _QWORD v30[4]; // [rsp+60h] [rbp-C8h] BYREF
  __int16 v31; // [rsp+80h] [rbp-A8h]
  _QWORD v32[4]; // [rsp+90h] [rbp-98h] BYREF
  __int16 v33; // [rsp+B0h] [rbp-78h]
  void *v34; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-60h]
  __int64 v36; // [rsp+D0h] [rbp-58h] BYREF
  __int16 v37; // [rsp+E0h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 136);
  v3 = *(_QWORD *)(a1 + 128);
  if ( v3 == v2 )
  {
    v16 = j__strlen("HIP_DEVICE_LIB_PATH");
    sub_2290A40(&v34, "HIP_DEVICE_LIB_PATH", v16);
    if ( (_BYTE)v37 )
    {
      v17 = v34;
      v18 = v35;
      *(_QWORD *)(a1 + 320) = 0;
      sub_A1FE50((_QWORD *)(a1 + 312), v17, &v17[v18]);
      if ( (_BYTE)v37 )
      {
        if ( v34 != &v36 )
          operator delete(v34);
      }
    }
  }
  else
  {
    v4 = (_QWORD *)(a1 + 312);
    v5 = v3 + ((v2 - v3) & 0xFFFFFFFFFFFFFFE0LL) - 32;
    v6 = *(_BYTE **)v5;
    v7 = *(_QWORD *)(v5 + 8);
    v4[1] = 0;
    sub_A1FE50(v4, v6, &v6[v7]);
  }
  v8 = *(_QWORD *)(a1 + 320);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v8 )
  {
    v10 = *(void **)(a1 + 312);
    v11 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 96LL);
    v37 = 261;
    v34 = v10;
    v35 = v8;
    LOBYTE(v12) = v11(v9, &v34);
    if ( (_BYTE)v12 )
    {
      sub_1172820(a1, *(_QWORD *)(a1 + 312), *(_QWORD *)(a1 + 320));
      LOBYTE(v12) = 0;
      if ( *(_QWORD *)(a1 + 416)
        && *(_QWORD *)(a1 + 440)
        && *(_QWORD *)(a1 + 464)
        && *(_QWORD *)(a1 + 512)
        && *(_QWORD *)(a1 + 536)
        && *(_QWORD *)(a1 + 560)
        && *(_QWORD *)(a1 + 584)
        && *(_QWORD *)(a1 + 608)
        && *(_QWORD *)(a1 + 632)
        && *(_QWORD *)(a1 + 656)
        && *(_QWORD *)(a1 + 680)
        && *(_QWORD *)(a1 + 704)
        && *(_QWORD *)(a1 + 728) )
      {
        LOBYTE(v12) = *(_DWORD *)(a1 + 396) != 0;
      }
      *(_BYTE *)(a1 + 9) = v12;
    }
  }
  else
  {
    sub_A1FE50(
      (_QWORD *)(a1 + 312),
      *(_BYTE **)(*(_QWORD *)a1 + 248LL),
      (_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 248LL) + *(_QWORD *)(*(_QWORD *)a1 + 256LL)));
    v32[0] = "bitcode";
    v30[0] = "amdgcn";
    v28[0] = "lib";
    v31 = 259;
    v37 = 257;
    v33 = 259;
    v29 = 259;
    sub_228A3B0(a1 + 312, v28, v30, v32, &v34);
    v13 = *(void **)(a1 + 312);
    v14 = *(_QWORD *)(a1 + 320);
    v15 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 96LL);
    v37 = 261;
    v34 = v13;
    v25 = (__int64)v13;
    v35 = v14;
    if ( !v15(v9, &v34)
      || (LOBYTE(v12) = sub_1172820(a1, v25, v14), !*(_BYTE *)(a1 + 232))
      && (!*(_QWORD *)(a1 + 416)
       || !*(_QWORD *)(a1 + 440)
       || !*(_QWORD *)(a1 + 464)
       || !*(_QWORD *)(a1 + 512)
       || !*(_QWORD *)(a1 + 536)
       || !*(_QWORD *)(a1 + 560)
       || !*(_QWORD *)(a1 + 584)
       || !*(_QWORD *)(a1 + 608)
       || !*(_QWORD *)(a1 + 632)
       || !*(_QWORD *)(a1 + 656)
       || !*(_QWORD *)(a1 + 680)
       || !*(_QWORD *)(a1 + 704)
       || !*(_QWORD *)(a1 + 728)
       || !*(_DWORD *)(a1 + 396)) )
    {
      *(_BYTE *)(a1 + 9) = 0;
      v19 = sub_116FE60(a1);
      v20 = *(_QWORD *)v19;
      v12 = *(_QWORD *)v19 + ((unsigned __int64)*(unsigned int *)(v19 + 8) << 6);
      v27 = v12;
      if ( v20 == v12 )
        return v12;
      while ( 1 )
      {
        if ( (sub_9C3DB0((void **)(a1 + 312), (const void **)v20),
              v30[0] = "bitcode",
              v37 = 257,
              v33 = 257,
              v31 = 259,
              v29 = 259,
              v28[0] = "amdgcn",
              sub_228A3B0(a1 + 312, v28, v30, v32, &v34),
              v21 = *(_QWORD *)(a1 + 320),
              v22 = *(_QWORD *)(a1 + 312),
              *(_BYTE *)(a1 + 232) == 1)
          && !*(_BYTE *)(v20 + 24)
          || (v23 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 96LL),
              v34 = *(void **)(a1 + 312),
              v26 = v34,
              v37 = 261,
              v35 = v21,
              LOBYTE(v12) = v23(v9, &v34),
              v22 = (__int64)v26,
              (_BYTE)v12) )
        {
          LOBYTE(v12) = sub_1172820(a1, v22, v21);
          if ( *(_BYTE *)(a1 + 232) )
            break;
          if ( *(_QWORD *)(a1 + 416) )
          {
            if ( *(_QWORD *)(a1 + 440) )
            {
              if ( *(_QWORD *)(a1 + 464) )
              {
                if ( *(_QWORD *)(a1 + 512) )
                {
                  if ( *(_QWORD *)(a1 + 536) )
                  {
                    if ( *(_QWORD *)(a1 + 560) )
                    {
                      if ( *(_QWORD *)(a1 + 584) )
                      {
                        if ( *(_QWORD *)(a1 + 608) )
                        {
                          if ( *(_QWORD *)(a1 + 632) )
                          {
                            if ( *(_QWORD *)(a1 + 656) )
                            {
                              if ( *(_QWORD *)(a1 + 680) )
                              {
                                if ( *(_QWORD *)(a1 + 704) )
                                {
                                  if ( *(_QWORD *)(a1 + 728) )
                                  {
                                    LODWORD(v12) = *(_DWORD *)(a1 + 396);
                                    if ( (_DWORD)v12 )
                                      break;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        *(_BYTE *)(a1 + 9) = 0;
        v20 += 64;
        if ( v27 == v20 )
          return v12;
      }
    }
    *(_BYTE *)(a1 + 9) = 1;
  }
  return v12;
}
