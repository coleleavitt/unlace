_DWORD *__fastcall sub_B9880(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  _DWORD *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx

  if ( a2 != -1 )
  {
    v3 = a1[13];
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      v5 = v4 + 8LL * *(_QWORD *)(v3 + 16);
      if ( v4 != v5 )
      {
        while ( 1 )
        {
          v6 = *(_DWORD **)v4;
          if ( a2 == *(_DWORD *)(*(_QWORD *)v4 + 12LL) )
            break;
          if ( v6[2] == 1 )
          {
            v6 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v6 + 16LL))(v6, a2);
            if ( v6 )
              return v6;
          }
          v4 += 8;
          if ( v5 == v4 )
            goto LABEL_11;
        }
        if ( v6 )
          return v6;
      }
    }
  }
LABEL_11:
  v8 = a1[22];
  v9 = v8 + 8LL * a1[23];
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD **)v8;
      if ( a2 == *(_DWORD *)(*(_QWORD *)v8 + 12LL) )
        break;
      v8 += 8;
      if ( v9 == v8 )
        return nullptr;
    }
    return v6;
  }
  return nullptr;
}

