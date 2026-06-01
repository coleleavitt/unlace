__int64 __fastcall sub_937C40(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 *v5; // r13
  __int64 result; // rax
  __int64 *v8; // r12
  unsigned int v9; // esi
  int v10; // edx
  int v11; // [rsp+8h] [rbp-40h]
  int v12; // [rsp+Ch] [rbp-3Ch]

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 8LL * a2) + 24LL * a3;
  v5 = *(__int64 **)(v4 + 16);
  v11 = -*(_DWORD *)(v4 + 4);
  result = (unsigned int)-*(_DWORD *)(v4 + 8);
  v12 = -*(_DWORD *)(v4 + 8);
  if ( v5 )
  {
    result = *((unsigned int *)v5 - 1);
    v8 = &v5[result];
    if ( v5 != v8 )
    {
      while ( 1 )
      {
        result = *v5;
        v9 = 2 * *(_DWORD *)*v5;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v9) )
          goto LABEL_6;
        v10 = *(_DWORD *)(result + 12);
        if ( a2 != *(_DWORD *)(result + 4) )
        {
          if ( v11 > v10 || v11 == v10 && v12 > *(_DWORD *)(result + 16) )
          {
            ++*(_DWORD *)(a1 + 84);
            result = sub_937800(a1, v9 + 1, a2, a3);
          }
          goto LABEL_6;
        }
        if ( *(_DWORD *)(v4 + 4) > v10 || *(_DWORD *)(v4 + 4) == v10 && *(_DWORD *)(result + 16) < *(_DWORD *)(v4 + 8) )
        {
LABEL_6:
          if ( v8 == ++v5 )
            return result;
        }
        else
        {
          ++*(_DWORD *)(a1 + 84);
          ++v5;
          result = sub_937800(a1, v9, a2, a3);
          if ( v8 == v5 )
            return result;
        }
      }
    }
  }
  return result;
}

