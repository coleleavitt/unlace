__int64 __fastcall sub_1EF5660(__int64 *a1, _QWORD *a2)
{
  char *v2; // rax
  unsigned __int8 v3; // bl
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rcx

  v2 = (char *)(*a2)++;
  v3 = *v2;
  switch ( *v2 )
  {
    case 0:
    case 8:
    case 9:
      v7 = *(_QWORD *)(v2 + 1);
      v8 = (_QWORD *)*a1;
      *a2 = v2 + 9;
      sub_1EE2BD0(v8, a1[1], v7);
      result = v3;
      break;
    case 1:
    case 2:
    case 11:
      v5 = *(_DWORD *)(v2 + 1);
      v6 = *a1;
      *a2 = v2 + 5;
      sub_1EF55A0(v6, a1[1], v5);
      result = v3;
      break;
    case 6:
      *a2 = v2 + 2;
      result = v3;
      break;
    default:
      result = v3;
      break;
  }
  return result;
}
