__int64 __fastcall sub_723360(_BYTE *a1)
{
  _BYTE *v1; // rbx
  __int64 v2; // rax
  _BYTE *v4; // r14
  __int64 v5; // r13
  unsigned int v6; // r12d
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rcx
  bool v10; // zf
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  _QWORD *i; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+10h] [rbp-38h]

  v1 = a1;
  if ( a1 )
  {
    while ( (a1[29] & 1) == 0 )
    {
      v2 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 40LL))(a1);
      a1 = (_BYTE *)v2;
      if ( v1 == (_BYTE *)v2 || !v2 )
        return v18;
    }
    v4 = v1;
    v5 = 0;
    v6 = 0;
    do
    {
      if ( (v4[29] & 1) != 0 )
      {
        v7 = sub_79A2B0(v4);
        v8 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
        if ( (v4[29] & 1) != 0 )
          v9 = *(_QWORD **)sub_79A2B0(v4);
        else
          v9 = nullptr;
        v10 = v9 == (_QWORD *)v8;
        if ( (unsigned __int64)v9 >= v8 )
        {
          while ( !v10 )
          {
            v16 = (_QWORD *)v8;
            while ( 1 )
            {
              v13 = (unsigned __int64)v16;
              if ( *(_WORD *)(*v16 + 32LL) == 287 )
                break;
              if ( v9 == ++v16 )
                goto LABEL_26;
            }
            v12 = v9;
LABEL_15:
            if ( v12 == (_QWORD *)v13 )
              break;
            v14 = *v9;
            for ( i = v9 + 1; *(_WORD *)(v14 + 32) != 287; ++i )
            {
              v14 = *i;
              v9 = i;
            }
            if ( *(_DWORD *)(v14 + 60) >= v6 )
            {
              v5 = v14;
              v6 = *(_DWORD *)(v14 + 60);
            }
            v10 = ++v9 == (_QWORD *)v8;
            if ( (unsigned __int64)v9 < v8 )
              goto LABEL_11;
          }
        }
        else
        {
LABEL_11:
          v11 = v9;
          do
          {
            v12 = v11;
            if ( *(_WORD *)(*v11 + 32LL) == 287 )
            {
              v13 = v8;
              goto LABEL_15;
            }
            ++v11;
          }
          while ( (_QWORD *)v8 != v11 );
        }
      }
LABEL_26:
      v17 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 40LL))(v4);
      v4 = (_BYTE *)v17;
    }
    while ( v1 != (_BYTE *)v17 && v17 );
    if ( v5 )
      return v5;
  }
  return v18;
}

