__int64 __fastcall sub_518CA0(int a1, int a2)
{
  return (unsigned __int8)(int)((double)(unsigned __int8)a1 * 0.7490196078431373
                              + (double)(unsigned __int8)a2 * 0.2509803921568627)
       | ((unsigned __int8)(int)((double)BYTE1(a1) * 0.7490196078431373 + (double)BYTE1(a2) * 0.2509803921568627) << 8)
       | ((unsigned __int8)(int)((double)BYTE2(a1) * 0.7490196078431373
                               + (double)((a2 & 0xFFFFFFu) >> 16) * 0.2509803921568627) << 16)
       | 0xFF000000;
}
