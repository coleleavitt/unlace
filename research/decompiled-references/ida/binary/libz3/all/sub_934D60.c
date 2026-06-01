__int64 __fastcall sub_934D60(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r8d
  __int64 result; // rax
  __int64 v5; // r14
  __int64 *v6; // rbx
  int v7; // r15d
  __int64 *i; // r12
  unsigned int v10; // esi
  int v11; // edx
  unsigned int v12; // [rsp+Ch] [rbp-3Ch]

  v3 = a3;
  result = *(_QWORD *)(a1 + 192);
  v5 = *(_QWORD *)(result + 8LL * a2) + 16LL * a3;
  v6 = *(__int64 **)(v5 + 8);
  v7 = -*(_DWORD *)(v5 + 4);
  if ( v6 )
  {
    result = *((unsigned int *)v6 - 1);
    for ( i = &v6[result]; i != v6; ++v6 )
    {
      result = *v6;
      v10 = 2 * *(_DWORD *)*v6;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v10) )
      {
        v11 = *(_DWORD *)(result + 12);
        if ( a2 == *(_DWORD *)(result + 4) )
        {
          if ( *(_DWORD *)(v5 + 4) <= v11 )
          {
            ++*(_DWORD *)(a1 + 76);
LABEL_12:
            v12 = v3;
            result = sub_934930(a1, v10, a2, v3);
            v3 = v12;
          }
        }
        else if ( v7 > v11 )
        {
          ++*(_DWORD *)(a1 + 76);
          ++v10;
          goto LABEL_12;
        }
      }
    }
  }
  return result;
}

