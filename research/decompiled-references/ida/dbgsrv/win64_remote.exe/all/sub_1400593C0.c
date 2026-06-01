/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400593C0
// Address: 0x00000001400593C0

//----- (00000001400593C0) ----------------------------------------------------
void __fastcall sub_1400593C0(__int64 a1)
{
  SECURITY_STATUS v2; // eax
  char *v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned int cBuffers; // edx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned int v9; // edx
  __int64 v10; // rdi
  void *v11; // rcx
  void *v12[2]; // [rsp+60h] [rbp-A0h] BYREF
  void *v13[2]; // [rsp+70h] [rbp-90h]
  __int128 v14; // [rsp+80h] [rbp-80h]
  void *Block[2]; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+A0h] [rbp-60h]
  struct _SecBufferDesc pOutput; // [rsp+A8h] [rbp-58h] BYREF
  void *v18[2]; // [rsp+C0h] [rbp-40h] BYREF
  void *v19[2]; // [rsp+D0h] [rbp-30h]
  __int128 v20; // [rsp+E0h] [rbp-20h]
  void *v21[2]; // [rsp+F0h] [rbp-10h]
  __int64 v22; // [rsp+100h] [rbp+0h]
  struct _SecBufferDesc pInput; // [rsp+108h] [rbp+8h] BYREF
  int v24; // [rsp+130h] [rbp+30h] BYREF

  *(_OWORD *)v18 = 0;
  *(_OWORD *)v19 = 0;
  v20 = 0;
  *(_OWORD *)v21 = 0;
  v22 = 0;
  *(_QWORD *)&pInput.ulVersion = 0;
  pInput.pBuffers = nullptr;
  sub_1400581E0((__int64)v18, 2, 0, 0, 0);
  v24 = 1;
  *((_QWORD *)v19[1] + 1) = &v24;
  *(_DWORD *)v19[1] = 4;
  if ( !ApplyControlToken((PCtxtHandle)(a1 + 120), &pInput) )
  {
    *(_OWORD *)v12 = 0;
    *(_OWORD *)v13 = 0;
    v14 = 0;
    *(_OWORD *)Block = 0;
    v16 = 0;
    *(_QWORD *)&pOutput.ulVersion = 0;
    pOutput.pBuffers = nullptr;
    sub_1400581E0((__int64)v12, 0, 0, 0, 1);
    v2 = InitializeSecurityContextA(
           (PCredHandle)(a1 + 104),
           (PCtxtHandle)(a1 + 120),
           nullptr,
           *(_DWORD *)(a1 + 192),
           0,
           0,
           nullptr,
           0,
           nullptr,
           &pOutput,
           (unsigned int *)(a1 + 196),
           nullptr);
    v3 = (char *)v13[1];
    if ( *(_DWORD *)v13[1] && (!v2 || v2 == 590615) )
    {
      v4 = sub_140054530(*(_QWORD *)(a1 + 32));
      v3 = (char *)v13[1];
      if ( v4 <= 0 )
        *(_QWORD *)(a1 + 64) = "irs";
    }
    v5 = 0;
    cBuffers = pOutput.cBuffers;
    if ( pOutput.cBuffers )
    {
      v7 = 0;
      do
      {
        if ( *((_BYTE *)v12[0] + v5) && *(_QWORD *)&v3[v7 + 8] )
        {
          FreeContextBuffer(*(PVOID *)&v3[v7 + 8]);
          cBuffers = pOutput.cBuffers;
          v3 = (char *)v13[1];
        }
        ++v5;
        v7 += 16;
      }
      while ( v5 < cBuffers );
    }
    pOutput.cBuffers = 0;
    pOutput.pBuffers = nullptr;
    v12[1] = nullptr;
    *(_QWORD *)&v14 = 0;
    Block[1] = nullptr;
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
      Block[0] = nullptr;
      v16 = 0;
      v3 = (char *)v13[1];
    }
    if ( v3 )
    {
      *(_QWORD *)&v14 = 0;
      j_free(v3);
      v13[1] = nullptr;
      *((_QWORD *)&v14 + 1) = 0;
    }
    if ( v12[0] )
    {
      v12[1] = nullptr;
      j_free(v12[0]);
      v12[0] = nullptr;
      v13[0] = nullptr;
    }
  }
  v8 = 0;
  v9 = pInput.cBuffers;
  if ( pInput.cBuffers )
  {
    v10 = 0;
    do
    {
      if ( *((_BYTE *)v18[0] + v8) )
      {
        v11 = *(void **)((char *)v19[1] + v10 + 8);
        if ( v11 )
        {
          FreeContextBuffer(v11);
          v9 = pInput.cBuffers;
        }
      }
      ++v8;
      v10 += 16;
    }
    while ( v8 < v9 );
  }
  pInput.cBuffers = 0;
  pInput.pBuffers = nullptr;
  v18[1] = nullptr;
  *(_QWORD *)&v20 = 0;
  v21[1] = nullptr;
  if ( v21[0] )
  {
    v21[1] = nullptr;
    j_free(v21[0]);
    v21[0] = nullptr;
    v22 = 0;
  }
  if ( v19[1] )
  {
    *(_QWORD *)&v20 = 0;
    j_free(v19[1]);
    v19[1] = nullptr;
    *((_QWORD *)&v20 + 1) = 0;
  }
  if ( v18[0] )
  {
    v18[1] = nullptr;
    j_free(v18[0]);
  }
}
