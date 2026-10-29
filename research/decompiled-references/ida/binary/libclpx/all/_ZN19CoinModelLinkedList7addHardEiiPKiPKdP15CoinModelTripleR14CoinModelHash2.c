__int64 __fastcall CoinModelLinkedList::addHard(
        CoinModelLinkedList *this,
        int a2,
        int a3,
        int *a4,
        _QWORD *a5,
        __int64 a6,
        CoinModelHash2 *a7)
{
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // r14d
  _QWORD *v12; // r12
  int v14; // r11d
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // r14
  __int64 v18; // rbp
  __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rcx
  int *v22; // rdx
  int v23; // eax
  __int64 result; // rax
  int v25; // [rsp+Ch] [rbp-5Ch]
  __int64 v26; // [rsp+10h] [rbp-58h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  int v28; // [rsp+20h] [rbp-48h]
  int v29; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+24h] [rbp-44h]
  int v31; // [rsp+24h] [rbp-44h]
  __int64 v32; // [rsp+28h] [rbp-40h]

  v9 = *((int *)this + 9);
  v10 = *((_QWORD *)this + 3);
  v11 = *(_DWORD *)(v10 + 4 * v9);
  v25 = *((_DWORD *)a7 + 3);
  if ( a3 > 0 )
  {
    v12 = a5;
    v14 = *(_DWORD *)(v10 + 4 * v9);
    v26 = (__int64)&a5[(unsigned int)(a3 - 1) + 1];
    do
    {
      if ( v14 >= 0 )
      {
LABEL_4:
        v15 = v14;
        v16 = v14;
        v17 = 4LL * v14;
        v14 = *(_DWORD *)(*(_QWORD *)this + v17);
        goto LABEL_5;
      }
      while ( 1 )
      {
        v16 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 10) = v16 + 1;
        v15 = v16;
        v17 = 4LL * v16;
LABEL_5:
        v18 = *a4;
        v19 = a6 + 16 * v15;
        if ( *((_DWORD *)this + 12) )
        {
          *(_DWORD *)v19 = a2;
          *(_DWORD *)(v19 + 4) = v18;
        }
        else
        {
          *(_DWORD *)v19 = v18;
          *(_DWORD *)(v19 + 4) = a2;
        }
        *(_QWORD *)(v19 + 8) = *v12;
        if ( v25 )
        {
          v31 = a2;
          v29 = v14;
          v27 = a6;
          CoinModelHash2::addHash(a7);
          a2 = v31;
          v14 = v29;
          a6 = v27;
        }
        v20 = *((_DWORD *)this + 8);
        if ( v20 <= (int)v18 )
        {
          v32 = a6;
          v30 = a2;
          v28 = v14;
          CoinModelLinkedList::fill(this, v20, v18 + 1);
          a6 = v32;
          a2 = v30;
          v14 = v28;
          *((_DWORD *)this + 8) = v18 + 1;
        }
        v10 = *((_QWORD *)this + 3);
        v21 = *((_QWORD *)this + 1);
        v22 = (int *)(v10 + 4 * v18);
        v23 = *v22;
        if ( *v22 >= 0 )
          break;
        ++v12;
        ++a4;
        *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v18) = v16;
        *(_DWORD *)(*(_QWORD *)this + v17) = v23;
        *(_DWORD *)(v21 + v17) = -1;
        *v22 = v16;
        if ( (_QWORD *)v26 == v12 )
          goto LABEL_13;
        if ( v14 >= 0 )
          goto LABEL_4;
      }
      ++v12;
      ++a4;
      *(_DWORD *)(v21 + 4LL * v23) = v16;
      *(_DWORD *)(*(_QWORD *)this + v17) = v23;
      *(_DWORD *)(v21 + v17) = -1;
      *v22 = v16;
    }
    while ( v12 != (_QWORD *)v26 );
LABEL_13:
    v11 = v14;
  }
  if ( v11 < 0 )
  {
    *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * *((int *)this + 9)) = -1;
    result = *((int *)this + 9);
    *(_DWORD *)(v10 + 4 * result) = -1;
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)this + 1) + 4LL * v11) = -1;
    result = *((int *)this + 9);
    *(_DWORD *)(v10 + 4 * result) = v11;
  }
  return result;
}

