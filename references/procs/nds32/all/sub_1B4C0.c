__int64 __fastcall sub_1B4C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  const char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // r12
  unsigned int dword; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v3 = getseg(a2);
  if ( !v3 )
    return 0;
  v4 = 1;
  if ( (*(_BYTE *)(v3 + 42) & 2) != 0 )
  {
    v6 = (const char *)v3;
    s1 = nullptr;
    v14 = 0;
    if ( get_segm_name(&s1, v3, 0) > 0 )
    {
      if ( (_QWORD)v14 )
      {
        v9 = s1;
        v6 = ".rodata";
        if ( !strcmp(s1, ".rodata") || (v6 = ".got", !strcmp(v9, ".got")) || (v6 = ".got.plt", !strcmp(v9, ".got.plt")) )
        {
          v4 = 1;
          goto LABEL_8;
        }
      }
    }
    v4 = is_mapped(a2);
    if ( !(_BYTE)v4 )
    {
LABEL_7:
      v9 = s1;
      goto LABEL_8;
    }
    dword = get_dword(a2);
    if ( dword )
    {
      v11 = dword;
      v4 = is_mapped(dword);
      if ( !(_BYTE)v4 )
        goto LABEL_7;
      v12 = getseg(v11);
      if ( v12 )
      {
        if ( *(_BYTE *)(v12 + 184) != 2 )
          LOBYTE(v4) = (unsigned __int8)segtype(v11) == 2;
        goto LABEL_7;
      }
    }
    v9 = s1;
    v4 = 0;
LABEL_8:
    if ( v9 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v9, v6, v7, v8);
    }
  }
  return v4;
}
