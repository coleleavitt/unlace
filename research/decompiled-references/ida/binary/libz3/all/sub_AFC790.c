void __fastcall sub_AFC790(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v1 = a1 + 72;
  v3 = a1 + 112;
  *(_DWORD *)(v3 - 96) = 0;
  *(_QWORD *)(v3 - 8) = v1;
  *(_QWORD *)v3 = 0;
  *(_QWORD *)(v3 + 8) = 0;
  *(_OWORD *)(v3 - 112) = 0;
  *(_OWORD *)(v3 - 88) = 0;
  *(_OWORD *)(v3 - 72) = 0;
  *(_OWORD *)(v3 - 56) = 0;
  *(_OWORD *)(v3 - 40) = 0;
  *(_OWORD *)(v3 - 24) = 0;
  sub_313C10((unsigned int **)v3);
  v4 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(v4 + 4LL * (unsigned int)(*(_DWORD *)(v4 - 4))++) = -1;
  sub_8C3430((_QWORD *)(a1 + 120), 0x400u, 0);
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 272) = a1 + 80;
  *(_QWORD *)(a1 + 200) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = a1 + 240;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  sub_313C10((unsigned int **)(a1 + 280));
  v5 = *(_QWORD *)(a1 + 280);
  *(_DWORD *)(v5 + 4LL * (unsigned int)(*(_DWORD *)(v5 - 4))++) = -1;
  sub_8C3430((_QWORD *)(a1 + 288), 0x400u, 0);
  *(_QWORD *)(a1 + 336) = a1 + 80;
  *(_DWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = a1 + 304;
  *(_OWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  sub_313C10((unsigned int **)(a1 + 344));
  v6 = *(_QWORD *)(a1 + 344);
  *(_DWORD *)(v6 + 4LL * (unsigned int)(*(_DWORD *)(v6 - 4))++) = -1;
  sub_8C3430((_QWORD *)(a1 + 352), 0x400u, 0);
  *(_DWORD *)(a1 + 360) = 0;
}

