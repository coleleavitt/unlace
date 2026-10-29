__int64 __fastcall sub_E5EEE0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v13; // [rsp+8h] [rbp-30h]

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  v13 = nullptr;
  v12 = v4;
  sub_E5ED50(a1, (__int64)&v12);
  v5 = sub_16615C0(a2, &v12, a3);
  v6 = v13;
  v7 = v5;
  if ( v13 )
  {
    v8 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
    if ( (unsigned __int64)v13 >= v8 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v9 = *v6;
        if ( *v6 )
        {
          if ( (*(_DWORD *)(v9 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v6 >= v8 )
          goto LABEL_8;
      }
      sub_15D7BC0(v12, v9);
      ++v6;
    }
    while ( (unsigned __int64)v6 < v8 );
LABEL_8:
    v6 = v13;
    if ( v13 )
LABEL_9:
      sub_186B220(v6 - 1);
  }
  return v7;
}

