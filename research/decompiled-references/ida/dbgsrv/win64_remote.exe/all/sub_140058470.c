/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140058470
// Address: 0x0000000140058470

//----- (0000000140058470) ----------------------------------------------------
char __fastcall sub_140058470(__int64 a1, _QWORD *a2, __int64 a3)
{
  void *v6; // rsi
  size_t v7; // rdi
  int v8; // r9d
  SECURITY_STATUS v9; // edi
  unsigned __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rdi
  void *v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned int v15; // edx
  __int64 v16; // rdi
  void *v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned int v19; // edx
  __int64 v20; // rdi
  void *v21; // rcx
  bool v23; // r14
  unsigned __int64 v24; // rbx
  unsigned int v25; // edx
  __int64 v26; // rdi
  void *v27; // rcx
  char *v28; // rcx
  unsigned __int64 v29; // rbx
  unsigned int cBuffers; // edx
  __int64 v31; // rdi
  void *v32[2]; // [rsp+50h] [rbp-19h] BYREF
  void *v33[2]; // [rsp+60h] [rbp-9h]
  __int128 v34; // [rsp+70h] [rbp+7h]
  void *Block[2]; // [rsp+80h] [rbp+17h]
  __int64 v36; // [rsp+90h] [rbp+27h]
  struct _SecBufferDesc pMessage; // [rsp+98h] [rbp+2Fh] BYREF

  if ( a2[1] )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1631);
  }
  v6 = nullptr;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = 0;
  if ( v7 )
  {
    v6 = sub_14005AAA0(*(_QWORD *)(a3 + 8));
    memcpy(v6, *(const void **)a3, v7);
    v8 = v7;
  }
  *(_OWORD *)v32 = 0;
  *(_OWORD *)v33 = 0;
  v34 = 0;
  *(_OWORD *)Block = 0;
  v36 = 0;
  *(_QWORD *)&pMessage.ulVersion = 0;
  pMessage.pBuffers = nullptr;
  sub_1400581E0((__int64)v32, 1, (__int64)v6, v8, 0);
  sub_1400581E0((__int64)v32, 0, 0, 0, 0);
  sub_1400581E0((__int64)v32, 0, 0, 0, 0);
  sub_1400581E0((__int64)v32, 0, 0, 0, 0);
  v9 = DecryptMessage((PCtxtHandle)(a1 + 120), &pMessage, 0, nullptr);
  if ( v9 == -2146893032 )
  {
    v28 = (char *)v33[1];
    if ( *((_DWORD *)v33[1] + 5) == 4 )
      *(_QWORD *)(a1 + 136) = *((unsigned int *)v33[1] + 4);
    v29 = 0;
    cBuffers = pMessage.cBuffers;
    if ( pMessage.cBuffers )
    {
      v31 = 0;
      do
      {
        if ( *((_BYTE *)v32[0] + v29) && *(_QWORD *)&v28[v31 + 8] )
        {
          FreeContextBuffer(*(PVOID *)&v28[v31 + 8]);
          cBuffers = pMessage.cBuffers;
          v28 = (char *)v33[1];
        }
        ++v29;
        v31 += 16;
      }
      while ( v29 < cBuffers );
    }
    pMessage.cBuffers = 0;
    pMessage.pBuffers = nullptr;
    v32[1] = nullptr;
    *(_QWORD *)&v34 = 0;
    Block[1] = nullptr;
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
      Block[0] = nullptr;
      v36 = 0;
      v28 = (char *)v33[1];
    }
    if ( v28 )
    {
      *(_QWORD *)&v34 = 0;
      j_free(v28);
      v33[1] = nullptr;
      *((_QWORD *)&v34 + 1) = 0;
    }
    if ( v32[0] )
    {
      v32[1] = nullptr;
      j_free(v32[0]);
      v32[0] = nullptr;
      v33[0] = nullptr;
    }
    if ( v6 )
      j_free(v6);
    return 1;
  }
  else
  {
    sub_1400589C0(a1, (void **)a3, (char *)v33[1] + 48);
    if ( v9 )
    {
      if ( v9 == 590615 )
      {
        *(_QWORD *)(a1 + 64) = "connection_closed_by_peer";
        v18 = 0;
        v19 = pMessage.cBuffers;
        if ( pMessage.cBuffers )
        {
          v20 = 0;
          do
          {
            if ( *((_BYTE *)v32[0] + v18) )
            {
              v21 = *(void **)((char *)v33[1] + v20 + 8);
              if ( v21 )
              {
                FreeContextBuffer(v21);
                v19 = pMessage.cBuffers;
              }
            }
            ++v18;
            v20 += 16;
          }
          while ( v18 < v19 );
        }
        pMessage.cBuffers = 0;
        pMessage.pBuffers = nullptr;
        v32[1] = nullptr;
        *(_QWORD *)&v34 = 0;
        Block[1] = nullptr;
        if ( Block[0] )
        {
          Block[1] = nullptr;
          j_free(Block[0]);
          Block[0] = nullptr;
          v36 = 0;
        }
        if ( v33[1] )
        {
          *(_QWORD *)&v34 = 0;
          j_free(v33[1]);
          v33[1] = nullptr;
          *((_QWORD *)&v34 + 1) = 0;
        }
        if ( v32[0] )
        {
          v32[1] = nullptr;
          j_free(v32[0]);
          v32[0] = nullptr;
          v33[0] = nullptr;
        }
      }
      else if ( v9 == 590625 )
      {
        *(_QWORD *)(a1 + 64) = "renegotiation";
        v14 = 0;
        v15 = pMessage.cBuffers;
        if ( pMessage.cBuffers )
        {
          v16 = 0;
          do
          {
            if ( *((_BYTE *)v32[0] + v14) )
            {
              v17 = *(void **)((char *)v33[1] + v16 + 8);
              if ( v17 )
              {
                FreeContextBuffer(v17);
                v15 = pMessage.cBuffers;
              }
            }
            ++v14;
            v16 += 16;
          }
          while ( v14 < v15 );
        }
        pMessage.cBuffers = 0;
        pMessage.pBuffers = nullptr;
        v32[1] = nullptr;
        *(_QWORD *)&v34 = 0;
        Block[1] = nullptr;
        if ( Block[0] )
        {
          Block[1] = nullptr;
          j_free(Block[0]);
          Block[0] = nullptr;
          v36 = 0;
        }
        if ( v33[1] )
        {
          *(_QWORD *)&v34 = 0;
          j_free(v33[1]);
          v33[1] = nullptr;
          *((_QWORD *)&v34 + 1) = 0;
        }
        if ( v32[0] )
        {
          v32[1] = nullptr;
          j_free(v32[0]);
          v32[0] = nullptr;
          v33[0] = nullptr;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 64) = "DecryptMessage";
        *(_DWORD *)(a1 + 72) = v9;
        v10 = 0;
        v11 = pMessage.cBuffers;
        if ( pMessage.cBuffers )
        {
          v12 = 0;
          do
          {
            if ( *((_BYTE *)v32[0] + v10) )
            {
              v13 = *(void **)((char *)v33[1] + v12 + 8);
              if ( v13 )
              {
                FreeContextBuffer(v13);
                v11 = pMessage.cBuffers;
              }
            }
            ++v10;
            v12 += 16;
          }
          while ( v10 < v11 );
        }
        pMessage.cBuffers = 0;
        pMessage.pBuffers = nullptr;
        v32[1] = nullptr;
        *(_QWORD *)&v34 = 0;
        Block[1] = nullptr;
        if ( Block[0] )
        {
          Block[1] = nullptr;
          j_free(Block[0]);
          Block[0] = nullptr;
          v36 = 0;
        }
        if ( v33[1] )
        {
          *(_QWORD *)&v34 = 0;
          j_free(v33[1]);
          v33[1] = nullptr;
          *((_QWORD *)&v34 + 1) = 0;
        }
        if ( v32[0] )
        {
          v32[1] = nullptr;
          j_free(v32[0]);
          v32[0] = nullptr;
          v33[0] = nullptr;
        }
      }
      if ( v6 )
        j_free(v6);
      return 0;
    }
    else
    {
      sub_1400017A0(a2, *((const void **)v33[1] + 3), *((unsigned int *)v33[1] + 4));
      v23 = a2[1] != 0;
      v24 = 0;
      v25 = pMessage.cBuffers;
      if ( pMessage.cBuffers )
      {
        v26 = 0;
        do
        {
          if ( *((_BYTE *)v32[0] + v24) )
          {
            v27 = *(void **)((char *)v33[1] + v26 + 8);
            if ( v27 )
            {
              FreeContextBuffer(v27);
              v25 = pMessage.cBuffers;
            }
          }
          ++v24;
          v26 += 16;
        }
        while ( v24 < v25 );
      }
      pMessage.cBuffers = 0;
      pMessage.pBuffers = nullptr;
      v32[1] = nullptr;
      *(_QWORD *)&v34 = 0;
      Block[1] = nullptr;
      if ( Block[0] )
      {
        Block[1] = nullptr;
        j_free(Block[0]);
        Block[0] = nullptr;
        v36 = 0;
      }
      if ( v33[1] )
      {
        *(_QWORD *)&v34 = 0;
        j_free(v33[1]);
        v33[1] = nullptr;
        *((_QWORD *)&v34 + 1) = 0;
      }
      if ( v32[0] )
      {
        v32[1] = nullptr;
        j_free(v32[0]);
        v32[0] = nullptr;
        v33[0] = nullptr;
      }
      if ( v6 )
        j_free(v6);
      return v23;
    }
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
