unsigned __int64 __fastcall sub_9E6AE0(__int64 a1, unsigned __int8 *a2, size_t a3)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  unsigned __int8 *v6; // rax
  int v7; // ebx
  int v8; // r8d
  __int64 v9; // rax
  _WORD *v10; // rcx
  _WORD *v11; // rax
  int v12; // r15d
  unsigned __int8 *v14; // rcx
  int v15; // r14d
  __int64 v16; // rsi
  _WORD *v17; // r13
  unsigned int v18; // r8d
  int v19; // eax
  unsigned int *v20; // rbp
  unsigned __int8 *v21; // [rsp+0h] [rbp-48h]
  int v22; // [rsp+Ch] [rbp-3Ch]

  v4 = *(_QWORD *)(a1 + 80);
  if ( !v4 )
    return v3;
  if ( !a3 )
    return 0;
  if ( a2 == &a2[a3] )
  {
    v7 = 5381;
  }
  else
  {
    v6 = a2;
    v7 = 5381;
    do
    {
      v8 = *v6++;
      v7 += v8 + 32 * v7;
    }
    while ( &a2[a3] != v6 );
  }
  v9 = *(unsigned int *)(*(_QWORD *)(v4 + 8) + 4LL * (v7 & (unsigned int)(*(_DWORD *)v4 - 1)));
  if ( (_DWORD)v9 )
  {
    v10 = (_WORD *)(*(_QWORD *)(v4 + 16) + v9);
    v11 = v10 + 1;
    v12 = (unsigned __int16)*v10;
    if ( *v10 )
    {
      v14 = a2;
      v15 = 0;
      while ( 1 )
      {
        v16 = (unsigned __int16)v11[2];
        v17 = v11 + 4;
        v18 = (unsigned __int16)v11[3] + (_DWORD)v16;
        if ( v7 == *(_DWORD *)v11 && a3 == v16 )
        {
          v22 = (unsigned __int16)v11[3] + (_DWORD)v16;
          v21 = v14;
          v19 = memcmp(v11 + 4, v14, a3);
          v14 = v21;
          v18 = v22;
          if ( !v19 )
            break;
        }
        ++v15;
        v11 = (_WORD *)((char *)v17 + v18);
        if ( v12 == v15 )
          return v3;
      }
      v20 = (unsigned int *)((char *)v17 + a3);
      if ( v20 )
        return (unsigned __int64)*v20 << 33;
    }
  }
  return v3;
}

