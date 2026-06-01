/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: getsysfile
// Address: 0x00000000000B737C

//----- (00000000000B737C) ----------------------------------------------------
const char *__fastcall getsysfile(size_t a1, unsigned __int64 a2, __int64 a3, char *a4)
{
  __int64 v7; // x24
  unsigned __int64 v8; // x25
  const char *v9; // x0
  const char *v10; // x19
  void **v11; // x0
  unsigned __int64 v12; // x20
  __int64 v13; // x21
  unsigned __int64 v14; // x22
  void *v15; // x8
  void **v16; // x24
  void *ptr; // [xsp+0h] [xbp-70h] BYREF
  unsigned __int64 v19; // [xsp+8h] [xbp-68h]
  __int64 v20; // [xsp+10h] [xbp-60h]
  __int64 v21; // [xsp+18h] [xbp-58h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  ptr = nullptr;
  v19 = 0;
  v20 = 0;
  get_ida_subdirs((__int64)&ptr, a4, 0);
  if ( !v19 )
  {
    v10 = nullptr;
    v11 = (void **)ptr;
    if ( !ptr )
      return v10;
    goto LABEL_10;
  }
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)((char *)ptr + v7 + 8)
       ? qmakepath(a1, a2, *(char **)((char *)ptr + v7), a3, 0)
       : qmakepath(a1, a2, &byte_F154B, a3, 0);
    v10 = v9;
    if ( qfileexist(v9) )
      break;
    ++v8;
    v7 += 24;
    if ( v8 >= v19 )
    {
      v10 = nullptr;
      break;
    }
  }
  v11 = (void **)ptr;
  if ( ptr )
  {
LABEL_10:
    v12 = v19;
    if ( v19 )
    {
      v13 = 0;
      v14 = 1;
      v15 = *v11;
      if ( *v11 )
        goto LABEL_14;
      while ( v14 < v12 )
      {
        v11 = (void **)ptr;
        ++v14;
        v13 += 3;
        v15 = *(void **)((char *)ptr + v13 * 8);
        if ( v15 )
        {
LABEL_14:
          v16 = &v11[v13];
          v11[v13 + 1] = nullptr;
          qfree(v15);
          *v16 = nullptr;
          v16[2] = nullptr;
        }
      }
      v11 = (void **)ptr;
    }
    v19 = 0;
    qfree(v11);
    ptr = nullptr;
    v20 = 0;
  }
  return v10;
}
// F154B: using guessed type char byte_F154B;
