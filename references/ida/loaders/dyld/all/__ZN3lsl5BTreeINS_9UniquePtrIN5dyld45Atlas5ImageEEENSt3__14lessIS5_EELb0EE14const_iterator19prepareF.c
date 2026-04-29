unsigned __int8 *__fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::prepareForInsertion(
        unsigned __int8 *result)
{
  __int64 v1; // x9
  _QWORD *v2; // x8
  unsigned __int8 *v3; // x19
  const void *v4; // x20
  int v5; // w11
  __int64 v6; // x10
  unsigned __int8 v7; // w21
  unsigned __int8 *v8; // x11
  int v9; // w15
  int v10; // w11
  __int64 buffer; // x0
  __int64 v12; // x8
  unsigned int v13; // w20
  unsigned __int8 *v14; // x22
  int v15; // w0
  unsigned __int8 *v16; // x22
  __int64 v17; // t1
  unsigned __int8 *v18; // x23
  unsigned __int8 *v19; // x23
  __int64 v20; // x9
  __int64 v21; // x10
  unsigned __int8 *v22; // x8
  _BYTE *v23; // x8
  char v24; // w11
  unsigned int v25; // t1
  unsigned __int8 v26; // w9

  v1 = result[98];
  v2 = *(_QWORD **)result;
  if ( (_DWORD)v1 != *(unsigned __int8 *)(*(_QWORD *)result + 32LL) )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::prepareForInsertion();
  v3 = result;
  v4 = result + 8;
  if ( *(char *)(*(_QWORD *)&result[8 * v1] + 248LL) >= 0 )
    v5 = 15;
  else
    v5 = 31;
  if ( (*(_BYTE *)(*(_QWORD *)&result[8 * v1] + 248LL) & 0x7F) == v5 )
  {
    if ( !result[98] )
      goto LABEL_15;
    v6 = 0;
    v7 = 0;
    v8 = result + 8;
    do
    {
      if ( *(char *)(*(_QWORD *)&v8[8 * v6] + 248LL) >= 0 )
        v9 = 15;
      else
        v9 = 31;
      if ( (*(_BYTE *)(*(_QWORD *)&v8[8 * v6] + 248LL) & 0x7F) != v9 )
        v7 = v6;
      ++v6;
    }
    while ( v1 != v6 );
    if ( !v7 )
    {
LABEL_15:
      if ( *(char *)(*(_QWORD *)v4 + 248LL) >= 0 )
        v10 = 15;
      else
        v10 = 31;
      if ( (*(_BYTE *)(*(_QWORD *)v4 + 248LL) & 0x7F) == v10 )
      {
        buffer = lsl::Allocator::allocate_buffer((lsl::Allocator *)v2[1], 0x100u, 0x100u);
        result = (unsigned __int8 *)lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::NodeCore(
                                      buffer,
                                      **(_QWORD **)v3);
        **(_QWORD **)v3 = result;
        if ( v3[98] )
        {
          result = (unsigned __int8 *)_platform_memmove(v3 + 89, v3 + 88, v3[98]);
          LODWORD(v1) = v3[98];
        }
        else
        {
          LODWORD(v1) = 0;
        }
        v12 = (__int64)&v3[8 * (unsigned int)v1 + 8];
        if ( (const void *)v12 != v4 )
        {
          result = (unsigned __int8 *)_platform_memmove(
                                        (void *)(v12 - 8LL * (unsigned int)v1 + 8),
                                        v4,
                                        8LL * (unsigned int)v1);
          LOBYTE(v1) = v3[98];
        }
        v7 = 0;
        v3[88] = 0;
        v2 = *(_QWORD **)v3;
        *((_QWORD *)v3 + 1) = **(_QWORD **)v3;
        ++*((_BYTE *)v2 + 32);
        LOBYTE(v1) = v1 + 1;
        v3[98] = v1;
      }
      else
      {
        v7 = 0;
      }
    }
    v13 = v7 + 1;
    if ( v13 < (unsigned __int8)v1 )
    {
      while ( 1 )
      {
        v14 = &v3[8 * v7];
        v17 = *((_QWORD *)v14 + 1);
        v16 = v14 + 8;
        v15 = v17;
        v18 = &v3[v7];
        LODWORD(v17) = v18[88];
        v19 = v18 + 88;
        result = (unsigned __int8 *)lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::splitChild(
                                      v15,
                                      v17,
                                      (lsl::Allocator *)v2[1]);
        if ( *(char *)(*(_QWORD *)v16 + 248LL) < 0 )
          lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::prepareForInsertion(result);
        v20 = *v19;
        v21 = *(_QWORD *)(*(_QWORD *)v16 + 8 * v20 + 120);
        v22 = &v3[v13];
        v25 = v22[88];
        v23 = v22 + 88;
        v24 = v25;
        if ( v25 > (*(_BYTE *)(v21 + 248) & 0x7Fu) )
        {
          v26 = v20 + 1;
          *v19 = v26;
          *v23 = v24 + (~*(_BYTE *)(v21 + 248) | 0x80);
          if ( *(char *)(*(_QWORD *)v16 + 248LL) < 0 )
            lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::prepareForInsertion(result);
          *(_QWORD *)&v3[8 * v13 + 8] = *(_QWORD *)(*(_QWORD *)v16 + 8LL * v26 + 120);
        }
        v13 = ++v7 + 1;
        if ( v13 >= v3[98] )
          break;
        v2 = *(_QWORD **)v3;
      }
    }
  }
  return result;
}
