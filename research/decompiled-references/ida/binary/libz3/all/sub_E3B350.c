__int64 __fastcall sub_E3B350(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // ebp
  unsigned int v5; // eax
  __int64 *v6; // r14
  __int64 *v7; // rbp
  __int64 *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  std::thread *v13; // [rsp+0h] [rbp-48h]
  _BYTE v14[64]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_186B270(0x158u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C5CCF0;
  *(_QWORD *)(v2 + 16) = a1;
  if ( a1 )
    ++a1[12];
  *(_QWORD *)(v2 + 24) = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 72LL))(a1);
  *(_QWORD *)(v3 + 32) = 0;
  sub_1858590(v3 + 40, a2);
  *(_QWORD *)(v3 + 120) = 0;
  *(_OWORD *)(v3 + 48) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  *(_OWORD *)(v3 + 104) = 0;
  std::condition_variable::condition_variable((std::condition_variable *)(v3 + 128));
  *(_DWORD *)(v3 + 192) = 0;
  *(_QWORD *)(v3 + 280) = v3 + 296;
  *(_BYTE *)(v3 + 196) = 0;
  *(_QWORD *)(v3 + 232) = 0;
  *(_BYTE *)(v3 + 260) = 0;
  *(_QWORD *)(v3 + 288) = 0;
  *(_BYTE *)(v3 + 296) = 0;
  *(_QWORD *)(v3 + 312) = v3 + 328;
  *(_QWORD *)(v3 + 320) = 0;
  *(_BYTE *)(v3 + 328) = 0;
  *(_OWORD *)(v3 + 176) = 0;
  *(_OWORD *)(v3 + 200) = 0;
  *(_OWORD *)(v3 + 216) = 0;
  v13 = (std::thread *)(v3 + 40);
  sub_17F9A60(v14, "parallel");
  v4 = sub_1859980(v3 + 40, "threads.max", v14, 10000);
  v5 = std::thread::hardware_concurrency((std::thread *)(v3 + 40));
  *(_QWORD *)(v3 + 240) = 0;
  if ( v4 > v5 )
    v4 = v5;
  *(_DWORD *)(v3 + 64) = v4;
  *(_BYTE *)(v3 + 260) = 0;
  *(_BYTE *)(v3 + 261) = 0;
  *(_DWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 264) = 0;
  *(_DWORD *)(v3 + 252) = sub_1859980(v13, "conquer.backtrack_frequency", v14, 10);
  *(_DWORD *)(v3 + 256) = sub_1859980(v13, "conquer.delay", v14, 10);
  *(_DWORD *)(v3 + 272) = 0;
  sub_1862300(v3 + 40, "override_incremental", 1);
  v6 = *(__int64 **)(v3 + 56);
  if ( v6 )
  {
    v7 = (__int64 *)v6[1];
    if ( v7 )
    {
      v8 = &v7[*((unsigned int *)v7 - 1)];
      if ( v7 >= v8 )
        goto LABEL_14;
      do
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            v10 = *v6;
            if ( (*(_DWORD *)(v9 + 8))-- == 1 )
              break;
          }
          if ( ++v7 >= v8 )
            goto LABEL_13;
        }
        sub_15D7BC0(v10, v9);
        ++v7;
      }
      while ( v7 < v8 );
LABEL_13:
      v7 = (__int64 *)v6[1];
      if ( v7 )
LABEL_14:
        sub_186B220(v7 - 1);
    }
    sub_186B220(v6);
    *(_QWORD *)(v3 + 56) = 0;
  }
  sub_18572D0(v14);
  return v3;
}

