/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007020
// Address: 0x0000000100007020

//----- (0000000100007020) ----------------------------------------------------
__int64 __fastcall sub_100007020(__int64 a1, unsigned int a2, double a3, double a4)
{
  unsigned int v5; // r14d
  unsigned int v6; // r14d
  int *v7; // rax
  const char *v8; // rax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r12
  void *v18; // r13
  void *v19; // rdi
  __int64 __n; // [rsp+8h] [rbp-868h]
  void *v22; // [rsp+10h] [rbp-860h]
  __int64 v23; // [rsp+18h] [rbp-858h] BYREF
  int v24; // [rsp+20h] [rbp-850h]
  void *__src[2]; // [rsp+28h] [rbp-848h]
  __int64 v26; // [rsp+38h] [rbp-838h]
  int v27[256]; // [rsp+40h] [rbp-830h] BYREF
  _BYTE v28[1024]; // [rsp+440h] [rbp-430h] BYREF

  v5 = 0;
  sub_100060FA0(a1, "handle process start: %d\n", a2);
  *(_DWORD *)(a1 + 860) = 0;
  *(_DWORD *)(a1 + 528) = a2;
  if ( !sub_100006E90(a1, a2) )
    return v5;
  sub_1000068D0(a1);
  v6 = ptrace(14, a2, nullptr, 0);
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    if ( v6 )
    {
      v7 = __error();
      v8 = (const char *)winerr(*v7);
    }
    else
    {
      v8 = "ok";
    }
    sub_100000AE0((int)"%s(%u, %p, 0x%X) => 0x%X (%s)\n", "PT_ATTACHEXC", a2, 0, 0, v6, v8);
  }
  if ( v6 )
    return 0;
  *(_OWORD *)__src = 0;
  v26 = 0;
  v23 = 0;
  v24 = 0;
  v5 = sub_100002DC0(a1, 0x1388u, (mach_msg_header_t *)v28, v27, (unsigned int *)&v23);
  if ( (_BYTE)v5 )
  {
    v9 = sub_100000A10(a1, *(_DWORD *)(a1 + 528));
    *(_DWORD *)(a1 + 852) = v9;
    v10 = v9 & 0x1000000;
    v11 = (v10 >> 22) + 4;
    if ( *(_BYTE *)(a1 + 36) == 1 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + (v10 >> 21) + 8);
      *(_DWORD *)(a1 + 32) = v11;
    }
    *(_DWORD *)(a1 + 244) = v11;
    *(_BYTE *)(a1 + 1233) = HIBYTE(v10);
    v12 = *(_QWORD *)(a1 + 536);
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      sub_1000016A0(a1 + 544);
    }
    *(_QWORD *)(a1 + 536) = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 592LL))(a1);
    if ( *(_DWORD *)(a1 + 652) == -1 || *(_DWORD *)(a1 + 656) == -1 )
      goto LABEL_37;
    v13 = *(_QWORD *)(a1 + 552);
    if ( !v13 )
      LODWORD(v13) = *(_DWORD *)(a1 + 648);
    if ( (int)v13 <= 0 )
    {
LABEL_37:
      if ( under_debugger != 1 )
        interr(0x7540u);
    }
    else
    {
      sub_100064AA0();
      v14 = (unsigned int)sub_100006580(a1, 0);
      v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 640LL))(a1, v14);
      sub_100060FA0(a1, "initially stopped at %a pid=%d tid=%d task=%d\n", 0.0, v15, *(_DWORD *)(a1 + 528), v14);
      if ( (_DWORD)v14 == HIDWORD(v23) )
      {
        v16 = *(_QWORD *)(a1 + 1216);
        if ( v16 )
        {
          v17 = a1 + 1216;
          do
          {
            if ( *(_DWORD *)(v16 + 32) >= (int)v14 )
              v17 = v16;
            v16 = *(_QWORD *)(v16 + 8LL * (*(_DWORD *)(v16 + 32) < (int)v14));
          }
          while ( v16 );
          if ( v17 != a1 + 1216 && *(_DWORD *)(v17 + 32) <= (int)v14 )
          {
            *(_DWORD *)(v17 + 2120) = v24;
            *(_QWORD *)(v17 + 2112) = v23;
            v18 = __src[1];
            if ( __src[1] )
            {
              __n = 8 * (__int64)__src[1];
              v22 = qalloc_or_throw(8 * (__int64)__src[1]);
              memcpy(v22, __src[0], __n);
            }
            else
            {
              v22 = nullptr;
            }
            v19 = *(void **)(v17 + 2128);
            if ( v19 )
            {
              *(_QWORD *)(v17 + 2136) = 0;
              qfree(v19);
            }
            *(_QWORD *)(v17 + 2128) = v22;
            *(_QWORD *)(v17 + 2136) = v18;
            *(_QWORD *)(v17 + 2144) = v18;
            memcpy((void *)(v17 + 60), v28, 0x400u);
            memcpy((void *)(v17 + 1084), v27, 0x400u);
            sub_100003D20(a1, 0.0);
            sub_100007470(a1, *(unsigned int *)(a1 + 528), v14);
            sub_100003FF0(a1, 0.0, a4);
            goto LABEL_34;
          }
        }
        if ( under_debugger != 1 )
          interr(0x7E5u);
      }
      else if ( under_debugger != 1 )
      {
        interr(0x7E4u);
      }
    }
    BUG();
  }
  sub_100005090(a1, "failed to retrieve initial stop signal\n");
LABEL_34:
  if ( __src[0] )
  {
    __src[1] = nullptr;
    qfree(__src[0]);
  }
  return v5;
}
// 1000AE23D: using guessed type char under_debugger;
