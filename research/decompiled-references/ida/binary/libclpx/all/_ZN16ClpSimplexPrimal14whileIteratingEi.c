__int64 __fastcall ClpSimplexPrimal::whileIterating(ClpSimplexPrimal *this, int a2)
{
  int v4; // r12d
  void *v5; // rdi
  int v6; // ebx
  int v7; // r14d
  __int64 result; // rax
  CoinIndexedVector *v9; // rdi
  __int64 v10; // rdx
  int SuperBasic; // eax
  __int64 v12; // rdx
  __int64 v13; // xmm0_8
  __int64 v14; // rdx
  __int64 v15; // xmm0_8
  __int64 v16; // rdx
  __int64 v17; // xmm0_8
  __int64 v18; // rdx
  int v19; // edx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  CoinMessageHandler *v27; // rax
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rsi
  char v32; // dl

  v4 = *((_DWORD *)this + 337);
  v5 = *((void **)this + 27);
  v6 = 2 * (a2 > 1) + 1;
  if ( v5 )
    operator delete[](v5);
  v7 = *((_DWORD *)this + 80);
  *((_QWORD *)this + 27) = 0;
  result = 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( v7 != -1 )
      goto LABEL_15;
    if ( v4 >= 0 )
    {
      SuperBasic = ClpSimplexPrimal::nextSuperBasic(this, v6, *((CoinIndexedVector **)this + 138));
      if ( a2 >= 2 )
        v6 = 2;
      if ( SuperBasic < 0 )
      {
        v27 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)this + 43),
                                      48,
                                      (ClpSimplexPrimal *)((char *)this + 416));
        CoinMessageHandler::operator<<(v27);
        (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64))(**((_QWORD **)this + 156) + 16LL))(
          *((_QWORD *)this + 156),
          this,
          5);
        v28 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
        *((_DWORD *)this + 80) = -2;
        *((_DWORD *)this + 292) = -1;
        if ( v28 <= 0 )
        {
LABEL_46:
          result = 4294967292LL;
          goto LABEL_15;
        }
        v29 = (unsigned int)(v28 - 1);
        v30 = 0;
        v31 = v29 + 1;
        while ( 2 )
        {
          while ( 1 )
          {
            v32 = *(_BYTE *)(*((_QWORD *)this + 33) + v30) & 7;
            if ( ((v32 - 3) & 0xFD) == 0 )
              break;
            if ( v32 != 2 )
              goto LABEL_42;
            *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v30) = *(_QWORD *)(*((_QWORD *)this + 126) + 8 * v30);
            if ( v31 == ++v30 )
              goto LABEL_46;
          }
          *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v30) = *(_QWORD *)(*((_QWORD *)this + 123) + 8 * v30);
LABEL_42:
          if ( v31 == ++v30 )
            goto LABEL_46;
          continue;
        }
      }
      v12 = *((_QWORD *)this + 150);
      *((_DWORD *)this + 288) = SuperBasic;
      v13 = *(_QWORD *)(v12 + 8LL * SuperBasic);
      v14 = *((_QWORD *)this + 123);
      *((_QWORD *)this + 102) = v13;
      v15 = *(_QWORD *)(v14 + 8LL * SuperBasic);
      v16 = *((_QWORD *)this + 126);
      *((_QWORD *)this + 101) = v15;
      v17 = *(_QWORD *)(v16 + 8LL * SuperBasic);
      v18 = *((_QWORD *)this + 147);
      *((_QWORD *)this + 103) = v17;
      *((_QWORD *)this + 104) = *(_QWORD *)(v18 + 8LL * SuperBasic);
    }
    else
    {
      ClpSimplexPrimal::primalColumn(
        this,
        *((CoinIndexedVector **)this + 133),
        *((CoinIndexedVector **)this + 134),
        *((CoinIndexedVector **)this + 135),
        *((CoinIndexedVector **)this + 138),
        *((CoinIndexedVector **)this + 139));
    }
    v9 = *((CoinIndexedVector **)this + 133);
    *((_DWORD *)this + 292) = -1;
    *((_DWORD *)this + 290) = -1;
    CoinIndexedVector::clear(v9);
    if ( *((int *)this + 288) < 0 )
      break;
    result = ClpSimplexPrimal::pivotResult(this, v4 >= 0);
    if ( (unsigned int)(result + 4) <= 2 )
      goto LABEL_18;
    switch ( (_DWORD)result )
    {
      case 0xFFFFFFFB:
        v19 = *((_DWORD *)this + 182);
        if ( (v19 & 0x10) == 0 )
        {
          v20 = *((_QWORD *)this + 158);
          v21 = *(_QWORD *)(v20 + 8);
          if ( v21 ? *(_DWORD *)(v21 + 68) : *(_DWORD *)(*(_QWORD *)(v20 + 16) + 52LL) )
          {
            *((_DWORD *)this + 80) = -2;
            *((_DWORD *)this + 182) = v19 | 0x10;
            goto LABEL_15;
          }
        }
        v7 = *((_DWORD *)this + 80);
        break;
      case 2:
        *((_DWORD *)this + 80) = -5;
        goto LABEL_15;
      case 4:
LABEL_18:
        *((_DWORD *)this + 80) = -2;
        goto LABEL_15;
      default:
        v7 = *((_DWORD *)this + 80);
        if ( (_DWORD)result != -1 )
        {
          if ( v7 != 5 )
            *((_DWORD *)this + 80) = 3;
          goto LABEL_15;
        }
        break;
    }
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 165) + 112LL) )
  {
    v23 = *((_QWORD *)this + 158);
    *((_DWORD *)this + 80) = -4;
    v24 = *(_QWORD *)(v23 + 8);
    if ( v24 )
      goto LABEL_32;
LABEL_37:
    v25 = *(_DWORD *)(*(_QWORD *)(v23 + 16) + 52LL);
    goto LABEL_33;
  }
  v23 = *((_QWORD *)this + 158);
  v24 = *(_QWORD *)(v23 + 8);
  if ( !v24 )
    goto LABEL_37;
LABEL_32:
  v25 = *(_DWORD *)(v24 + 68);
LABEL_33:
  v26 = (v25 + 1) >> 1;
  if ( v26 > *((_DWORD *)this + 326) )
    v26 = *((_DWORD *)this + 326);
  *((_DWORD *)this + 326) = v26;
  result = 0;
LABEL_15:
  if ( a2 > 1 )
  {
    v10 = *((_QWORD *)this + 138);
    *(_DWORD *)(v10 + 16) = 0;
    *(_BYTE *)(v10 + 28) = 0;
  }
  return result;
}

