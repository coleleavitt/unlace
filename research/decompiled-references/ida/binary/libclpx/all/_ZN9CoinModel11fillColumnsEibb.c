void __fastcall CoinModel::fillColumns(CoinModel *this, int a2, char a3, char a4)
{
  int v5; // ebp
  int v7; // edx
  __int64 v8; // r10
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdi
  _DWORD *v18; // rsi
  _DWORD *v19; // rdi
  __int64 v20; // rax
  int v21; // r15d
  unsigned __int64 v22; // rsi
  __int64 v23; // r9
  __int64 v24; // r8
  unsigned int v25; // edi
  __int64 v26; // rsi
  __int64 v27; // r11
  unsigned int v28; // ecx
  __int64 v29; // r14
  __int64 v30; // r11
  __int64 v31; // rax
  int v32; // edi
  int v33; // edx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  int v37; // ebp
  void *v38; // rdi
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // edx
  bool v44; // zf
  int v45; // edx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // [rsp+0h] [rbp-A8h]
  __int64 v48; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v49; // [rsp+10h] [rbp-98h]
  unsigned __int64 v50; // [rsp+18h] [rbp-90h]
  unsigned __int64 v51; // [rsp+20h] [rbp-88h]
  __int64 v52; // [rsp+28h] [rbp-80h]
  __int64 v53; // [rsp+30h] [rbp-78h]
  __int64 v54; // [rsp+40h] [rbp-68h]
  unsigned int v55; // [rsp+64h] [rbp-44h]
  __int64 v56; // [rsp+68h] [rbp-40h]

  v5 = a2;
  if ( !a3 && !a4 )
    goto LABEL_3;
  v39 = *((_DWORD *)this + 176);
  if ( v39 == -1 )
  {
    v43 = a2 + 1;
    *((_DWORD *)this + 176) = 1;
    if ( a2 + 1 < 100 )
      v43 = 100;
    CoinModel::resize(this, 0, v43, 1000);
    if ( *((_QWORD *)this + 23) )
      goto LABEL_26;
  }
  else
  {
    if ( !v39 )
      *((_DWORD *)this + 176) = 2;
    if ( *((_QWORD *)this + 23) )
      goto LABEL_26;
  }
  v44 = *((_DWORD *)this + 176) == 3;
  v45 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 3) = 0;
  v5 = v45 - 1;
  if ( v44 )
  {
    if ( v45 <= 0 )
      v45 = 1;
  }
  else if ( v45 < 100 )
  {
    v45 = 100;
  }
  CoinModel::resize(this, 0, v45, 0);
LABEL_26:
  v40 = *((_DWORD *)this + 26);
  if ( v40 <= v5 )
  {
    v41 = v5 + 1;
    if ( *((_DWORD *)this + 176) == 3 )
    {
      v42 = 1;
      if ( v41 > 0 )
        v42 = v5 + 1;
    }
    else
    {
      v42 = 3 * v40 / 2;
      if ( v42 < v41 )
        v42 = v5 + 1;
    }
    CoinModel::resize(this, 0, v42, 0);
  }
