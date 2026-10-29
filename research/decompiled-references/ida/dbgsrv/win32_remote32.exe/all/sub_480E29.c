/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480E29
// Address: 0x00480E29

//----- (00480E29) --------------------------------------------------------
int __cdecl sub_480E29(int a1, int a2, DWORD dwCmpFlags, CHAR *a4, int a5, const CHAR *a6, int a7, UINT CodePage)
{
  int v8; // esi
  CHAR *v9; // eax
  int v10; // ebx
  UINT v11; // eax
  BYTE *LeadByte; // eax
  unsigned __int8 v13; // cl
  BYTE *i; // eax
  unsigned __int8 v16; // cl
  int v17; // edi
  int v18; // eax
  unsigned int v19; // eax
  void *v20; // esp
  WCHAR *v21; // eax
  WCHAR *v22; // eax
  const CHAR *v23; // eax
  unsigned int v24; // eax
  void *v25; // esp
  WCHAR *v26; // esi
  WCHAR *v27; // eax
  PCNZWCH v28; // ebx
  _DWORD v30[3]; // [esp+0h] [ebp-38h] BYREF
  int v31; // [esp+Ch] [ebp-2Ch]
  int cchWideChar; // [esp+10h] [ebp-28h]
  LPCCH v33; // [esp+14h] [ebp-24h]
  LPCCH lpMultiByteStr; // [esp+18h] [ebp-20h]
  PCNZWCH lpString1; // [esp+1Ch] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+20h] [ebp-18h] BYREF

  v8 = a5;
  cchWideChar = a1;
  v31 = a2;
  v9 = (CHAR *)a6;
  v33 = a6;
  lpMultiByteStr = a4;
  if ( a5 <= 0 )
  {
    if ( a5 < -1 )
      return 0;
  }
  else
  {
    v8 = sub_47EFB3(a4, a5);
    v9 = (CHAR *)v33;
  }
  v10 = a7;
  if ( a7 <= 0 )
  {
    if ( a7 < -1 )
      return 0;
  }
  else
  {
    v10 = sub_47EFB3(v9, a7);
  }
  v11 = CodePage;
  if ( !CodePage )
  {
    v11 = *(_DWORD *)(*(_DWORD *)cchWideChar + 8);
    CodePage = v11;
  }
  if ( !v8 || !v10 )
  {
    if ( v8 == v10 )
      return 2;
    if ( v10 > 1 )
      return 1;
    if ( v8 > 1 )
      return 3;
    if ( !GetCPInfo(v11, &CPInfo) )
      return 0;
    if ( v8 > 0 )
    {
      if ( CPInfo.MaxCharSize >= 2 )
      {
        LeadByte = CPInfo.LeadByte;
        if ( CPInfo.LeadByte[0] )
        {
          while ( 1 )
          {
            v13 = LeadByte[1];
            if ( !v13 )
              break;
            if ( (unsigned __int8)*a4 >= *LeadByte && (unsigned __int8)*a4 <= v13 )
              return 2;
            LeadByte += 2;
            if ( !*LeadByte )
              return 3;
          }
        }
      }
      return 3;
    }
    if ( v10 > 0 )
    {
      if ( CPInfo.MaxCharSize >= 2 )
      {
        for ( i = CPInfo.LeadByte; *i; i += 2 )
        {
          v16 = i[1];
          if ( !v16 )
            break;
          if ( (unsigned int)*v33 >= *i && (unsigned int)*v33 <= v16 )
            return 2;
        }
      }
      return 1;
    }
  }
  v17 = 0;
  v18 = sub_47B3EB(CodePage, 9u, lpMultiByteStr, v8, nullptr, 0);
  cchWideChar = v18;
  if ( v18 )
  {
    v19 = 2 * v18 < (unsigned int)(2 * v18 + 8) ? 2 * v18 + 8 : 0;
    if ( v19 )
    {
      if ( v19 > 0x400 )
      {
        v21 = (WCHAR *)sub_479531(v19);
        lpString1 = v21;
        if ( !v21 )
          goto LABEL_57;
        *(_DWORD *)v21 = 56797;
      }
      else
      {
        v20 = alloca(v19);
        v21 = (WCHAR *)v30;
        lpString1 = (PCNZWCH)v30;
        if ( !v30 )
          goto LABEL_57;
        v30[0] = 52428;
      }
      v22 = v21 + 4;
      lpString1 = v22;
    }
    else
    {
      v22 = nullptr;
      lpString1 = nullptr;
    }
    if ( v22 )
    {
      if ( sub_47B3EB(CodePage, 1u, lpMultiByteStr, v8, v22, cchWideChar) )
      {
        v23 = (const CHAR *)sub_47B3EB(CodePage, 9u, v33, v10, nullptr, 0);
        lpMultiByteStr = v23;
        if ( v23 )
        {
          v24 = 2 * (int)v23 < (unsigned int)(2 * (_DWORD)v23 + 8) ? 2 * (_DWORD)v23 + 8 : 0;
          if ( v24 )
          {
            if ( v24 > 0x400 )
            {
              v27 = (WCHAR *)sub_479531(v24);
              v26 = v27;
              if ( !v27 )
                goto LABEL_55;
              *(_DWORD *)v27 = 56797;
            }
            else
            {
              v25 = alloca(v24);
              v26 = (WCHAR *)v30;
              if ( !v30 )
                goto LABEL_55;
              v30[0] = 52428;
            }
            v26 += 4;
          }
          else
          {
            v26 = nullptr;
          }
          if ( v26 && sub_47B3EB(CodePage, 1u, v33, v10, v26, (int)lpMultiByteStr) )
          {
            v28 = lpString1;
            v17 = sub_478EC3(
                    (unsigned __int16 *)v31,
                    dwCmpFlags,
                    lpString1,
                    cchWideChar,
                    v26,
                    (int)lpMultiByteStr,
                    0,
                    0,
                    0);
LABEL_56:
            sub_478C92((int)v26);
LABEL_58:
            sub_478C92((int)v28);
            return v17;
          }
LABEL_55:
          v28 = lpString1;
          goto LABEL_56;
        }
      }
    }
LABEL_57:
    v28 = lpString1;
    goto LABEL_58;
  }
  return 0;
}
