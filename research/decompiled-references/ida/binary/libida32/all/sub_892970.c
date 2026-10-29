__int64 __fastcall sub_892970(__int64 a1, __int64 a2)
{
  _WORD *v2; // rbx
  __int64 result; // rax

  v2 = &unk_239FC60;
  do
  {
    result = sub_8929C0(a1, a2, v2 + 80, v2, 0);
    if ( (_BYTE)result )
      break;
    v2 += 160;
  }
  while ( *v2 );
  return result;
}

