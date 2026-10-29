__int64 __fastcall sub_6A9F90(void *a1, unsigned __int64 *a2)
{
  unsigned int tinfo_attr; // ebx
  size_t v6; // r14
  void *v7; // r15
  void *v8; // rdi
  size_t v9; // rdx
  __int64 v10; // rsi
  __int64 idati; // rax
  __int64 tinfo_property; // [rsp+10h] [rbp-A0h] BYREF
  void *src; // [rsp+18h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+20h] [rbp-90h]
  void *v15; // [rsp+38h] [rbp-78h] BYREF
  __int128 v16; // [rsp+40h] [rbp-70h]
  void *ptr; // [rsp+58h] [rbp-58h] BYREF
  __int128 v18; // [rsp+60h] [rbp-50h]
  unsigned __int64 v19; // [rsp+70h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(*a2, 9);
  ptr = nullptr;
  v18 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 14, 1);
  *(_QWORD *)&v18 = 14;
  strcpy((char *)ptr, "__org_typedef");
  tinfo_attr = get_tinfo_attr(*a2, (__int64)&ptr, (__int64)&src, 0);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  if ( (_BYTE)tinfo_attr )
  {
    v6 = n[0];
    v7 = src;
    v15 = nullptr;
    v16 = 0;
    if ( n[0] )
    {
      v8 = nullptr;
      v9 = n[0] + 1;
      if ( n[0] != -1 )
      {
        v15 = (void *)qvector_reserve(&v15, 0, v9, 1);
        v9 = v6 + 1;
        v8 = v15;
      }
      *(_QWORD *)&v16 = v9;
      memmove(v8, v7, v6);
      *((_BYTE *)v15 + v6) = 0;
      v10 = tinfo_property & 0xC0 | 0x3D;
      if ( v15 )
      {
        *(_QWORD *)&v18 = v15;
        WORD4(v18) = 0;
        if ( !a1 )
        {
          idati = get_idati(v8, v10);
          LOBYTE(v10) = tinfo_property & 0xC0 | 0x3D;
          a1 = (void *)idati;
        }
        ptr = a1;
        create_tinfo(a2, (unsigned __int8)v10, 61, &ptr);
        if ( v15 )
        {
          *(_QWORD *)&v16 = 0;
          qfree(v15);
        }
      }
    }
  }
  else
  {
    v18 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 13, 1);
    *(_QWORD *)&v18 = 13;
    strcpy((char *)ptr, "__org_arrdim");
    tinfo_attr = get_tinfo_attr(*a2, (__int64)&ptr, (__int64)&src, 0);
    if ( ptr )
    {
      *(_QWORD *)&v18 = 0;
      qfree(ptr);
    }
    if ( (_BYTE)tinfo_attr )
      tinfo_attr = sub_6A9EC0((__int64)a2, &tinfo_property, (unsigned __int64 *)&src);
  }
  clear_tinfo_t(&tinfo_property);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return tinfo_attr;
}
