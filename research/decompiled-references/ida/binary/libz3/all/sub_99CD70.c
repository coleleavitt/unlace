void __fastcall sub_99CD70(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  void *v10; // rdi
  bool v11; // al
  _BOOL8 v12; // rcx
  __int64 v13; // rdi
  _BOOL8 v14; // rcx
  __int64 v15; // rdi

  v3 = *a2;
  if ( *a2 )
  {
    v6 = v3 + 40LL * *(unsigned int *)(v3 - 4);
    while ( v6 != v3 )
    {
      v7 = *(unsigned int *)(v3 + 32);
      if ( (_DWORD)v7 != -1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * v7);
        if ( v8 )
        {
          v9 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v7);
          if ( v9 )
          {
            v10 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v8 + 20) & 1) != 0 || (*(_BYTE *)(v9 + 20) & 1) != 0 )
            {
              v10 = qword_1C7F2C0;
              if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v8 + 16, v9 + 16) )
              {
LABEL_12:
                if ( (*(_BYTE *)(v8 + 36) & 1) != 0 || (*(_BYTE *)(v9 + 36) & 1) != 0 )
                  v11 = (unsigned int)sub_182C7B0(v10, v8 + 32, v9 + 32) == 0;
                else
                  v11 = *(_DWORD *)(v8 + 32) == *(_DWORD *)(v9 + 32);
                if ( v11 )
                {
                  v12 = 1;
                  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
                    v12 = *(_DWORD *)(a1 + 1440) != 0x7FFFFFFF;
                  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * *(unsigned int *)(v3 + 32));
                  (*(void (__fastcall **)(__int64, __int64, __int64, _BOOL8))(*(_QWORD *)v13 + 24LL))(v13, a3, v3, v12);
                  v14 = 1;
                  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
                    v14 = *(_DWORD *)(a1 + 1440) != 0x7FFFFFFF;
                  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * *(unsigned int *)(v3 + 32));
                  (*(void (__fastcall **)(__int64, __int64, __int64, _BOOL8))(*(_QWORD *)v15 + 24LL))(v15, a3, v3, v14);
                }
              }
            }
            else if ( *(_DWORD *)(v8 + 16) == *(_DWORD *)(v9 + 16) )
            {
              goto LABEL_12;
            }
          }
        }
      }
      v3 += 40;
    }
  }
}

