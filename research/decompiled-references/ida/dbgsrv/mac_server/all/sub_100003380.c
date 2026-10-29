/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003380
// Address: 0x0000000100003380

//----- (0000000100003380) ----------------------------------------------------
__int64 __fastcall sub_100003380(__int64 a1, mach_msg_timeout_t a2, double a3, double a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r15
  int v9; // r12d
  unsigned __int64 v10; // rdi
  int v11; // r15d
  int v12; // r14d
  int v13; // edx
  char *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  int v18; // r14d
  int v19; // edi
  int v20; // ecx
  int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  char *v27; // rax
  __int64 v28; // [rsp+10h] [rbp-8B0h]
  __int64 v29; // [rsp+18h] [rbp-8A8h] BYREF
  int v30; // [rsp+20h] [rbp-8A0h]
  __int128 v31; // [rsp+28h] [rbp-898h]
  __int64 v32; // [rsp+38h] [rbp-888h]
  int v33; // [rsp+44h] [rbp-87Ch] BYREF
  int v34[256]; // [rsp+48h] [rbp-878h] BYREF
  mach_msg_header_t v35[42]; // [rsp+448h] [rbp-478h] BYREF
  __int64 v36; // [rsp+848h] [rbp-78h] BYREF
  __int64 v37; // [rsp+850h] [rbp-70h]
  char v38; // [rsp+858h] [rbp-68h]
  __int128 v39; // [rsp+85Ch] [rbp-64h]
  __int128 v40; // [rsp+86Ch] [rbp-54h]
  __int128 v41; // [rsp+87Ch] [rbp-44h]
  int v42; // [rsp+88Ch] [rbp-34h]

  v36 = 0xFFFFFFFFLL;
  v37 = -1;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  if ( *((_QWORD *)&xmmword_1000AD0D0 + 1) )
  {
    sub_100064B10();
    v6 = 8LL * *((_QWORD *)&xmmword_1000AD0D0 + 1);
    if ( 8LL * *((_QWORD *)&xmmword_1000AD0D0 + 1) )
    {
      v7 = 0;
      while ( *(_DWORD *)(xmmword_1000AD0D0 + v7) != *(_DWORD *)(a1 + 528) )
      {
        v7 += 8;
        if ( v6 == v7 )
          goto LABEL_6;
      }
      v33 = *(_DWORD *)(xmmword_1000AD0D0 + v7 + 4);
      memmove((void *)(xmmword_1000AD0D0 + v7), (const void *)(xmmword_1000AD0D0 + v7 + 8), v6 - v7 - 8);
      --*((_QWORD *)&xmmword_1000AD0D0 + 1);
      v8 = 1;
    }
    else
    {
LABEL_6:
      v8 = 0;
    }
    sub_100064B30();
    if ( v8 )
      goto LABEL_33;
  }
  sub_1000022E0(a1);
  v31 = 0;
  v32 = 0;
  v29 = 0;
  v30 = 0;
  v28 = a1 + 120;
  v9 = 32;
  do
  {
    if ( !(unsigned __int8)sub_100002DC0(a1, a2, v35, v34, (unsigned int *)&v29) )
      break;
    v11 = HIDWORD(v29);
    HIDWORD(v36) = HIDWORD(v29);
    v12 = 0;
    v13 = *(_DWORD *)v31;
    switch ( v30 )
    {
      case 1:
        v12 = (v13 == 1) | 0xA;
        break;
      case 2:
        v12 = 4;
        break;
      case 3:
        v12 = 8;
        break;
      case 4:
        v12 = 7;
        break;
      case 5:
        if ( v13 == 65539 )
          v12 = *(_DWORD *)(v31 + 8);
        break;
      case 6:
        v12 = 5;
        break;
      case 10:
        v12 = 6;
        break;
      default:
        break;
    }
    v14 = strsignal(v12);
    sub_100060FA0(a1, "got exception for tid=%d sig=%d %s\n", v11, v12, v14);
    if ( (unsigned __int8)sub_100001E90((_DWORD *)a1, v12, (__int64)&v36, 2, v35, v34, 0.0, a4, (__int64)&v29) )
    {
      v15 = *(_QWORD *)(a1 + 128);
      v16 = 0;
      if ( *(_QWORD *)(a1 + 136) != v15 )
        v16 = 56 * ((unsigned __int64)(*(_QWORD *)(a1 + 136) - v15) >> 3) - 1;
      v17 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 160);
      if ( v16 == v17 )
      {
        sub_10000AF80(v28);
        v15 = *(_QWORD *)(a1 + 128);
        v17 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
      }
      v10 = *(_QWORD *)(v15 + 8 * (v17 / 0x38)) + 72 * (v17 % 0x38);
      *(_QWORD *)v10 = 0xFFFFFFFFLL;
      *(_QWORD *)(v10 + 8) = -1;
      *(_BYTE *)(v10 + 16) = 0;
      *(_DWORD *)(v10 + 20) = 0;
      ((void (__fastcall *)(unsigned __int64, __int64 *))copy_debug_event)(v10, &v36);
      ++*(_QWORD *)(a1 + 160);
    }
    a2 = 0;
    --v9;
  }
  while ( v9 );
  if ( *(_QWORD *)(a1 + 160) )
  {
    if ( (_QWORD)v31 )
    {
      *((_QWORD *)&v31 + 1) = 0;
      qfree((void *)v31);
    }
    goto LABEL_46;
  }
  v18 = sub_100003220(a1, &v33, 0);
  if ( (_QWORD)v31 )
  {
    *((_QWORD *)&v31 + 1) = 0;
    qfree((void *)v31);
  }
  if ( (unsigned int)(v18 - 1) < 0xFFFFFFFE )
  {
LABEL_33:
    HIDWORD(v36) = *(_DWORD *)(*(_QWORD *)(a1 + 1208) + 32LL);
    if ( (v33 & 0x7F) != 0 )
    {
      if ( (v33 & 0x7F) != 0x7F )
      {
        v20 = v33 >> 8;
LABEL_38:
        v21 = v20;
        LODWORD(v36) = *(_DWORD *)(a1 + 528);
        v37 = -1;
        v38 = 1;
        set_debug_event_code((__int64)&v36, 2);
        if ( (v39 & 0xFFFFFFF) != 2 && (v39 & 0xFFFFFFF) != 4 )
        {
          if ( under_debugger != 1 )
            interr(0xCE0u);
          BUG();
        }
        DWORD1(v39) = v21;
        *(_DWORD *)(a1 + 860) = 4;
LABEL_41:
        v22 = *(_QWORD *)(a1 + 128);
        v23 = 0;
        if ( *(_QWORD *)(a1 + 136) != v22 )
          v23 = 56 * ((unsigned __int64)(*(_QWORD *)(a1 + 136) - v22) >> 3) - 1;
        v24 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 160);
        if ( v23 == v24 )
        {
          sub_10000AF80(a1 + 120);
          v22 = *(_QWORD *)(a1 + 128);
          v24 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
        }
        v25 = *(_QWORD *)(v22 + 8 * (v24 / 0x38)) + 72 * (v24 % 0x38);
        *(_QWORD *)v25 = 0xFFFFFFFFLL;
        *(_QWORD *)(v25 + 8) = -1;
        *(_BYTE *)(v25 + 16) = 0;
        *(_DWORD *)(v25 + 20) = 0;
        ((void (__fastcall *)(unsigned __int64, __int64 *))copy_debug_event)(v25, &v36);
        ++*(_QWORD *)(a1 + 160);
        goto LABEL_46;
      }
      v19 = v33 >> 8;
      if ( v33 >> 8 != 19 )
      {
        v27 = strsignal(v19);
        sub_100060FA0(a1, "SIGNAL %d: %s (stopped)\n", v19, v27);
        if ( !(unsigned __int8)sub_100001E90((_DWORD *)a1, v19, (__int64)&v36, 1, nullptr, nullptr, 0.0, a4, 0) )
          goto LABEL_46;
        goto LABEL_41;
      }
    }
    v20 = BYTE1(v33);
    goto LABEL_38;
  }
LABEL_46:
  free_debug_event((__int64)&v36);
  return __stack_chk_guard;
}
// 1000AD0D0: using guessed type __int128 xmmword_1000AD0D0;
// 1000AE23D: using guessed type char under_debugger;
