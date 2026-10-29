void __fastcall sub_1838710(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 i; // rax
  __int64 v7; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(__int64 **)a1;
    v4 = (unsigned int)(v2 - 1);
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 24 * v4);
    if ( (*(_BYTE *)(v5 + 12) & 1) == 0 )
    {
      if ( v2 == 1 )
      {
LABEL_15:
        v5 = *v3;
        LODWORD(v4) = 0;
        goto LABEL_9;
      }
      for ( i = (unsigned int)(v2 - 2); ; i = (unsigned int)(i - 1) )
      {
        LODWORD(v4) = i;
        v5 = v3[3 * i];
        if ( (*(_BYTE *)(v5 + 12) & 1) != 0 )
          break;
        if ( !(_DWORD)i )
          goto LABEL_15;
      }
    }
    if ( (_DWORD)v4 != v2 )
    {
LABEL_9:
      v7 = *(unsigned int *)(a2 + 8);
      while ( 1 )
      {
        if ( v7 + 1 <= (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          LODWORD(v4) = v4 + 1;
          *(_QWORD *)(*(_QWORD *)a2 + 8 * v7) = v5;
          v7 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
          *(_DWORD *)(a2 + 8) = v7;
          if ( (_DWORD)v4 == v2 )
            return;
        }
        else
        {
          LODWORD(v4) = v4 + 1;
          sub_2237220(a2, a2 + 16, v7 + 1, 8);
          *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8)) = v5;
          v7 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
          *(_DWORD *)(a2 + 8) = v7;
          if ( v2 == (_DWORD)v4 )
            return;
        }
        v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL * (unsigned int)v4);
      }
    }
  }
}
