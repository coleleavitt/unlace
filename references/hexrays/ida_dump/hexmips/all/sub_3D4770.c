unsigned __int64 __fastcall sub_3D4770(__int64 a1, __int64 *a2, __int64 a3)
{
  const char *v4; // rcx
  const char *v5; // rdx
  const char *v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  get_ea_name(&v7, *(_QWORD *)(a3 + 40), 0, 0);
  v4 = s1;
  if ( (_QWORD)v8 )
    v4 = v7;
  switch ( *(_DWORD *)(a3 + 12) )
  {
    case 0:
      v5 = "MMAT_ZERO";
      break;
    case 1:
      v5 = "MMAT_GENERATED";
      break;
    case 2:
      v5 = "MMAT_PREOPTIMIZED";
      break;
    case 3:
      v5 = "MMAT_LOCOPT";
      break;
    case 4:
      v5 = "MMAT_CALLS";
      break;
    case 5:
      v5 = "MMAT_GLBOPT1";
      break;
    case 6:
      v5 = "MMAT_GLBOPT2";
      break;
    case 7:
      v5 = "MMAT_GLBOPT3";
      break;
    case 8:
      v5 = "MMAT_LVARS";
      break;
    case 9:
      v5 = "MMAT_FINAL";
      break;
    default:
      v5 = "???";
      break;
  }
  sub_67670(a2, (__int64)"%s %s:%d.%d", v5, v4, *(_DWORD *)(a3 + 20), *(_DWORD *)(a3 + 24));
  if ( *(_QWORD *)(a3 + 56) != -1 )
    sub_F68D0(a2, (__int64)" (%a)", 0.0);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v9 - __readfsqword(0x28u);
}
