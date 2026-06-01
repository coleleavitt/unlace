CoinModel *__fastcall CoinModel::previous(CoinModel *this, CoinModelLink *a2, const CoinModelLink *a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edx
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // xmm0_8
  int v17; // ecx
  __int64 v18; // rdx
  int *v19; // rdx
  int v20; // eax

  CoinModelLink::CoinModelLink(this, a3);
  v4 = *((int *)a3 + 4);
  if ( (int)v4 < 0 )
    return this;
  v5 = *((_DWORD *)a2 + 176);
  if ( !*((_BYTE *)a3 + 20) )
  {
    if ( v5 == 1 )
    {
      v17 = v4 - 1;
      if ( *(_DWORD *)(*((_QWORD *)a2 + 36) + 4LL * *((int *)a3 + 1)) <= v17 )
      {
        v18 = *((_QWORD *)a2 + 37);
        *((_DWORD *)this + 4) = v17;
        v19 = (int *)(16LL * v17 + v18);
        v20 = *v19;
        *((_QWORD *)this + 1) = *((_QWORD *)v19 + 1);
        *(_DWORD *)this = v20 & 0x7FFFFFFF;
        return this;
      }
    }
    else
    {
      v6 = *(int *)(*((_QWORD *)a2 + 49) + 4 * v4);
      if ( (int)v6 >= 0 )
      {
        *((_DWORD *)this + 4) = v6;
        v7 = *((_QWORD *)a2 + 37) + 16 * v6;
        v8 = *(_DWORD *)v7;
        *((_QWORD *)this + 1) = *(_QWORD *)(v7 + 8);
        *(_DWORD *)this = v8 & 0x7FFFFFFF;
        return this;
      }
    }
    goto LABEL_10;
  }
  if ( !v5 )
  {
    v10 = v4 - 1;
    if ( *(_DWORD *)(*((_QWORD *)a2 + 36) + 4LL * *(int *)a3) <= v10 )
    {
      *((_DWORD *)this + 4) = v10;
      v11 = *((_QWORD *)a2 + 37) + 16LL * v10;
      v12 = *(_DWORD *)(v11 + 4);
      *((_QWORD *)this + 1) = *(_QWORD *)(v11 + 8);
      *((_DWORD *)this + 1) = v12;
      return this;
    }
    goto LABEL_10;
  }
  v13 = *(int *)(*((_QWORD *)a2 + 42) + 4 * v4);
  if ( (int)v13 < 0 )
  {
LABEL_10:
    *((_QWORD *)this + 1) = 0;
    *(_QWORD *)this = -1;
    *((_DWORD *)this + 4) = -1;
    return this;
  }
  *((_DWORD *)this + 4) = v13;
  v14 = *((_QWORD *)a2 + 37) + 16 * v13;
  v15 = *(_DWORD *)(v14 + 4);
  v16 = *(_QWORD *)(v14 + 8);
  *((_QWORD *)this + 1) = v16;
  *((_DWORD *)this + 1) = v15;
  return this;
}

