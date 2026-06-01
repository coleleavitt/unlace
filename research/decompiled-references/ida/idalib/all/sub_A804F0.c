__int64 __fastcall sub_A804F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // r14
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // [rsp+8h] [rbp-60h]
  __int64 *v22; // [rsp+18h] [rbp-50h]

  v5 = sub_A5E9B0(a2, a2, a3, a4, a5);
  v22 = v6;
  if ( (__int64 *)v5 == v6 )
    return 1;
  v20 = (__int64 *)v5;
  while ( 1 )
  {
    v10 = *v20;
    v11 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 35 > 1 )
    {
      v18 = sub_F63050(v11, a2, v6, v7);
      v19 = *(_BYTE *)(v18 + 19) >> 2;
      v6 = (__int64 *)(v19 + ((*(_WORD *)(v18 + 18) >> 3) & 0x7F));
      v13 = v18 + 8LL * (_QWORD)v6 + 48;
      v11 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 35 > 1 )
        v11 = sub_F63050(v11, a2, v6, v19);
      v12 = (*(_WORD *)(v11 + 18) >> 3) & 0x7F;
    }
    else
    {
      v12 = (*(_WORD *)(v11 + 18) >> 3) & 0x7F;
      v6 = (__int64 *)(v12 + (*(_BYTE *)(v11 + 19) >> 2));
      v13 = v11 + 8LL * (_QWORD)v6 + 48;
    }
    v7 = v11 + 8 * v12 + 48;
    if ( v13 == v7 )
      break;
    v14 = (__int64 *)(v11 + 8 * v12 + 48);
    while ( 1 )
    {
      v15 = *v14;
      if ( *v14 )
      {
        if ( v10 )
        {
          if ( v10 == v15 )
            break;
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
          if ( v16 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15) )
            break;
        }
      }
      a2 = v10;
      if ( (unsigned __int8)sub_A7F1A0(a1, v10, v15, v7, v8, v9) )
        break;
      if ( (__int64 *)v13 == ++v14 )
        return 0;
    }
    if ( v22 == ++v20 )
      return 1;
  }
  return 0;
}
