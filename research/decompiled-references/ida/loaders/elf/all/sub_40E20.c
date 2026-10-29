__int64 __fastcall sub_40E20(__int64 a1, __int64 a2, int a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *(unsigned __int16 *)(a1 + 344);
  result = (unsigned int)(a3 + 4);
  if ( !_bittest(&v3, result) )
    return append_cmt(a2, off_87360[a3], 0);
  return result;
}

