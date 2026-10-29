void __fastcall sub_818A40(__int64 a1, __int64 a2)
{
  __int64 **v2; // rbx
  __int64 **v3; // rbp
  __int64 v4; // rax
  _DWORD *v5; // rax
  char *v6; // rax
  unsigned int v7; // esi

  v2 = *(__int64 ***)(a2 + 8);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    while ( v3 != v2 )
    {
      while ( 1 )
      {
        v4 = **v2;
        if ( !*(_WORD *)(v4 + 4) )
        {
          v5 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
          if ( v5 )
          {
            if ( *(_DWORD *)(a1 + 112) == *v5 && !v5[1] )
              break;
          }
        }
        if ( v3 == ++v2 )
          return;
      }
      v6 = (char *)((*v2)[22] + 88);
      if ( *(int *)v6 >> 8 == -1 )
      {
LABEL_16:
        v7 = -1;
      }
      else
      {
        while ( *(_DWORD *)(a1 + 12) != *v6 )
        {
          v6 = *((char **)v6 + 1);
          if ( !v6 )
            goto LABEL_16;
        }
        v7 = *(int *)v6 >> 8;
      }
      ++v2;
      sub_818860((_QWORD *)a1, v7);
    }
  }
}

