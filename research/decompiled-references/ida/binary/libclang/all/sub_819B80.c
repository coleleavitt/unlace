__int64 __fastcall sub_819B80(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rcx
  char v4; // si
  __int64 v5; // rdx
  unsigned int *v6; // r13
  char v7; // cl
  __int64 v8; // rcx
  int v9; // edx
  bool v10; // r15
  bool v11; // dl
  bool v12; // r12
  bool v13; // r14
  __int64 v14; // rdi
  __int64 result; // rax
  unsigned int v16; // ebp
  __int64 v17; // r9
  __int64 v18; // rbp
  int v19; // r8d
  unsigned __int8 v20; // dl
  int v21; // r12d
  int v22; // r8d
  unsigned __int8 v23; // dl
  char v24; // [rsp+0h] [rbp-48h]
  int v25; // [rsp+0h] [rbp-48h]
  __int64 v26; // [rsp+0h] [rbp-48h]
  bool v27; // [rsp+8h] [rbp-40h]
  __int64 v28; // [rsp+8h] [rbp-40h]
  int v29; // [rsp+8h] [rbp-40h]

  v3 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
  v4 = *((_BYTE *)v3 + 16);
  v5 = *v3;
  v6 = v3 + 4;
  v7 = 0;
  if ( (v4 & 0xDF) == 0x53 )
  {
    v8 = v5 != 0;
    v5 -= v8;
    v6 = (unsigned int *)((char *)v6 + v8);
    v7 = 1;
  }
  switch ( v5 )
  {
    case 2LL:
      v11 = *(_WORD *)v6 == 26984;
      v12 = *(_WORD *)v6 == 28524;
      v13 = 0;
      v10 = 0;
      break;
    case 4LL:
      v13 = *v6 == 1852143205;
      v11 = 0;
      v12 = 0;
      v10 = 0;
      break;
    case 3LL:
      if ( *(_WORD *)v6 != 25711 || (v9 = 0, *((_BYTE *)v6 + 2) != 100) )
        v9 = 1;
      v10 = v9 == 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      break;
    default:
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v10 = 0;
      break;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  result = (unsigned int)*(unsigned __int8 *)(v14 + 16) - 56;
  if ( (unsigned int)result <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 56 <= 1
    && (v27 = v11, v24 = v7, result = sub_B0D320(v14), v7 = v24, v11 = v27, (v14 = result) != 0) )
  {
    v16 = *(_DWORD *)(v14 + 20);
    if ( !v16 )
      return result;
  }
  else
  {
    v16 = 1;
  }
  result = *(unsigned int *)(a2 + 8);
  if ( v11 )
  {
    v21 = 2 * v16;
    do
    {
      if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(result + 1) )
      {
        sub_25D6060(a2, a2 + 16, result + 1, 4);
        *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v16;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v16;
      }
      ++v16;
      result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = result;
    }
    while ( v21 != v16 );
  }
  else
  {
    v17 = v16;
    v18 = 0;
    if ( v7 )
    {
      do
      {
        while ( 1 )
        {
          v22 = v18;
          if ( !v12 )
          {
            if ( v13 )
            {
              v22 = 2 * v18;
            }
            else if ( v10 )
            {
              v22 = 2 * v18 + 1;
            }
            else
            {
              v23 = *((_BYTE *)v6 + v18) - 48;
              if ( v23 > 0x36u )
                v22 = -1;
              else
                v22 = *((char *)qword_3C94FA0 + v23);
            }
          }
          if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(result + 1) )
            break;
          ++v18;
          *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v22;
          result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
          *(_DWORD *)(a2 + 8) = result;
          if ( v18 == v17 )
            return result;
        }
        v25 = v22;
        v28 = v17;
        ++v18;
        sub_25D6060(a2, a2 + 16, result + 1, 4);
        v17 = v28;
        *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v25;
        result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = result;
      }
      while ( v18 != v28 );
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v19 = v18;
          if ( !v12 )
          {
            if ( v13 )
            {
              v19 = 2 * v18;
            }
            else if ( v10 )
            {
              v19 = 2 * v18 + 1;
            }
            else
            {
              v20 = *((_BYTE *)v6 + v18) - 97;
              if ( v20 > 0x19u )
                v19 = -1;
              else
                v19 = *((_DWORD *)qword_3C94FE0 + v20);
            }
          }
          if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(result + 1) )
            break;
          ++v18;
          *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v19;
          result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
          *(_DWORD *)(a2 + 8) = result;
          if ( v17 == v18 )
            return result;
        }
        v26 = v17;
        v29 = v19;
        ++v18;
        sub_25D6060(a2, a2 + 16, result + 1, 4);
        v17 = v26;
        *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v29;
        result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = result;
      }
      while ( v18 != v26 );
    }
  }
  return result;
}

