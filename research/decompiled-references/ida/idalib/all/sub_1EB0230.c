std::_V2 *__fastcall sub_1EB0230(std::_V2 *a1, __int64 a2)
{
  char *v2; // rbx
  __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  char v9; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a2 + 8) <= 3u )
  {
    v5 = std::_V2::generic_category(a1);
    sub_A09EA0((__int64)a1, 0x54u, v5, "file too small to contain precompiled file magic");
  }
  else
  {
    v2 = "CPCHL";
    while ( 1 )
    {
      v3 = (unsigned int)*v2;
      sub_A0B360((__int64)&v8, a2, 8u);
      if ( (v9 & 1) != 0 )
      {
        v6 = v8;
        v8 = 0;
        *(_QWORD *)a1 = v6;
        goto LABEL_10;
      }
      if ( v8 != v3 )
        break;
      ++v2;
      sub_A0AE70(&v8);
      if ( "L" == v2 )
      {
        *(_QWORD *)a1 = 0;
        return a1;
      }
    }
    v7 = std::_V2::generic_category((std::_V2 *)&v8);
    sub_A09EA0((__int64)a1, 0x54u, v7, "file doesn't start with precompiled file magic");
LABEL_10:
    sub_A0AE70(&v8);
  }
  return a1;
}
