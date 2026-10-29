__int64 __fastcall sub_733F00(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rdi
  _BYTE *v6; // r8
  int v7; // edx
  unsigned int v8; // eax
  unsigned __int16 v9; // bx
  __int64 result; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r13
  __int64 v13; // r8
  __int64 v14; // rax

  v2 = a2 & 7;
  v4 = (unsigned __int64)a2 >> 3;
  v5 = *(_QWORD *)(a1 + 5816);
  v6 = (_BYTE *)(v5 + v4);
  v7 = *(unsigned __int8 *)(v5 + v4);
  if ( _bittest(&v7, v2) )
    sub_737820();
  v8 = *(unsigned __int8 *)(v5 + v4);
  v9 = a2 + 1;
  if ( *(_WORD *)(a1 + 5808) < (unsigned __int16)(a2 + 1) )
  {
    v11 = *(_QWORD *)(a1 + 5824);
    v12 = (v9 + 7) >> 3;
    if ( v11 < v12 )
    {
      if ( *(_QWORD *)(a1 + 5832) < v12 )
      {
        v14 = qvector_reserve(a1 + 5816, v5, (v9 + 7) >> 3, 1);
        *(_QWORD *)(a1 + 5816) = v14;
        v5 = v14;
        v11 = *(_QWORD *)(a1 + 5824);
      }
      memset((void *)(v11 + v5), 0, v12 - v11);
      v13 = *(_QWORD *)(a1 + 5816);
      *(_QWORD *)(a1 + 5824) = v12;
      *(_WORD *)(a1 + 5808) = v9;
      v6 = (_BYTE *)(v4 + v13);
      v8 = (unsigned __int8)*v6;
    }
    else
    {
      if ( v12 != v11 )
        *(_QWORD *)(a1 + 5824) = v12;
      *(_WORD *)(a1 + 5808) = v9;
      v8 = (unsigned __int8)*v6;
    }
  }
  result = (1 << v2) | v8;
  *v6 = result;
  return result;
}
