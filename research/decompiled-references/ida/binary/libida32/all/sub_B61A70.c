__int64 __fastcall sub_B61A70(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // eax
  __int64 result; // rax
  _QWORD *v6; // rdx

  v2 = *a1;
  v3 = *a1 & 7;
  if ( (_DWORD)v3 == 7 )
  {
    v4 = 3;
    if ( *(_DWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL) <= 3u )
      v4 = *(_DWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
    LODWORD(v3) = v4 + 8;
  }
  result = (unsigned int)(v3 - 3);
  v6 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  switch ( result )
  {
    case 0LL:
    case 1LL:
    case 2LL:
      v6[2] = a2;
      break;
    case 3LL:
      v6[1] = a2;
      break;
    case 4LL:
    case 5LL:
    case 6LL:
      v6[3] = a2;
      break;
  }
  return result;
}

