void __fastcall sub_FC7230(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // eax
  void *v6; // rax
  _BYTE *v7; // r13
  signed __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r13
  void *v16; // rdi

  v5 = *((_DWORD *)a3 + 6);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 12) = *((_DWORD *)a3 + 7);
  v6 = (void *)(a1 + 32);
  *(_QWORD *)(a1 + 16) = a1 + 32;
  v7 = (_BYTE *)a3[4];
  v8 = a3[5];
  if ( &v7[v8] && !v7 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v8 > 0xF )
  {
    if ( v8 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v6 = (void *)operator new(v8 + 1);
    *(_QWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 16) = v6;
LABEL_12:
    memcpy(v6, v7, v8);
    v6 = *(void **)(a1 + 16);
    goto LABEL_6;
  }
  if ( v8 == 1 )
  {
    *(_BYTE *)(a1 + 32) = *v7;
    goto LABEL_6;
  }
  if ( v8 )
    goto LABEL_12;
LABEL_6:
  *(_QWORD *)(a1 + 24) = v8;
  *((_BYTE *)v6 + v8) = 0;
  v9 = *a3;
  if ( !*a3 )
  {
    v10 = a3[1];
    v11 = *(_DWORD *)(v10 + 14976);
    if ( v11 )
    {
      v12 = (unsigned int)(v11 - 1);
      *(_DWORD *)(v10 + 14976) = v12;
      v9 = *(_QWORD *)(v10 + 8 * v12 + 14848);
      v13 = *(unsigned int *)(v9 + 536);
      *(_BYTE *)v9 = 0;
      v14 = *(_QWORD *)(v9 + 528);
      *(_DWORD *)(v9 + 424) = 0;
      v15 = v14 + (v13 << 6);
      while ( v14 != v15 )
      {
        while ( 1 )
        {
          v15 -= 64;
          v16 = *(void **)(v15 + 24);
          if ( v16 == (void *)(v15 + 40) )
            break;
          operator delete(v16);
          if ( v14 == v15 )
            goto LABEL_18;
        }
      }
LABEL_18:
      *(_DWORD *)(v9 + 536) = 0;
    }
    else
    {
      v9 = operator new(0x3A0u);
      *(_BYTE *)v9 = 0;
      *(_QWORD *)(v9 + 96) = v9 + 112;
      *(_QWORD *)(v9 + 128) = v9 + 144;
      *(_QWORD *)(v9 + 160) = v9 + 176;
      *(_QWORD *)(v9 + 192) = v9 + 208;
      *(_QWORD *)(v9 + 224) = v9 + 240;
      *(_QWORD *)(v9 + 256) = v9 + 272;
      *(_QWORD *)(v9 + 288) = v9 + 304;
      *(_QWORD *)(v9 + 320) = v9 + 336;
      *(_QWORD *)(v9 + 352) = v9 + 368;
      *(_QWORD *)(v9 + 384) = v9 + 400;
      *(_QWORD *)(v9 + 416) = v9 + 432;
      *(_QWORD *)(v9 + 104) = 0;
      *(_BYTE *)(v9 + 112) = 0;
      *(_QWORD *)(v9 + 136) = 0;
      *(_BYTE *)(v9 + 144) = 0;
      *(_QWORD *)(v9 + 168) = 0;
      *(_BYTE *)(v9 + 176) = 0;
      *(_QWORD *)(v9 + 200) = 0;
      *(_BYTE *)(v9 + 208) = 0;
      *(_QWORD *)(v9 + 232) = 0;
      *(_BYTE *)(v9 + 240) = 0;
      *(_QWORD *)(v9 + 264) = 0;
      *(_BYTE *)(v9 + 272) = 0;
      *(_QWORD *)(v9 + 296) = 0;
      *(_BYTE *)(v9 + 304) = 0;
      *(_QWORD *)(v9 + 328) = 0;
      *(_BYTE *)(v9 + 336) = 0;
      *(_QWORD *)(v9 + 360) = 0;
      *(_BYTE *)(v9 + 368) = 0;
      *(_QWORD *)(v9 + 392) = 0;
      *(_BYTE *)(v9 + 400) = 0;
      *(_QWORD *)(v9 + 424) = 0x800000000LL;
      *(_QWORD *)(v9 + 528) = v9 + 544;
      *(_QWORD *)(v9 + 536) = 0x600000000LL;
    }
    *a3 = v9;
  }
  *(_QWORD *)(a1 + 48) = v9;
  *(_BYTE *)(a1 + 72) = 0;
}
