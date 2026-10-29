/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100002FA4
// Address: 0x0000000100002FA4

//----- (0000000100002FA4) ----------------------------------------------------
void __fastcall sub_100002FA4(__int64 a1, int a2)
{
  _DWORD *v4; // x0
  size_t v5; // x2
  char v6; // w20
  int v7; // w24
  __int64 v8; // x0
  char v9; // w26
  int v10; // w10
  __int64 v11; // x21
  int v12; // w9
  int v13; // w10
  unsigned int v14; // w9
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  __int64 v21; // x8
  __int64 v22; // x10
  unsigned __int64 v23; // x9
  int v24; // w20
  __int64 v25; // x20
  __int64 v26; // x8
  __int64 v27; // x10
  unsigned __int64 v28; // x9
  __int64 v29; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  __int64 v36; // [xsp+18h] [xbp-8E8h] BYREF
  int v37; // [xsp+20h] [xbp-8E0h]
  void *v38[2]; // [xsp+28h] [xbp-8D8h]
  __int64 v39; // [xsp+38h] [xbp-8C8h]
  int v40; // [xsp+44h] [xbp-8BCh] BYREF
  _BYTE v41[1024]; // [xsp+48h] [xbp-8B8h] BYREF
  mach_msg_header_t __src[42]; // [xsp+448h] [xbp-4B8h] BYREF
  __int64 v43; // [xsp+848h] [xbp-B8h] BYREF
  __int64 v44; // [xsp+850h] [xbp-B0h]
  char v45; // [xsp+858h] [xbp-A8h]
  __int128 v46; // [xsp+85Ch] [xbp-A4h]
  __int128 v47; // [xsp+86Ch] [xbp-94h]
  __int128 v48; // [xsp+87Ch] [xbp-84h]
  int v49; // [xsp+88Ch] [xbp-74h]

  v43 = 0xFFFFFFFFLL;
  v44 = -1;
  v45 = 0;
  v46 = 0u;
  v47 = 0u;
  v48 = 0u;
  v49 = 0;
  if ( qword_1000A57A8 )
  {
    sub_10005D17C();
    if ( (qword_1000A57A8 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
    {
      v4 = (_DWORD *)qword_1000A57A0;
      v5 = 8 * qword_1000A57A8 - 8;
      while ( *v4 != *(_DWORD *)(a1 + 528) )
      {
        v4 += 2;
        v5 -= 8LL;
        if ( v5 == -8 )
          goto LABEL_6;
      }
      v40 = v4[1];
      memmove(v4, v4 + 2, v5);
      --qword_1000A57A8;
      v6 = 1;
    }
    else
    {
LABEL_6:
      v6 = 0;
    }
    sub_10005D188();
    if ( (v6 & 1) != 0 )
      goto LABEL_49;
  }
  sub_1000020E0();
  v39 = 0;
  *(_OWORD *)v38 = 0u;
  v7 = 32;
  v36 = 0;
  v37 = 0;
  do
  {
    if ( (sub_1000029C4(a1, a2, __src, (__int64)v41, (__int64)&v36) & 1) == 0 )
      break;
    v9 = BYTE4(v36);
    HIDWORD(v43) = HIDWORD(v36);
    v10 = *(_DWORD *)v38[0];
    if ( v37 <= 3 )
    {
      if ( v10 == 1 )
        v12 = 11;
      else
        v12 = 10;
      if ( v37 == 3 )
        v13 = 8;
      else
        v13 = 0;
      if ( v37 == 2 )
        v13 = 4;
      v11 = v37 == 1 ? (unsigned int)v12 : (unsigned int)v13;
    }
    else if ( v37 > 5 )
    {
      v14 = v37 == 10 ? 6 : 0;
      v11 = v37 == 6 ? 5LL : v14;
    }
    else if ( v37 == 4 )
    {
      v11 = 7;
    }
    else
    {
      v11 = v10 == 65539 ? *((unsigned int *)v38[0] + 2) : 0LL;
    }
    strsignal(v11);
    sub_1000593FC(a1, "got exception for tid=%d sig=%d %s\n", v15, v16, v17, v18, v19, v20, v9);
    if ( (unsigned int)sub_100001BEC((_DWORD *)a1, v11, (__int64)&v43, 2, __src, v41, &v36) )
    {
      v21 = *(_QWORD *)(a1 + 128);
      if ( *(_QWORD *)(a1 + 136) == v21 )
        v22 = 0;
      else
        v22 = 56 * ((unsigned __int64)(*(_QWORD *)(a1 + 136) - v21) >> 3) - 1;
      v23 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
      if ( v22 == v23 )
      {
        sub_10000A578(a1 + 120);
        v21 = *(_QWORD *)(a1 + 128);
        v23 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
      }
      v8 = *(_QWORD *)(v21 + 8 * (v23 / 0x38)) + 72 * (v23 % 0x38);
      *(_QWORD *)v8 = 0xFFFFFFFFLL;
      *(_QWORD *)(v8 + 8) = -1;
      *(_BYTE *)(v8 + 16) = 0;
      *(_DWORD *)(v8 + 20) = 0;
      copy_debug_event(v8, (__int64)&v43);
      ++*(_QWORD *)(a1 + 160);
    }
    a2 = 0;
    --v7;
  }
  while ( v7 );
  if ( *(_QWORD *)(a1 + 160) )
  {
    if ( v38[0] )
    {
      v38[1] = nullptr;
      qfree(v38[0]);
    }
    goto LABEL_62;
  }
  v24 = sub_100002E64(a1, (unsigned int *)&v40, 0);
  if ( v38[0] )
  {
    v38[1] = nullptr;
    qfree(v38[0]);
  }
  if ( (unsigned int)(v24 - 1) < 0xFFFFFFFE )
  {
LABEL_49:
    HIDWORD(v43) = *(_DWORD *)(*(_QWORD *)(a1 + 1904) + 32LL);
    if ( (v40 & 0x7F) != 0 )
    {
      v25 = (unsigned int)(v40 >> 8);
      if ( (v40 & 0x7F) != 0x7F )
        goto LABEL_53;
      if ( (_DWORD)v25 != 19 )
      {
        strsignal(v40 >> 8);
        sub_1000593FC(a1, "SIGNAL %d: %s (stopped)\n", v30, v31, v32, v33, v34, v35, v25);
        if ( (sub_100001BEC((_DWORD *)a1, v25, (__int64)&v43, 1, nullptr, nullptr, nullptr) & 1) == 0 )
          goto LABEL_62;
        goto LABEL_56;
      }
    }
    LODWORD(v25) = BYTE1(v40);
LABEL_53:
    LODWORD(v43) = *(_DWORD *)(a1 + 528);
    v44 = -1;
    v45 = 1;
    set_debug_event_code((__int64)&v43, 2);
    if ( (v46 & 0xFFFFFFF) != 2 && (v46 & 0xFFFFFFF) != 4 )
    {
      if ( under_debugger != 1 )
        goto LABEL_67;
      while ( 1 )
      {
        __break(1u);
LABEL_67:
        interr(3296);
      }
    }
    DWORD1(v46) = v25;
    *(_DWORD *)(a1 + 1556) = 4;
LABEL_56:
    v26 = *(_QWORD *)(a1 + 128);
    if ( *(_QWORD *)(a1 + 136) == v26 )
      v27 = 0;
    else
      v27 = 56 * ((unsigned __int64)(*(_QWORD *)(a1 + 136) - v26) >> 3) - 1;
    v28 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
    if ( v27 == v28 )
    {
      sub_10000A578(a1 + 120);
      v26 = *(_QWORD *)(a1 + 128);
      v28 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
    }
    v29 = *(_QWORD *)(v26 + 8 * (v28 / 0x38)) + 72 * (v28 % 0x38);
    *(_QWORD *)v29 = 0xFFFFFFFFLL;
    *(_QWORD *)(v29 + 8) = -1;
    *(_BYTE *)(v29 + 16) = 0;
    *(_DWORD *)(v29 + 20) = 0;
    copy_debug_event(v29, (__int64)&v43);
    ++*(_QWORD *)(a1 + 160);
  }
LABEL_62:
  free_debug_event((__int64)&v43);
}
// 100003180: conditional instruction was optimized away because %var_8E0.4==5
// 100003208: variable 'v15' is possibly undefined
// 100003208: variable 'v16' is possibly undefined
// 100003208: variable 'v17' is possibly undefined
// 100003208: variable 'v18' is possibly undefined
// 100003208: variable 'v19' is possibly undefined
// 100003208: variable 'v20' is possibly undefined
// 100003424: variable 'v30' is possibly undefined
// 100003424: variable 'v31' is possibly undefined
// 100003424: variable 'v32' is possibly undefined
// 100003424: variable 'v33' is possibly undefined
// 100003424: variable 'v34' is possibly undefined
// 100003424: variable 'v35' is possibly undefined
// 1000A57A0: using guessed type __int64 qword_1000A57A0;
// 1000A57A8: using guessed type __int64 qword_1000A57A8;
// 1000A590D: using guessed type char under_debugger;
