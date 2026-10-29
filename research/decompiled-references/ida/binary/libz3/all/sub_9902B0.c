void __fastcall sub_9902B0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  unsigned int *v3; // rax
  unsigned int *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rbp
  _QWORD *v7; // r12

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 400) + 80LL) )
  {
    if ( !*(_WORD *)(a2 + 4) )
    {
      v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( v2 )
      {
        if ( !*v2 && v2[1] == 2 && *(_DWORD *)(a2 + 24) == 2 )
        {
          v3 = *(unsigned int **)(a2 + 32);
          if ( !*((_WORD *)v3 + 2) )
          {
            v4 = *(unsigned int **)(a2 + 40);
            if ( !*((_WORD *)v4 + 2) )
            {
              v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
              v6 = *(_QWORD **)(v5 + 8LL * *v3);
              v7 = *(_QWORD **)(v5 + 8LL * *v4);
              if ( (unsigned int)sub_B39350(v6, *(unsigned int *)(a1 + 8)) != -1
                && (unsigned int)sub_B39350(v7, *(unsigned int *)(a1 + 8)) != -1
                && v7 != v6 )
              {
                sub_8E1D30(a1 + 568, v6, v7);
              }
            }
          }
        }
      }
    }
  }
}

