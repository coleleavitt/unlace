__int64 __fastcall sub_3C22F0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1528) )
  {
    result = sub_4EF9B0(*(_QWORD *)(a1 + 1328), a1 + 1288);
    *(_BYTE *)(a1 + 1528) = 0;
  }
  return result;
}

