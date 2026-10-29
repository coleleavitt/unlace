__int64 __fastcall sub_A68840(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rsi
  char v9; // al
  char v10; // al
  unsigned int v11; // ebp
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax

  sub_9F9720(a1);
  v2 = *(_QWORD *)(a1 + 464);
  if ( *(_BYTE *)(v2 + 144) )
  {
    if ( *(_BYTE *)(v2 + 36) )
    {
      v3 = *(_QWORD *)(a1 + 824);
      if ( v3 )
      {
        v4 = 0;
        do
        {
          if ( v4 >= *(_DWORD *)(v3 - 4) )
            break;
          v5 = v4++;
          sub_A101B0((__int64 *)a1, *(_DWORD *)(v3 + 4 * v5), a2);
          v3 = *(_QWORD *)(a1 + 824);
        }
        while ( v3 );
      }
    }
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 800);
    if ( !v6 )
      break;
    v7 = *(_DWORD *)(a1 + 808);
    if ( v7 >= *(_DWORD *)(v6 - 4) )
      break;
    v8 = *(_QWORD *)(v6 + 8LL * v7);
    *(_DWORD *)(a1 + 808) = v7 + 1;
    v9 = *(_BYTE *)(v8 + 112);
    if ( (v9 & 2) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 1144);
      v14 = *(unsigned int *)(v8 + 8);
      if ( !v13 || (v15 = *(unsigned int *)(v13 - 4), (_DWORD)v15 == *(_DWORD *)(v13 - 8)) )
      {
        sub_2FD3F0((unsigned int **)(a1 + 1144));
        v13 = *(_QWORD *)(a1 + 1144);
        v15 = *(unsigned int *)(v13 - 4);
      }
      *(_DWORD *)(v13 + 4 * v15) = v14;
      ++*(_DWORD *)(v13 - 4);
      --*(_DWORD *)(*(_QWORD *)(a1 + 768) + 4 * v14);
      v9 = *(_BYTE *)(v8 + 112);
    }
    if ( (v9 & 1) != 0 )
    {
      ++*(_DWORD *)(a1 + 364);
      v10 = sub_A68340(a1, v8, a2);
    }
    else
    {
      ++*(_DWORD *)(a1 + 360);
      v10 = sub_A67EC0(a1, v8, a2);
    }
    if ( !v10 )
      goto LABEL_13;
  }
  v11 = sub_A55F80(a1, a2);
  if ( !(_BYTE)v11 )
  {
LABEL_13:
    v11 = 0;
    sub_9CFB40(a1);
    return v11;
  }
  if ( (unsigned __int8)sub_8E6FA0(*(_QWORD *)(a1 + 16)) )
    return v11;
  v16 = *(_DWORD *)(a1 + 976) + 1;
  *(_DWORD *)(a1 + 976) = v16;
  if ( v16 == -1 )
    sub_98ACA0(a1 + 976);
  v17 = *(_QWORD *)(a1 + 968);
  if ( v17 )
    *(_DWORD *)(v17 - 4) = 0;
  sub_A30D40(a1);
  return v11;
}

