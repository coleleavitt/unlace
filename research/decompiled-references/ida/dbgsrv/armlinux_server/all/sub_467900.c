/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467900
// Address: 0x0000000000467900

//----- (0000000000467900) ----------------------------------------------------
__int64 __fastcall sub_467900(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 (__fastcall *a5)(__int64 a1, __int64 a2, void *a3, _DWORD *a4))
{
  void *v10; // x1
  __int64 v11; // x2
  unsigned int v12; // w20
  __int64 v13; // x0
  const char *v15; // x26
  void **v16; // x27
  __int64 v17; // x26
  char v18; // w0
  unsigned __int64 v19; // x1
  const char *v20; // x0
  unsigned __int64 v21; // x0
  const char *v22; // x1
  __int64 *v23; // x2
  __int64 *v24; // x2
  _BYTE *v25; // x21
  __int64 v26; // [xsp+60h] [xbp-30h]
  unsigned int v27; // [xsp+60h] [xbp-30h]
  unsigned __int64 v28; // [xsp+68h] [xbp-28h]
  void *ptr; // [xsp+70h] [xbp-20h] BYREF
  __int64 v30; // [xsp+78h] [xbp-18h]
  __int64 v31; // [xsp+80h] [xbp-10h]

  v10 = &_stack_chk_guard;
  v11 = 0;
  if ( !qword_522368 || !*(_BYTE *)(qword_522368 + 184) )
  {
    if ( a2 )
      goto LABEL_4;
    return 1;
  }
  sub_40A690((int)"bfd_load_section(obj=%p, section_index=%llu).\n", a1, a2);
  if ( !a2 )
    return 1;
LABEL_4:
  if ( a2 - 1 < (unsigned __int64)a1[14] )
  {
    v13 = *a1;
    if ( *a1 && (v10 = (void *)*(unsigned int *)(v13 + 8), (_DWORD)v10 == 1) )
    {
      if ( *(_QWORD *)(v13 + 24) )
        v15 = *(const char **)(v13 + 16);
      else
        v15 = (const char *)&qword_4B2D48;
      v26 = a1[13];
      v16 = (void **)sub_48BF60(v15, 0);
      if ( v16 )
      {
        v17 = v26 + 120 * (a2 - 1);
        v27 = *(_DWORD *)(v17 + 8);
        if ( a5 )
        {
          ptr = nullptr;
          v30 = 0;
          v31 = 0;
          v18 = sub_4950A8("IDA_DWARF_MAX_ZIP_RATIO", (__int64)&ptr);
          v19 = 1000;
          if ( v18 )
          {
            v20 = (const char *)&qword_4B2D48;
            if ( v30 )
              v20 = (const char *)ptr;
            v19 = (int)strtol(v20, nullptr, 10);
          }
          if ( ptr )
          {
            v28 = v19;
            v30 = 0;
            j__free(ptr);
            v19 = v28;
          }
          v21 = v27 / v19;
        }
        else
        {
          LODWORD(v21) = *(_DWORD *)(v17 + 8);
        }
        LODWORD(ptr) = v21;
        if ( (unsigned __int8)sub_467410((__int64)v16, &ptr, 1u, *(_QWORD *)(v17 + 48), -1) )
        {
          if ( *(_QWORD *)(v17 + 24) )
            v24 = *(__int64 **)(v17 + 16);
          else
            v24 = &qword_4B2D48;
          v25 = sub_4645D0(a1, a2, v24, v27);
          if ( v25 )
          {
            sub_48C428((__int64)v16, *(_QWORD *)(v17 + 48), 0);
            if ( !a5 )
              a5 = sub_463460;
            v12 = a5((__int64)v16, v17, v25, a4);
            if ( v12 )
              sub_4647D0((__int64)a1, v25);
            else
              *a3 = v25;
          }
          else
          {
            if ( qword_522368 && *(_BYTE *)(qword_522368 + 184) )
              sub_40A690((int)"Couldn't allocate %u bytes of data for section.\n", v27);
            v12 = 1;
            *a4 = 8;
          }
        }
        else
        {
          if ( qword_522368 && *(_BYTE *)(qword_522368 + 184) )
          {
            v22 = "Seemingly wrong";
            if ( !a5 )
              v22 = "Wrong";
            if ( *(_QWORD *)(v17 + 24) )
              v23 = *(__int64 **)(v17 + 16);
            else
              v23 = &qword_4B2D48;
            sub_40A690((int)"%s section '%s' size %u bytes\n", v22, v23, v27);
          }
          v12 = 1;
          *a4 = 435;
        }
        sub_48C0F8(v16);
      }
      else
      {
        v12 = 1;
        sub_40A690((int)"Cannot open file: %s.\n", v15);
      }
    }
    else
    {
      v12 = 1;
      sub_40A690((int)"Input source is not local file.\n", v10, v11);
    }
  }
  else if ( qword_522368 )
  {
    v12 = -1;
    if ( *(_BYTE *)(qword_522368 + 184) )
      sub_40A690((int)"No such section.\n", v10, v11);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v12;
}
// 467900: could not find valid save-restore pair for x26
// 467900: could not find valid save-restore pair for x27
// 467A0C: variable 'v10' is possibly undefined
// 467A0C: variable 'v11' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522368: using guessed type __int64 qword_522368;
