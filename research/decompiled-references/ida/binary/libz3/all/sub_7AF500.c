void __fastcall sub_7AF500(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 i; // r13
  __int64 v5; // rax
  unsigned int v6; // r15d
  __int64 (__fastcall *v7)(); // rdx
  __int64 (__fastcall *v8)(); // rdx
  __int64 v9; // rdx
  __int64 v10; // r12
  unsigned int v11; // edi
  __int64 (__fastcall *v12)(); // rax
  __int64 v13; // rdx
  int v14; // eax
  _BYTE *v15; // r12
  int v16; // eax

  v2 = *a2;
  if ( *a2 )
  {
    for ( i = v2 + 8LL * *(unsigned int *)(v2 - 4); i != v2; v2 += 8 )
    {
      v5 = *a1;
      v6 = *(_DWORD *)(v2 + 4);
      v7 = *(__int64 (__fastcall **)())(*a1 + 544);
      if ( v7 != sub_7C5AC0 )
      {
        if ( ((unsigned __int8 (__fastcall *)(__int64 *, _QWORD))v7)(a1, v6) )
          goto LABEL_17;
        continue;
      }
      v8 = *(__int64 (__fastcall **)())(v5 + 536);
      if ( v8 == sub_7C55E0 )
      {
        v9 = a1[20];
        if ( v9 )
        {
          v10 = v6 >> 1;
          v11 = *(_DWORD *)(*(_QWORD *)(v9 + 880) + 4 * v10);
          if ( v11 >= *(_DWORD *)(v9 + 888) && (((unsigned __int8)v6 ^ (unsigned __int8)v11) & 1) != 0 )
          {
            v12 = *(__int64 (__fastcall **)())(v5 + 560);
            if ( v12 == sub_7C56E0 )
            {
              v13 = a1[3];
              v14 = 0;
LABEL_10:
              v15 = (_BYTE *)(*(_QWORD *)(v13 + 3312) + v10);
              if ( !*v15
                && *(_DWORD *)(v13 + 3848) >= *(_DWORD *)(*(_QWORD *)(v13 + 3840) + 4LL * (v6 & 0xFFFFFFFE))
                && *((_DWORD *)a1 + 197) == v14 )
              {
                *v15 = 1;
                ++*((_DWORD *)a1 + 196);
              }
              continue;
            }
LABEL_24:
            v14 = ((__int64 (__fastcall *)(__int64 *))v12)(a1);
            v13 = a1[3];
            goto LABEL_10;
          }
          continue;
        }
        v16 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288) + 4LL * v6);
      }
      else
      {
        v16 = ((__int64 (__fastcall *)(__int64 *, _QWORD))v8)(a1, v6);
      }
      if ( v16 == -1 )
      {
LABEL_17:
        v12 = *(__int64 (__fastcall **)())(*a1 + 560);
        v10 = v6 >> 1;
        if ( v12 == sub_7C56E0 )
        {
          v14 = 0;
          v13 = a1[3];
          if ( !a1[20] )
            v14 = *(_DWORD *)(*(_QWORD *)(v13 + 3296) + 24 * v10);
          goto LABEL_10;
        }
        goto LABEL_24;
      }
    }
  }
}