LABEL_3:
  v7 = *((_DWORD *)this + 3);
  if ( v7 <= v5 )
  {
    v8 = *((_QWORD *)this + 23);
    if ( v8 )
    {
      v9 = v7;
      v10 = *((_QWORD *)this + 24);
      v11 = 8LL * v7 + 32;
      v12 = 8LL * v7;
      v55 = v5 - v7;
      v48 = *((_QWORD *)this + 35);
      v54 = *((_QWORD *)this + 25);
      v56 = v12;
      v50 = v12 + v54;
      v47 = v10 + v12;
      v13 = v8 + v12;
      v14 = v7 + (unsigned __int64)(unsigned int)(v5 - v7 + 1);
      v49 = v13;
      v15 = 8 * v14;
      v16 = 4 * v14;
      v17 = *((_QWORD *)this + 30);
      v52 = 4LL * v7;
      v18 = (_DWORD *)(v52 + v17);
      v53 = *((_QWORD *)this + 30);
      v51 = v17 + v16;
      v19 = (_DWORD *)(v52 + v48);
      if ( (v50 >= v51 || (unsigned __int64)v18 >= v54 + v15)
        && (v8 + v15 <= (unsigned __int64)(v52 + v48) || v49 >= v16 + v48)
        && (v49 >= v51 || v8 + v15 <= (unsigned __int64)v18)
        && (unsigned int)(v5 - v7 + 1) > 0x14
        && ((unsigned __int64)v18 >= v48 + v52 + 16 || v52 + v48 >= (unsigned __int64)(v52 + 16 + v53))
        && (v47 >= v54 + v11 || v50 >= v10 + v11)
        && (v49 >= v10 + v11 || v47 >= v8 + v11)
        && (v49 >= v54 + v11 || v50 >= v8 + v11)
        && ((unsigned __int64)v18 >= v10 + v15 || v47 >= v51)
        && (v52 + v48 >= (unsigned __int64)(v10 + v15) || v47 >= v16 + v48)
        && (v50 >= v16 + v48 || (unsigned __int64)v19 >= v54 + v15) )
      {
        v20 = (v47 >> 3) & 1;
        if ( ((v47 >> 3) & 1) != 0 )
        {
          ++v7;
          *(_QWORD *)(v10 + 8 * v9) = 0;
          *(_QWORD *)(v54 + 8 * v9) = 0x7FEFFFFFFFFFFFFFLL;
          *(_QWORD *)(v8 + 8 * v9) = 0;
          *v18 = 0;
          *v19 = 0;
        }
        v21 = v55 - v20 + 1;
        v22 = v56 + 8 * ((v47 >> 3) & 1);
        v23 = v10 + v22;
        v24 = v54 + v22;
        v25 = ((v55 - (unsigned int)v20 - 3) >> 2) + 1;
        v26 = v8 + v22;
        v27 = v52 + 4 * ((v47 >> 3) & 1);
        v28 = 0;
        v29 = v53 + v27;
        v30 = v48 + v27;
        v31 = 0;
        do
        {
          ++v28;
          *(_OWORD *)(v23 + 2 * v31) = 0;
          *(_OWORD *)(v23 + 2 * v31 + 16) = 0;
          *(_OWORD *)(v24 + 2 * v31) = xmmword_28C790;
          *(_OWORD *)(v24 + 2 * v31 + 16) = xmmword_28C790;
          *(_OWORD *)(v26 + 2 * v31) = 0;
          *(_OWORD *)(v26 + 2 * v31 + 16) = 0;
          *(_OWORD *)(v29 + v31) = 0;
          *(_OWORD *)(v30 + v31) = 0;
          v31 += 16;
        }
        while ( v25 > v28 );
        v32 = 4 * v25;
        v33 = v32 + v7;
        if ( v21 != v32 )
        {
          *(_QWORD *)(v10 + 8LL * v33) = 0;
          *(_QWORD *)(v54 + 8LL * v33) = 0x7FEFFFFFFFFFFFFFLL;
          *(_QWORD *)(v8 + 8LL * v33) = 0;
          *(_DWORD *)(v53 + 4LL * v33) = 0;
          *(_DWORD *)(v48 + 4LL * v33) = 0;
          v34 = v33 + 1;
          if ( v5 >= v33 + 1 )
          {
            *(_QWORD *)(v10 + 8LL * v34) = 0;
            *(_QWORD *)(v54 + 8LL * v34) = 0x7FEFFFFFFFFFFFFFLL;
            *(_QWORD *)(v8 + 8LL * v34) = 0;
            *(_DWORD *)(v53 + 4LL * v34) = 0;
            *(_DWORD *)(v48 + 4LL * v34) = 0;
            v35 = v33 + 2;
            if ( v5 >= v33 + 2 )
            {
              v36 = v33 + 3;
              *(_QWORD *)(v10 + 8LL * v35) = 0;
              *(_QWORD *)(v54 + 8LL * v35) = 0x7FEFFFFFFFFFFFFFLL;
              *(_QWORD *)(v8 + 8LL * v35) = 0;
              *(_DWORD *)(v53 + 4LL * v35) = 0;
              *(_DWORD *)(v48 + 4LL * v35) = 0;
              if ( v5 >= v36 )
              {
                *(_QWORD *)(v10 + 8LL * v36) = 0;
                *(_QWORD *)(v54 + 8LL * v36) = 0x7FEFFFFFFFFFFFFFLL;
                *(_QWORD *)(v8 + 8LL * v36) = 0;
                *(_DWORD *)(v53 + 4LL * v36) = 0;
                *(_DWORD *)(v48 + 4LL * v36) = 0;
              }
            }
          }
        }
      }
      else
      {
        v46 = 0;
        do
        {
          *(_QWORD *)(v47 + 2 * v46) = 0;
          *(_QWORD *)(v50 + 2 * v46) = 0x7FEFFFFFFFFFFFFFLL;
          *(_QWORD *)(v49 + 2 * v46) = 0;
          v18[v46 / 4] = 0;
          v19[v46 / 4] = 0;
          v46 += 4LL;
        }
        while ( v46 != 4LL * v55 + 4 );
      }
    }
  }
  if ( !a4 )
  {
    v37 = v5 + 1;
    v38 = *((void **)this + 36);
    if ( *((_DWORD *)this + 3) >= v37 )
      v37 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = v37;
    if ( v38 )
    {
      operator delete[](v38);
      *((_QWORD *)this + 36) = 0;
      CoinModel::createList(this, 2);
    }
  }
}

