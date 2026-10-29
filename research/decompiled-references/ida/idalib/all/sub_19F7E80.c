_BOOL8 __fastcall sub_19F7E80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 i; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rdi
  unsigned int v14; // r12d
  bool v15; // al
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  v4 = sub_F63050(a1, a2, a3, a4);
  for ( i = v4; (unsigned int)*(unsigned __int8 *)(i + 16) - 2 <= 1; i = sub_F649E0(i) )
    ;
  if ( sub_F63500(i, a2) )
    return 1;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_BYTE *)(v9 + 16);
  if ( v10 != 48 )
  {
    v11 = (unsigned int)v10 - 2;
    if ( (unsigned int)v11 <= 1 )
    {
      v12 = v4;
      while ( 1 )
      {
        v13 = *(_QWORD *)(v12 + 40);
        if ( (*(_BYTE *)(v12 + 19) & 2) != 0 )
        {
          v14 = *(_DWORD *)(v13 + 8);
          v15 = v14 <= 0x40 ? *(_QWORD *)v13 == 0 : v14 == (unsigned int)sub_2206780(v13);
        }
        else
        {
          v15 = v13 == 0;
        }
        if ( v15 )
          return 1;
        v12 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v9);
        if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 2 > 1 )
        {
          v9 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          v10 = *(_BYTE *)(v9 + 16);
          break;
        }
      }
    }
    return v10 == 13 && ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) == 0x1B2 || *(_BYTE *)(v4 + 16) == 27;
  }
  v17 = sub_F63270(v4, a2, v6, v9, v7, v8);
  sub_7052B0((__int64 *)(v17[13] + 96LL), v17[13], v18, v19, v20, v21);
  return (*(_BYTE *)(v17[16] + 1LL) & 2) != 0;
}
