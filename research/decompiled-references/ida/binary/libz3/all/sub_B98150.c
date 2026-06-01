void __fastcall sub_B98150(__int64 a1)
{
  __int64 v1; // r10
  int v3; // edx
  unsigned int v4; // eax
  unsigned int **v5; // rdi
  unsigned int **v6; // r8
  __int64 v7; // r9
  unsigned int *v8; // rax
  unsigned int *v9; // rcx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // edx

  if ( *(_BYTE *)(a1 + 128) )
  {
    v1 = *(_QWORD *)(a1 + 80);
    if ( v1 )
    {
      v3 = *(_DWORD *)(a1 + 132);
      v4 = *(_DWORD *)(a1 + 136) + 1;
      *(_DWORD *)(a1 + 136) = v4;
      if ( v4 >= v3 + 100 )
      {
        *(_DWORD *)(a1 + 132) = 2 * v3;
        v5 = *(unsigned int ***)(a1 + 176);
        if ( !v5 || (v6 = &v5[*((unsigned int *)v5 - 1)], v5 == v6) )
        {
LABEL_13:
          *(_DWORD *)(a1 + 140) = 0;
          *(_BYTE *)(a1 + 128) = 0;
          sub_B98080(a1);
        }
        else
        {
          v7 = *(_QWORD *)(a1 + 16);
          while ( 1 )
          {
            v8 = *v5;
            if ( !*v5 )
              break;
            v9 = &v8[*(v8 - 1)];
            if ( v8 == v9 )
              break;
            while ( *(_BYTE *)(*(_QWORD *)(v7 + 8848) + *v8) != 1 )
            {
              if ( v9 == ++v8 )
                goto LABEL_14;
            }
            if ( v6 == ++v5 )
              goto LABEL_13;
          }
LABEL_14:
          v10 = *(_DWORD *)(a1 + 152);
          v11 = *(_DWORD *)(v7 + 9464);
          v12 = *(_DWORD *)(a1 + 148);
          if ( v11 < v10 && v10 == v12 )
          {
            sub_1265E70(v1);
            v12 = *(_DWORD *)(a1 + 148);
            v11 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 9464LL);
          }
          *(_DWORD *)(a1 + 152) = v11;
          if ( v11 < v12 )
            v11 = v12;
          *(_DWORD *)(a1 + 148) = v11;
        }
      }
    }
  }
}

