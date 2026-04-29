__int64 __fastcall sub_4AA40(__int64 a1, __int64 a2)
{
  const char *v2; // rbp
  bool v3; // zf
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  char *v7; // rbx
  const char *v8; // rsi
  __int64 v9; // rdx
  int v10; // edx
  __int128 v11; // [rsp+0h] [rbp-48h] BYREF
  char *s1; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v2 = ::s1;
  v3 = *(_QWORD *)(a2 + 8) == 0;
  v14 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)a2;
  if ( !strcasecmp(v2, "spe") )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) & 0xFFFFFFF0 | 1;
    *(_BYTE *)(a1 + 16) = 1;
    return 1;
  }
  if ( !strcasecmp(v2, "altivec") )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) &= 0xFFFFFFF0;
    *(_BYTE *)(a1 + 16) = 1;
    return 1;
  }
  if ( !strcasecmp(v2, "vmx128") )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) & 0xFFFFFFF0 | 2;
    *(_BYTE *)(a1 + 16) = 1;
    return 1;
  }
  if ( !strcasecmp(v2, "paired") )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) & 0xFFFFFFF0 | 3;
    *(_BYTE *)(a1 + 16) = 1;
    return 1;
  }
  if ( !strcasecmp(v2, "lsp") )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) & 0xFFFFFFF0 | 4;
    *(_BYTE *)(a1 + 16) = 1;
    return 1;
  }
  if ( !strcasecmp(v2, "vle") )
  {
    if ( !*(_BYTE *)(a1 + 16) )
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) & 0xFFFFFFF0 | 1;
    v5 = *(_QWORD *)(a1 + 8);
    s1 = nullptr;
    v13 = 0;
    *(_DWORD *)(v5 + 460) &= ~0x20u;
    get_abi_name(&s1);
    v6 = v13;
    if ( (unsigned __int64)v13 <= 1 || (v7 = s1, *s1 == 45) )
    {
      v8 = &byte_4;
      v11 = 0;
      set_compiler(&v11, 4, "sysv-eabi");
    }
    else
    {
      v8 = "sysv";
      if ( strcmp(s1, "sysv") )
      {
        if ( (unsigned __int64)(v6 - 1) <= 4 )
          goto LABEL_24;
        v8 = "sysv-";
        if ( strncmp(v7, "sysv-", 5u) )
          goto LABEL_24;
      }
      v8 = nullptr;
      append_abi_opts("eabi", 0);
    }
    v7 = s1;
LABEL_24:
    if ( v7 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v7, v8, v9, 0.0);
    }
    return 1;
  }
  v10 = strcasecmp(v2, "embedded");
  result = 0;
  if ( !v10 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 460LL) &= ~0x20u;
    return 1;
  }
  return result;
}
