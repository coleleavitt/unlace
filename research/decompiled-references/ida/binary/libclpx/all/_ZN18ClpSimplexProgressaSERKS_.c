__int64 __fastcall ClpSimplexProgress::operator=(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a1;
  if ( a1 != a2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
    *(_DWORD *)(a1 + 248) = *(_DWORD *)(a2 + 248);
    *(_DWORD *)(a1 + 268) = *(_DWORD *)(a2 + 268);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
    *(_DWORD *)(a1 + 252) = *(_DWORD *)(a2 + 252);
    *(_DWORD *)(a1 + 272) = *(_DWORD *)(a2 + 272);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
    *(_DWORD *)(a1 + 256) = *(_DWORD *)(a2 + 256);
    *(_DWORD *)(a1 + 276) = *(_DWORD *)(a2 + 276);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
    *(_DWORD *)(a1 + 260) = *(_DWORD *)(a2 + 260);
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(a2 + 280);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
    *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
    *(_DWORD *)(a1 + 264) = *(_DWORD *)(a2 + 264);
    *(_DWORD *)(a1 + 284) = *(_DWORD *)(a2 + 284);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
    *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a2 + 176);
    *(_BYTE *)(a1 + 224) = *(_BYTE *)(a2 + 224);
    *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
    *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 180);
    *(_BYTE *)(a1 + 225) = *(_BYTE *)(a2 + 225);
    *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 184);
    *(_BYTE *)(a1 + 226) = *(_BYTE *)(a2 + 226);
    *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 140);
    *(_DWORD *)(a1 + 188) = *(_DWORD *)(a2 + 188);
    *(_BYTE *)(a1 + 227) = *(_BYTE *)(a2 + 227);
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(a2 + 192);
    *(_BYTE *)(a1 + 228) = *(_BYTE *)(a2 + 228);
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
    *(_DWORD *)(a1 + 196) = *(_DWORD *)(a2 + 196);
    *(_BYTE *)(a1 + 229) = *(_BYTE *)(a2 + 229);
    *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
    *(_DWORD *)(a1 + 200) = *(_DWORD *)(a2 + 200);
    *(_BYTE *)(a1 + 230) = *(_BYTE *)(a2 + 230);
    *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 156);
    *(_DWORD *)(a1 + 204) = *(_DWORD *)(a2 + 204);
    *(_BYTE *)(a1 + 231) = *(_BYTE *)(a2 + 231);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 160);
    *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 208);
    *(_BYTE *)(a1 + 232) = *(_BYTE *)(a2 + 232);
    *(_DWORD *)(a1 + 164) = *(_DWORD *)(a2 + 164);
    *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 212);
    *(_BYTE *)(a1 + 233) = *(_BYTE *)(a2 + 233);
    *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 168);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 216);
    *(_BYTE *)(a1 + 234) = *(_BYTE *)(a2 + 234);
    *(_DWORD *)(a1 + 172) = *(_DWORD *)(a2 + 172);
    *(_DWORD *)(a1 + 220) = *(_DWORD *)(a2 + 220);
    *(_BYTE *)(a1 + 235) = *(_BYTE *)(a2 + 235);
    *(_DWORD *)(a1 + 288) = *(_DWORD *)(a2 + 288);
    *(_DWORD *)(a1 + 292) = *(_DWORD *)(a2 + 292);
    *(_DWORD *)(a1 + 296) = *(_DWORD *)(a2 + 296);
    *(_DWORD *)(a1 + 300) = *(_DWORD *)(a2 + 300);
    *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
    *(_DWORD *)(a1 + 304) = *(_DWORD *)(a2 + 304);
  }
  return result;
}

