__int64 __fastcall sub_EEE880(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 *v3; // rbx
  int v4; // r12d
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 result; // rax

  v2 = a2;
  if ( *(_BYTE *)(a1 + 16) )
    v2 = sub_A93830(*(_QWORD **)(a1 + 24), a2);
  v3 = *(__int64 **)(a1 + 8);
  v4 = v2;
  v5 = *((unsigned int *)v3 + 2);
  if ( v5 + 1 > (unsigned __int64)*((unsigned int *)v3 + 3) )
  {
    sub_22134E0(v3, v3 + 2, v5 + 1, 4);
    v5 = *((unsigned int *)v3 + 2);
  }
  v6 = HIDWORD(v2);
  *(_DWORD *)(*v3 + 4 * v5) = v4;
  v7 = (unsigned int)(*((_DWORD *)v3 + 2) + 1);
  v8 = *((unsigned int *)v3 + 3);
  *((_DWORD *)v3 + 2) = v7;
  if ( v7 + 1 > v8 )
  {
    sub_22134E0(v3, v3 + 2, v7 + 1, 4);
    v7 = *((unsigned int *)v3 + 2);
  }
  result = *v3;
  *(_DWORD *)(*v3 + 4 * v7) = v6;
  ++*((_DWORD *)v3 + 2);
  return result;
}

