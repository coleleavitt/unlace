bool __fastcall sub_18BCF70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // r8
  int v5; // edx
  _QWORD *v6; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v2 + 20) )
  {
    v3 = *(_QWORD **)v2;
    v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 12);
    v5 = *(_DWORD *)(v2 + 12);
    if ( *(_QWORD *)v2 != v4 )
    {
      v6 = *(_QWORD **)v2;
      if ( a2 == *v3 )
      {
LABEL_11:
        v9 = (unsigned int)(v5 - 1);
        *(_DWORD *)(v2 + 12) = v9;
        *v6 = v3[v9];
        return *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) != *(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
      }
      while ( (_QWORD *)v4 != ++v6 )
      {
        if ( a2 == *v6 )
          goto LABEL_11;
      }
    }
    return *(_DWORD *)(v2 + 16) != v5;
  }
  v8 = (_QWORD *)sub_2236570(*(_QWORD *)(a1 + 16), a2);
  if ( v8 )
  {
    *v8 = -2;
    ++*(_DWORD *)(v2 + 16);
  }
  return *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) != *(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
}
