/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D641
// Address: 0x0047D641

//----- (0047D641) --------------------------------------------------------
const wchar_t *__cdecl sub_47D641(int a1)
{
  switch ( a1 )
  {
    case 932:
      return L"ja-JP";
    case 936:
      return L"zh-CN";
    case 949:
      return L"ko-KR";
    case 950:
      return L"zh-TW";
  }
  return nullptr;
}
// 4A8310: using guessed type wchar_t aJaJp[6];
// 4A831C: using guessed type wchar_t aZhCn[6];
// 4A8328: using guessed type wchar_t aKoKr[6];
// 4A8334: using guessed type wchar_t aZhTw[6];
