char __fastcall sub_7B3210(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *i; // r14
  __int64 v8; // rbp
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  unsigned int v11; // esi
  unsigned int j; // r15d
  __int64 v13; // rsi
  unsigned int v14; // eax
  int v16; // [rsp+Ch] [rbp-3Ch]

  v4 = *(_QWORD *)(a1 + 936);
  v5 = *(_QWORD **)(v4 + 8LL * a3);
  if ( v5 )
  {
    v4 = *((unsigned int *)v5 - 1);
    for ( i = &v5[v4]; i != v5; ++v5 )
    {
      v8 = *v5;
      if ( a2 != *v5 && !*(_BYTE *)(v8 + 12) && *(_DWORD *)(v8 + 16) == -2 )
      {
        LODWORD(v4) = *(_DWORD *)(v8 + 8);
        if ( (_DWORD)v4 )
        {
          if ( (_DWORD)v4 == 1 )
          {
            v9 = (_DWORD *)sub_81AF20(*v5);
            LOBYTE(v4) = sub_7AC2C0(a1, a2, v9);
            if ( (_BYTE)v4 )
            {
LABEL_12:
              v11 = *(_DWORD *)(a2 + 16);
              ++*(_DWORD *)(a1 + 196);
              if ( v11 != -2 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24), v11 >> 1);
              v16 = *(_DWORD *)(a2 + 32);
              if ( v16 )
              {
                for ( j = 0; j != v16; ++j )
                {
                  v13 = j;
                  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 88LL))(a2, v13);
                  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(
                    *(_QWORD *)(a1 + 24),
                    v14 >> 1);
                }
              }
              *(_BYTE *)(a2 + 48) = 0;
              LOBYTE(v4) = sub_7AFFA0(a1, (_BYTE *)v8, "subsumed", a4);
            }
          }
        }
        else
        {
          v10 = (_DWORD *)sub_828140(*v5);
          LOBYTE(v4) = sub_7AC3F0(a1, a2, v10);
          if ( (_BYTE)v4 )
            goto LABEL_12;
        }
      }
    }
  }
  return v4;
}

