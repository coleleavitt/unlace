__int64 __fastcall sub_672C90(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r14
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = *(_QWORD *)(a2 + 1608);
  if ( *(_DWORD *)(v3 + 104) == -1 )
    return 1;
  if ( (unsigned __int8)sub_79B370(a2, v3 + 104) )
  {
    v6 = *(_QWORD *)(v3 + 48);
    if ( (_DWORD)v6 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8 * v7);
        if ( *(_DWORD *)(v8 + 32) != -1 && !(unsigned __int8)sub_79B370(a2, v8 + 32) )
          break;
        if ( ++v7 == (unsigned int)v6 )
          return 1;
      }
      v10 = a3[1];
      v11 = *a3;
      if ( a3[2] < (unsigned __int64)(v10 + 1) )
      {
        v13 = qvector_reserve(a3, v11, v10 + 1, 24);
        v10 = a3[1];
        *a3 = v13;
        v11 = v13;
      }
      goto LABEL_14;
    }
    return 1;
  }
  v10 = a3[1];
  v11 = *a3;
  if ( a3[2] < (unsigned __int64)(v10 + 1) )
  {
    v14 = qvector_reserve(a3, v11, v10 + 1, 24);
    v10 = a3[1];
    *a3 = v14;
    v11 = v14;
  }
LABEL_14:
  v12 = v11 + 24 * v10;
  *(_QWORD *)v12 = 0;
  *(_OWORD *)(v12 + 8) = 0;
  ++a3[1];
  sub_3573A0((char **)v12);
  return 0;
}

