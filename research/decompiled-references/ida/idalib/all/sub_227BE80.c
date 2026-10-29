void *__fastcall sub_227BE80(__int64 a1, unsigned __int8 *a2, size_t a3)
{
  _BYTE *v5; // rdi
  void *result; // rax

  v5 = *(_BYTE **)(a1 + 32);
  switch ( a3 )
  {
    case 0uLL:
      goto LABEL_3;
    case 1uLL:
      goto LABEL_7;
    case 2uLL:
      goto LABEL_6;
    case 3uLL:
      goto LABEL_5;
    case 4uLL:
      v5[3] = a2[3];
      v5 = *(_BYTE **)(a1 + 32);
LABEL_5:
      v5[2] = a2[2];
      v5 = *(_BYTE **)(a1 + 32);
LABEL_6:
      v5[1] = a2[1];
      v5 = *(_BYTE **)(a1 + 32);
LABEL_7:
      result = (void *)*a2;
      *v5 = (_BYTE)result;
      *(_QWORD *)(a1 + 32) += a3;
      break;
    default:
      result = memcpy(v5, a2, a3);
      v5 = *(_BYTE **)(a1 + 32);
LABEL_3:
      *(_QWORD *)(a1 + 32) = &v5[a3];
      break;
  }
  return result;
}
