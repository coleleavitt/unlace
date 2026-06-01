_QWORD *__fastcall sub_ECEB60(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 i; // rdi
  __int64 (*v16)(void); // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  const __m128i *v24; // rbx
  _QWORD *v25; // rax

  while ( 2 )
  {
    LOBYTE(v4) = a3;
    switch ( (unsigned int)sub_E90000(a2) )
    {
      case 0u:
        a3 = v4;
        a2 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        continue;
      case 1u:
        v4 = (unsigned __int8)v4;
        v9 = sub_E90060(a2);
        v12 = v9;
        if ( !v9 )
          return nullptr;
        if ( (*(_BYTE *)(v9 + 57) & 0x20) == 0 )
          goto LABEL_13;
        while ( 1 )
        {
          v13 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
            v13 = *(_QWORD *)v13;
          if ( (*(_BYTE *)(v13 + 8) & 0x7F) != 0x18 )
            return nullptr;
          v12 = v13 - 48;
          if ( v13 == 48 )
            return nullptr;
          if ( (*(_BYTE *)(v13 + 9) & 0x20) == 0 )
            goto LABEL_13;
        }
      case 2u:
        v4 = (unsigned __int8)v4;
        for ( i = *(_QWORD *)(sub_E90090(a2) + 88); (*(_BYTE *)(i + 28) & 0x7F) == 0x4D; i = *(_QWORD *)(i + 88) )
          ;
        v16 = *(__int64 (**)(void))(*(_QWORD *)i + 32LL);
        if ( (char *)v16 == (char *)sub_A55CC0 )
          v12 = *(_QWORD *)(i + 88);
        else
          v12 = v16();
        if ( !v12 )
          return nullptr;
        if ( (*(_BYTE *)(v12 + 57) & 0x20) == 0 )
          goto LABEL_13;
        break;
      case 3u:
        if ( ((*(__int64 *)(a2 + 8) >> 1) & 3) != 2 )
          BUG();
        v18 = *(_QWORD *)(a2 + 16);
        v19 = v18;
        if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 47 <= 1
          || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 <= 1
          && (v19 = sub_F63050(v18, a2, v5, v6)) != 0 )
        {
          v23 = sub_F60F10(v19, a2, v5, v6, v7);
        }
        else
        {
          v23 = sub_F63270(v18);
        }
        if ( v23 )
        {
          v4 = (unsigned __int8)v4;
        }
        else
        {
          if ( *(_BYTE *)(v18 + 16) != 53 )
            return (_QWORD *)a2;
          v4 = (unsigned __int8)v4;
          v23 = *(_QWORD *)(v18 + 32);
        }
        v24 = *(const __m128i **)(v23 + 48);
        if ( (unsigned __int8)(v24[1].m128i_i8[0] - 48) <= 1u )
          v24 = sub_ECE210(a1, *(const __m128i **)(v23 + 48), v4, v20, v21);
        v25 = sub_ECE950(a1, v23, 1, v4, v21, v22);
        return sub_E91A00(a1, (__int64)v25, (__int64)v24);
      case 4u:
      case 5u:
        return (_QWORD *)a2;
    }
    break;
  }
  while ( 1 )
  {
    v17 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
      v17 = *(_QWORD *)v17;
    if ( (*(_BYTE *)(v17 + 8) & 0x7F) != 0x18 )
      break;
    v12 = v17 - 48;
    if ( v17 == 48 )
      break;
    if ( (*(_BYTE *)(v17 + 9) & 0x20) == 0 )
    {
LABEL_13:
      v14 = sub_ECE950(a1, v12, 1, v4, v10, v11);
      return sub_E91C40(a1, (__int64)v14, v12);
    }
  }
  return nullptr;
}
