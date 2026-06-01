__int64 __fastcall sub_8E7C70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int ***v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned int ***v9; // r15
  unsigned int **v10; // rbp
  unsigned int *v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v4 = *(_QWORD *)(a2 + 56);
  if ( !v4 )
    return 0;
  v5 = *(unsigned int ****)(a3 + 56);
  v6 = *(_DWORD *)(v4 - 4);
  v7 = a2;
  if ( v5 )
  {
    v8 = *((unsigned int *)v5 - 1);
    if ( (unsigned int)v8 >= v6 )
    {
      v8 = v6;
      v17 = a3;
      v5 = *(unsigned int ****)(a2 + 56);
      a3 = a2;
      v7 = v17;
    }
LABEL_5:
    v9 = &v5[v8];
    if ( v9 == v5 )
      return 0;
    while ( 1 )
    {
      v10 = *v5;
      if ( (*((_BYTE *)*v5 + 44) & 0x10) != 0 )
      {
        v11 = *v10;
        v12 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
        if ( v12 > *(_DWORD *)(a1 + 184) )
          v12 = *(_DWORD *)(a1 + 184);
        if ( v12 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 7488) + 56LL))(
                  *(_QWORD *)(a1 + 7488),
                  v11) )
            goto LABEL_7;
          v11 = *v10;
        }
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 8848) + (unsigned int)(2 * *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * *v11))) == 0xFF )
        {
          v13 = *((_QWORD *)v10[14] + 1);
          v14 = *(_QWORD *)(a3 + 8);
          v15 = *((_QWORD *)v10[15] + 1);
          if ( v14 == v13 )
          {
            if ( *(_QWORD *)(v7 + 8) == v15 )
              return 1;
          }
          else if ( v14 == v15 && v13 == *(_QWORD *)(v7 + 8) )
          {
            return 1;
          }
        }
      }
LABEL_7:
      if ( v9 == ++v5 )
        return 0;
    }
  }
  if ( !v6 )
  {
    v18 = a3;
    v8 = 0;
    a3 = a2;
    v5 = *(unsigned int ****)(a2 + 56);
    v7 = v18;
    goto LABEL_5;
  }
  return 0;
}

