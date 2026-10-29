/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F320
// Address: 0x0003F320

//----- (0003F320) --------------------------------------------------------
int __userpurge sub_3F320@<eax>(int a1, int a2, unsigned __int64 a3)
{
  char *v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  char *v7; // ecx
  char v9; // [esp+7h] [ebp-15h] BYREF
  unsigned int v10; // [esp+8h] [ebp-14h]

  v10 = __readgsdword(0x14u);
  v3 = (char *)sub_3F5C0(a2, a3);
  sub_1B530(a1, v3);
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 > 1 )
  {
    v5 = v4 - 1;
    if ( v5 <= 0xB )
    {
      v9 = 32;
      *(_BYTE *)(*(_DWORD *)a1 + v5) = 32;
      sub_44400((char **)a1, 0xDu, &v9);
      *(_BYTE *)(*(_DWORD *)a1 + 12) = 0;
    }
    LOWORD(v6) = *(_WORD *)(a2 + 402);
    if ( a3 <= 0x1D )
    {
      v7 = "end of _DYNAMIC array";
      switch ( (int)a3 )
      {
        case 0:
          goto LABEL_44;
        case 1:
          v7 = "str-table offset name to needed library";
          break;
        case 2:
          v7 = "tot.size in bytes of relocation entries";
          break;
        case 3:
          v6 = (unsigned __int16)v6;
          if ( (unsigned __int16)v6 != 20 )
            goto LABEL_27;
          v7 = "addr of PLT";
          break;
        case 4:
          v7 = "addr. of symbol hash table";
          break;
        case 5:
          v7 = "addr of string table";
          break;
        case 6:
          v7 = "addr of symbol table";
          break;
        case 7:
        case 17:
          v7 = "addr of relocation table";
          break;
        case 8:
          v7 = "size in bytes of DT_RELA table";
          break;
        case 9:
          v7 = "size in bytes of DT_RELA entry";
          break;
        case 10:
          v7 = "size in bytes of string table";
          break;
        case 11:
          v7 = "size in bytes of symbol table entry";
          break;
        case 12:
          v7 = "addr. of initialization function";
          break;
        case 13:
          v7 = "addr. of termination function";
          break;
        case 14:
          v7 = "offs in str.-table - name of shared object";
          break;
        case 15:
          v7 = "offs in str-table - search path";
          break;
        case 16:
          v7 = "start search of shared object";
          break;
        case 18:
          v7 = "tot.size in bytes of DT_REL";
          break;
        case 19:
          v7 = "size in bytes of DT_REL entry";
          break;
        case 20:
          v7 = "type of relocation (DT_REL or DT_RELA)";
          break;
        case 21:
          v7 = "not specified";
          break;
        case 22:
          v7 = "segment permisson";
          break;
        case 23:
          v7 = "addr of dlt procedure (if present)";
          if ( (unsigned __int16)v6 == 20 )
            v7 = "addr of JMP_SLOT relocation table";
          break;
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
          goto LABEL_11;
        case 29:
          v7 = "array of search pathes";
          break;
      }
      goto LABEL_44;
    }
    if ( a3 == 1879048192 )
    {
      v6 = (unsigned __int16)v6;
      if ( (unsigned __int16)v6 == 20 )
      {
        v7 = "addr of _GLOBAL_OFFSET_TABLE_";
LABEL_44:
        sub_312D0((_DWORD *)a1, v7);
        return a1;
      }
LABEL_27:
      if ( v6 == 40 || v6 == 183 )
      {
LABEL_29:
        v7 = nullptr;
        if ( a3 - 1610612751 < 4 )
          v7 = *(&off_137994[(_DWORD)a3] - 1610612751);
        goto LABEL_44;
      }
    }
    else
    {
LABEL_11:
      if ( (unsigned __int16)v6 == 183 || (unsigned __int16)v6 == 40 )
        goto LABEL_29;
    }
    v7 = nullptr;
    goto LABEL_44;
  }
  sub_1F400(a1, "DT_????     Unknown (%08llX)", a3);
  return a1;
}
// 137994: using guessed type char *off_137994[4];
