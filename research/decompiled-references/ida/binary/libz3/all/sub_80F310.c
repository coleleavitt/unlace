__int64 __fastcall sub_80F310(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
      sub_1872CE0("");
      sub_1873130(114, 309);
    case 1:
      sub_1872CE0("");
      sub_1873130(114, 312);
    case 2:
      result = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a2 + 16));
      break;
    case 3:
      sub_1872CE0("");
      sub_1873130(114, 317);
    case 4:
      sub_1872CE0("");
      sub_1873130(114, 320);
    default:
      result = 0;
      break;
  }
  return result;
}

