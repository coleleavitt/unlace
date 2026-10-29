/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42CA78
// Address: 0x000000000042CA78

//----- (000000000042CA78) ----------------------------------------------------
__int64 __usercall sub_42CA78@<X0>(__int64 a1@<X0>, __int64 a2@<X1>, __int64 a3@<X8>)
{
  const char *v6; // x0
  _QWORD *v7; // x8
  const char *v8; // x22
  size_t v9; // x0
  size_t v10; // x25
  size_t v11; // x23
  void *v12; // x0
  unsigned __int64 v13; // x0
  unsigned __int64 v14; // x0
  int v15; // w0
  char *v16; // x2
  unsigned __int64 v17; // x2
  char *v18; // x0
  char *v21; // x0
  unsigned __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x21
  size_t v25; // x25
  _BYTE *v26; // x0
  unsigned __int64 v27; // x24
  size_t v28; // x23
  const char *v29; // x22
  char v30; // [xsp+47h] [xbp-9h] BYREF

  v6 = sub_4272E0(a1, a2);
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  if ( !v6
    || (v8 = v6,
        v9 = strlen(v6),
        v10 = v9 + 1,
        v11 = v9,
        v12 = sub_491288(a3, nullptr, v9 + 1, 1u),
        *(_QWORD *)a3 = v12,
        *(_QWORD *)(a3 + 8) = v10,
        memmove(v12, v8, v11),
        *(_BYTE *)(*(_QWORD *)a3 + v11) = 0,
        v13 = *(_QWORD *)(a3 + 8),
        v13 <= 1) )
  {
    sub_40CD68(a3, "DT_????     Unknown (%08llX)", a2);
    return a3;
  }
  v14 = v13 - 1;
  if ( v14 <= 0xB )
  {
    v16 = *(char **)a3;
    v30 = 32;
    v16[v14] = 32;
    v17 = *(_QWORD *)(a3 + 8);
    if ( v17 > 0xD )
    {
      v21 = *(char **)a3;
      *(_QWORD *)(a3 + 8) = 13;
      v21[12] = 0;
    }
    else
    {
      v18 = *(char **)a3;
      if ( v17 == 13 )
      {
        v18[12] = 0;
      }
      else
      {
        v22 = *(_QWORD *)(a3 + 16);
        if ( v18 <= &v30 && &v30 < &v18[v22] )
        {
          if ( v22 > 0xC
            || (v18 = (char *)sub_491288(a3, *(void **)a3, 0xDu, 1u),
                v17 = *(_QWORD *)(a3 + 8),
                *(_QWORD *)a3 = v18,
                v17 <= 0xC) )
          {
            do
            {
              v18[v17++] = 32;
              v18 = *(char **)a3;
            }
            while ( v17 != 13 );
          }
        }
        else if ( v22 > 0xC
               || (v18 = (char *)sub_491288(a3, *(void **)a3, 0xDu, 1u),
                   v17 = *(_QWORD *)(a3 + 8),
                   *(_QWORD *)a3 = v18,
                   v17 <= 0xC) )
        {
          do
          {
            v18[v17++] = 32;
            v18 = *(char **)a3;
          }
          while ( v17 != 13 );
        }
        *(_QWORD *)(a3 + 8) = 13;
        v18[12] = 0;
      }
    }
  }
  v15 = *(unsigned __int16 *)(a1 + 522);
  if ( a2 == 12 )
  {
    v28 = 32;
    v29 = "addr. of initialization function";
    goto LABEL_54;
  }
  if ( a2 <= 12 )
  {
    if ( a2 == 5 )
    {
      v28 = 20;
      v29 = "addr of string table";
      goto LABEL_54;
    }
    if ( a2 > 5 )
    {
      if ( a2 == 8 )
      {
        v28 = 30;
        v29 = "size in bytes of DT_RELA table";
      }
      else if ( a2 <= 8 )
      {
        if ( a2 == 6 )
        {
          v28 = 20;
          v29 = "addr of symbol table";
        }
        else
        {
          v28 = 24;
          v29 = "addr of relocation table";
        }
      }
      else if ( a2 == 10 )
      {
        v28 = 29;
        v29 = "size in bytes of string table";
      }
      else if ( a2 <= 10 )
      {
        v28 = 30;
        v29 = "size in bytes of DT_RELA entry";
      }
      else
      {
        v28 = 35;
        v29 = "size in bytes of symbol table entry";
      }
      goto LABEL_54;
    }
    if ( a2 == 2 )
    {
      v28 = 39;
      v29 = "tot.size in bytes of relocation entries";
      goto LABEL_54;
    }
    if ( a2 <= 2 )
    {
      if ( !a2 )
      {
        v28 = 21;
        v29 = "end of _DYNAMIC array";
        goto LABEL_54;
      }
      v28 = 39;
      v29 = "str-table offset name to needed library";
      if ( a2 == 1 )
        goto LABEL_54;
      goto LABEL_32;
    }
    if ( a2 == 3 )
    {
      if ( v15 != 20 )
        return a3;
      v28 = 11;
      v29 = "addr of PLT";
    }
    else
    {
      v28 = 26;
      v29 = "addr. of symbol hash table";
    }
LABEL_54:
    v23 = *(_QWORD *)(a3 + 8);
    if ( v23 )
    {
      v24 = v23 - 1;
      v25 = v28 + v23 - 1;
      v26 = *(_BYTE **)a3;
      v27 = v25 + 1;
      if ( v25 + 1 <= *(_QWORD *)(a3 + 16) )
      {
LABEL_56:
        *(_QWORD *)(a3 + 8) = v27;
        v26[v25] = 0;
        memcpy((void *)(*(_QWORD *)a3 + v24), v29, v28);
        return a3;
      }
    }
    else
    {
      v25 = v28;
      v27 = v28 + 1;
      v24 = 0;
      v26 = *(_BYTE **)a3;
      if ( v28 + 1 <= *(_QWORD *)(a3 + 16) )
        goto LABEL_56;
    }
    v26 = sub_491288(a3, v26, v27, 1u);
    *(_QWORD *)a3 = v26;
    goto LABEL_56;
  }
  if ( a2 == 19 )
  {
    v28 = 29;
    v29 = "size in bytes of DT_REL entry";
    goto LABEL_54;
  }
  if ( a2 <= 19 )
  {
    if ( a2 == 15 )
    {
      v28 = 31;
      v29 = "offs in str-table - search path";
    }
    else if ( a2 <= 15 )
    {
      if ( a2 == 13 )
      {
        v28 = 29;
        v29 = "addr. of termination function";
      }
      else
      {
        v28 = 42;
        v29 = "offs in str.-table - name of shared object";
      }
    }
    else if ( a2 == 17 )
    {
      v28 = 24;
      v29 = "addr of relocation table";
    }
    else if ( a2 <= 17 )
    {
      v28 = 29;
      v29 = "start search of shared object";
    }
    else
    {
      v28 = 27;
      v29 = "tot.size in bytes of DT_REL";
    }
    goto LABEL_54;
  }
  if ( a2 == 22 )
  {
    v28 = 17;
    v29 = "segment permisson";
    goto LABEL_54;
  }
  if ( a2 <= 22 )
  {
    if ( a2 == 20 )
    {
      v28 = 38;
      v29 = "type of relocation (DT_REL or DT_RELA)";
    }
    else
    {
      v28 = 13;
      v29 = "not specified";
    }
    goto LABEL_54;
  }
  switch ( a2 )
  {
    case 29LL:
      v28 = 22;
      v29 = "array of search pathes";
      goto LABEL_54;
    case 1879048192LL:
      if ( v15 != 20 )
        return a3;
      v29 = "addr of _GLOBAL_OFFSET_TABLE_";
      v28 = 29;
      goto LABEL_54;
    case 23LL:
      if ( v15 == 20 )
      {
        v28 = 33;
        v29 = "addr of JMP_SLOT relocation table";
      }
      else
      {
        v28 = 34;
        v29 = "addr of dlt procedure (if present)";
      }
      goto LABEL_54;
  }
LABEL_32:
  if ( v15 == 40 || v15 == 183 )
  {
    if ( a2 == 1610612752 )
    {
      v28 = 23;
      v29 = " size of DT_ANDROID_REL";
    }
    else if ( a2 <= 1610612752 )
    {
      if ( a2 != 1610612751 )
        return a3;
      v28 = 26;
      v29 = " offset of packed REL data";
    }
    else if ( a2 == 1610612753 )
    {
      v28 = 27;
      v29 = " offset of packed RELA data";
    }
    else
    {
      if ( a2 != 1610612754 )
        return a3;
      v28 = 24;
      v29 = " size of DT_ANDROID_RELA";
    }
    goto LABEL_54;
  }
  return a3;
}
// 42CCFC: conditional instruction was optimized away because x21.8==4
// 42CD5C: conditional instruction was optimized away because x21.8==7
// 42CD7C: conditional instruction was optimized away because x21.8==E
// 42CD9C: conditional instruction was optimized away because x21.8==15
// 42CAAC: variable 'v7' is possibly undefined
