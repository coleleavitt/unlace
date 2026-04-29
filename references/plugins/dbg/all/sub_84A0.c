__int64 __fastcall sub_84A0(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  unsigned int *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int16 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 result; // rax
  __int64 v15; // rbp
  unsigned __int16 *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int16 v18; // r13
  unsigned __int16 v19; // r12
  unsigned __int16 *v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int16 v22; // r13
  unsigned __int16 v23; // r12

  v7 = a2;
  v8 = *(unsigned int **)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 24);
  if ( a3 )
  {
    v10 = (unsigned __int16 *)(v8 + 1);
    if ( v9 < (unsigned __int64)(v8 + 1) )
      goto LABEL_35;
    v11 = *v8;
  }
  else
  {
    v10 = (unsigned __int16 *)v8 + 1;
    if ( v9 < (unsigned __int64)v8 + 2 )
      goto LABEL_35;
    v11 = *(unsigned __int16 *)v8;
  }
  *(_QWORD *)(a2 + 16) = v10;
  if ( v9 < (unsigned __int64)(v10 + 1)
    || (a2 = *v10, *(_QWORD *)(v7 + 16) = v10 + 1, v12 = (__int64)(v10 + 2), v9 < (unsigned __int64)(v10 + 2)) )
  {
LABEL_35:
    sub_3660(a1, a2);
  }
  v13 = v10[1];
  *(_QWORD *)(v7 + 16) = v12;
  result = sub_81F0(a1, a2, v11, v12, v11, a6);
  v15 = result;
  if ( result != -1 )
  {
    switch ( v13 )
    {
      case 0LL:
        return sub_49D0(result, (__int64)"Not executable code (e.g., a table)");
      case 1LL:
        return sub_49D0(result, (__int64)"Compiler generated jump table");
      case 2LL:
        return sub_49D0(result, (__int64)"Padding for data");
      case 3LL:
      case 4LL:
      case 5LL:
      case 6LL:
      case 7LL:
      case 8LL:
      case 9LL:
      case 10LL:
      case 11LL:
      case 12LL:
      case 13LL:
      case 14LL:
      case 15LL:
      case 16LL:
      case 17LL:
      case 18LL:
      case 19LL:
      case 20LL:
      case 21LL:
      case 22LL:
      case 23LL:
      case 24LL:
      case 25LL:
      case 26LL:
      case 27LL:
      case 28LL:
      case 29LL:
      case 30LL:
      case 31LL:
        return result;
      case 32LL:
        return sub_49D0(result, (__int64)"Native model (no processor specified)");
      case 33LL:
        v16 = *(unsigned __int16 **)(v7 + 16);
        v17 = *(_QWORD *)(v7 + 24);
        if ( v17 < (unsigned __int64)(v16 + 1) )
          goto LABEL_35;
        v18 = *v16;
        *(_QWORD *)(v7 + 16) = v16 + 1;
        if ( v17 < (unsigned __int64)(v16 + 2) )
          goto LABEL_35;
        v19 = v16[1];
        *(_QWORD *)(v7 + 16) = v16 + 2;
        sub_49D0(v15, (__int64)"Microfocus COBOL");
        sub_49D0(v15, (__int64)"Subtype: (%04X) ", v18);
        if ( v18 == 2 )
        {
          sub_49D0(v15, (__int64)" False call - continue tracing");
        }
        else if ( v18 > 2u )
        {
          if ( v18 == 3 )
            sub_49D0(v15, (__int64)" External call");
          else
            sub_49D0(v15, (__int64)" Unknown");
        }
        else if ( v18 )
        {
          sub_49D0(v15, (__int64)" pfm");
        }
        else
        {
          sub_49D0(v15, (__int64)" Do not stop execution until next model record");
        }
        return sub_49D0(v15, (__int64)"Flags  : %04X", v19);
      case 34LL:
        return sub_49D0(result, (__int64)"Code padding for alignment");
      case 35LL:
        return sub_49D0(result, (__int64)"Code");
      default:
        if ( (_WORD)v13 != 64 )
          return result;
        v20 = *(unsigned __int16 **)(v7 + 16);
        v21 = *(_QWORD *)(v7 + 24);
        if ( v21 < (unsigned __int64)(v20 + 1) )
          goto LABEL_35;
        v22 = *v20;
        *(_QWORD *)(v7 + 16) = v20 + 1;
        if ( v21 < (unsigned __int64)(v20 + 2) )
          goto LABEL_35;
        v23 = v20[1];
        *(_QWORD *)(v7 + 16) = v20 + 2;
        sub_49D0(v15, (__int64)"PCODE:");
        sub_49D0(v15, (__int64)"Offset of pcode proc function header: %04X", v22);
        result = sub_49D0(v15, (__int64)"Offset of pcode segment's SPI       : %04X", v23);
        break;
    }
  }
  return result;
}
