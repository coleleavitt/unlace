__int64 __fastcall sub_B11880(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi
  const char *v6; // rsi
  const char *v7; // rsi

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v3 )
  {
    case 0:
      v7 = "__attribute__((device_kernel";
      goto LABEL_13;
    case 1:
    case 2:
      v4 = "[[clang::device_kernel";
      goto LABEL_6;
    case 3:
      v7 = "__attribute__((sycl_kernel";
      goto LABEL_13;
    case 4:
    case 5:
      v4 = "[[clang::sycl_kernel";
      goto LABEL_6;
    case 6:
      v7 = "__attribute__((nvptx_kernel";
      goto LABEL_13;
    case 7:
    case 8:
      v4 = "[[clang::nvptx_kernel";
      goto LABEL_6;
    case 9:
      v7 = "__attribute__((amdgpu_kernel";
LABEL_13:
      sub_995540(a2, v7);
      return sub_995540(a2, "))");
    case 10:
    case 11:
      v4 = "[[clang::amdgpu_kernel";
LABEL_6:
      sub_995540(a2, v4);
      return sub_995540(a2, "]]");
    case 12:
      v6 = "__kernel";
      goto LABEL_11;
    case 13:
      v6 = "kernel";
LABEL_11:
      sub_995540(a2, v6);
      return sub_995540(a2, &byte_22F0C30);
  }
}
