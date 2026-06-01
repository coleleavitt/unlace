__int64 __fastcall sub_B4CC00(_BYTE *a1, __int64 a2, int *a3, unsigned int a4)
{
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 ***v8; // rax
  __int64 **v9; // rbx
  __int64 **v10; // r13
  __int64 *v11; // r14
  __int64 v12; // rbp

  if ( !a3 || !a1[16] )
    return 1;
  v4 = *(_QWORD *)a1;
  v5 = *a3;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8696LL);
  v7 = v5 + 0x80000000;
  if ( v6 && (unsigned int)v7 < *(_DWORD *)(v6 - 4) )
    v8 = (__int64 ***)(v6 + 8 * v7);
  else
    v8 = (__int64 ***)(v4 + 8704);
  v9 = *v8;
  if ( *v8 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 != v10 )
    {
      while ( 1 )
      {
        v11 = *v9;
        v12 = **v9;
        if ( (!(unsigned int)sub_8E7030(v4)
           || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 7488) + 56LL))(
                *(_QWORD *)(v4 + 7488),
                v12))
          && v11 == (__int64 *)v11[3]
          && (*((_BYTE *)v11 + 44) & 8) == 0
          && a4 < *(_DWORD *)(*v11 + 24)
          && *(_QWORD *)(a2 + 8) == *(_QWORD *)(v11[a4 + 14] + 8) )
        {
          break;
        }
        if ( v10 == ++v9 )
          return 0;
        v4 = *(_QWORD *)a1;
      }
      return 1;
    }
  }
  return 0;
}

