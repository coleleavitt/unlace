bool __fastcall sub_77F690(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  _DWORD *v6; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 33 > 3
    || (*(_DWORD *)(a1 + 40) & 7) != 6
    || *(_DWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL) != 2 )
  {
    return 0;
  }
  if ( (unsigned int)sub_77F620(a1) > 1 )
  {
    v2 = sub_B0E910(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL) + 48LL) & 0xFFFFFFFFFFFFFFF0LL));
    v3 = v2;
    if ( v2 )
    {
      if ( (unsigned __int8)sub_79C450(v2) )
      {
        v4 = *(_QWORD *)(v3 + 40);
        if ( (v4 & 7) == 0 )
        {
          v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v5 )
          {
            v6 = *(_DWORD **)(v5 + 16);
            if ( *v6 == 19 )
              return memcmp(v6 + 4, "destroying_delete_t", 0x13u) == 0;
          }
        }
      }
    }
  }
  return 0;
}

