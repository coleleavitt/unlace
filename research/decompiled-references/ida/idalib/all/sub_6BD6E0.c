__int64 __fastcall sub_6BD6E0(__int64 *a1, void *a2, char a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // r13
  char v7; // al
  void *v8; // r14
  const char *v9; // r15
  unsigned int v10; // ebp
  char v11; // cl
  unsigned int tinfo_property; // eax
  __int64 v14; // [rsp+0h] [rbp-60h] BYREF
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v16; // [rsp+10h] [rbp-50h]
  unsigned __int64 v17; // [rsp+20h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v6 = (__int64 *)a4;
  v16 = 0;
  ptr = nullptr;
  v7 = sub_6B9E00(a1, (__int64)&ptr, a2, a4, a5);
  v8 = ptr;
  if ( !v7 )
    goto LABEL_13;
  v9 = (const char *)ptr;
  if ( !(_QWORD)v16 )
    v9 = haystack;
  v10 = sub_6500C0((__int64)a1, a1[1], v9);
  if ( v10 )
  {
    v11 = (a3 & 2) != 0;
    goto LABEL_6;
  }
  if ( (a3 & 1) == 0 )
  {
LABEL_13:
    v10 = 0;
    goto LABEL_14;
  }
  v14 = 0;
  if ( get_tinfo_by_edm_name(&v14, 0, v9) == -1 )
    tinfo_property = sub_6BD560((__int64)a1, v9, 0, nullptr);
  else
    tinfo_property = get_tinfo_property(v14, 7);
  v10 = tinfo_property;
  if ( !tinfo_property )
  {
    clear_tinfo_t(&v14);
    goto LABEL_13;
  }
  clear_tinfo_t(&v14);
  v11 = 0;
LABEL_6:
  v14 = 0;
  if ( v6 || v11 )
  {
    if ( !v6 )
      v6 = &v14;
    v10 = sub_6BA720((__int64)a1, v6, v10, v11);
  }
  clear_tinfo_t(&v14);
LABEL_14:
  if ( v8 )
    qfree(v8);
  return v10;
}
