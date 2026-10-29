__int64 __fastcall sub_E03760(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int64 *v6; // r13
  __int64 v7; // rcx
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  int v19; // ecx
  __int64 *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdi
  int v26; // eax

  v4 = 8LL * a2;
  result = *(_QWORD *)(a1 + 736);
  v6 = (unsigned __int64 *)(result + v4);
  if ( result )
  {
    v7 = 8LL * *(unsigned int *)(result - 4);
    v8 = (unsigned __int64 *)(result + v7);
    if ( v4 == v7 )
      goto LABEL_20;
  }
  else
  {
    v8 = nullptr;
    if ( !v4 )
      return result;
  }
  do
  {
LABEL_3:
    v9 = *v6;
    v10 = *(_QWORD *)(a1 + 696);
    v11 = *(unsigned int *)(a1 + 704);
    if ( *v6 )
    {
      if ( (*v6 & 7) == 1 )
        v12 = v9 >> 3;
      else
        LODWORD(v12) = *(_DWORD *)(v9 - 8);
    }
    else
    {
      LODWORD(v12) = -1640531495;
    }
    v13 = v11 - 1;
    v14 = 24 * v11;
    v15 = v10 + v14;
    v16 = 24LL * ((unsigned int)v12 & v13);
    v17 = v10 + v16;
    if ( v16 == v14 )
    {
LABEL_22:
      while ( v17 != v10 )
      {
        v26 = *(_DWORD *)(v10 + 4);
        if ( v26 == 2 )
        {
          if ( (_DWORD)v12 == *(_DWORD *)v10 && v9 == *(_QWORD *)(v10 + 8) )
          {
            v18 = v10;
            goto LABEL_13;
          }
        }
        else if ( !v26 )
        {
          break;
        }
        v10 += 24;
      }
LABEL_40:
      sub_1872CE0("");
      sub_1873130(114, 416);
    }
    v18 = v10 + v16;
    while ( 1 )
    {
      v19 = *(_DWORD *)(v18 + 4);
      if ( v19 != 2 )
      {
        if ( !v19 )
          goto LABEL_40;
        goto LABEL_9;
      }
      if ( (_DWORD)v12 == *(_DWORD *)v18 && v9 == *(_QWORD *)(v18 + 8) )
        break;
LABEL_9:
      v18 += 24;
      if ( v15 == v18 )
        goto LABEL_22;
    }
LABEL_13:
    v20 = *(__int64 **)(v18 + 16);
    sub_DFBCB0(a1);
    v21 = *v20;
    if ( *v20 )
    {
      v22 = v21 + 16LL * (unsigned int)(*(_DWORD *)(v21 - 4) - 1);
      v23 = *(_QWORD *)(v22 + 8);
      if ( v23 )
      {
LABEL_15:
        v24 = *(_QWORD *)(a1 + 296);
        if ( (*(_DWORD *)(v23 + 8))-- == 1 )
        {
          sub_15D7BC0(v24, v23);
          v21 = *v20;
          if ( !*v20 )
            goto LABEL_34;
        }
        v22 = v21 + 16LL * (unsigned int)(*(_DWORD *)(v21 - 4) - 1);
      }
    }
    else
    {
      v23 = MEMORY[0xFFFFFFFF8];
      if ( MEMORY[0xFFFFFFFF8] )
        goto LABEL_15;
LABEL_34:
      v22 = 0xFFFFFFFF0LL;
    }
    if ( *(_QWORD *)v22 )
    {
      ++v6;
      sub_186B220((void *)(*(_QWORD *)v22 - 8LL));
      --*(_DWORD *)(*v20 - 4);
      if ( v8 == v6 )
        break;
      goto LABEL_3;
    }
    ++v6;
    --*(_DWORD *)(v21 - 4);
  }
  while ( v6 != v8 );
  result = *(_QWORD *)(a1 + 736);
  if ( result )
LABEL_20:
    *(_DWORD *)(result - 4) = a2;
  return result;
}

