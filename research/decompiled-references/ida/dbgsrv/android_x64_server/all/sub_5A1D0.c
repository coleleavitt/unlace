/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A1D0
// Address: 0x000000000005A1D0

//----- (000000000005A1D0) ----------------------------------------------------
_QWORD *__fastcall sub_5A1D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  const char *v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // eax
  const char *v9; // rsi
  unsigned __int64 v10; // r15
  char v12; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v5 = sub_5A460(a2, a3);
  sub_37F60((__int64)a1, v5);
  v6 = a1[1];
  if ( v6 > 1 )
  {
    v7 = v6 - 1;
    if ( v7 <= 0xB )
    {
      v12 = 32;
      *(_BYTE *)(*a1 + v7) = 32;
      sub_5F0D0((__int64)a1, 0xDu, &v12);
      *(_BYTE *)(*a1 + 12LL) = 0;
    }
    LOWORD(v8) = *(_WORD *)(a2 + 522);
    v9 = "end of _DYNAMIC array";
    switch ( a3 )
    {
      case 0LL:
        goto LABEL_43;
      case 1LL:
        v9 = "str-table offset name to needed library";
        goto LABEL_43;
      case 2LL:
        v9 = "tot.size in bytes of relocation entries";
        goto LABEL_43;
      case 3LL:
        v8 = (unsigned __int16)v8;
        if ( (unsigned __int16)v8 != 20 )
          goto LABEL_26;
        v9 = "addr of PLT";
        goto LABEL_43;
      case 4LL:
        v9 = "addr. of symbol hash table";
        goto LABEL_43;
      case 5LL:
        v9 = "addr of string table";
        goto LABEL_43;
      case 6LL:
        v9 = "addr of symbol table";
        goto LABEL_43;
      case 7LL:
      case 17LL:
        v9 = "addr of relocation table";
        goto LABEL_43;
      case 8LL:
        v9 = "size in bytes of DT_RELA table";
        goto LABEL_43;
      case 9LL:
        v9 = "size in bytes of DT_RELA entry";
        goto LABEL_43;
      case 10LL:
        v9 = "size in bytes of string table";
        goto LABEL_43;
      case 11LL:
        v9 = "size in bytes of symbol table entry";
        goto LABEL_43;
      case 12LL:
        v9 = "addr. of initialization function";
        goto LABEL_43;
      case 13LL:
        v9 = "addr. of termination function";
        goto LABEL_43;
      case 14LL:
        v9 = "offs in str.-table - name of shared object";
        goto LABEL_43;
      case 15LL:
        v9 = "offs in str-table - search path";
        goto LABEL_43;
      case 16LL:
        v9 = "start search of shared object";
        goto LABEL_43;
      case 18LL:
        v9 = "tot.size in bytes of DT_REL";
        goto LABEL_43;
      case 19LL:
        v9 = "size in bytes of DT_REL entry";
        goto LABEL_43;
      case 20LL:
        v9 = "type of relocation (DT_REL or DT_RELA)";
        goto LABEL_43;
      case 21LL:
        v9 = "not specified";
        goto LABEL_43;
      case 22LL:
        v9 = "segment permisson";
        goto LABEL_43;
      case 23LL:
        v9 = "addr of dlt procedure (if present)";
        if ( (unsigned __int16)v8 == 20 )
          v9 = "addr of JMP_SLOT relocation table";
        goto LABEL_43;
      case 24LL:
      case 25LL:
      case 26LL:
      case 27LL:
      case 28LL:
        goto LABEL_10;
      case 29LL:
        v9 = "array of search pathes";
        goto LABEL_43;
      default:
        if ( a3 == 1879048192 )
        {
          v8 = (unsigned __int16)v8;
          if ( (unsigned __int16)v8 == 20 )
          {
            v9 = "addr of _GLOBAL_OFFSET_TABLE_";
            goto LABEL_43;
          }
LABEL_26:
          if ( v8 != 40 && v8 != 183 )
            goto LABEL_30;
        }
        else
        {
LABEL_10:
          if ( (unsigned __int16)v8 != 183 && (unsigned __int16)v8 != 40 )
            goto LABEL_30;
        }
        v10 = a3 - 1610612751;
        if ( v10 < 4 )
        {
          v9 = off_14D2E0[v10];
          goto LABEL_43;
        }
LABEL_30:
        v9 = nullptr;
LABEL_43:
        sub_4DFA0((__int64)a1, v9);
        break;
    }
  }
  else
  {
    sub_3BBA0((__int64)a1, "DT_????     Unknown (%08llX)", a3);
  }
  return a1;
}
// 14D2E0: using guessed type char *off_14D2E0[35];
