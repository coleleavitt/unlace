__int64 __fastcall sub_CFE160(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rcx
  __int64 v5; // r13
  unsigned int v6; // ebp
  __int64 v7; // rax
  int v8; // esi
  __int64 v10; // rax
  __int64 v11; // rdx

  v2 = *(unsigned int *)(a2 + 40);
  v4 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_DWORD *)(a2 + 40);
  if ( *(_QWORD *)a2 == 0xFFFFFFFFLL )
  {
    v10 = sub_CFDF60(a2);
    v11 = 16;
    if ( !*(_DWORD *)(a2 + 24) )
    {
      if ( *(_QWORD *)(v10 + 40) || (v11 = 32, !*(_BYTE *)(v10 + 60)) )
        v11 = 16;
    }
    sub_E23220(a1, v5, v6, v11 + v2 + *(unsigned int *)(v10 + 20));
    return a1;
  }
  else
  {
    if ( v2 != v4 )
      goto LABEL_10;
    if ( *(_DWORD *)(a2 + 24) )
      goto LABEL_11;
    if ( !v5 )
      goto LABEL_11;
    v7 = *(_QWORD *)(v5 + 32);
    v8 = *(_DWORD *)(v7 + 24);
    if ( !(_DWORD)v2 || (_DWORD)v2 == v8 )
      goto LABEL_11;
    v6 -= *(_DWORD *)(v5 + v4 + 24);
    if ( v6 != v8 )
      v7 = *(_QWORD *)(v5 + v6 + 32);
    if ( *(_BYTE *)(v7 + 60) )
    {
LABEL_11:
      sub_E23220(a1, v5, v6, v4);
      return a1;
    }
    else
    {
LABEL_10:
      sub_E231E0(a1, a2);
      return a1;
    }
  }
}
