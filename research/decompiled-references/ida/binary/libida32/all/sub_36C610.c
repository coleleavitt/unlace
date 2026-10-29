__int64 __fastcall sub_36C610(__int64 a1, __int64 a2)
{
  char v2; // al
  int type_ordinal; // r12d
  int v4; // r13d
  unsigned int v5; // eax
  void *v6; // r15
  unsigned int v7; // ebx
  unsigned int v8; // eax
  __int64 v10; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v12; // [rsp+18h] [rbp-50h]
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v2 = *(_BYTE *)(a1 + 32);
  type_ordinal = *(_DWORD *)(a1 + 8);
  v13 = __readfsqword(0x28u);
  if ( v2 == 2 )
  {
    if ( *(_DWORD *)(a1 + 40) )
      goto LABEL_4;
LABEL_20:
    if ( (unsigned __int8)del_numbered_type(0, (unsigned int)type_ordinal) )
      *(_DWORD *)(a2 + 8) = type_ordinal;
    return 0;
  }
  if ( v2 == 7 && *(_QWORD *)(a1 + 48) <= 1u )
    goto LABEL_20;
LABEL_4:
  v4 = *(_DWORD *)(a1 + 72);
  v10 = 0;
  ptr = nullptr;
  v12 = 0;
  v5 = sub_36C270((__int64)&v10, (char *)(a1 + 32), (__int64)&ptr);
  v6 = ptr;
  v7 = v5;
  if ( !v5 && (_BYTE)v10 )
  {
    if ( type_ordinal <= 0
      && ((unsigned __int64)v12 <= 1 || (type_ordinal = get_type_ordinal(0, ptr), type_ordinal <= 0)) )
    {
      v8 = alloc_type_ordinals(0, 1);
      type_ordinal = v8;
    }
    else
    {
      v8 = type_ordinal;
    }
    if ( !(unsigned int)save_tinfo(&v10, 0, v8, v6, (v4 >> 7) & 4) )
      *(_DWORD *)(a2 + 8) = type_ordinal;
    if ( v6 )
      qfree(v6);
    clear_tinfo_t(&v10);
    return 0;
  }
  if ( ptr )
    qfree(ptr);
  clear_tinfo_t(&v10);
  return v7;
}

