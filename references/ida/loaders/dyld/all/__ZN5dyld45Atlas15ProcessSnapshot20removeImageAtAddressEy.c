_QWORD *__fastcall dyld4::Atlas::ProcessSnapshot::removeImageAtAddress(dyld4::Atlas::ProcessSnapshot *this, __int64 a2)
{
  char *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x8
  __int128 v6; // q0
  __int128 v7; // q1
  __int128 v8; // q2
  __int64 v9; // x9
  _QWORD *result; // x0
  __int64 v11; // [xsp+8h] [xbp-198h] BYREF
  __int128 v12; // [xsp+10h] [xbp-190h]
  __int128 v13; // [xsp+20h] [xbp-180h]
  __int128 v14; // [xsp+30h] [xbp-170h]
  __int128 v15; // [xsp+40h] [xbp-160h]
  __int128 v16; // [xsp+50h] [xbp-150h]
  __int64 v17; // [xsp+60h] [xbp-140h]
  __int16 v18; // [xsp+68h] [xbp-138h]
  unsigned __int8 v19; // [xsp+6Ah] [xbp-136h]
  __int64 v20; // [xsp+70h] [xbp-130h] BYREF
  __int128 v21; // [xsp+78h] [xbp-128h]
  __int128 v22; // [xsp+88h] [xbp-118h]
  __int128 v23; // [xsp+98h] [xbp-108h]
  __int128 v24; // [xsp+A8h] [xbp-F8h]
  _BYTE v25[24]; // [xsp+B8h] [xbp-E8h]
  __int16 v26; // [xsp+D0h] [xbp-D0h]
  unsigned __int8 v27; // [xsp+D2h] [xbp-CEh]
  char *v28; // [xsp+E0h] [xbp-C0h] BYREF
  __int128 v29; // [xsp+E8h] [xbp-B8h]
  __int128 v30; // [xsp+F8h] [xbp-A8h]
  __int128 v31; // [xsp+108h] [xbp-98h]
  __int128 v32; // [xsp+118h] [xbp-88h]
  _QWORD v33[4]; // [xsp+128h] [xbp-78h] BYREF

  v3 = (char *)this + 16;
  v28 = (char *)this + 16;
  v29 = 0u;
  v30 = 0u;
  v31 = 0u;
  v32 = 0u;
  memset(v33, 0, 27);
  v4 = lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator++(&v28);
  v5 = *(_QWORD *)v4;
  v12 = *(_OWORD *)(v4 + 8);
  v6 = *(_OWORD *)(v4 + 72);
  v7 = *(_OWORD *)(v4 + 56);
  v8 = *(_OWORD *)(v4 + 40);
  v13 = *(_OWORD *)(v4 + 24);
  v14 = v8;
  v15 = v7;
  v16 = v6;
  v9 = *(_QWORD *)(v4 + 88);
  v18 = *(_WORD *)(v4 + 96);
  v17 = v9;
  LOBYTE(v9) = *(_BYTE *)(v4 + 98);
  v11 = v5;
  v19 = v9;
  *(_OWORD *)&v25[2] = 0u;
  v29 = 0u;
  v30 = 0u;
  v31 = 0u;
  v32 = 0u;
  memset(v33, 0, 27);
  v28 = v3;
  result = (_QWORD *)lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator<=>(
                       &v11,
                       &v28);
  if ( (_BYTE)result )
  {
    while ( *(_QWORD *)(*(_QWORD *)(*(&v11 + v19) + 8LL * *((unsigned __int8 *)&v17 + v19 - 1)) + 160LL) != a2 )
    {
      lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator++(&v11);
      *(_OWORD *)&v25[2] = 0u;
      v28 = v3;
      v29 = 0u;
      v30 = 0u;
      v31 = 0u;
      v32 = 0u;
      memset(v33, 0, 27);
      result = (_QWORD *)lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::const_iterator::operator<=>(
                           &v11,
                           &v28);
      if ( !(_BYTE)result )
        return result;
    }
    v20 = v11;
    v22 = v13;
    v23 = v14;
    v24 = v15;
    *(_OWORD *)v25 = v16;
    v21 = v12;
    *(_QWORD *)&v25[16] = v17;
    v26 = v18;
    v27 = v19;
    return lsl::BTree<lsl::UniquePtr<dyld4::Atlas::Image>,std::less<lsl::UniquePtr<dyld4::Atlas::Image>>,false>::erase(
             &v28,
             v3,
             &v20);
  }
  return result;
}
