__int64 __fastcall sub_71A460(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  unsigned __int64 v4; // r12
  __int64 v5; // rdi
  _BYTE *v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // r14d
  __int64 result; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rax

  v2 = a2 & 7;
  v4 = (unsigned __int64)(unsigned int)a2 >> 3;
  v5 = *(_QWORD *)(a1 + 5816);
  v6 = (_BYTE *)(v5 + v4);
  v7 = *(unsigned __int8 *)(v5 + v4);
  if ( _bittest((const int *)&v7, v2) )
    sub_722BF0(v5, a2, v7);
  v8 = *(unsigned __int8 *)(v5 + v4);
  v9 = a2 + 1;
  if ( *(_DWORD *)(a1 + 5808) < (unsigned int)(a2 + 1) )
  {
    v11 = *(_QWORD *)(a1 + 5824);
    v12 = (unsigned int)(a2 + 8) >> 3;
    if ( v11 < v12 )
    {
      if ( *(_QWORD *)(a1 + 5832) < (unsigned __int64)v12 )
      {
        v14 = qvector_reserve(a1 + 5816, v5, v12, 1);
        *(_QWORD *)(a1 + 5816) = v14;
        v5 = v14;
        v11 = *(_QWORD *)(a1 + 5824);
      }
      memset((void *)(v11 + v5), 0, v12 - v11);
      v13 = *(_QWORD *)(a1 + 5816);
      *(_QWORD *)(a1 + 5824) = v12;
      *(_DWORD *)(a1 + 5808) = v9;
      v6 = (_BYTE *)(v4 + v13);
      v8 = (unsigned __int8)*v6;
    }
    else
    {
      if ( v12 != v11 )
        *(_QWORD *)(a1 + 5824) = v12;
      *(_DWORD *)(a1 + 5808) = v9;
      v8 = (unsigned __int8)*v6;
    }
  }
  result = (1 << v2) | v8;
  *v6 = result;
  return result;
}

