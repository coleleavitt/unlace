__int64 __fastcall sub_1E4CD30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rdx
  int v20; // eax
  _DWORD *v21; // rax
  unsigned __int64 v22; // rax
  _DWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // rdx

  v6 = *(_DWORD **)a2;
  v7 = (**(_DWORD **)a2 >> 12) & 0x7F;
  if ( ((**(_DWORD **)a2 >> 12) & 0x7Fu) <= 0x37 )
  {
    a3 = 1LL << v7;
    if ( ((1LL << v7) & 0xC3FFFCB0000000LL) != 0 )
    {
      v22 = *((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v22 && (*(_BYTE *)(*(_QWORD *)v22 + 17LL) & 1) != 0 )
        return 1;
    }
    else if ( (a3 & 0x340000200LL) != 0 )
    {
      v23 = *((_DWORD **)v6 + 1);
      if ( v23 )
      {
        if ( (*v23 & 0x4000) != 0 )
          return 1;
      }
    }
  }
  v8 = a2;
  v9 = *(_DWORD *)(a2 + 136);
  if ( v9 )
  {
    v10 = 0;
    v11 = 16 * (9LL * (unsigned int)(v9 - 1) + 9);
    do
    {
      v12 = v10 + *(_QWORD *)(v8 + 128);
      v13 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 == 3 )
      {
        a2 = *(unsigned int *)(v12 + 72);
        if ( (_DWORD)a2 )
        {
          v16 = *(_QWORD *)(v12 + 96);
          a3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(a3 + 17) & 1) != 0 )
            return 1;
          v17 = (__int64 *)(v16 + 48);
          v18 = &v17[4 * (unsigned int)(a2 - 1)];
          while ( v18 != v17 )
          {
            v19 = *v17;
            v17 += 4;
            a3 = *(_QWORD *)(*(_QWORD *)(v19 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(a3 + 17) & 1) != 0 )
              return 1;
          }
        }
        v20 = *(_BYTE *)(v12 + 56) >> 4;
        if ( v20 == 2 )
        {
          a2 = *(unsigned int *)(v12 + 76);
          if ( (_DWORD)a2 )
          {
            v24 = *(_QWORD **)(v12 + 120);
            a3 = *(_QWORD *)(*v24 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(a3 + 17) & 1) != 0 )
              return 1;
            v25 = v24 + 2;
            a2 = (__int64)&v25[2 * (unsigned int)(a2 - 1)];
            while ( (__int64 *)a2 != v25 )
            {
              v26 = *v25;
              v25 += 2;
              a3 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
              if ( (*(_BYTE *)(a3 + 17) & 1) != 0 )
                return 1;
            }
          }
        }
        else if ( (unsigned int)(v20 - 6) <= 2 && (**(_DWORD **)(v12 + 120) & 0x4000) != 0 )
        {
          return 1;
        }
        if ( (*(_BYTE *)(v12 + 57) & 2) != 0
          && (*(_QWORD *)(v12 + 128) & 0xFFFFFFFFFFFFFFF0LL) != 0
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 128) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) != 0 )
        {
          return 1;
        }
      }
      else if ( v13 == 5 )
      {
        v14 = *(_QWORD *)(v12 + 72);
        if ( v14 && (unsigned __int8)sub_E91760(v14, a2, a3, v12, a5, a6) )
          return 1;
      }
      else if ( v13 == 2 )
      {
        v21 = *(_DWORD **)(v12 + 64);
        if ( v21 )
        {
          if ( (*v21 & 0x4000) != 0 )
            return 1;
        }
      }
      v10 += 144;
    }
    while ( v11 != v10 );
  }
  v27 = *(_DWORD **)(v8 + 824);
  result = 0;
  if ( v27 )
    return (*v27 >> 14) & 1;
  return result;
}
