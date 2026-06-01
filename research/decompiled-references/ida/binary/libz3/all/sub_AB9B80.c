__int64 __fastcall sub_AB9B80(__int64 a1, int *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r14
  int *v5; // rbx
  __int64 result; // rax
  int i; // r15d
  int v8; // r13d
  int *v9; // rax
  __int64 v10; // [rsp+0h] [rbp-48h]
  int v12; // [rsp+Ch] [rbp-3Ch]

  v4 = a4;
  v5 = a2;
  v10 = 8LL * a3;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 504) + v10);
  for ( i = *(_DWORD *)(result + 4LL * a4) ^ 1; v5; v5 = *((int **)v5 + 1) )
  {
    while ( 1 )
    {
      if ( (_DWORD)v4 == v5[1] )
      {
        result = (unsigned int)*v5;
        v8 = *v5;
        if ( i == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 504) + 8 * result) + 4 * v4) )
        {
          v9 = *(int **)(*(_QWORD *)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * result)) + 24) + 8LL);
          if ( *((_BYTE *)v9 + 8)
            || (v12 = *v9,
                result = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + v10)) + 24) + 8LL),
                *(_BYTE *)(result + 8)) )
          {
            sub_DBF6E(0);
          }
          if ( *(_DWORD *)result == v12 )
            break;
        }
      }
      v5 = *((int **)v5 + 1);
      if ( !v5 )
        return result;
    }
    result = sub_AB99C0(a1, a3, v8, v4);
  }
  return result;
}

