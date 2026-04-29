__int64 __fastcall dyld3::kdebug_trace_dyld_region(
        dyld3 *this,
        __int64 a2,
        int a3,
        __int64 a4,
        const char *a5,
        const unsigned __int8 (*a6)[16],
        fsobj_id a7,
        fsid a8,
        const void *a9)
{
  __int16 v15; // w27
  __int64 v16; // x25
  __int64 v17; // x26
  __int64 _58; // [xsp+58h] [xbp+8h]

  v15 = 4 * (_WORD)this;
  v16 = (4 * ((unsigned __int16)this & 0x3FFF)) | 0x1F050000u;
  v17 = kdebug_trace_string(v16, 0, a4);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))kdebug_trace)(
    v16,
    *(_QWORD *)a5,
    *((_QWORD *)a5 + 1),
    a8,
    (int)a7.fid_objno | *(_QWORD *)&a7 & 0xFFFFFFFF00000000LL);
  kdebug_trace((v15 + 4) & 0xFFFC | 0x1F050000u, (const unsigned __int8 *)a6, v17, a3 | (unsigned __int64)(a2 << 32), 0);
  if ( ((_58 ^ (2 * _58)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return kdebug_trace_string(v16, v17, 0);
}
