/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140058D30
// Address: 0x0000000140058D30

//----- (0000000140058D30) ----------------------------------------------------
__int64 __fastcall sub_140058D30(__int64 a1)
{
  int v2; // r14d
  unsigned __int64 v3; // rbx
  unsigned int cBuffers; // edx
  __int64 v5; // rdi
  void *v6; // rcx
  SECURITY_STATUS v7; // ebx
  const char *v8; // rax
  unsigned __int64 v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // rdi
  void *v12; // rcx
  unsigned __int8 v13; // si
  unsigned __int64 v14; // rbx
  unsigned int v15; // edx
  __int64 v16; // rdi
  void *v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  void *v20; // rcx
  SECURITY_STATUS v21; // eax
  SECURITY_STATUS ContextAttributesA; // eax
  unsigned __int64 v23; // rbx
  __int64 v24; // rdi
  void *v25; // rcx
  void *v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *v28[2]; // [rsp+70h] [rbp-90h]
  __int128 v29; // [rsp+80h] [rbp-80h]
  void *v30[2]; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  struct _SecBufferDesc pOutput; // [rsp+A8h] [rbp-58h] BYREF
  void *v33[2]; // [rsp+C0h] [rbp-40h] BYREF
  void *v34[2]; // [rsp+D0h] [rbp-30h]
  __int128 v35; // [rsp+E0h] [rbp-20h]
  void *Block[2]; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp+0h]
  struct _SecBufferDesc pInput; // [rsp+108h] [rbp+8h] BYREF

  v2 = 0;
  *(_OWORD *)v27 = 0;
  *(_OWORD *)v28 = 0;
  v29 = 0;
  *(_OWORD *)v30 = 0;
  v31 = 0;
  *(_QWORD *)&pOutput.ulVersion = 0;
  pOutput.pBuffers = nullptr;
  if ( *(_BYTE *)(a1 + 220) )
  {
LABEL_59:
    if ( (*(_DWORD *)(a1 + 192) & *(_DWORD *)(a1 + 196)) == *(_DWORD *)(a1 + 192) )
    {
      ContextAttributesA = QueryContextAttributesA((PCtxtHandle)(a1 + 120), 4u, (void *)(a1 + 200));
      if ( ContextAttributesA )
      {
        *(_QWORD *)(a1 + 64) = "QueryContextAttributes(SECPKG_ATTR_STREAM_SIZES)";
        *(_DWORD *)(a1 + 72) = ContextAttributesA;
        v13 = 0;
      }
      else
      {
        v13 = 1;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 64) = "unsupported_attributes";
      v13 = 0;
    }
    goto LABEL_68;
  }
  while ( !v2 )
  {
    v18 = 0;
    if ( pOutput.cBuffers )
    {
      v19 = 0;
      do
      {
        if ( *((_BYTE *)v27[0] + v18) )
        {
          v20 = *(void **)((char *)v28[1] + v19 + 8);
          if ( v20 )
            FreeContextBuffer(v20);
        }
        ++v18;
        v19 += 16;
      }
      while ( v18 < pOutput.cBuffers );
    }
    pOutput.cBuffers = 0;
    pOutput.pBuffers = nullptr;
    v27[1] = nullptr;
    *(_QWORD *)&v29 = 0;
    v30[1] = nullptr;
    sub_1400581E0((__int64)v27, 2, 0, 0, 1);
    v21 = InitializeSecurityContextA(
            (PCredHandle)(a1 + 104),
            nullptr,
            nullptr,
            *(_DWORD *)(a1 + 192),
            0,
            0,
            nullptr,
            0,
            (PCtxtHandle)(a1 + 120),
            &pOutput,
            (unsigned int *)(a1 + 196),
            nullptr);
    if ( v21 != 590610 )
    {
      *(_QWORD *)(a1 + 64) = "InitializeSecurityContext[1]";
      *(_DWORD *)(a1 + 72) = v21;
LABEL_64:
      v13 = 0;
      goto LABEL_68;
    }
    v2 = 1;
LABEL_58:
    if ( *(_BYTE *)(a1 + 220) )
      goto LABEL_59;
  }
  if ( v2 == 1 )
  {
    if ( sub_140054530(*(_QWORD *)(a1 + 32)) <= 0 )
    {
      *(_QWORD *)(a1 + 64) = "irs";
      v13 = 0;
      goto LABEL_68;
    }
    v2 = 2;
    goto LABEL_58;
  }
  if ( v2 == 2 )
  {
    if ( !sub_140059310((__int64 *)a1, a1 + 144) )
      goto LABEL_64;
    v2 = 3;
    goto LABEL_58;
  }
  *(_OWORD *)v33 = 0;
  *(_OWORD *)v34 = 0;
  v35 = 0;
  *(_OWORD *)Block = 0;
  v37 = 0;
  *(_QWORD *)&pInput.ulVersion = 0;
  pInput.pBuffers = nullptr;
  sub_1400581E0((__int64)v33, 2, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 152), 0);
  sub_1400581E0((__int64)v33, 0, 0, 0, 0);
  v3 = 0;
  cBuffers = pOutput.cBuffers;
  if ( pOutput.cBuffers )
  {
    v5 = 0;
    do
    {
      if ( *((_BYTE *)v27[0] + v3) )
      {
        v6 = *(void **)((char *)v28[1] + v5 + 8);
        if ( v6 )
        {
          FreeContextBuffer(v6);
          cBuffers = pOutput.cBuffers;
        }
      }
      ++v3;
      v5 += 16;
    }
    while ( v3 < cBuffers );
  }
  pOutput.cBuffers = 0;
  pOutput.pBuffers = nullptr;
  v27[1] = nullptr;
  *(_QWORD *)&v29 = 0;
  v30[1] = nullptr;
  sub_1400581E0((__int64)v27, 2, 0, 0, 1);
  v7 = InitializeSecurityContextA(
         (PCredHandle)(a1 + 104),
         (PCtxtHandle)(a1 + 120),
         nullptr,
         *(_DWORD *)(a1 + 192),
         0,
         0,
         &pInput,
         0,
         nullptr,
         &pOutput,
         (unsigned int *)(a1 + 196),
         nullptr);
  if ( v7 == -2146893032 )
  {
    v2 = 2;
LABEL_33:
    v14 = 0;
    v15 = pInput.cBuffers;
    if ( pInput.cBuffers )
    {
      v16 = 0;
      do
      {
        if ( *((_BYTE *)v33[0] + v14) )
        {
          v17 = *(void **)((char *)v34[1] + v16 + 8);
          if ( v17 )
          {
            FreeContextBuffer(v17);
            v15 = pInput.cBuffers;
          }
        }
        ++v14;
        v16 += 16;
      }
      while ( v14 < v15 );
    }
    pInput.cBuffers = 0;
    pInput.pBuffers = nullptr;
    v33[1] = nullptr;
    *(_QWORD *)&v35 = 0;
    Block[1] = nullptr;
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
      Block[0] = nullptr;
      v37 = 0;
    }
    if ( v34[1] )
    {
      *(_QWORD *)&v35 = 0;
      j_free(v34[1]);
      v34[1] = nullptr;
      *((_QWORD *)&v35 + 1) = 0;
    }
    if ( v33[0] )
    {
      v33[1] = nullptr;
      j_free(v33[0]);
    }
    goto LABEL_58;
  }
  sub_1400589C0(a1, (void **)(a1 + 144), (char *)v34[1] + 16);
  if ( !v7 )
  {
    *(_BYTE *)(a1 + 220) = 1;
    if ( *(_DWORD *)v28[1] && sub_140054530(*(_QWORD *)(a1 + 32)) <= 0 )
    {
      v8 = "irs";
      goto LABEL_19;
    }
    goto LABEL_33;
  }
  if ( v7 == 590610 )
  {
    if ( *(_DWORD *)v28[1] )
      v2 = 1;
    goto LABEL_33;
  }
  *(_DWORD *)(a1 + 72) = v7;
  v8 = "InitializeSecurityContext[2]";
