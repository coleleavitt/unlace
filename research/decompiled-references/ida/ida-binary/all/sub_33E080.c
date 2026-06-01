__int64 __fastcall sub_33E080(QT::QWidget *this, __int64 a2, const char *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // r12d
  char v9; // r14
  const char *nlist_name; // r15
  size_t v11; // rdx
  _QWORD *func; // rdx
  int v13; // eax
  const char *v14; // rdi
  const char *nlist_demangled_name; // rax
  unsigned int v16; // eax
  __int64 nlist_idx; // [rsp+8h] [rbp-60h]
  const char *v18; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v7 = is_in_nlist(a3);
  if ( !(_BYTE)v7 )
    return v7;
  v9 = *((_BYTE *)QT::QCoreApplication::self + 745);
  nlist_idx = get_nlist_idx(a3, a2, v4, v5, v6);
  v18 = nullptr;
  nlist_name = (const char *)get_nlist_name(nlist_idx);
  v19 = 0;
  if ( v9 )
  {
    if ( (unsigned __int8)is_get_nlist_demangled_name_supported() )
    {
      nlist_demangled_name = (const char *)get_nlist_demangled_name(nlist_idx);
      if ( nlist_demangled_name )
      {
        nlist_name = nlist_demangled_name;
        v11 = strlen(nlist_demangled_name);
        goto LABEL_6;
      }
    }
    else
    {
      v16 = getinf(36);
      if ( (int)demangle_name(&v18, nlist_name, v16, 2) > 0 )
      {
        nlist_name = &s1;
        if ( (_QWORD)v19 )
          nlist_name = v18;
      }
    }
  }
  if ( nlist_name )
  {
    v11 = strlen(nlist_name);
  }
  else
  {
    v11 = 0;
    nlist_name = (const char *)&unk_5C2F25;
  }
LABEL_6:
  sub_4DC370(a2, nlist_name, v11);
  sub_4DC3F0(a2, a3);
  if ( (unsigned __int8)is_public_name(a3) )
    sub_4DC380(a2, 80);
  else
    sub_4DC3D0(a2);
  func = (_QWORD *)get_func(a3);
  if ( func )
    sub_2DBCA0(this, a2 + 112, func);
  v13 = sub_304FC0((__int64)QT::QCoreApplication::self, (__int64)a3);
  v14 = v18;
  *(_DWORD *)(a2 + 124) = v13;
  if ( v14 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v14, a3);
  }
  return v7;
}
