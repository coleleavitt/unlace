__int64 __fastcall sub_B85750(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  int v3; // eax
  _QWORD *v4; // rdx
  __int64 result; // rax

  v1 = *a1;
  v2 = *a1 & 7;
  if ( (_DWORD)v2 == 7 )
  {
    v3 = 3;
    if ( *(_DWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL) <= 3u )
      v3 = *(_DWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
    LODWORD(v2) = v3 + 8;
  }
  v4 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  switch ( (int)v2 )
  {
    case 3:
    case 4:
    case 5:
      result = v4[2];
      break;
    case 6:
      result = v4[1];
      break;
    case 7:
    case 8:
    case 9:
      result = v4[3];
      break;
  }
  return result;
}
