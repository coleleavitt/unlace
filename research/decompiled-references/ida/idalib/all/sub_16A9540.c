__int64 __fastcall sub_16A9540(__int64 a1)
{
  __int64 result; // rax

  result = sub_BFB9F0(a1);
  if ( (*(_WORD *)result & 0x1FF) == 4 )
    return sub_BFB9F0(*(_QWORD *)(result + 16));
  return result;
}
