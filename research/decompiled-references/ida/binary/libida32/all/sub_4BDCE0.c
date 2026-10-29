_QWORD *__fastcall sub_4BDCE0(__int64 *a1, const void **a2)
{
  _QWORD *v2; // rbx
  const void *v3; // r12
  size_t v4; // rbp
  _QWORD *v5; // rsi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rax

  if ( (unsigned __int64)a1[3] <= 0x14 )
  {
    v2 = (_QWORD *)a1[2];
    if ( v2 )
    {
      v3 = *a2;
      v4 = *((_QWORD *)*a2 - 3);
LABEL_5:
      while ( 1 )
      {
        v5 = (_QWORD *)v2[1];
        if ( v4 == *(v5 - 3) )
          break;
        v2 = (_QWORD *)*v2;
        if ( !v2 )
          return v2;
      }
      if ( v4 )
      {
        while ( memcmp(v3, v5, v4) )
        {
          v2 = (_QWORD *)*v2;
          if ( !v2 )
            break;
          v5 = (_QWORD *)v2[1];
          if ( *(v5 - 3) != v4 )
          {
            v2 = (_QWORD *)*v2;
            if ( v2 )
              goto LABEL_5;
            return v2;
          }
        }
      }
    }
    return v2;
  }
  v7 = std::_Hash_bytes(*a2, *((_QWORD *)*a2 - 3), 0xC70F6907);
  v8 = sub_4B1200(*a1, a1[1], v7 % a1[1], *a2, v7);
  v2 = v8;
  if ( !v8 )
    return v2;
  return (_QWORD *)*v8;
}

