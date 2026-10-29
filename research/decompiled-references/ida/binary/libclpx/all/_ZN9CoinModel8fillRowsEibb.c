__int64 __fastcall CoinModel::fillRows(CoinModel *this, int a2, char a3, char a4)
{
  int v5; // ebp
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // r13
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r11
  _DWORD *v16; // r10
  unsigned int v17; // edx
  __int64 v18; // r9
  __int64 v19; // r13
  int v20; // r11d
  __int64 v21; // r9
  __int64 v22; // r14
  __int64 v23; // rdx
  unsigned int v24; // edi
  __int64 v25; // r14
  unsigned int v26; // r10d
  int v27; // r10d
  int v28; // edx
  int v29; // edx
  int v30; // ebp
  void *v31; // rdi
  int v32; // eax
  int v33; // eax
  int v34; // edx
  int v35; // esi
  int v36; // esi
  bool v37; // zf
  int v38; // esi
  unsigned __int64 v39; // [rsp+8h] [rbp-50h]
  unsigned int v40; // [rsp+14h] [rbp-44h]
  __int64 v41; // [rsp+18h] [rbp-40h]

  v5 = a2;
  if ( !a3 && !a4 )
    goto LABEL_3;
  v32 = *((_DWORD *)this + 176);
  if ( v32 == -1 )
  {
    v36 = a2 + 1;
    *((_DWORD *)this + 176) = 0;
    if ( v5 + 1 < 100 )
      v36 = 100;
    CoinModel::resize(this, v36, 0, 1000);
    if ( *((_QWORD *)this + 16) )
      goto LABEL_26;
  }
  else
  {
    if ( v32 == 1 )
      *((_DWORD *)this + 176) = 2;
    if ( *((_QWORD *)this + 16) )
      goto LABEL_26;
  }
  v37 = *((_DWORD *)this + 176) == 3;
  v38 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = 0;
  v5 = v38 - 1;
  if ( v37 )
  {
    if ( v38 <= 0 )
      v38 = 1;
  }
  else if ( v38 < 100 )
  {
    v38 = 100;
  }
  CoinModel::resize(this, v38, 0, 0);
LABEL_26:
  v33 = *((_DWORD *)this + 25);
  if ( v33 <= v5 )
  {
    v34 = v5 + 1;
    if ( *((_DWORD *)this + 176) == 3 )
    {
      v35 = 1;
      if ( v34 > 0 )
        v35 = v5 + 1;
    }
    else
    {
      v35 = 3 * v33 / 2;
      if ( v35 < v34 )
        v35 = v5 + 1;
    }
    CoinModel::resize(this, v35, 0, 0);
  }
LABEL_3:
  result = *((unsigned int *)this + 2);
  if ( (int)result <= v5 )
  {
    v8 = *((_QWORD *)this + 16);
    if ( v8 )
    {
      v9 = (int)result;
      v10 = *((_QWORD *)this + 22);
      v11 = *((_QWORD *)this + 17);
      v40 = v5 - result;
      v12 = (int)result + (unsigned __int64)(unsigned int)(v5 - result + 1);
      v13 = 8LL * (int)result;
      v14 = v8 + v13;
      v15 = v11 + v13;
      v39 = v10 + 4 * v12;
      v41 = 4LL * (int)result;
      v16 = (_DWORD *)(v10 + v41);
      if ( (v8 + v13 >= v39 || v10 + v41 >= v8 + 8 * v12)
        && (unsigned int)(v5 - result + 1) > 0x14
        && (v8 + v13 >= (unsigned __int64)(v11 + v13 + 32) || v11 + v13 >= (unsigned __int64)(v8 + v13 + 32))
        && (v15 >= v39 || (unsigned __int64)v16 >= v11 + 8 * v12) )
      {
        v17 = (v14 >> 3) & 1;
        if ( v17 )
        {
          LODWORD(result) = result + 1;
          *(_QWORD *)(v8 + 8 * v9) = 0xFFEFFFFFFFFFFFFFLL;
          *(_QWORD *)(v11 + 8 * v9) = 0x7FEFFFFFFFFFFFFFLL;
          *v16 = 0;
        }
        v18 = v13 + 8LL * v17;
        v19 = v8 + v18;
        v20 = v40 - v17 + 1;
        v21 = v11 + v18;
        v22 = v41 + 4LL * v17;
        v23 = 0;
        v24 = 0;
        v25 = v10 + v22;
        v26 = ((unsigned int)(v20 - 4) >> 2) + 1;
        do
        {
          ++v24;
          *(_OWORD *)(v19 + 2 * v23) = xmmword_28C780;
          *(_OWORD *)(v19 + 2 * v23 + 16) = xmmword_28C780;
          *(_OWORD *)(v21 + 2 * v23) = xmmword_28C790;
          *(_OWORD *)(v21 + 2 * v23 + 16) = xmmword_28C790;
          *(_OWORD *)(v25 + v23) = 0;
          v23 += 16;
        }
        while ( v26 > v24 );
        v27 = 4 * v26;
        result = (unsigned int)(v27 + result);
        if ( v20 != v27 )
        {
          *(_QWORD *)(v8 + 8LL * (int)result) = 0xFFEFFFFFFFFFFFFFLL;
          *(_QWORD *)(v11 + 8LL * (int)result) = 0x7FEFFFFFFFFFFFFFLL;
          *(_DWORD *)(v10 + 4LL * (int)result) = 0;
          v28 = result + 1;
          if ( v5 >= (int)result + 1 )
          {
            *(_QWORD *)(v8 + 8LL * v28) = 0xFFEFFFFFFFFFFFFFLL;
            *(_QWORD *)(v11 + 8LL * v28) = 0x7FEFFFFFFFFFFFFFLL;
            *(_DWORD *)(v10 + 4LL * v28) = 0;
            v29 = result + 2;
            if ( v5 >= (int)result + 2 )
            {
              result = (unsigned int)(result + 3);
              *(_QWORD *)(v8 + 8LL * v29) = 0xFFEFFFFFFFFFFFFFLL;
              *(_QWORD *)(v11 + 8LL * v29) = 0x7FEFFFFFFFFFFFFFLL;
              *(_DWORD *)(v10 + 4LL * v29) = 0;
              if ( v5 >= (int)result )
              {
                result = (int)result;
                *(_QWORD *)(v8 + 8LL * (int)result) = 0xFFEFFFFFFFFFFFFFLL;
                *(_QWORD *)(v11 + 8LL * (int)result) = 0x7FEFFFFFFFFFFFFFLL;
                *(_DWORD *)(v10 + 4LL * (int)result) = 0;
              }
            }
          }
        }
      }
      else
      {
        result = 0;
        do
        {
          *(_QWORD *)(v14 + 8 * result) = 0xFFEFFFFFFFFFFFFFLL;
          *(_QWORD *)(v15 + 8 * result) = 0x7FEFFFFFFFFFFFFFLL;
          v16[result++] = 0;
        }
        while ( result != v40 + 1LL );
      }
    }
  }
  if ( !a4 )
  {
    v30 = v5 + 1;
    v31 = *((void **)this + 36);
    if ( *((_DWORD *)this + 2) >= v30 )
      v30 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = v30;
    if ( v31 )
    {
      operator delete[](v31);
      *((_QWORD *)this + 36) = 0;
      return CoinModel::createList(this, 1);
    }
  }
  return result;
}

