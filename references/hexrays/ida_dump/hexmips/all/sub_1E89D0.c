__int64 __fastcall sub_1E89D0(_QWORD *a1)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  const char *v12; // rsi
  __int64 v13; // r14
  const char *v14; // [rsp+10h] [rbp-40h] BYREF
  __int128 v15; // [rsp+18h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  v2 = a1[4];
  if ( (*(_BYTE *)(v2 + 4) & 0x10) == 0 )
  {
    v3 = *(_DWORD *)v2;
    if ( (unsigned int)(*(_DWORD *)v2 - 43) <= 1 )
    {
      v13 = sub_1186A0(v2, &v14);
      if ( v13 && sub_1E8970((__int64)v14) && (unsigned __int8)sub_1510F0(v13, a1[5]) )
        *(_DWORD *)(a1[4] + 4LL) |= 0x10u;
    }
    else
    {
      if ( ((v3 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( v3 != 1 )
          return 0;
        v4 = v2 + 32;
      }
      else
      {
        v4 = v2 + 64;
      }
      if ( sub_1E8970(v4) )
      {
        v5 = a1[4];
        if ( *(_DWORD *)v5 == 4 && *(_BYTE *)(v5 + 32) == 2 )
        {
          if ( (unsigned __int8)sub_1510F0(v5 + 32, a1[5]) )
            *(_DWORD *)(a1[4] + 4LL) |= 0x10u;
        }
        else
        {
          *(_DWORD *)(v5 + 4) |= 0x10u;
        }
        v6 = a1[4];
        if ( *(_DWORD *)v6 == 4 )
        {
          v8 = *(unsigned int *)(v6 + 36);
          if ( (int)v8 > 7 && *(_BYTE *)(v6 + 32) == 4 )
          {
            v9 = *(_QWORD *)(v6 + 40);
            v10 = v9;
            if ( *(_DWORD *)v9 == 56 && *(_BYTE *)(v9 + 64) == 8 )
            {
              v11 = *(_QWORD *)(v9 + 72);
              if ( *(_DWORD *)(v11 + 284) == 23 )
              {
                if ( *(_BYTE *)(*(_QWORD *)(v11 + 24) + 80LL) != 11 )
                {
                  if ( !under_debugger )
                    sub_37E160(52427);
                  BUG();
                }
                sub_327220(&v14, a1[5], v8);
                copy_tinfo_t(*(_QWORD *)(v10 + 72) + 72LL, &v14);
                clear_tinfo_t(&v14);
                v14 = nullptr;
                v15 = 0;
                print_tinfo(&v14, 0, 0, 0, 0, *(_QWORD *)(v10 + 72) + 72LL, 0, 0);
                v12 = s1;
                if ( (_QWORD)v15 )
                  v12 = v14;
                sub_1192A0(*(_QWORD *)(*(_QWORD *)(v10 + 72) + 24LL) + 80LL, (__int64)v12);
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 72) + 24LL) + 84LL) = *(_DWORD *)(*(_QWORD *)(a1[1] + 1504LL)
                                                                                          + 84LL);
                if ( v14 )
                {
                  *(_QWORD *)&v15 = 0;
                  qfree(v14);
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
