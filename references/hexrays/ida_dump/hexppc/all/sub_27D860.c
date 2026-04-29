__int64 __fastcall sub_27D860(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rax
  int v12; // ecx
  __int64 *v13; // rbp
  _QWORD *v14; // rax
  __int64 v15; // rbp
  __int64 *i; // rbx
  __int64 v17; // r13
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // r14
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // r15
  __int64 v24; // rax
  int v25; // ecx

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 > 0x1F )
  {
    if ( v2 == 57 )
    {
      v14 = *(_QWORD **)(a2 + 32);
      v15 = *v14 + 72LL * v14[1];
      if ( v15 != *v14 )
      {
        for ( i = (__int64 *)(*v14 + 64LL); ; i += 9 )
        {
          if ( *((_DWORD *)i - 14) == 61 )
          {
            v17 = *(i - 5);
            if ( (get_tinfo_property(*i, 2) & 0x3F) == 0x2D && !*(_BYTE *)(v17 + 13) )
            {
              v18 = -1;
              v19 = 8 * *(char *)(v17 + 15);
              if ( (unsigned __int64)v19 <= 0x3F )
                v18 = (1LL << v19) - 1;
              if ( (unsigned __int8)sub_23CAE0(v17 + 8, i, nullptr, *(_QWORD *)v17 & v18) )
              {
                copy_tinfo_t(i - 2, i);
                *(_BYTE *)(a1 + 88) = 1;
              }
            }
          }
          if ( (__int64 *)v15 == i + 1 )
            break;
        }
      }
    }
  }
  else if ( v2 > 0x15 || v2 == 2 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) == 61 )
    {
      v7 = sub_251340(*(_QWORD *)(a2 + 24));
      v8 = *(_QWORD *)(a2 + 32);
      v9 = v7;
      v10 = *(_QWORD *)(v8 + 24);
      if ( (get_tinfo_property(*(_QWORD *)(v7 + 48), 2) & 0x3F) == 0x2D && !*(_BYTE *)(v10 + 13) )
      {
        v11 = -1;
        v12 = 8 * *(char *)(v10 + 15);
        if ( (unsigned __int64)v12 <= 0x3F )
          v11 = (1LL << v12) - 1;
        v13 = (__int64 *)(v9 + 48);
        if ( (unsigned __int8)sub_23CAE0(v10 + 8, v13, nullptr, *(_QWORD *)v10 & v11) )
        {
          copy_tinfo_t(v8 + 48, v13);
          *(_BYTE *)(a1 + 88) = 1;
        }
      }
    }
  }
  else if ( v2 == 16 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    if ( *(int *)(v3 + 8) <= 69 )
    {
      v4 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v4 + 8) == 61 )
      {
        v23 = *(_QWORD *)(v4 + 24);
        if ( (get_tinfo_property(*(_QWORD *)(v3 + 48), 2) & 0x3F) == 0x2D && !*(_BYTE *)(v23 + 13) )
        {
          v24 = -1;
          v25 = 8 * *(char *)(v23 + 15);
          if ( (unsigned __int64)v25 <= 0x3F )
            v24 = (1LL << v25) - 1;
          if ( (unsigned __int8)sub_23CAE0(v23 + 8, (__int64 *)(v3 + 48), nullptr, *(_QWORD *)v23 & v24) )
          {
            copy_tinfo_t(v4 + 48, v3 + 48);
            *(_BYTE *)(a1 + 88) = 1;
          }
        }
      }
      v5 = *(_QWORD *)(a2 + 40);
      if ( *(_DWORD *)(v5 + 8) == 61 )
      {
        v20 = *(_QWORD *)(v5 + 24);
        if ( (get_tinfo_property(*(_QWORD *)(v3 + 48), 2) & 0x3F) == 0x2D && !*(_BYTE *)(v20 + 13) )
        {
          v21 = -1;
          v22 = 8 * *(char *)(v20 + 15);
          if ( (unsigned __int64)v22 <= 0x3F )
            v21 = (1LL << v22) - 1;
          if ( (unsigned __int8)sub_23CAE0(v20 + 8, (__int64 *)(v3 + 48), nullptr, *(_QWORD *)v20 & v21) )
          {
            copy_tinfo_t(v5 + 48, v3 + 48);
            *(_BYTE *)(a1 + 88) = 1;
          }
        }
      }
    }
  }
  return 0;
}
