__int64 __fastcall sub_840B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned __int64 v7; // rbp
  unsigned int v8; // ecx
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx

  if ( a2[1] == a1 )
  {
    v2 = *a2;
    v3 = *(_QWORD *)(a1 + 24);
    if ( *a2 < 0 )
    {
      v5 = 0;
      if ( !v3 )
      {
        LODWORD(v3) = *(_DWORD *)(a1 + 8);
        v5 = 0;
      }
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 24);
      LODWORD(v3) = *(_DWORD *)(a1 + 8);
    }
    if ( v5 < (unsigned int)v3 )
    {
      v6 = v3;
      v7 = (unsigned __int64)v2 >> 63;
      do
      {
        v8 = (v5 + v6) >> 1;
        v9 = (unsigned __int64 *)(*(_QWORD *)a1 + 16LL * v8);
        v10 = *v9;
        if ( ((*v9 ^ v2) & 0x8000000000000000LL) != 0LL )
        {
          v14 = v10 >> 63;
          if ( (_DWORD)v7 == (_DWORD)v14 )
            return v8;
          if ( (_DWORD)v7 - (_DWORD)v14 != 1 )
          {
LABEL_12:
            v6 = v8 - 1;
            continue;
          }
        }
        else
        {
          v11 = (v2 & 0x7FFFFFFFFFFFFFFFLL) + *(_QWORD *)(a1 + 8 * ((v2 >= 0) + 28LL));
          v12 = *(_QWORD *)(v9[1] + 8LL * ((v10 & 0x8000000000000000LL) == 0LL) + 224) + (v10 & 0x7FFFFFFFFFFFFFFFLL);
          if ( v11 < v12 )
            goto LABEL_12;
          if ( v12 >= v11 )
            return v8;
        }
        v5 = v8 + 1;
      }
      while ( v5 < (unsigned int)v3 && v6 >= v5 && (unsigned int)v3 >= v6 );
    }
    return (unsigned int)-1;
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(30465);
    return sub_841F0(30465, a2, v15);
  }
}
