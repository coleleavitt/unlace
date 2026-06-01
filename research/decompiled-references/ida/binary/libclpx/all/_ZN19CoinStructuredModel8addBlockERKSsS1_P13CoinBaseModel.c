__int64 __fastcall CoinStructuredModel::addBlock(
        CoinStructuredModel *this,
        const std::string *a2,
        const std::string *a3,
        CoinBaseModel *lpsrc)
{
  __int64 v7; // rax
  int v8; // kr00_4
  __int64 v9; // rdi
  void *v10; // rax
  void *v11; // r15
  void *v12; // r14
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  void *v15; // r15
  __int64 v16; // rdx
  void *v17; // r14
  bool v18; // zf
  unsigned __int64 v19; // rdi
  char *v20; // rax
  int v21; // edx
  char *v22; // r14
  void *v23; // r15
  __int64 v24; // rdx
  CoinModel *v25; // rax
  void *v27; // rbp
  CoinModel *v28; // r12

  v7 = *((int *)this + 27);
  if ( (_DWORD)v7 == *((_DWORD *)this + 28) )
  {
    v8 = 3 * v7 + 30;
    *((_DWORD *)this + 28) = v8 / 2;
    v9 = v8 / 2;
    if ( (unsigned __int64)(int)v9 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v10 = (void *)operator new[](8 * v9);
      v11 = *((void **)this + 21);
      v12 = v10;
      memcpy(v10, v11, 8LL * *((int *)this + 27));
      operator delete[](v11);
      *((_QWORD *)this + 21) = v12;
      v13 = *((int *)this + 28);
      if ( v13 <= 0x7FFFFFFFFFFFFFFLL )
      {
        v14 = operator new[](16 * v13);
        v15 = (void *)v14;
        if ( v13 )
        {
          v16 = 0;
          do
          {
            ++v16;
            *(_DWORD *)v14 = 0;
            *(_DWORD *)(v14 + 4) = 0;
            *(_BYTE *)(v14 + 8) = 0;
            *(_BYTE *)(v14 + 9) = 0;
            v14 += 16;
            *(_BYTE *)(v14 - 6) = 0;
            *(_BYTE *)(v14 - 5) = 0;
            *(_BYTE *)(v14 - 4) = 0;
            *(_BYTE *)(v14 - 3) = 0;
          }
          while ( v13 != v16 );
        }
        v17 = *((void **)this + 23);
        memcpy(v15, v17, 16LL * *((int *)this + 27));
        operator delete[](v17);
        v18 = *((_QWORD *)this + 22) == 0;
        *((_QWORD *)this + 23) = v15;
        if ( v18 )
          goto LABEL_11;
        v19 = *((int *)this + 28);
        if ( v19 <= 0xFFFFFFFFFFFFFFFLL )
        {
          v20 = (char *)operator new[](8 * v19);
          v21 = *((_DWORD *)this + 28);
          v22 = v20;
          if ( v21 )
          {
            if ( v21 / 8 > 0 )
            {
              do
              {
                *(_QWORD *)v20 = 0;
                *((_QWORD *)v20 + 1) = 0;
                v20 += 64;
                *((_QWORD *)v20 - 6) = 0;
                *((_QWORD *)v20 - 5) = 0;
                *((_QWORD *)v20 - 4) = 0;
                *((_QWORD *)v20 - 3) = 0;
                *((_QWORD *)v20 - 2) = 0;
                *((_QWORD *)v20 - 1) = 0;
              }
              while ( v20 != &v22[64 * (v21 / 8 - 1) + 64] );
              v20 = &v22[64 * (v21 / 8 - 1) + 64];
            }
            switch ( v21 % 8 )
            {
              case 1:
                goto LABEL_30;
              case 2:
                goto LABEL_29;
              case 3:
                goto LABEL_28;
              case 4:
                goto LABEL_27;
              case 5:
                goto LABEL_26;
              case 6:
                goto LABEL_25;
              case 7:
                *((_QWORD *)v20 + 6) = 0;
LABEL_25:
                *((_QWORD *)v20 + 5) = 0;
LABEL_26:
                *((_QWORD *)v20 + 4) = 0;
LABEL_27:
                *((_QWORD *)v20 + 3) = 0;
LABEL_28:
                *((_QWORD *)v20 + 2) = 0;
LABEL_29:
                *((_QWORD *)v20 + 1) = 0;
LABEL_30:
                *(_QWORD *)v20 = 0;
                break;
              default:
                break;
            }
          }
          v23 = *((void **)this + 22);
          memcpy(v22, v23, 8LL * *((int *)this + 27));
          operator delete[](v23);
          *((_QWORD *)this + 22) = v22;
LABEL_11:
          v7 = *((int *)this + 27);
          goto LABEL_12;
        }
      }
    }
    __cxa_throw_bad_array_new_length();
  }
LABEL_12:
  v24 = *((_QWORD *)this + 21);
  *((_DWORD *)this + 27) = v7 + 1;
  *(_QWORD *)(v24 + 8 * v7) = lpsrc;
  std::string::assign((CoinBaseModel *)((char *)lpsrc + 40), a2);
  std::string::assign((CoinBaseModel *)((char *)lpsrc + 48), a3);
  if ( !lpsrc )
  {
    v27 = nullptr;
    goto LABEL_18;
  }
  v25 = (CoinModel *)__dynamic_cast(
                       lpsrc,
                       (const struct __class_type_info *)&`typeinfo for'CoinBaseModel,
                       (const struct __class_type_info *)&`typeinfo for'CoinModel,
                       0);
  if ( !v25 )
  {
    v27 = __dynamic_cast(
            lpsrc,
            (const struct __class_type_info *)&`typeinfo for'CoinBaseModel,
            (const struct __class_type_info *)&`typeinfo for'CoinStructuredModel,
            0);
LABEL_18:
    v28 = (CoinModel *)CoinStructuredModel::coinModelBlock(
                         v27,
                         *((_QWORD *)this + 23) + 16LL * *((int *)this + 27) - 16);
    CoinStructuredModel::fillInfo(this);
    CoinStructuredModel::setCoinModel(this, v28, *((_DWORD *)this + 27) - 1);
    return 0;
  }
  if ( *((_DWORD *)v25 + 176) != 3 )
    CoinModel::convertMatrix(v25);
  return CoinStructuredModel::fillInfo(this);
}

