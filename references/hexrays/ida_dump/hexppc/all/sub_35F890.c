unsigned __int64 __fastcall sub_35F890(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 result; // rax
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 800);
  if ( !*(_BYTE *)(v1 + 520) )
  {
    if ( *(_BYTE *)(v1 + 521) )
    {
      *(_BYTE *)(v1 + 520) = 1;
    }
    else
    {
      result = sub_35F3E0((_QWORD *)(v1 + 8), 0);
      v3 = *(_QWORD *)(v1 + 208);
      if ( v3 )
      {
        *(_QWORD *)(v1 + 216) = 0;
        result = qfree(v3);
        *(_QWORD *)(v1 + 208) = 0;
        *(_QWORD *)(v1 + 224) = 0;
      }
      *(_BYTE *)(v1 + 520) = 0;
    }
  }
  return result;
}
