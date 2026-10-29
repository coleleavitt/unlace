__int64 __fastcall CoinModel::setElement(CoinModel *this, unsigned int a2, int a3, const char *a4)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // esi
  signed int v12; // ebp
  int v13; // edi
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rbp
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbp
  int v25; // eax
  int v26; // eax
  int v27[3]; // [rsp+Ch] [rbp-3Ch] BYREF
  int v28[2]; // [rsp+18h] [rbp-30h] BYREF

  v27[0] = a3;
  *(_QWORD *)v28 = 0x3FF0000000000000LL;
  v7 = *((_DWORD *)this + 176);
  if ( v7 == -1 )
  {
    *((_DWORD *)this + 176) = 0;
    CoinModel::resize(this, 100, 100, 1000);
    CoinModel::createList(this, 2);
  }
  else
  {
    if ( v7 == 3 )
      CoinModel::badType(this);
    if ( !*((_DWORD *)this + 178) )
    {
      if ( (v7 & 0xFFFFFFFD) != 0 )
      {
        if ( v7 == 1 )
          CoinModel::createList(this, 2);
      }
      else
      {
        CoinModel::createList(this, 1);
      }
    }
  }
  if ( !*((_DWORD *)this + 81) )
  {
    CoinModelHash2::setNumberItems((CoinModel *)((char *)this + 312), *((_DWORD *)this + 27));
    CoinModelHash2::resize((CoinModel *)((char *)this + 312));
  }
  v8 = CoinModelHash2::hash((char *)this + 312, a2, (unsigned int)v27[0], *((_QWORD *)this + 37));
  if ( v8 >= 0 )
  {
    v23 = 16LL * v8;
    result = CoinModel::addString(this, a4);
    v24 = *((_QWORD *)this + 37) + v23;
    *(_DWORD *)v24 |= 0x80000000;
    *(double *)(v24 + 8) = (double)(int)result;
    return result;
  }
  v9 = v27[0];
  v10 = 0;
  if ( *((_DWORD *)this + 26) <= v27[0] )
    v10 = v27[0] + 1;
  v11 = 0;
  v12 = a2 + 1;
  v13 = v10;
  if ( *((_DWORD *)this + 25) <= (signed int)a2 )
  {
    v13 = v12 | v10;
    v11 = a2 + 1;
  }
  v14 = *((_DWORD *)this + 27);
  if ( v14 == *((_DWORD *)this + 28) )
  {
    v15 = 3 * v14 / 2 + 1000;
    if ( !v13 )
    {
      v10 = 0;
      v11 = 0;
      if ( !v15 )
        goto LABEL_18;
      goto LABEL_32;
    }
LABEL_14:
    if ( v10 )
      v10 = 3 * v10 / 2 + 100;
    if ( v11 )
    {
      CoinModel::resize(this, 3 * v11 / 2 + 100, v10, v15);
      v9 = v27[0];
      goto LABEL_18;
    }
LABEL_32:
    CoinModel::resize(this, v11, v10, v15);
    v9 = v27[0];
    goto LABEL_18;
  }
  if ( v13 )
  {
    v15 = 0;
    goto LABEL_14;
  }
LABEL_18:
  CoinModel::fillColumns(this, v9, 0, 0);
  CoinModel::fillRows(this, a2, 0, 0);
  v16 = *((_DWORD *)this + 178);
  if ( (v16 & 1) != 0 )
  {
    CoinModelLinkedList::addEasy(
      (_DWORD)this + 336,
      a2,
      1,
      (int)v27,
      (int)v28,
      *((_QWORD *)this + 37),
      (CoinModel *)((char *)this + 312));
    if ( *((_DWORD *)this + 178) == 3 )
      CoinModelLinkedList::addHard((CoinModel *)((char *)this + 392));
    v25 = *((_DWORD *)this + 94);
    if ( *((_DWORD *)this + 27) >= v25 )
      v25 = *((_DWORD *)this + 27);
    v17 = *((_QWORD *)this + 37);
    *((_DWORD *)this + 27) = v25;
  }
  else
  {
    v17 = *((_QWORD *)this + 37);
    if ( v16 == 2 )
    {
      CoinModelLinkedList::addHard(
        (CoinModel *)((char *)this + 392),
        a2,
        1,
        (__int64)v27,
        (__int64)v28,
        v17,
        (CoinModel *)((char *)this + 312));
      v26 = *((_DWORD *)this + 108);
      if ( *((_DWORD *)this + 27) >= v26 )
        v26 = *((_DWORD *)this + 27);
      v17 = *((_QWORD *)this + 37);
      *((_DWORD *)this + 27) = v26;
    }
  }
  v18 = (unsigned int)v27[0];
  if ( *((_DWORD *)this + 2) >= v12 )
    v12 = *((_DWORD *)this + 2);
  v19 = v27[0] + 1;
  if ( v27[0] + 1 < *((_DWORD *)this + 3) )
    v19 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 2) = v12;
  *((_DWORD *)this + 3) = v19;
  v20 = (int)CoinModelHash2::hash((char *)this + 312, a2, v18, v17);
  result = CoinModel::addString(this, a4);
  v22 = 16 * v20 + *((_QWORD *)this + 37);
  *(_DWORD *)v22 |= 0x80000000;
  *(double *)(v22 + 8) = (double)(int)result;
  return result;
}

