char __fastcall sub_82BA30(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  char result; // al
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+0h] [rbp-48h]
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v11 = 0;
  v10 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) <= 1u )
  {
    while ( 1 )
    {
      v6 = sub_8EF130(*(_QWORD *)(a1 + 24));
      if ( (unsigned int)sub_8DFCA0(v6) )
        break;
      v5 = *(_QWORD *)(a1 + 48);
      if ( v5 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, unsigned __int64))(**(_QWORD **)(a1 + 16) + 16LL))(
                *(_QWORD *)(a1 + 16),
                *(_QWORD *)(a1 + 32),
                v5,
                v7,
                v8,
                v9,
                v10,
                v11,
                *((_QWORD *)&v11 + 1),
                v12) )
          goto LABEL_2;
        *(_QWORD *)(a1 + 48) = 0;
      }
      if ( !v6 )
        goto LABEL_2;
    }
    sub_82B970(a1, v6);
  }
LABEL_2:
  v2 = sub_8ECCD0(*(void **)(a1 + 24));
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) <= 1u && (unsigned int)sub_8DFCA0(v2) )
    sub_82B970(a1, v2);
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = 0;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  if ( result )
    return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) <= 1u;
  return result;
}

