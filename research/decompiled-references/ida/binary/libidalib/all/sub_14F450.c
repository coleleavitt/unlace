__int64 __fastcall sub_14F450(__int64 a1, _QWORD *a2)
{
  _BYTE *v3; // [rsp+10h] [rbp-30h]

  if ( *a2 && (unsigned int)get_named_type() && (*v3 & 0x3F) == 0x3D )
    deserialize_tinfo();
  clear_tinfo_t();
  return 0;
}

