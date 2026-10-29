/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8093FD0
// Address: 0x08093FD0

//----- (08093FD0) --------------------------------------------------------
_DWORD *__userpurge sub_8093FD0@<eax>(_DWORD *a1, int *a2, const void **a3)
{
  _DWORD *v3; // edi
  const void *v4; // ebp
  size_t v5; // esi
  _DWORD *v6; // eax
  unsigned int v8; // eax
  _DWORD *v9; // eax

  if ( (unsigned int)a2[3] > 0x14 )
  {
    v8 = std::_Hash_bytes(*a3, *((_DWORD *)*a3 - 3), 0xC70F6907);
    v9 = sub_8092080(*a2, a2[1], v8 % a2[1], *a3, v8);
    if ( v9 )
      v9 = (_DWORD *)*v9;
    *a1 = v9;
    return a1;
  }
  else
  {
    v3 = (_DWORD *)a2[2];
    if ( v3 )
    {
      v4 = *a3;
      v5 = *((_DWORD *)*a3 - 3);
LABEL_5:
      while ( 1 )
      {
        v6 = (_DWORD *)v3[1];
        if ( v5 == *(v6 - 3) )
          break;
        v3 = (_DWORD *)*v3;
        if ( !v3 )
          goto LABEL_11;
      }
      if ( v5 )
      {
        while ( memcmp(v4, v6, v5) )
        {
          v3 = (_DWORD *)*v3;
          if ( !v3 )
            goto LABEL_11;
          v6 = (_DWORD *)v3[1];
          if ( v5 != *(v6 - 3) )
          {
            v3 = (_DWORD *)*v3;
            if ( v3 )
              goto LABEL_5;
            goto LABEL_11;
          }
        }
      }
      *a1 = v3;
      return a1;
    }
    else
    {
LABEL_11:
      *a1 = 0;
      return a1;
    }
  }
}
