/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AF68
// Address: 0x0005AF68

//----- (0005AF68) --------------------------------------------------------
int __fastcall sub_5AF68(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        int (__fastcall *a5)(int a1, int a2, void *a3, _DWORD *a4))
{
  int (__fastcall *v7)(int, int, void *, _DWORD *); // r7
  __int64 v8; // r0
  int v9; // r7
  _DWORD *v10; // r3
  const char *v12; // r8
  int v13; // r10
  void **v14; // r9
  int v15; // r8
  int v16; // r0
  unsigned int v17; // r1
  char *v18; // r0
  int v19; // r0
  const char *v20; // r1
  const char *v21; // r2
  char *s; // r1
  _BYTE *v23; // r4
  unsigned int v25; // [sp+28h] [bp-1Ch]
  unsigned int v26; // [sp+2Ch] [bp-18h]
  char *nptr; // [sp+30h] [bp-14h] BYREF
  int v28; // [sp+34h] [bp-10h]
  int v29; // [sp+38h] [bp-Ch]

  v7 = a5;
  if ( !dword_D3B18 || !*(_BYTE *)(dword_D3B18 + 96) )
  {
    v8 = a2;
    if ( a2 )
      goto LABEL_4;
    return 1;
  }
  sub_1700C((int)"bfd_load_section(obj=%p, section_index=%llu).\n", a1, a2);
  v8 = a2;
  if ( !a2 )
    return 1;
LABEL_4:
  if ( v8 - 1 < (unsigned __int64)(unsigned int)a1[14] )
  {
    v10 = (_DWORD *)*a1;
    if ( *a1 && v10[1] == 1 )
    {
      if ( v10[3] )
        v12 = (const char *)v10[2];
      else
        v12 = (const char *)&dword_8DA5C;
      v13 = a1[13];
      v14 = (void **)sub_74920((int)v12, 0);
      if ( v14 )
      {
        v15 = v13 + 104 * (a2 - 1);
        v25 = *(_DWORD *)(v15 + 8);
        if ( a5 )
        {
          nptr = nullptr;
          v28 = 0;
          v29 = 0;
          v16 = sub_7A72C("IDA_DWARF_MAX_ZIP_RATIO", (int)&nptr);
          v17 = 1000;
          if ( v16 )
          {
            if ( v28 )
              v18 = nptr;
            else
              v18 = (char *)&dword_8DA5C;
            v17 = strtol(v18, nullptr, 10);
          }
          if ( nptr )
          {
            v26 = v17;
            v28 = 0;
            sub_77E08(nptr);
            v17 = v26;
          }
          v19 = v25 / v17;
        }
        else
        {
          v19 = *(_DWORD *)(v15 + 8);
        }
        nptr = (char *)v19;
        if ( sub_5ABE8((int)v14, (unsigned int *)&nptr, 1u, -1, *(_QWORD *)(v15 + 32), -1) )
        {
          if ( *(_DWORD *)(v15 + 16) )
            s = *(char **)(v15 + 12);
          else
            s = (char *)&dword_8DA5C;
          v23 = sub_58D64(a1, a2, s, v25);
          if ( v23 )
          {
            sub_74C30((int)v14, *(_QWORD *)(v15 + 32), 0);
            if ( !a5 )
              v7 = sub_58130;
            v9 = v7((int)v14, v15, v23, a4);
            if ( v9 )
              sub_58ED8((int)a1, v23);
            else
              *a3 = v23;
          }
          else
          {
            if ( dword_D3B18 && *(_BYTE *)(dword_D3B18 + 96) )
              sub_1700C((int)"Couldn't allocate %u bytes of data for section.\n", v25);
            v9 = 1;
            *a4 = 8;
          }
        }
        else
        {
          if ( dword_D3B18 && *(_BYTE *)(dword_D3B18 + 96) )
          {
            if ( a5 )
              v20 = "Seemingly wrong";
            else
              v20 = "Wrong";
            if ( *(_DWORD *)(v15 + 16) )
              v21 = *(const char **)(v15 + 12);
            else
              v21 = (const char *)&dword_8DA5C;
            sub_1700C((int)"%s section '%s' size %u bytes\n", v20, v21, v25);
          }
          v9 = 1;
          *a4 = 435;
        }
        sub_749E8(v14);
      }
      else
      {
        v9 = 1;
        sub_1700C((int)"Cannot open file: %s.\n", v12);
      }
    }
    else
    {
      v9 = 1;
      sub_1700C((int)"Input source is not local file.\n");
    }
  }
  else if ( dword_D3B18 && *(_BYTE *)(dword_D3B18 + 96) )
  {
    v9 = -1;
    sub_1700C((int)"No such section.\n");
  }
  else
  {
    return -1;
  }
  return v9;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D3B18: using guessed type int dword_D3B18;
