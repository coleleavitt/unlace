__int64 __fastcall sub_1E7F60(__int64 *a1, __int64 a2, _OWORD *a3)
{
  __int64 *v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 result; // rax
  __int64 *v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r12
  __int128 v15; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  *((_QWORD *)&v15 + 1) = a2;
  *(_QWORD *)&v15 = 0;
  v4 = (__int64 *)sub_1E7840(a1, &v15);
  if ( !v4 )
  {
    v12 = (__int64 *)sub_1E7840(a1, a3);
    if ( v12 )
    {
      v13 = *v12;
      v14 = *v12 + 16 * v12[1];
      if ( *v12 != v14 )
      {
        do
        {
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 456LL))(a2, v13);
          if ( !(_BYTE)result )
            return result;
          v13 += 16;
        }
        while ( v14 != v13 );
      }
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 456LL))(a2) )
    {
      return 0;
    }
    return 1;
  }
  v5 = *v4;
  v6 = *v4 + 16 * v4[1];
  if ( v6 == *v4 )
    return 1;
  while ( 1 )
  {
    if ( !*(_BYTE *)v5 )
    {
      v7 = *(_QWORD *)(v5 + 8);
      v8 = (__int64 *)sub_1E7840(a1, a3);
      if ( !v8 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 456LL))(v7) )
          return 0;
        goto LABEL_12;
      }
      v9 = *v8;
      v10 = *v8 + 16 * v8[1];
      if ( *v8 != v10 )
        break;
    }
LABEL_12:
    v5 += 16;
    if ( v6 == v5 )
      return 1;
  }
  while ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 456LL))(v7, v9) )
  {
    v9 += 16;
    if ( v10 == v9 )
      goto LABEL_12;
  }
  return 0;
}