LABEL_19:
  *(_QWORD *)(a1 + 64) = v8;
  v9 = 0;
  v10 = pInput.cBuffers;
  if ( pInput.cBuffers )
  {
    v11 = 0;
    do
    {
      if ( *((_BYTE *)v33[0] + v9) )
      {
        v12 = *(void **)((char *)v34[1] + v11 + 8);
        if ( v12 )
        {
          FreeContextBuffer(v12);
          v10 = pInput.cBuffers;
        }
      }
      ++v9;
      v11 += 16;
    }
    while ( v9 < v10 );
  }
  pInput.cBuffers = 0;
  pInput.pBuffers = nullptr;
  v33[1] = nullptr;
  *(_QWORD *)&v35 = 0;
  Block[1] = nullptr;
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
    Block[0] = nullptr;
    v37 = 0;
  }
  if ( v34[1] )
  {
    *(_QWORD *)&v35 = 0;
    j_free(v34[1]);
    v34[1] = nullptr;
    *((_QWORD *)&v35 + 1) = 0;
  }
  if ( v33[0] )
  {
    v33[1] = nullptr;
    j_free(v33[0]);
  }
  v13 = 0;
LABEL_68:
  v23 = 0;
  if ( pOutput.cBuffers )
  {
    v24 = 0;
    do
    {
      if ( *((_BYTE *)v27[0] + v23) )
      {
        v25 = *(void **)((char *)v28[1] + v24 + 8);
        if ( v25 )
          FreeContextBuffer(v25);
      }
      ++v23;
      v24 += 16;
    }
    while ( v23 < pOutput.cBuffers );
  }
  pOutput.cBuffers = 0;
  pOutput.pBuffers = nullptr;
  v27[1] = nullptr;
  *(_QWORD *)&v29 = 0;
  v30[1] = nullptr;
  if ( v30[0] )
  {
    v30[1] = nullptr;
    j_free(v30[0]);
    v30[0] = nullptr;
    v31 = 0;
  }
  if ( v28[1] )
  {
    *(_QWORD *)&v29 = 0;
    j_free(v28[1]);
    v28[1] = nullptr;
    *((_QWORD *)&v29 + 1) = 0;
  }
  if ( v27[0] )
  {
    v27[1] = nullptr;
    j_free(v27[0]);
  }
  return v13;
}
// 140058DB4: conditional instruction was optimized away because r14d.4==3
