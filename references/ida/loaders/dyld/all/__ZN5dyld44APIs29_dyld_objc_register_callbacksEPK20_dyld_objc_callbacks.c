void __fastcall dyld4::APIs::_dyld_objc_register_callbacks(dyld4::PrebuiltLoaderSet **a1, __int64 a2)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  lsl::Lock *v8; // x0
  __int64 v9; // x5
  dyld4::PrebuiltLoaderSet *v10; // x0
  __int64 _48; // [xsp+48h] [xbp+8h]

  if ( *((_BYTE *)a1[1] + 184) )
    dyld4::RuntimeState::log(
      (dyld4::RuntimeState *)a1,
      "_dyld_objc_register_callbacks(%lu, %p, %p, %p, %p)\n",
      *(_QWORD *)a2,
      *(const void **)(a2 + 8),
      *(const void **)(a2 + 16),
      *(const void **)(a2 + 248),
      *(const void **)(a2 + 32));
  if ( *(_QWORD *)a2 == 2 )
  {
    v6 = *(_QWORD *)(a2 + 24);
    v7 = *(_QWORD *)(a2 + 32);
    v9 = *(_QWORD *)(a2 + 8);
    v5 = *(_QWORD *)(a2 + 16);
    v8 = (lsl::Lock *)a1;
    v4 = 0;
  }
  else
  {
    if ( *(_QWORD *)a2 != 1 )
      goto LABEL_8;
    v4 = *(_QWORD *)(a2 + 8);
    v5 = *(_QWORD *)(a2 + 16);
    v6 = *(_QWORD *)(a2 + 24);
    v7 = *(_QWORD *)(a2 + 32);
    v8 = (lsl::Lock *)a1;
    v9 = 0;
  }
  dyld4::RuntimeState::setObjCNotifiers(v8, v4, v5, v6, v7, v9);
LABEL_8:
  v10 = a1[85];
  if ( v10 )
  {
    if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    dyld4::PrebuiltLoaderSet::logDuplicateObjCClasses(v10, a1);
  }
}
