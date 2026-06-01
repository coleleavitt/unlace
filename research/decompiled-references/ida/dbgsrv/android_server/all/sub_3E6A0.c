/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E6A0
// Address: 0x000000000003E6A0

//----- (000000000003E6A0) ----------------------------------------------------
void __fastcall sub_3E6A0(_QWORD *a1)
{
  void *v2; // x0
  FILE *v3; // x0
  size_t v4; // x0
  unsigned __int64 v5; // x8
  size_t v6; // x0
  __int64 v7; // x27
  const char *v8; // x28
  size_t v9; // x8
  const char *v10; // x0
  __int128 v11; // [xsp+0h] [xbp-D0h] BYREF
  __int128 v12; // [xsp+10h] [xbp-C0h] BYREF
  char v13[24]; // [xsp+30h] [xbp-A0h] BYREF
  void *ptr; // [xsp+48h] [xbp-88h]
  __int64 v15; // [xsp+50h] [xbp-80h]
  __int64 v16; // [xsp+58h] [xbp-78h]
  __int64 v17; // [xsp+68h] [xbp-68h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = (void *)a1[232];
  if ( v2 )
  {
    a1[233] = 0;
    qfree(v2);
    a1[232] = 0;
    a1[234] = 0;
  }
  v3 = (FILE *)a1[240];
  a1[235] = 0;
  if ( v3 )
  {
    rewind(v3);
    ptr = nullptr;
    v15 = 0;
    v16 = 0;
    while ( sub_3E8A0((__int64)a1, (__int64)&v12) )
    {
      if ( (unsigned __int64)v12 < *((_QWORD *)&v12 + 1) && __strchr_chk(v13, 120, 8) )
      {
        v4 = __strlen_chk(".oat", 5);
        if ( !v4 )
          goto LABEL_23;
        v5 = v15 ? v15 - 1 : 0LL;
        if ( v5 >= v4 && !strncmp((char *)ptr + v5 - v4, ".oat", v4) )
          goto LABEL_23;
        v6 = __strlen_chk(".odex", 6);
        if ( !v6 )
          goto LABEL_23;
        v8 = (const char *)ptr;
        v7 = v15;
        v9 = v15 - 1;
        if ( !v15 )
          v9 = 0;
        if ( v9 >= v6 && !strncmp((char *)ptr + v9 - v6, ".odex", v6)
          || (v7 ? (v10 = v8) : (v10 = &byte_F154B), strstr(v10, "jit-cache")) )
        {
LABEL_23:
          v11 = v12;
          rangeset_t_add((__int64)(a1 + 232), (unsigned __int64 *)&v11);
        }
      }
    }
    sub_3A0D8((__int64)a1, "ART: refreshed code ranges: %d regions\n", *((_DWORD *)a1 + 466));
    if ( ptr )
    {
      v15 = 0;
      qfree(ptr);
    }
  }
}
// 36CE0: using guessed type __int64 __strchr_chk(const char *, ...);
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
