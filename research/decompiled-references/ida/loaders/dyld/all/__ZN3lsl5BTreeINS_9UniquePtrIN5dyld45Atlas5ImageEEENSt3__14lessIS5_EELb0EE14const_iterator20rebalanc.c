unsigned __int8 *__fastcall lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::rebalanceFromErasure(
        unsigned __int8 *result)
{
  unsigned int v1; // w8
  __int64 v2; // x25
  unsigned __int8 *v3; // x19
  unsigned __int8 v4; // w20
  __int64 v5; // x9
  __int64 v6; // x8
  unsigned __int8 *v7; // x27
  _QWORD *v8; // x27
  __int64 v9; // t1
  unsigned int v10; // w10
  unsigned int v11; // w11
  unsigned __int8 *v12; // x28
  __int64 v13; // x0
  _QWORD *v14; // x28
  __int64 v15; // t1
  unsigned __int8 *v16; // x26
  __int64 v17; // x2
  int v18; // w9
  int v19; // w12
  int v20; // w13
  char v21; // w14
  char v22; // w13
  char v23; // w13
  int v24; // w13
  unsigned __int8 *v25; // x21
  char v26; // w25
  unsigned __int8 v27; // w8
  void *v28; // x0
  _QWORD *v29; // x9
  __int64 v30; // x9

  v1 = result[98];
  v2 = *(_QWORD *)result;
  if ( v1 != *(unsigned __int8 *)(*(_QWORD *)result + 32LL) )
    lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::rebalanceFromErasure();
  v3 = result;
  if ( v1 >= 2 )
  {
    v4 = 0;
    do
    {
      v5 = (unsigned __int8)(v1 - v4 - 2);
      v6 = v5 + 1;
      v7 = &v3[8 * v5 + 8];
      v9 = *((_QWORD *)v7 + 1);
      v8 = v7 + 8;
      v10 = *(_BYTE *)(v9 + 248) & 0x7F;
      if ( *(char *)(v9 + 248) >= 0 )
        v11 = 7;
      else
        v11 = 15;
      if ( v10 >= v11 )
        break;
      v12 = &v3[8 * v5];
      v15 = *((_QWORD *)v12 + 1);
      v14 = v12 + 8;
      v13 = v15;
      v16 = &v3[v5 + 88];
      v17 = *v16;
      v18 = *(char *)(v15 + 248);
      if ( (_DWORD)v17 == (v18 & 0x7F) )
      {
        v19 = 0;
        if ( *v16 )
          goto LABEL_10;
      }
      else
      {
        if ( v18 < 0 )
          lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::rebalanceFromErasure();
        if ( *(char *)(*(_QWORD *)(v13 + 8 * v17 + 128) + 248LL) >= 0 )
          v24 = -7;
        else
          v24 = -15;
        v19 = v24 + (*(_BYTE *)(*(_QWORD *)(v13 + 8 * v17 + 128) + 248LL) & 0x7F);
        if ( *v16 )
        {
LABEL_10:
          if ( v18 < 0 )
            lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::rebalanceFromErasure();
          v20 = *(char *)(*(_QWORD *)(v13 + 8 * v17 + 112) + 248LL);
          v21 = v20 & 0x7F;
          if ( v20 >= 0 )
            v22 = -7;
          else
            v22 = -15;
          v23 = v22 + v21;
          goto LABEL_21;
        }
      }
      v23 = 0;
LABEL_21:
      if ( v19 < 1 || v19 < v23 )
      {
        v25 = &v3[v6 + 88];
        if ( v23 < 1 || v19 >= v23 )
        {
          if ( (_DWORD)v17 == (v18 & 0x7F) )
          {
            if ( v18 < 0 )
              lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::rebalanceFromErasure();
            *v16 = v17 - 1;
            *v25 += (*(_BYTE *)(*(_QWORD *)(v13 + 8LL * (unsigned __int8)(v17 - 1) + 120) + 248LL) & 0x7F) + 1;
            result = (unsigned __int8 *)lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::merge(
                                          *v14,
                                          *(_QWORD *)(v2 + 8),
                                          (unsigned __int8)(v17 - 1));
            if ( *(char *)(*v14 + 248LL) < 0 )
              lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::rebalanceFromErasure(result);
            *v8 = *(_QWORD *)(*v14 + 8LL * *v16 + 120);
          }
          else
          {
            result = (unsigned __int8 *)((__int64 (*)(void))lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::merge)();
          }
        }
        else
        {
          if ( v18 < 0 )
            lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::rebalanceFromErasure();
          v26 = *(_BYTE *)(*(_QWORD *)(v13 + 8 * v17 + 120) + 248LL);
          result = (unsigned __int8 *)lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::rotateFromLeft();
          if ( *(char *)(*v14 + 248LL) < 0 )
            lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::rebalanceFromErasure(result);
          *v25 += (*(_BYTE *)(*(_QWORD *)(*v14 + 8LL * *v16 + 120) + 248LL) & 0x7F) - (v26 & 0x7F);
        }
      }
      else
      {
        result = (unsigned __int8 *)lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::NodeCore<31u,15u>::rotateFromRight();
      }
      ++v4;
      v2 = *(_QWORD *)v3;
      v1 = *(unsigned __int8 *)(*(_QWORD *)v3 + 32LL);
    }
    while ( (int)(v1 - 1) > v4 );
  }
  if ( (*(_BYTE *)(*((_QWORD *)v3 + 1) + 248LL) & 0x7F) != 0 )
  {
    v27 = *(_BYTE *)(v2 + 32);
  }
  else
  {
    v28 = v3 + 88;
    if ( v3[88] )
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::rebalanceFromErasure(v28);
    _platform_memmove(v28, v3 + 89, v3[98] - 1LL);
    _platform_memmove(v3 + 8, v3 + 16, 8LL * v3[98]-- - 8);
    result = (unsigned __int8 *)lsl::Allocator::deallocate_buffer(
                                  *(lsl::Allocator **)(v2 + 8),
                                  *(void **)v2,
                                  0x100u,
                                  0x100u);
    v29 = *(_QWORD **)v3;
    v27 = *(_BYTE *)(*(_QWORD *)v3 + 32LL) - 1;
    *(_BYTE *)(*(_QWORD *)v3 + 32LL) = v27;
    if ( v3[98] )
      *v29 = *((_QWORD *)v3 + 1);
    else
      *v29 = 0;
  }
  if ( v27 )
  {
    v30 = 0;
    do
    {
      if ( (*(_BYTE *)(*(_QWORD *)&v3[8 * (unsigned __int8)(v27 + ~(_BYTE)v30) + 8] + 248LL) & 0x7F) != v3[(unsigned __int8)(v27 + ~(_BYTE)v30) + 88] )
        break;
      --v3[98];
      ++v30;
    }
    while ( v27 != v30 );
  }
  return result;
}
