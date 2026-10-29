__int64 __fastcall dwarf_discr_list(Dwarf_Debug a1, const void *a2, size_t a3, _QWORD *a4, size_t *a5, __int64 a6)
{
  unsigned int v7; // ecx
  void *v12; // rax
  void *v13; // r15
  _QWORD *alloc; // rax
  size_t v15; // rbp
  void *v16; // rax
  _QWORD *src; // [rsp+0h] [rbp-58h]
  size_t nmemb[9]; // [rsp+10h] [rbp-48h] BYREF

  nmemb[1] = __readfsqword(0x28u);
  nmemb[0] = 0;
  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
  {
    v7 = -1;
    if ( !a3 )
      return v7;
    v12 = calloc(a3, 1u);
    v13 = v12;
    if ( v12 )
    {
      memcpy(v12, a2, a3);
      if ( (unsigned int)sub_1A0F0((__int64)a1, (unsigned __int64)v13, a3, 0, nullptr, nmemb, a6) )
      {
        free(v13);
      }
      else
      {
        alloc = (_QWORD *)_dwarf_get_alloc(a1, 62, 1);
        if ( alloc )
        {
          alloc[3] = a3;
          v15 = nmemb[0];
          alloc[2] = v13;
          *alloc = a1;
          src = alloc;
          v16 = calloc(v15, 0x28u);
          v7 = 0;
          if ( v16 )
          {
            src[1] = v15;
            src[5] = v16;
            src[4] = 0;
            *a4 = src;
            *a5 = v15;
            return v7;
          }
          free(v13);
          src[2] = 0;
          src[3] = 0;
          dwarf_dealloc(a1, src, 0x3Eu);
          _dwarf_error(a1, a6, 62);
        }
        else
        {
          free(v13);
          _dwarf_error(a1, a6, 62);
        }
      }
    }
    else
    {
      _dwarf_error(a1, a6, 62);
    }
  }
  else
  {
    _dwarf_error_string(
      0,
      a6,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_discr_list()either null or it containsa stale Dwarf_Debug pointer");
  }
  return 1;
}

