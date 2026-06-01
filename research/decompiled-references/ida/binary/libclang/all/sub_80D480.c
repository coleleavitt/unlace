void __fastcall sub_80D480(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        void *ptr)
{
  __int16 v43; // ax
  unsigned int v44; // r14d
  __int64 v45; // r13
  __int64 v46; // r15
  int v47; // edx
  __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rax
  char *s; // [rsp+80h] [rbp-1F8h] BYREF
  void *v54; // [rsp+120h] [rbp-158h]
  __int128 v55; // [rsp+128h] [rbp-150h]

  if ( a4 && ((v43 = *(_WORD *)a4 & 0x1FF, v43 == 112) || v43 == 113) )
  {
    v44 = *(_DWORD *)(a4 + 4);
    v45 = *(_QWORD *)(a4 + 24);
  }
  else
  {
    v44 = *(_DWORD *)(a2 + 16);
    v45 = *(_QWORD *)(a2 + 24);
  }
  if ( (*(_BYTE *)(v45 + 8) & 0x7Fu) - 33 <= 3 && !sub_780760(v45 - 72) )
  {
    v48 = *(_QWORD *)(sub_79A2E0(v45) + 16);
    v49 = (_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v48 & 4) != 0 )
      v49 = (_QWORD *)*v49;
    if ( v49 )
    {
      v50 = v49[8];
      if ( v50 )
      {
        if ( (*(_BYTE *)(v50 + 10) & 0x20) != 0 && (unsigned int)sub_780B80(v45 - 72) == 42 )
        {
          v51 = *(_QWORD *)(sub_79A2E0(v45) + 16);
          v52 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v51 & 4) != 0 )
            v52 = (_QWORD *)*v52;
          if ( v52 )
            v52 -= 8;
          sub_79A2E0((__int64)(v52 + 8));
        }
      }
    }
  }
  v46 = *(_QWORD *)(a3 + 2152);
  v54 = (void *)sub_CACEA0(v46, v44);
  LODWORD(v55) = v47;
  sub_CAE550(&s, v46, HIDWORD(v54), 1);
  __asm { jmp     rax }
}

