/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8ADF0
// Address: 0x000000000008ADF0

//----- (000000000008ADF0) ----------------------------------------------------
bool __fastcall sub_8ADF0(__int64 a1, __int64 a2, int8x16x2_t a3)
{
  int v4; // w0
  char v5; // w23
  int v6; // w20
  _BOOL4 v7; // w24
  unsigned int *v8; // x2
  unsigned int *v9; // x0
  pthread_mutex_t *v10; // x0
  _BOOL4 v11; // w19
  const void *align; // x1
  int owner; // w8
  void *ptr; // [xsp+8h] [xbp-2E8h] BYREF
  unsigned __int64 v16; // [xsp+10h] [xbp-2E0h]
  __int64 v17; // [xsp+18h] [xbp-2D8h]
  pthread_mutex_t v18[2]; // [xsp+20h] [xbp-2D0h] BYREF
  __int64 v19[67]; // [xsp+88h] [xbp-268h] BYREF
  char v20; // [xsp+2A0h] [xbp-50h]
  __int64 v21; // [xsp+2A8h] [xbp-48h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_4ECD4((__int64)&v18[0].__list, a2, 0, a3);
  sub_4B3A8((__int64)&v18[0].__list, nullptr);
  if ( sub_4B3EC((__int64)&v18[0].__list)
    && (sub_4B520((_WORD *)&v18[0].__align + 12) & 1) != 0
    && (sub_4F984((__int64)&v18[0].__list) & 1) != 0 )
  {
    v4 = sub_4BF1C((__int64)&v18[0].__list);
    v5 = v20;
    v6 = v4;
    memset(v18, 0, 24);
    ptr = nullptr;
    v16 = 0;
    v17 = 0;
    v7 = sub_55A34((__int64)v19, 1, ".debug_info")
      || sub_55A34((__int64)v19, 1879048222, ".debug_info")
      || sub_55A34((__int64)v19, 1, ".zdebug_info") != nullptr;
    v8 = sub_55A34((__int64)v19, 7, ".note.gnu.build-id");
    if ( (v8 || (v8 = sub_55A34((__int64)v19, 7, ".note.go.buildid")) != nullptr) && !(*((_QWORD *)v8 + 4) >> 16) )
      sub_511B8(v19, v18, (__int64)v8);
    v9 = sub_55A34((__int64)v19, 1, ".gnu_debuglink");
    if ( v9 )
      sub_52750((__int64)&v18[0].__list, (__int64)&ptr, *((_QWORD *)v9 + 3));
    v10 = (pthread_mutex_t *)(a1 + 1034);
    if ( v16 > 1 )
      qstrncpy(v10, (char *)ptr, 4096);
    else
      v10->__size[0] = 0;
    align = (const void *)v18[0].__align;
    owner = v18[0].__owner;
    *(_DWORD *)(a1 + 4) = v6;
    if ( (unsigned __int64)owner > 0x400 )
      owner = 1024;
    *(_WORD *)(a1 + 8) = owner;
    memmove((void *)(a1 + 10), align, owner);
    *(_BYTE *)a1 = v5;
    *(_BYTE *)(a1 + 1) = v7;
    v11 = 1;
    if ( !*(&v18[0].__align + 1) && !v7 )
      v11 = v16 > 1;
    if ( ptr )
    {
      v16 = 0;
      qfree(ptr);
      ptr = nullptr;
      v17 = 0;
    }
    if ( v18[0].__align )
    {
      *(&v18[0].__align + 1) = 0;
      qfree((void *)v18[0].__align);
      v18[0].__align = 0;
      *(&v18[0].__align + 2) = 0;
    }
  }
  else
  {
    v11 = 0;
  }
  sub_4BE70(&v18[0].__list.__prev);
  return v11;
}
