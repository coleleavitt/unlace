/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034610
// Address: 0x0000000140034610

//----- (0000000140034610) ----------------------------------------------------
__int64 __fastcall sub_140034610(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax

  sub_140035000((_QWORD *)(a1 + 104), 0);
  sub_140035000((_QWORD *)(a1 + 128), 0);
  v2 = *(_QWORD *)(a1 + 192);
  if ( v2 && *(_QWORD *)(v2 + 8) )
  {
    if ( *(_QWORD *)(a1 + 160) )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(262);
    }
    if ( *(_QWORD *)(a1 + 224) )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(263);
    }
    if ( *(_QWORD *)(a1 + 248) )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(264);
    }
    if ( *(_QWORD *)(a1 + 272) )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(265);
    }
    if ( *(_QWORD *)(a1 + 296) )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(266);
    }
    if ( *(_QWORD *)(a1 + 320) )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(267);
    }
    if ( *(_QWORD *)(a1 + 344) )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(268);
    }
    if ( *(_QWORD *)(a1 + 368) )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(269);
    }
  }
  result = *(_QWORD *)(a1 + 184);
  if ( result )
  {
    if ( *(_DWORD *)(result + 136) != -1 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(485);
    }
    *(_DWORD *)(result + 136) = 0;
    *(_QWORD *)(a1 + 184) = 0;
  }
  *(_QWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 408) = 0;
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
