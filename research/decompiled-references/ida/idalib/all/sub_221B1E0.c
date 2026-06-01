void __fastcall sub_221B1E0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 *v4; // r12
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 *i; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  _BYTE *v12; // rdx
  _BYTE *v13; // rax
  __int64 v14; // rdx

  if ( a3 )
  {
    v3 = 2 * a3;
    v4 = &a2[v3];
    if ( a2 != &a2[v3] )
    {
      v6 = *a2;
      v7 = a2[1];
      for ( i = a2 + 2; ; i += 2 )
      {
        v9 = v6;
        v10 = a1;
        if ( v6 != v7 )
        {
          v11 = sub_227B930(a1, v6);
          v12 = *(_BYTE **)(v11 + 32);
          if ( *(_BYTE **)(v11 + 24) == v12 )
          {
            v11 = sub_227BF10(v11, "-", 1);
          }
          else
          {
            *v12 = 45;
            ++*(_QWORD *)(v11 + 32);
          }
          v9 = v7;
          v10 = v11;
        }
        sub_227B930(v10, v9);
        if ( v4 == i )
          break;
        v6 = *i;
        v7 = i[1];
        v13 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v13 < *(_QWORD *)(a1 + 24) )
        {
          *(_QWORD *)(a1 + 32) = v13 + 1;
          *v13 = 58;
        }
        else
        {
          sub_227BA10(a1, 58);
        }
      }
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v14) > 4 )
    {
      *(_DWORD *)v14 = 1953525093;
      *(_BYTE *)(v14 + 4) = 121;
      *(_QWORD *)(a1 + 32) += 5LL;
    }
    else
    {
      sub_227BF10(a1, "empty", 5);
    }
  }
}
