void __fastcall sub_B97C40(__int64 a1, int a2)
{
  __int64 v3; // rbp
  unsigned int **v4; // rdi
  unsigned int **v5; // r8
  unsigned int *i; // rax
  unsigned int *v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax

  if ( *(_QWORD *)(a1 + 80) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(v3 + 9464) - a2 == *(_DWORD *)(v3 + 9472) )
    {
      v11 = *(_QWORD *)(v3 + 8920);
      if ( v11 )
      {
        v12 = *(unsigned int *)(a1 + 88);
        do
        {
          if ( (unsigned int)v12 >= *(_DWORD *)(v11 - 4) )
            break;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 9472LL) != (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8872LL)
                                                                        + 16LL * (*(_DWORD *)(v11 + 4 * v12) >> 1)
                                                                        + 8)
                                                            & 0xFFFFFF) )
            break;
          sub_1265CB0(*(_QWORD *)(a1 + 80), *(unsigned int *)(v11 + 4 * v12));
          v11 = *(_QWORD *)(v3 + 8920);
          v12 = (unsigned int)(*(_DWORD *)(a1 + 88) + 1);
          *(_DWORD *)(a1 + 88) = v12;
        }
        while ( v11 );
      }
    }
    if ( *(_BYTE *)(a1 + 128) )
    {
      *(_DWORD *)(a1 + 136) = 0;
      v10 = *(_DWORD *)(a1 + 132);
      if ( v10 > 0xF )
        *(_DWORD *)(a1 + 132) = v10 >> 2;
    }
    else
    {
      v4 = *(unsigned int ***)(a1 + 176);
      if ( v4 )
      {
        v5 = &v4[*((unsigned int *)v4 - 1)];
        if ( v4 != v5 )
        {
          for ( i = *v4; *v4; i = *v4 )
          {
            v7 = &i[*(i - 1)];
            if ( i == v7 )
              break;
            while ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *i) != 1 )
            {
              if ( v7 == ++i )
                goto LABEL_13;
            }
            if ( v5 == ++v4 )
              return;
          }
LABEL_13:
          v8 = *(_DWORD *)(a1 + 144);
          v9 = *(_DWORD *)(a1 + 140) + 1;
          *(_DWORD *)(a1 + 140) = v9;
          if ( v8 < v9 )
          {
            *(_BYTE *)(a1 + 128) = 1;
            *(_DWORD *)(a1 + 144) = v8 + 1;
            *(_DWORD *)(a1 + 140) = 0;
            *(_QWORD *)(a1 + 132) = 4;
          }
        }
      }
    }
  }
}

