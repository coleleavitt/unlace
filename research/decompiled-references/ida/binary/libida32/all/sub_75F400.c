__int64 __fastcall sub_75F400(__int64 a1)
{
  char v2; // al
  __int64 result; // rax
  char *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 i; // r12
  void **v8; // rbx
  _QWORD *v9; // r15
  void *v10; // rdi
  char *v11; // rdi
  _QWORD *v12; // r15
  void *v13; // rdi
  char *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rax
  void *v18; // rdi
  char v19; // al
  void *v20; // rdi
  char v21; // bl

  if ( *(_BYTE *)(a1 + 105) )
  {
    if ( *(_QWORD *)(a1 + 120) )
    {
      v19 = sub_75E280(a1, a1 + 112, *(unsigned int *)(a1 + 136));
      v20 = *(void **)(a1 + 112);
      v21 = v19;
      if ( v20 )
      {
        *(_QWORD *)(a1 + 120) = 0;
        qfree(v20);
        *(_QWORD *)(a1 + 112) = 0;
        *(_QWORD *)(a1 + 128) = 0;
      }
      *(_DWORD *)(a1 + 136) = -1;
      if ( !v21 )
        return 0;
    }
    *(_BYTE *)(a1 + 105) = 0;
  }
  v2 = qgetenv("IDA_VERIFY_DIRTREES");
  result = sub_75F180(a1, v2, nullptr);
  if ( !(_BYTE)result )
  {
    v4 = *(char **)(a1 + 48);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 56);
      if ( v5 )
      {
        v6 = 0;
        for ( i = 0; i != v5; ++i )
        {
          v8 = (void **)&v4[v6];
          v9 = *(_QWORD **)&v4[v6 + 120];
          while ( v9 )
          {
            v10 = v9;
            v9 = (_QWORD *)*v9;
            operator delete(v10, 0x10u);
          }
          memset(v8[13], 0, 8LL * (_QWORD)v8[14]);
          v11 = (char *)v8[13];
          v8[16] = nullptr;
          v8[15] = nullptr;
          if ( v11 != (char *)(v8 + 19) )
            operator delete(v11, 8LL * (_QWORD)v8[14]);
          v12 = v8[8];
          while ( v12 )
          {
            v13 = v12;
            v12 = (_QWORD *)*v12;
            operator delete(v13, 0x10u);
          }
          memset(v8[6], 0, 8LL * (_QWORD)v8[7]);
          v14 = (char *)v8[6];
          v8[9] = nullptr;
          v8[8] = nullptr;
          if ( v14 != (char *)(v8 + 12) )
            operator delete(v14, 8LL * (_QWORD)v8[7]);
          v15 = v8[3];
          if ( v15 )
          {
            v8[4] = nullptr;
            qfree(v15);
          }
          v16 = *v8;
          if ( *v8 )
          {
            v8[1] = nullptr;
            qfree(v16);
          }
          v4 = *(char **)(a1 + 48);
          v6 += 176;
        }
      }
      *(_QWORD *)(a1 + 56) = 0;
      qfree(v4);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 64) = 0;
    }
    sub_75A6B0((__int64 *)(a1 + 48), *(_QWORD *)(a1 + 56) + 1LL);
    v17 = *(_QWORD *)(a1 + 48) + 176LL * *(_QWORD *)(a1 + 56);
    *(_OWORD *)(v17 + 8) = 0;
    *(_OWORD *)(v17 + 32) = 0;
    *(_QWORD *)(v17 + 48) = v17 + 96;
    *(_QWORD *)v17 = 0;
    *(_QWORD *)(v17 + 24) = 0;
    *(_QWORD *)(v17 + 56) = 1;
    *(_QWORD *)(v17 + 64) = 0;
    *(_QWORD *)(v17 + 72) = 0;
    *(_QWORD *)(v17 + 88) = 0;
    *(_QWORD *)(v17 + 96) = 0;
    *(_QWORD *)(v17 + 104) = v17 + 152;
    *(_QWORD *)(v17 + 112) = 1;
    *(_QWORD *)(v17 + 120) = 0;
    *(_QWORD *)(v17 + 128) = 0;
    *(_QWORD *)(v17 + 144) = 0;
    *(_QWORD *)(v17 + 152) = 0;
    *(_DWORD *)(v17 + 160) = 0;
    *(_QWORD *)(v17 + 164) = 0;
    *(_DWORD *)(v17 + 80) = 1065353216;
    *(_DWORD *)(v17 + 136) = 1065353216;
    v18 = *(void **)(a1 + 72);
    ++*(_QWORD *)(a1 + 56);
    if ( v18 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v18);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    return 0;
  }
  return result;
}

