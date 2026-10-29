__int64 __fastcall sub_105BBE0(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, size_t a5, char ***a6)
{
  size_t v8; // rbx
  _WORD *v9; // rbp
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax

  if ( a5 )
  {
    v8 = a5;
    v9 = a4;
    if ( a5 == 6 )
      goto LABEL_3;
LABEL_8:
    if ( v8 != j__strlen("octeon+") )
      goto LABEL_5;
    if ( !v8 )
    {
LABEL_11:
      v11 = j__strlen("cnmipsp");
      *(_BYTE *)sub_102FB20(a2, "cnmipsp", v11) = 1;
LABEL_12:
      v12 = j__strlen("cnmips");
      *(_BYTE *)sub_102FB20(a2, "cnmips", v12) = 1;
      v13 = j__strlen("mips64r2");
      *(_BYTE *)sub_102FB20(a2, "mips64r2", v13) = 1;
      return sub_102FFA0(a1, a2, a3, (__int64)v9, v8, a6);
    }
LABEL_10:
    if ( memcmp(v9, "octeon+", v8) )
      goto LABEL_5;
    goto LABEL_11;
  }
  v8 = *(_QWORD *)(a1 + 520);
  v9 = *(_WORD **)(a1 + 512);
  if ( v8 != 6 )
    goto LABEL_8;
LABEL_3:
  if ( *(_DWORD *)v9 == 1702126447 && v9[2] == 28271 )
    goto LABEL_12;
  if ( j__strlen("octeon+") == 6 )
    goto LABEL_10;
LABEL_5:
  *(_BYTE *)sub_102FB20(a2, v9, v8) = 1;
  return sub_102FFA0(a1, a2, a3, (__int64)v9, v8, a6);
}
