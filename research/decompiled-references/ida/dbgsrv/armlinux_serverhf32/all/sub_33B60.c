/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33B60
// Address: 0x00033B60

//----- (00033B60) --------------------------------------------------------
char **__fastcall sub_33B60(char **a1, int a2, __int64 a3)
{
  const char *v6; // r0
  size_t v7; // r9
  char *v8; // r0
  unsigned int v9; // r3
  unsigned int v10; // r3
  bool v11; // zf
  int v12; // r3
  size_t v13; // r8
  const char *v14; // r9
  char *v15; // r1
  unsigned int v16; // r3
  char *v17; // r1
  bool v19; // zf
  char *v20; // r0
  char *v21; // r10
  size_t v22; // r7
  void *v23; // r1
  unsigned int v24; // r2
  char *v25; // r0
  char *v26; // r0
  const char *src; // [sp+4h] [bp-18h]
  char v28; // [sp+13h] [bp-9h] BYREF

  v6 = sub_2F680(a2, a3);
  *a1 = nullptr;
  src = v6;
  a1[1] = nullptr;
  a1[2] = nullptr;
  if ( !v6
    || (v7 = strlen(v6),
        v8 = (char *)sub_77EB0((int)a1, nullptr, v7 + 1, 1u),
        *a1 = v8,
        a1[1] = (char *)(v7 + 1),
        memmove(v8, src, v7),
        (*a1)[v7] = 0,
        v9 = (unsigned int)a1[1],
        v9 <= 1) )
  {
    sub_1873C((int)a1, "DT_????     Unknown (%08llX)", a3);
    return a1;
  }
  v10 = v9 - 1;
  if ( v10 <= 0xB )
  {
    v15 = *a1;
    v28 = 32;
    v15[v10] = 32;
    v16 = (unsigned int)a1[1];
    if ( v16 > 0xD )
    {
      v17 = *a1;
      a1[1] = (char *)13;
    }
    else
    {
      v17 = *a1;
      if ( v16 != 13 )
      {
        v24 = (unsigned int)a1[2];
        if ( v17 <= &v28 && &v28 < &v17[v24] )
        {
          if ( v24 > 0xC
            || (v26 = (char *)sub_77EB0((int)a1, v17, 0xDu, 1u),
                v16 = (unsigned int)a1[1],
                v17 = v26,
                *a1 = v26,
                v16 <= 0xC) )
          {
            do
            {
              v17[v16++] = 32;
              v17 = *a1;
            }
            while ( v16 != 13 );
          }
        }
        else if ( v24 > 0xC
               || (v25 = (char *)sub_77EB0((int)a1, v17, 0xDu, 1u),
                   v16 = (unsigned int)a1[1],
                   v17 = v25,
                   *a1 = v25,
                   v16 <= 0xC) )
        {
          do
          {
            v17[v16++] = 32;
            v17 = *a1;
          }
          while ( v16 != 13 );
        }
        a1[1] = (char *)13;
      }
    }
    v17[12] = 0;
  }
  v11 = HIDWORD(a3) == 0;
  v12 = *(unsigned __int16 *)(a2 + 406);
  if ( !HIDWORD(a3) )
    v11 = (_DWORD)a3 == 12;
  if ( v11 )
  {
    v13 = 32;
    v14 = "addr. of initialization function";
    goto LABEL_46;
  }
  if ( a3 < 13 )
  {
    if ( a3 == 5 )
    {
      v13 = 20;
      v14 = "addr of string table";
    }
    else
    {
      if ( a3 >= 6 )
      {
        if ( a3 == 8 )
        {
          v13 = 30;
          v14 = "size in bytes of DT_RELA table";
        }
        else if ( a3 < 9 )
        {
          if ( a3 == 6 )
          {
            v13 = 20;
            v14 = "addr of symbol table";
          }
          else
          {
            v13 = 24;
            v14 = "addr of relocation table";
          }
        }
        else if ( a3 == 10 )
        {
          v13 = 29;
          v14 = "size in bytes of string table";
        }
        else if ( a3 >= 11 )
        {
          v13 = 35;
          v14 = "size in bytes of symbol table entry";
        }
        else
        {
          v13 = 30;
          v14 = "size in bytes of DT_RELA entry";
        }
        goto LABEL_46;
      }
      if ( a3 == 2 )
      {
        v13 = 39;
        v14 = "tot.size in bytes of relocation entries";
      }
      else
      {
        if ( a3 >= 3 )
        {
          if ( a3 == 3 )
          {
            if ( v12 != 20 )
              return a1;
            v13 = 11;
            v14 = "addr of PLT";
          }
          else
          {
            v13 = 26;
            v14 = "addr. of symbol hash table";
          }
          goto LABEL_46;
        }
        if ( a3 )
        {
          if ( a3 != 1 )
            goto LABEL_32;
          v13 = 39;
          v14 = "str-table offset name to needed library";
        }
        else
        {
          v13 = 21;
          v14 = "end of _DYNAMIC array";
        }
      }
    }
LABEL_46:
    v20 = a1[1];
    v21 = v20 - 1;
    v22 = (size_t)&v20[v13 - 1];
    if ( !v20 )
    {
      v21 = nullptr;
      v22 = v13;
    }
    v23 = *a1;
    if ( v22 + 1 > (unsigned int)a1[2] )
    {
      v23 = sub_77EB0((int)a1, v23, v22 + 1, 1u);
      *a1 = (char *)v23;
    }
    a1[1] = (char *)(v22 + 1);
    *((_BYTE *)v23 + v22) = 0;
    memcpy(&v21[(_DWORD)*a1], v14, v13);
    return a1;
  }
  if ( a3 == 19 )
  {
    v13 = 29;
    v14 = "size in bytes of DT_REL entry";
    goto LABEL_46;
  }
  if ( a3 < 20 )
  {
    if ( a3 == 15 )
    {
      v13 = 31;
      v14 = "offs in str-table - search path";
    }
    else if ( a3 < 16 )
    {
      if ( a3 == 13 )
      {
        v13 = 29;
        v14 = "addr. of termination function";
      }
      else
      {
        v13 = 42;
        v14 = "offs in str.-table - name of shared object";
      }
    }
    else if ( a3 == 17 )
    {
      v13 = 24;
      v14 = "addr of relocation table";
    }
    else if ( a3 >= 18 )
    {
      v13 = 27;
      v14 = "tot.size in bytes of DT_REL";
    }
    else
    {
      v13 = 29;
      v14 = "start search of shared object";
    }
    goto LABEL_46;
  }
  if ( a3 == 22 )
  {
    v13 = 17;
    v14 = "segment permisson";
    goto LABEL_46;
  }
  if ( a3 < 23 )
  {
    if ( a3 == 20 )
    {
      v13 = 38;
      v14 = "type of relocation (DT_REL or DT_RELA)";
    }
    else
    {
      v13 = 13;
      v14 = "not specified";
    }
    goto LABEL_46;
  }
  switch ( a3 )
  {
    case 29LL:
      v13 = 22;
      v14 = "array of search pathes";
      goto LABEL_46;
    case 1879048192LL:
      if ( v12 != 20 )
        return a1;
      v13 = 29;
      v14 = "addr of _GLOBAL_OFFSET_TABLE_";
      goto LABEL_46;
    case 23LL:
      if ( v12 == 20 )
      {
        v13 = 33;
        v14 = "addr of JMP_SLOT relocation table";
      }
      else
      {
        v13 = 34;
        v14 = "addr of dlt procedure (if present)";
      }
      goto LABEL_46;
  }
LABEL_32:
  v19 = v12 == 183;
  if ( v12 != 183 )
    v19 = v12 == 40;
  if ( v19 && (unsigned __int64)(a3 - 1610612751) < 4 )
  {
    switch ( (int)a3 )
    {
      case 1610612751:
        v13 = 26;
        v14 = " offset of packed REL data";
        break;
      case 1610612752:
        v13 = 23;
        v14 = " size of DT_ANDROID_REL";
        break;
      case 1610612753:
        v13 = 27;
        v14 = " offset of packed RELA data";
        break;
      case 1610612754:
        v13 = 24;
        v14 = " size of DT_ANDROID_RELA";
        break;
    }
    goto LABEL_46;
  }
  return a1;
}
// 33D5A: conditional instruction was optimized away because r6.8==4
// 33DA4: conditional instruction was optimized away because r6.8==7
// 33DC0: conditional instruction was optimized away because r6.8==E
// 33DDC: conditional instruction was optimized away because r6.8==15
// 33D0E: the default case was optimized away because r6.4 is in (6000000F..60000012)
