bool __fastcall sub_38A790(__int64 a1, _BYTE *a2, int a3, char a4, __int64 a5, __int64 a6, __int64 a7)
{
  char *v8; // rax
  _BYTE *v9; // rbx
  _BYTE *v10; // r14
  int v11; // ebp
  _BYTE *v12; // r15
  char v13; // bl
  char v14; // al
  unsigned int v15; // edi
  char v16; // bp
  const char *v17; // rdi
  int v18; // eax
  char v20; // al
  char v25; // [rsp+42h] [rbp-76h]
  _BYTE *v26; // [rsp+58h] [rbp-60h] BYREF
  __int64 v27; // [rsp+60h] [rbp-58h]
  __int128 v28; // [rsp+68h] [rbp-50h]
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( a5 )
    *(_DWORD *)a5 = 0;
  if ( a6 )
    *(_DWORD *)a6 = 0;
  if ( a7 )
    *(_DWORD *)a7 = 0;
  if ( !a2 )
    return 0;
  v8 = (char *)tag_skipcodes();
  v9 = v8;
  if ( a4 )
    goto LABEL_9;
  v15 = *v8;
  v16 = *v8;
  if ( v15 > 0x7F )
    goto LABEL_9;
  if ( isalnum(v15) || v16 == 95 )
    goto LABEL_24;
  if ( v16 != 47 )
  {
    if ( v16 == 35 )
      goto LABEL_24;
    goto LABEL_9;
  }
  if ( v9[1] != 47 )
  {
LABEL_9:
    v10 = a2;
    v25 = 1;
    v26 = a2;
    v11 = 0;
    v12 = nullptr;
    v13 = 0;
    while ( 1 )
    {
      v14 = *v10;
      if ( (unsigned __int8)(*v10 - 1) > 1u )
        break;
LABEL_17:
      if ( v14 == 1 )
      {
        v20 = v10[1];
        if ( v20 == 40 )
        {
          v27 = -1;
          addr_from_tag();
        }
        else
        {
          v13 |= v20 == 12;
        }
      }
LABEL_18:
      v26 = (_BYTE *)tag_skipcode();
      v10 = v26;
    }
    while ( 1 )
    {
      if ( v14 == 4 )
      {
        v25 &= v12 != nullptr || v10[1] != 4;
        goto LABEL_18;
      }
      v13 |= v14 == 0;
      if ( v13 )
        break;
      if ( v14 == 32 )
        v10 = v12;
      if ( (unsigned int)get_utf8_char() - 1 > 0xFFFFFFFD )
        break;
      v12 = v10;
      v10 = v26;
      ++v11;
      v14 = *v26;
      if ( (unsigned __int8)(*v26 - 1) <= 1u )
        goto LABEL_17;
    }
    if ( a6 )
      return *(_DWORD *)a6 != 0;
    return 0;
  }
LABEL_24:
  if ( a5 )
  {
    *(_DWORD *)a5 = 3;
    *(_QWORD *)(a5 + 8) = a1;
  }
  if ( a6 )
  {
    v27 = 0;
    v28 = 0;
    tag_remove();
    sub_36D720((__int64 *)&v26, *(_QWORD *)(a1 + 8), 0);
    if ( *v9 == 47 )
      goto LABEL_32;
    v17 = s1;
    if ( (_QWORD)v28 )
      v17 = (const char *)v27;
    v18 = sub_38A140(v17, a3);
    if ( v18 < 0 || v18 >= *(_DWORD *)(*(_QWORD *)(a1 + 8) + 464LL) )
    {
LABEL_32:
      *(_DWORD *)a6 = 3;
      *(_QWORD *)(a6 + 8) = a1;
    }
    else
    {
      *(_DWORD *)a6 = 2;
      *(_QWORD *)(a6 + 8) = sub_13D280(*(_QWORD **)(a1 + 8), v18);
    }
    clear_tinfo_t();
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
  }
  if ( a7 )
  {
    *(_DWORD *)a7 = 3;
    *(_QWORD *)(a7 + 8) = a1;
  }
  return 1;
}
