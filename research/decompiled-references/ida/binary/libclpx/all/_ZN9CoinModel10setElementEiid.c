__int64 __fastcall CoinModel::setElement(CoinModel *this, unsigned int a2, int a3, double a4)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 result; // rax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  signed int v13; // r13d
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21[2]; // [rsp+0h] [rbp-38h] BYREF
  int v22[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v6 = *((_DWORD *)this + 176);
  v22[0] = a3;
  *(double *)v21 = a4;
  if ( v6 == -1 )
  {
    *((_DWORD *)this + 176) = 0;
    CoinModel::resize(this, 100, 100, 1000);
    CoinModel::createList(this, 2);
  }
  else
  {
    if ( v6 == 3 )
      CoinModel::badType(this);
    if ( !*((_DWORD *)this + 178) )
    {
      if ( (v6 & 0xFFFFFFFD) != 0 )
      {
        if ( v6 == 1 )
          CoinModel::createList(this, 2);
      }
      else
      {
        CoinModel::createList(this, 1);
      }
    }
  }
  v7 = *((_QWORD *)this + 37);
  if ( !*((_DWORD *)this + 81) )
  {
    CoinModelHash2::resize((CoinModel *)((char *)this + 312));
    v7 = *((_QWORD *)this + 37);
  }
  v8 = CoinModelHash2::hash((char *)this + 312, a2, (unsigned int)v22[0], v7);
  if ( v8 >= 0 )
  {
    result = *((_QWORD *)this + 37) + 16LL * v8;
    *(_QWORD *)(result + 8) = *(_QWORD *)v21;
    *(_DWORD *)result &= ~0x80000000;
    return result;
  }
  v10 = v22[0];
  v11 = 0;
  if ( *((_DWORD *)this + 26) <= v22[0] )
    v11 = v22[0] + 1;
  v12 = 0;
  v13 = a2 + 1;
  v14 = v11;
  if ( *((_DWORD *)this + 25) > (signed int)a2 )
  {
    v15 = *((_DWORD *)this + 27);
    if ( v15 != *((_DWORD *)this + 28) )
      goto LABEL_15;
LABEL_31:
    v16 = 3 * v15 / 2 + 1000;
    if ( !v14 )
    {
      v11 = 0;
      v12 = 0;
      if ( !v16 )
        goto LABEL_22;
      goto LABEL_21;
    }
LABEL_17:
    if ( v11 )
      v11 = 3 * v11 / 2 + 100;
    if ( v12 )
      v12 = 3 * v12 / 2 + 100;
LABEL_21:
    CoinModel::resize(this, v12, v11, v16);
    v10 = v22[0];
    goto LABEL_22;
  }
  v14 = v13 | v11;
  v15 = *((_DWORD *)this + 27);
  v12 = a2 + 1;
  if ( v15 == *((_DWORD *)this + 28) )
    goto LABEL_31;
LABEL_15:
  if ( v14 )
  {
    v16 = 0;
    goto LABEL_17;
  }
LABEL_22:
  CoinModel::fillColumns(this, v10, 0, 0);
  CoinModel::fillRows(this, a2, 0, 0);
  v17 = *((_DWORD *)this + 178);
  if ( (v17 & 1) != 0 )
  {
    CoinModelLinkedList::addEasy(
      (_DWORD)this + 336,
      a2,
      1,
      (int)v22,
      (int)v21,
      *((_QWORD *)this + 37),
      (CoinModel *)((char *)this + 312));
    if ( *((_DWORD *)this + 178) == 3 )
      CoinModelLinkedList::addHard((CoinModel *)((char *)this + 392));
    v19 = *((_DWORD *)this + 94);
    if ( *((_DWORD *)this + 27) >= v19 )
      v19 = *((_DWORD *)this + 27);
    *((_DWORD *)this + 27) = v19;
  }
  else if ( v17 == 2 )
  {
    CoinModelLinkedList::addHard(
      (CoinModel *)((char *)this + 392),
      a2,
      1,
      (__int64)v22,
      (__int64)v21,
      *((_QWORD *)this + 37),
      (CoinModel *)((char *)this + 312));
    v20 = *((_DWORD *)this + 108);
    if ( *((_DWORD *)this + 27) >= v20 )
      v20 = *((_DWORD *)this + 27);
    *((_DWORD *)this + 27) = v20;
  }
  v18 = *((_DWORD *)this + 3);
  if ( *((_DWORD *)this + 2) >= v13 )
    v13 = *((_DWORD *)this + 2);
  result = (unsigned int)(v22[0] + 1);
  if ( (int)result < v18 )
    result = (unsigned int)v18;
  *((_DWORD *)this + 2) = v13;
  *((_DWORD *)this + 3) = result;
  return result;
}

