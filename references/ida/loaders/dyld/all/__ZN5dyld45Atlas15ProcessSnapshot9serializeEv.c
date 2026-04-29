__int64 *__usercall dyld4::Atlas::ProcessSnapshot::serialize@<X0>(
        __int64 *__return_ptr a1@<X8>,
        dyld4::Atlas::ProcessSnapshot *this@<X0>)
{
  __int64 v2; // x10
  __int64 v3; // x11
  __int64 *result; // x0
  _QWORD v5[6]; // [xsp+8h] [xbp-108h] BYREF
  __int64 v6; // [xsp+38h] [xbp-D8h] BYREF
  __int64 v7; // [xsp+40h] [xbp-D0h]
  __int64 v8; // [xsp+48h] [xbp-C8h]
  __int64 v9; // [xsp+50h] [xbp-C0h]
  __int64 v10; // [xsp+58h] [xbp-B8h] BYREF
  __int64 v11; // [xsp+60h] [xbp-B0h]
  __int64 v12; // [xsp+68h] [xbp-A8h]
  __int64 v13; // [xsp+70h] [xbp-A0h]
  __int64 v14; // [xsp+78h] [xbp-98h] BYREF
  __int64 v15; // [xsp+80h] [xbp-90h]
  __int64 v16; // [xsp+88h] [xbp-88h]
  __int64 v17; // [xsp+90h] [xbp-80h]
  __int64 v18; // [xsp+98h] [xbp-78h] BYREF
  __int64 v19; // [xsp+A0h] [xbp-70h]
  __int64 v20; // [xsp+A8h] [xbp-68h]
  __int64 v21; // [xsp+B0h] [xbp-60h]
  int v22; // [xsp+B8h] [xbp-58h]
  __int64 v23; // [xsp+BCh] [xbp-54h]
  __int64 v24; // [xsp+C4h] [xbp-4Ch]
  __int64 v25; // [xsp+D0h] [xbp-40h]
  __int64 v26; // [xsp+D8h] [xbp-38h]
  __int64 v27; // [xsp+E0h] [xbp-30h]
  char *v28; // [xsp+E8h] [xbp-28h]
  char *v29; // [xsp+F0h] [xbp-20h]
  char *v30; // [xsp+F8h] [xbp-18h]

  v2 = *(_QWORD *)this;
  v3 = *((_QWORD *)this + 1);
  v5[0] = this;
  v5[1] = v2;
  v5[2] = v3;
  v5[3] = (char *)this + 16;
  v5[4] = (char *)this + 64;
  v5[5] = (char *)this + 56;
  v6 = v2;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = v2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = v2;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = v2;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = -1491447450;
  v24 = 0;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = (char *)this + 80;
  v29 = (char *)this + 88;
  v30 = (char *)this + 96;
  result = dyld4::Atlas::ProcessSnapshot::Serializer::serialize(a1, (dyld4::Atlas::ProcessSnapshot::Serializer *)v5);
  if ( v19 )
    result = (__int64 *)lsl::Vector<unsigned int>::resize(&v18, 0);
  if ( v15 )
    result = (__int64 *)lsl::Vector<char>::resize((int)&v14, 0);
  if ( v11 )
    result = (__int64 *)lsl::Vector<char const*>::resize(&v10, 0);
  if ( v7 )
    return (__int64 *)lsl::Vector<lsl::UUID>::resize(&v6, 0);
  return result;
}
