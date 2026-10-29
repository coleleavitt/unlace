__int64 __fastcall CoinModelLinkedList::addHard(
        CoinModelLinkedList *this,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rdx
  int v10; // r12d
  int v12; // ecx
  int v13; // ebp
  int v14; // esi
  __int64 v15; // rdi
  int *v16; // rsi
  int v17; // eax
  int v18; // esi
  _DWORD *v19; // rax
  int v20; // [rsp+Ch] [rbp-3Ch]

  *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * *((int *)this + 9)) = a4;
  result = *((int *)this + 9);
  v8 = *((_QWORD *)this + 3);
  *(_DWORD *)(v8 + 4 * result) = a5;
  if ( a2 >= 0 )
  {
    v10 = a2;
    v12 = -1;
    while ( 1 )
    {
      v17 = v10 + 1;
      if ( v10 + 1 < *((_DWORD *)this + 10) )
        v17 = *((_DWORD *)this + 10);
      v18 = *((_DWORD *)this + 12);
      *((_DWORD *)this + 10) = v17;
      v19 = (_DWORD *)(a3 + 16LL * v10);
      if ( !v18 )
        break;
      v13 = v19[1];
      if ( v12 >= 0 )
        goto LABEL_5;
      v14 = *((_DWORD *)this + 8);
      v12 = *v19 & 0x7FFFFFFF;
      if ( v14 <= v13 )
      {
LABEL_14:
        v20 = v12;
        CoinModelLinkedList::fill(this, v14, v13 + 1);
        v8 = *((_QWORD *)this + 3);
        v12 = v20;
        *((_DWORD *)this + 8) = v13 + 1;
      }
LABEL_6:
      v15 = *((_QWORD *)this + 1);
      v16 = (int *)(v8 + 4LL * v13);
      result = (unsigned int)*v16;
      if ( (int)result < 0 )
        *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v13) = v10;
      else
        *(_DWORD *)(v15 + 4LL * (int)result) = v10;
      *(_DWORD *)(*(_QWORD *)this + 4LL * v10) = result;
      *(_DWORD *)(v15 + 4LL * v10) = -1;
      *v16 = v10;
      v10 = *(_DWORD *)(a6 + 4LL * v10);
      if ( v10 < 0 )
        return result;
    }
    v13 = *v19 & 0x7FFFFFFF;
    if ( v12 < 0 )
      v12 = v19[1];
LABEL_5:
    v14 = *((_DWORD *)this + 8);
    if ( v14 <= v13 )
      goto LABEL_14;
    goto LABEL_6;
  }
  return result;
}

