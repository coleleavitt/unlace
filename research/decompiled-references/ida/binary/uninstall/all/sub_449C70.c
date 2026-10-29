__int64 __fastcall sub_449C70(__int64 a1)
{
  _DWORD *v2; // rbp
  __int64 result; // rax
  __int64 v4; // r12
  int v5; // esi
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  unsigned int *v11; // rbp
  int v12; // edi

  v2 = *(_DWORD **)(a1 + 40);
  if ( *(_QWORD *)(a1 + 56)
    || (result = sub_449A70(*(_QWORD *)(a1 + 48), (__int64)v2, (int *)(a1 + 64)), (*(_QWORD *)(a1 + 56) = result) != 0) )
  {
    v4 = 0;
    v5 = (int)v2;
    result = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(**(_QWORD **)v2 + 984LL) + 64LL))(
               *(_QWORD *)(**(_QWORD **)v2 + 984LL),
               v2);
    v8 = result;
    if ( result )
    {
      v9 = *(_QWORD *)(a1 + 56) - v2[10];
      v10 = 0;
      v11 = *(unsigned int **)(v8 + 24);
      v12 = v11[7];
      if ( v12 <= 0 )
        goto LABEL_8;
      v8 = *((_QWORD *)v11 + 2);
      while ( *(_DWORD *)v8 != v9 )
      {
        ++v10;
        v8 += 24;
        if ( v12 <= v10 )
          goto LABEL_8;
      }
      v4 = v8;
      if ( !v8 )
LABEL_8:
        sub_47D740((unsigned int)"LocSearch failure", v5, v8, v10, v6, v7);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v4 + 8);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(v4 + 4);
      result = *v11;
      *(_DWORD *)a1 = result;
      if ( *v11 == 4 )
      {
        result = *((_QWORD *)v11 + 1);
        *(_QWORD *)(a1 + 40) = result;
        ++*(_DWORD *)result;
      }
    }
  }
  return result;
}

