_QWORD *__fastcall sub_22279E0(_QWORD *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  _QWORD *v6; // rcx
  char *v7; // rax
  _QWORD *v8; // rsi
  _QWORD v9[4]; // [rsp+8h] [rbp-20h] BYREF

  *a4 = 0;
  switch ( a3 )
  {
    case 4LL:
      v6 = &unk_2C75B40;
      break;
    case 5LL:
      v6 = &unk_2C75B58;
      break;
    case 6LL:
      v6 = &unk_2C75B70;
      break;
    case 7LL:
      v6 = &unk_2C75B88;
      break;
    case 8LL:
      v6 = &unk_2C75BA0;
      break;
    case 9LL:
      v6 = &unk_2C75BB8;
      break;
    case 10LL:
      v6 = &unk_2C75BD0;
      break;
    default:
LABEL_8:
      *a1 = 0;
      return a1;
  }
  v7 = (char *)v6[1];
  v8 = (_QWORD *)(v6[2] + a2);
  if ( ((unsigned __int8)v7 & 1) != 0 )
    v7 = *(char **)&v7[*v8 - 1];
  ((void (__fastcall *)(_QWORD *, _QWORD *))v7)(v9, v8);
  if ( !v9[0] )
  {
    *a4 = 1;
    goto LABEL_8;
  }
  *a1 = v9[0];
  return a1;
}
