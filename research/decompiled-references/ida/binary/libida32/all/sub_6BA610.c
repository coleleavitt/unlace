unsigned __int64 __fastcall sub_6BA610(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // r13
  const char *v11; // rdx
  __int64 v12; // r12
  __int64 idati; // rax
  __int64 v14; // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+8h] [rbp-60h]
  _QWORD v17[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v18; // [rsp+30h] [rbp-38h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v3 = *a2;
  ptr = nullptr;
  v16 = 0;
  if ( (v3 & 0xF) != 0xD || (v3 & 0x3F) == 0x3D )
    return v19 - __readfsqword(0x28u);
  if ( get_tinfo_property(v3, 5) )
    goto LABEL_5;
  v6 = *a2;
  if ( (*a2 & 0x100) == 0 || !get_tinfo_pdata(&ptr, v6, 0) )
    goto LABEL_5;
  v7 = *a2;
  v8 = *a2;
  if ( (*(_BYTE *)a2 & 0x2F) != 0xD )
    goto LABEL_24;
  v9 = 16;
  if ( (int)get_tinfo_property(v7, 16) <= 0 )
  {
    v7 = *a2;
    v8 = *a2;
LABEL_24:
    if ( (v8 & 0x3F) != 0x2D )
      goto LABEL_5;
    v9 = 303;
    if ( !get_tinfo_property(v7, 303) )
      goto LABEL_5;
  }
  v10 = *a2;
  v11 = haystack;
  v12 = *a2 & 0x40;
  if ( (_QWORD)v16 )
    v11 = (const char *)ptr;
  if ( v11 )
  {
    idati = *(_QWORD *)(a1 + 16);
    v17[1] = v11;
    v18 = 0;
    if ( !idati )
      idati = get_idati(v7, v9);
    v17[0] = idati;
    create_tinfo(a2, 61, 61, v17);
  }
  if ( !(_BYTE)v12 )
    goto LABEL_20;
  if ( (unsigned __int8)*a2 )
  {
    *a2 |= 0x40uLL;
LABEL_20:
    if ( (v10 & 0x80u) != 0LL )
    {
      v14 = *a2;
      if ( (unsigned __int8)*a2 )
      {
        LOBYTE(v14) = v14 | 0x80;
        *a2 = v14;
      }
    }
  }
LABEL_5:
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  return v19 - __readfsqword(0x28u);
}

