/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4575C0
// Address: 0x004575C0

//----- (004575C0) --------------------------------------------------------
CHAR *__stdcall sub_4575C0(_BYTE *a1)
{
  HMODULE ModuleHandleW; // eax
  char *v2; // eax
  char *v3; // eax
  int v4; // edi
  unsigned int v5; // kr00_4
  CHAR *v6; // esi
  LPCRITICAL_SECTION lpCriticalSection; // [esp+10h] [ebp-28h] BYREF
  char *v9; // [esp+14h] [ebp-24h] BYREF
  int v10; // [esp+18h] [ebp-20h]
  int v11; // [esp+1Ch] [ebp-1Ch]
  char *v12; // [esp+20h] [ebp-18h] BYREF
  int v13; // [esp+24h] [ebp-14h]
  int v14; // [esp+28h] [ebp-10h]
  int v15; // [esp+34h] [ebp-4h]
  WCHAR Filename[260]; // [esp+38h] [ebp+0h] BYREF
  __int8 v17[260]; // [esp+240h] [ebp+208h] BYREF

  sub_4543E0(&lpCriticalSection);
  v15 = 0;
  if ( byte_4B7230 )
    goto LABEL_20;
  v9 = nullptr;
  v10 = 0;
  v11 = 0;
  LOBYTE(v15) = 1;
  if ( !byte_4B6B30 )
    goto LABEL_10;
  if ( !sub_4560B0("IDADIR", (void **)&v9) )
  {
    if ( byte_4B6B30 )
    {
      ModuleHandleW = GetModuleHandleW(L"ida");
      if ( ModuleHandleW )
      {
        GetModuleFileNameW(ModuleHandleW, Filename, 0x104u);
        v12 = nullptr;
        v13 = 0;
        v14 = 0;
        LOBYTE(v15) = 2;
        sub_45A700((int)&v12, Filename, -1);
        v2 = (char *)MultiByteStr;
        if ( v13 )
          v2 = v12;
        sub_45ACB0((unsigned int)&byte_4B7230, v2, 260);
        LOBYTE(v15) = 3;
LABEL_13:
        if ( v12 )
        {
          v13 = 0;
          sub_453A20(v12);
        }
        LOBYTE(v15) = 1;
        if ( !sub_457BA0(&byte_4B7230) )
          sub_4565E0(&byte_4B7230, 0x104u, (unsigned __int8 *)&byte_4B7230);
        goto LABEL_17;
      }
    }
LABEL_10:
    GetModuleFileNameW(nullptr, Filename, 0x104u);
    v12 = nullptr;
    v13 = 0;
    v14 = 0;
    LOBYTE(v15) = 4;
    sub_45A700((int)&v12, Filename, -1);
    v3 = (char *)MultiByteStr;
    if ( v13 )
      v3 = v12;
    sub_45ACB0((unsigned int)&byte_4B7230, v3, 260);
    LOBYTE(v15) = 5;
    goto LABEL_13;
  }
  sub_45ACB0((unsigned int)&byte_4B7230, v9, 260);
LABEL_17:
  LOBYTE(v15) = 6;
  if ( v9 )
  {
    v10 = 0;
    sub_453A20(v9);
  }
  LOBYTE(v15) = 0;
LABEL_20:
  if ( a1 && *a1 )
  {
    sub_4569C0(v17, 260, &byte_4B7230, a1, 0);
    v4 = sub_45C900();
    v5 = strlen(v17);
    if ( v5 )
    {
      if ( v5 + 1 > *(_DWORD *)(v4 + 8) )
        *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, v5 + 1, 1u);
      *(_DWORD *)(v4 + 4) = v5 + 1;
      sub_464310(*(_DWORD *)v4, (unsigned int)v17, v5);
      *(_BYTE *)(v5 + *(_DWORD *)v4) = 0;
      v6 = *(CHAR **)v4;
    }
    else
    {
      v6 = *(CHAR **)v4;
      *(_DWORD *)(v4 + 4) = 0;
    }
  }
  else
  {
    v6 = &byte_4B7230;
  }
  v15 = 8;
  sub_4562F0(lpCriticalSection);
  return v6;
}
// 4B6B30: using guessed type char byte_4B6B30;
