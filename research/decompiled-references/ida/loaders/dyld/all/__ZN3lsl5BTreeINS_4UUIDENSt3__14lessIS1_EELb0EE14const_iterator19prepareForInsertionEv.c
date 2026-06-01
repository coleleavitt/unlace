__int64 **__fastcall lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::prepareForInsertion(
        __int64 **result)
{
  __int64 v1; // x9
  __int64 *v2; // x8
  __int64 **v3; // x19
  const void *v4; // x20
  int v5; // w11
  __int64 v6; // x10
  unsigned __int8 v7; // w21
  char *v8; // x11
  int v9; // w15
  int v10; // w11
  __int64 *v11; // x8
  __int64 v12; // x8
  unsigned int v13; // w20
  __int64 **v14; // x22
  int v15; // w0
  _QWORD *v16; // x22
  __int64 *v17; // t1
  char *v18; // x23
  unsigned __int8 *v19; // x23
  __int64 v20; // x9
  __int64 v21; // x10
  char *v22; // x8
  _BYTE *v23; // x8
  char v24; // w11
  unsigned int v25; // t1
  unsigned __int8 v26; // w9

  v1 = *((unsigned __int8 *)result + 116);
  v2 = *result;
  if ( (_DWORD)v1 != *((unsigned __int8 *)*result + 32) )
    lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::prepareForInsertion();
  v3 = result;
  v4 = result + 1;
  if ( *((char *)result[v1] + 248) >= 0 )
    v5 = 10;
  else
    v5 = 15;
  if ( (result[v1][31] & 0x7F) == v5 )
  {
    if ( !*((_BYTE *)result + 116) )
      goto LABEL_15;
    v6 = 0;
    v7 = 0;
    v8 = (char *)(result + 1);
    do
    {
      if ( *(char *)(*(_QWORD *)&v8[8 * v6] + 248LL) >= 0 )
        v9 = 10;
      else
        v9 = 15;
      if ( (*(_BYTE *)(*(_QWORD *)&v8[8 * v6] + 248LL) & 0x7F) != v9 )
        v7 = v6;
      ++v6;
    }
    while ( v1 != v6 );
    if ( !v7 )
    {
LABEL_15:
      if ( *(char *)(*(_QWORD *)v4 + 248LL) >= 0 )
        v10 = 10;
      else
        v10 = 15;
      if ( (*(_BYTE *)(*(_QWORD *)v4 + 248LL) & 0x7F) == v10 )
      {
        result = (__int64 **)lsl::Allocator::allocate_buffer((lsl::Allocator *)v2[1], 0x100u, 0x100u);
        v11 = (__int64 *)**v3;
        *((_BYTE *)result + 248) = 0;
        *(_OWORD *)result = 0u;
        *((_OWORD *)result + 1) = 0u;
        *((_OWORD *)result + 2) = 0u;
        *((_OWORD *)result + 3) = 0u;
        *((_OWORD *)result + 4) = 0u;
        *((_OWORD *)result + 5) = 0u;
        *((_OWORD *)result + 6) = 0u;
        *((_OWORD *)result + 7) = 0u;
        *((_OWORD *)result + 8) = 0u;
        *((_OWORD *)result + 9) = 0u;
        result[20] = v11;
        **v3 = (__int64)result;
        if ( *((_BYTE *)v3 + 116) )
        {
          result = (__int64 **)_platform_memmove((char *)v3 + 105, v3 + 13, *((unsigned __int8 *)v3 + 116));
          LODWORD(v1) = *((unsigned __int8 *)v3 + 116);
        }
        else
        {
          LODWORD(v1) = 0;
        }
        v12 = (__int64)&v3[(unsigned int)v1 + 1];
        if ( (const void *)v12 != v4 )
        {
          result = (__int64 **)_platform_memmove((void *)(v12 - 8LL * (unsigned int)v1 + 8), v4, 8LL * (unsigned int)v1);
          LOBYTE(v1) = *((_BYTE *)v3 + 116);
        }
        v7 = 0;
        *((_BYTE *)v3 + 104) = 0;
        v2 = *v3;
        v3[1] = (__int64 *)**v3;
        ++*((_BYTE *)v2 + 32);
        LOBYTE(v1) = v1 + 1;
        *((_BYTE *)v3 + 116) = v1;
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
        v14 = &v3[v7];
        v17 = v14[1];
        v16 = v14 + 1;
        v15 = (int)v17;
        v18 = (char *)v3 + v7;
        LODWORD(v17) = (unsigned __int8)v18[104];
        v19 = (unsigned __int8 *)(v18 + 104);
        result = (__int64 **)lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::NodeCore<15u,10u>::splitChild(
                               v15,
                               (int)v17,
                               (lsl::Allocator *)v2[1]);
        if ( *(char *)(*v16 + 248LL) < 0 )
          lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::prepareForInsertion(result);
        v20 = *v19;
        v21 = *(_QWORD *)(*v16 + 8 * v20 + 160);
        v22 = (char *)v3 + v13;
        v25 = (unsigned __int8)v22[104];
        v23 = v22 + 104;
        v24 = v25;
        if ( v25 > (*(_BYTE *)(v21 + 248) & 0x7Fu) )
        {
          v26 = v20 + 1;
          *v19 = v26;
          *v23 = v24 + (~*(_BYTE *)(v21 + 248) | 0x80);
          if ( *(char *)(*v16 + 248LL) < 0 )
            lsl::BTree<lsl::UUID,std::less<lsl::UUID>,false>::const_iterator::prepareForInsertion(result);
          v3[v13 + 1] = *(__int64 **)(*v16 + 8LL * v26 + 160);
        }
        v13 = ++v7 + 1;
        if ( v13 >= *((unsigned __int8 *)v3 + 116) )
          break;
        v2 = *v3;
      }
    }
  }
  return result;
}
