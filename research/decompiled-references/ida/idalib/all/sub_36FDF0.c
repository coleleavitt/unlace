__int64 __fastcall sub_36FDF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned int v6; // eax
  void *v7; // r15
  int type_ordinal; // eax
  unsigned int v10; // [rsp+Ch] [rbp-6Ch]
  unsigned int v11; // [rsp+Ch] [rbp-6Ch]
  __int64 v12; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE *)(a1 + 32);
  v15 = __readfsqword(0x28u);
  v4 = (int)v2;
  if ( v3 == 2 )
  {
    if ( *(_QWORD *)(a1 + 40) )
      goto LABEL_4;
LABEL_19:
    if ( (unsigned __int8)del_numbered_type(0, (unsigned int)v2) )
      *(_QWORD *)(a2 + 8) = (int)v2;
    return 0;
  }
  if ( v3 == 7 && *(_QWORD *)(a1 + 48) <= 1u )
    goto LABEL_19;
LABEL_4:
  v5 = *(_QWORD *)(a1 + 72);
  v12 = 0;
  ptr = nullptr;
  v14 = 0;
  v6 = sub_36FA50((__int64)&v12, (char *)(a1 + 32), (__int64)&ptr);
  v7 = ptr;
  if ( !v6 && (_BYTE)v12 )
  {
    if ( (int)v2 <= 0 )
    {
      if ( (unsigned __int64)v14 <= 1 || (type_ordinal = get_type_ordinal(0, ptr), v4 = type_ordinal, type_ordinal <= 0) )
      {
        LODWORD(v2) = alloc_type_ordinals(0, 1);
        v4 = (int)v2;
      }
      else
      {
        LODWORD(v2) = type_ordinal;
      }
    }
    if ( !(unsigned int)save_tinfo(&v12, 0, (unsigned int)v2, v7, ((int)v5 >> 7) & 4) )
      *(_QWORD *)(a2 + 8) = v4;
    if ( v7 )
      qfree(v7);
    clear_tinfo_t(&v12);
    return 0;
  }
  if ( ptr )
  {
    v10 = v6;
    qfree(ptr);
    v6 = v10;
  }
  v11 = v6;
  clear_tinfo_t(&v12);
  return v11;
}
