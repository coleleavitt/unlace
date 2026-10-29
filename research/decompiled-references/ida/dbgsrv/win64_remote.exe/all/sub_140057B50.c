/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140057B50
// Address: 0x0000000140057B50

//----- (0000000140057B50) ----------------------------------------------------
__int64 __fastcall sub_140057B50(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 v6; // r15
  size_t v7; // rbx
  char *v8; // r14
  unsigned __int64 v9; // rdi
  SECURITY_STATUS v10; // eax
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned int i; // edx
  void *v17; // rcx
  const char *v19; // rax
  unsigned __int64 v20; // rbx
  unsigned int cBuffers; // edx
  __int64 v22; // rsi
  void *v23; // rcx
  void *v24; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-41h]
  __int64 v26; // [rsp+40h] [rbp-39h]
  void *v27[2]; // [rsp+50h] [rbp-29h] BYREF
  void *v28[2]; // [rsp+60h] [rbp-19h]
  __int128 v29; // [rsp+70h] [rbp-9h]
  void *Block[2]; // [rsp+80h] [rbp+7h]
  __int64 v31; // [rsp+90h] [rbp+17h]
  struct _SecBufferDesc pMessage; // [rsp+98h] [rbp+1Fh] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a3 )
    return a3;
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 144LL))(*(_QWORD *)(a1 + 32)) )
    {
      *(_QWORD *)(a1 + 64) = "irs";
      return -1;
    }
    v7 = a3 - v6;
    if ( a3 - v6 >= *(unsigned int *)(a1 + 208) )
      v7 = *(unsigned int *)(a1 + 208);
    v8 = nullptr;
    v24 = nullptr;
    v25 = 0;
    v26 = 0;
    v9 = v7 + *(unsigned int *)(a1 + 204) + *(unsigned int *)(a1 + 200);
    if ( v9 )
    {
      v24 = sub_14005ABE0((__int64)&v24, nullptr, v9, 1u);
      memset((char *)v24 + v25, 0, v9 - v25);
      v25 = v9;
      v8 = (char *)v24;
    }
    memcpy(&v8[*(unsigned int *)(a1 + 200)], (const void *)(v6 + v4), v7);
    *(_OWORD *)v27 = 0;
    *(_OWORD *)v28 = 0;
    v29 = 0;
    *(_OWORD *)Block = 0;
    v31 = 0;
    *(_QWORD *)&pMessage.ulVersion = 0;
    pMessage.pBuffers = nullptr;
    sub_1400581E0((__int64)v27, 7, (__int64)v8, *(_DWORD *)(a1 + 200), 0);
    sub_1400581E0((__int64)v27, 1, (__int64)&v8[*(unsigned int *)(a1 + 200)], v7, 0);
    sub_1400581E0((__int64)v27, 6, (__int64)&v8[v7 + *(unsigned int *)(a1 + 200)], *(_DWORD *)(a1 + 204), 0);
    sub_1400581E0((__int64)v27, 0, 0, 0, 0);
    v10 = EncryptMessage((PCtxtHandle)(a1 + 120), 0, &pMessage, 0);
    if ( v10 )
      break;
    v11 = (unsigned int)(*(_DWORD *)v28[1] + *((_DWORD *)v28[1] + 4) + *((_DWORD *)v28[1] + 8));
    v12 = sub_140054530(*(_QWORD *)(a1 + 32));
    v13 = v12;
    if ( v12 <= 0 )
    {
      v19 = "irs";
      goto LABEL_28;
    }
    if ( v12 < v11 )
    {
      v19 = "short_send";
      goto LABEL_28;
    }
    v6 += v7;
    v14 = 0;
    v15 = 0;
    for ( i = pMessage.cBuffers; v15 < i; v14 += 16 )
    {
      if ( *((_BYTE *)v27[0] + v15) )
      {
        v17 = *(void **)((char *)v28[1] + v14 + 8);
        if ( v17 )
        {
          FreeContextBuffer(v17);
          i = pMessage.cBuffers;
        }
      }
      ++v15;
    }
    pMessage.cBuffers = 0;
    pMessage.pBuffers = nullptr;
    v27[1] = nullptr;
    *(_QWORD *)&v29 = 0;
    Block[1] = nullptr;
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
      Block[0] = nullptr;
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
      v27[0] = nullptr;
      v28[0] = nullptr;
    }
    if ( v24 )
    {
      v25 = 0;
      j_free(v24);
    }
    v4 = a2;
    if ( v6 >= a3 )
      return a3;
  }
  *(_DWORD *)(a1 + 72) = v10;
  v13 = -1;
  v19 = "EncryptMessage";
LABEL_28:
  *(_QWORD *)(a1 + 64) = v19;
  v20 = 0;
  cBuffers = pMessage.cBuffers;
  if ( pMessage.cBuffers )
  {
    v22 = 0;
    do
    {
      if ( *((_BYTE *)v27[0] + v20) )
      {
        v23 = *(void **)((char *)v28[1] + v22 + 8);
        if ( v23 )
        {
          FreeContextBuffer(v23);
          cBuffers = pMessage.cBuffers;
        }
      }
      ++v20;
      v22 += 16;
    }
    while ( v20 < cBuffers );
  }
  pMessage.cBuffers = 0;
  pMessage.pBuffers = nullptr;
  v27[1] = nullptr;
  *(_QWORD *)&v29 = 0;
  Block[1] = nullptr;
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
    Block[0] = nullptr;
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
    v27[0] = nullptr;
    v28[0] = nullptr;
  }
  if ( v24 )
  {
    v25 = 0;
    j_free(v24);
  }
  return v13;
}
