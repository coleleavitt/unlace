__int64 __fastcall sub_80F040(__int64 a1)
{
  __int64 result; // rax
  __int16 v2; // dx

  for ( result = a1; ; result = *(_QWORD *)(result + 16) )
  {
    v2 = *(_WORD *)result & 0x1FF;
    if ( v2 != 80 && ((v2 + 451) & 0x1FFu) > 1 )
      break;
    if ( result == *(_QWORD *)(result + 16) )
      break;
  }
  return result;
}

