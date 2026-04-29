_QWORD *__fastcall sub_13C80(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD *result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  switch ( *(_DWORD *)(a2 + 4) )
  {
    case 0:
      v5 = Z3_mk_fpa_rna(v4);
      goto LABEL_3;
    case 1:
      v5 = Z3_mk_fpa_rne(v4);
      goto LABEL_3;
    case 2:
      v5 = Z3_mk_fpa_rtp(v4);
      goto LABEL_3;
    case 3:
      v5 = Z3_mk_fpa_rtn(v4);
      goto LABEL_3;
    case 4:
      v5 = Z3_mk_fpa_rtz(v4);
LABEL_3:
      a1[1] = a2;
      *a1 = &off_4D850;
      a1[2] = v5;
      Z3_inc_ref(*(_QWORD *)(a2 + 8), v5);
      *a1 = &off_4D890;
      result = a1;
      break;
    default:
      a1[1] = a2;
      *a1 = &off_4D890;
      a1[2] = 0;
      result = a1;
      break;
  }
  return result;
}
