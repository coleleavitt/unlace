unsigned __int64 __fastcall sub_8E92E0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r13
  int v10; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12

  v1 = *(_DWORD *)(a1 + 48);
  if ( !v1 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 )
    {
      v6 = *(_DWORD *)(a1 + 32);
      if ( v6 > 0x10 )
      {
        v9 = *(_QWORD *)a1;
        v3 = 0;
        if ( v6 == *(_QWORD *)a1 )
          return v3;
        if ( v6 == -1 )
        {
          v12 = *(_QWORD *)(v5 + 32);
          v8 = *(unsigned int *)(v12 + 12);
          if ( !*(_DWORD *)(v12 + 12) )
            return v3;
          v11 = (unsigned int)v9;
          return v11 / v8;
        }
        v7 = sub_8E5480(a1);
        v8 = *(unsigned int *)(v7 + 8);
        if ( !*(_DWORD *)(v7 + 8) )
          return v3;
        goto LABEL_9;
      }
      v7 = sub_8E5480(a1);
      v8 = *(unsigned int *)(v7 + 8);
      if ( *(_DWORD *)(v7 + 8) )
      {
        v9 = *(_QWORD *)a1;
        v10 = 0;
        if ( *(_QWORD *)a1 == v6 )
        {
LABEL_11:
          v11 = (_DWORD)v9 - v10 - v6;
          return v11 / v8;
        }
LABEL_9:
        v10 = 32;
        if ( *(_QWORD *)(v7 + 32) )
          v10 = 16;
        goto LABEL_11;
      }
    }
    return 0;
  }
  v2 = *(_QWORD *)a1;
  if ( v1 != 1 )
    return *(_QWORD *)(a1 + 24) + v2;
  v13 = *(_QWORD *)(a1 + 32);
  return v2 * sub_8E9110(a1) + v13;
}

