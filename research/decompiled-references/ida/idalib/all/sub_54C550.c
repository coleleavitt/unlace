__int64 __fastcall sub_54C550(__int64 a1, unsigned __int64 *a2, _BYTE *a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 *v8; // rax
  __int64 idati; // r15
  const char *v10; // r8
  size_t v11; // rbp
  const char *v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // ebp
  const char *src; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int128 v18; // [rsp+18h] [rbp-70h]
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v20; // [rsp+40h] [rbp-48h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( (*a2 & 0x100) == 0 || get_tinfo_property(*a2, 4) )
    return (unsigned int)-5;
  if ( !a3 || !*a3 )
  {
    v14 = -3;
    set_error_string(0, a3);
    return v14;
  }
  v6 = sub_534260(*(_QWORD *)(*(_QWORD *)a1 + 1824LL), *a2);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(__int64 **)(v6 + 32);
    idati = *v8;
    if ( (*(_BYTE *)(v7 + 68) & 8) != 0 )
    {
      if ( !(unsigned int)sub_6500C0(a1, *v8, a3) )
        return save_tinfo(a2, idati, *(unsigned int *)(*(_QWORD *)(v7 + 32) + 8LL), a3, a4 | 4);
      v14 = -21;
      set_error_string(0, a3);
    }
    else
    {
      v10 = (const char *)v8[1];
      ptr = nullptr;
      v18 = 0;
      if ( !v10
        || (src = v10,
            v11 = strlen(v10),
            ptr = (void *)qvector_reserve(&ptr, 0, v11 + 1, 1),
            *(_QWORD *)&v18 = v11 + 1,
            memmove(ptr, src, v11),
            *((_BYTE *)ptr + v11) = 0,
            v12 = (const char *)ptr,
            !(_QWORD)v18) )
      {
        v12 = haystack;
      }
      v13 = sub_65D550(a1, idati, v12, a3, a4);
      v14 = v13;
      if ( v13 == -6 )
      {
        set_error_string(0, a3);
        v14 = -21;
      }
      else if ( v13 )
      {
        if ( v13 == -10 )
        {
          set_error_string(0, a3);
          v14 = -3;
        }
        else
        {
          v14 = -5;
        }
      }
      else
      {
        v19[1] = a3;
        v20 = 0;
        if ( !idati )
          idati = get_idati(a1, 0);
        v19[0] = idati;
        create_tinfo(a2, 61, 61, v19);
      }
      if ( ptr )
      {
        *(_QWORD *)&v18 = 0;
        qfree(ptr);
      }
    }
  }
  else
  {
    return (unsigned int)-5;
  }
  return v14;
}
