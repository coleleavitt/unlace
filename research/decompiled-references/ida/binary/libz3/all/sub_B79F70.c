void __fastcall sub_B79F70(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rax
  _DWORD *v3; // rdx
  unsigned int *v4; // rcx
  _DWORD *v5; // rdx
  int v6; // edx

  v2 = *(unsigned int **)(a2 + 40);
  if ( !*((_WORD *)v2 + 2) )
  {
    v3 = *(_DWORD **)(*((_QWORD *)v2 + 2) + 24LL);
    if ( v3 )
    {
      v4 = *(unsigned int **)(a2 + 32);
      if ( *v3 != 5 )
        goto LABEL_11;
      if ( !v3[1] )
      {
        if ( *((_WORD *)v4 + 2) )
          return;
        v4 = *(unsigned int **)(a2 + 40);
        v2 = *(unsigned int **)(a2 + 32);
      }
      v3 = *(_DWORD **)(*((_QWORD *)v2 + 2) + 24LL);
      if ( v3 )
      {
LABEL_11:
        if ( *v3 == 5 && !v3[1] && !*((_WORD *)v4 + 2) )
        {
          v5 = *(_DWORD **)(*((_QWORD *)v4 + 2) + 24LL);
          if ( v5 )
          {
            if ( *v5 == 5 )
            {
              v6 = v5[1];
              if ( v6 == 6 || v6 == 7 )
                sub_8E1D30(
                  a1 + 888,
                  *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v4),
                  *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v2));
            }
          }
        }
      }
    }
  }
}

