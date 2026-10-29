__int64 __fastcall sub_58BEC0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r15d
  __int64 v8; // rsi
  unsigned int tinfo_size; // eax
  unsigned __int8 v10; // al
  void **p_ptr; // rcx
  __int64 v12; // rdx
  __int64 *v13; // [rsp+0h] [rbp-70h]
  __int64 v15; // [rsp+18h] [rbp-58h] BYREF
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v17; // [rsp+28h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 72) & 4) != 0 )
    return 0;
  if ( *a2 == 10 || (v6 = 0, *a2 == 5) )
  {
    v15 = 0;
    v13 = (__int64 *)(a3 + 64);
    copy_tinfo_t(&v15);
    if ( (get_tinfo_property(v15, 2) & 0xF) == 0xA )
    {
      ptr = nullptr;
      ptr = (void *)get_tinfo_property(v15, 9);
      copy_tinfo_t(&v15);
      clear_tinfo_t(&ptr);
    }
    else
    {
      if ( (get_tinfo_property(v15, 2) & 0xF) != 0xB )
        goto LABEL_11;
      ptr = nullptr;
      ptr = (void *)get_tinfo_property(v15, 11);
      copy_tinfo_t(&v15);
      clear_tinfo_t(&ptr);
    }
    if ( (get_tinfo_property(v15, 2) & 0x40) == 0
      && (unsigned __int8)get_tinfo_property(v15, 2)
      && (get_tinfo_property(v15, 2) & 0xF) != 0xC )
    {
      v8 = *(_QWORD *)(a3 + 64);
      ptr = nullptr;
      v17 = 0;
      tinfo_size = get_tinfo_size(0, v8, 0);
      if ( *(_DWORD *)a4 == 1 )
      {
        v12 = *(_QWORD *)(a4 + 8) + *(_QWORD *)(a1 + 40);
        p_ptr = nullptr;
      }
      else
      {
        if ( !(unsigned __int8)sub_589FC0(
                                 *(void **)(a1 + 32),
                                 (__int64 *)&ptr,
                                 v13,
                                 a4,
                                 tinfo_size,
                                 *(__int64 **)(a1 + 24),
                                 *(_QWORD *)(a1 + 40)) )
        {
          if ( !under_debugger )
            interr(30);
          BUG();
        }
        v10 = getinf_flag(3, 32);
        reloc_value(ptr, (unsigned int)v17, *(_QWORD *)(a1 + 40), v10);
        p_ptr = &ptr;
        v12 = 0;
      }
      v6 = unpack_idcobj_from_idb(a2, v13, v12, p_ptr, 0);
      if ( ptr )
      {
        *(_QWORD *)&v17 = 0;
        qfree(ptr);
      }
      goto LABEL_12;
    }
LABEL_11:
    v6 = 0;
LABEL_12:
    clear_tinfo_t(&v15);
  }
  return v6;
}
