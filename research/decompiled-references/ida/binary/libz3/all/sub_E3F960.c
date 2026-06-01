__int64 __fastcall sub_E3F960(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // eax
  __int64 *v7; // r14
  __int64 *v8; // rbp
  __int64 *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  std::thread *v14; // [rsp+0h] [rbp-48h]
  _BYTE v15[64]; // [rsp+8h] [rbp-40h] BYREF

  v2 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16) + 80LL))(
                   *(_QWORD *)(a1 + 16),
                   a2,
                   a1 + 40);
  v3 = sub_186B270(0x158u);
  *(_DWORD *)(v3 + 8) = 0;
  v4 = v3;
  *(_QWORD *)v3 = &off_1C5CCF0;
  *(_QWORD *)(v3 + 16) = v2;
  if ( v2 )
    ++v2[12];
  *(_QWORD *)(v3 + 24) = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 72LL))(v2);
  *(_QWORD *)(v4 + 32) = 0;
  sub_1858590(v4 + 40, a1 + 40);
  *(_QWORD *)(v4 + 120) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 72) = 0;
  *(_OWORD *)(v4 + 88) = 0;
  *(_OWORD *)(v4 + 104) = 0;
  std::condition_variable::condition_variable((std::condition_variable *)(v4 + 128));
  *(_DWORD *)(v4 + 192) = 0;
  *(_QWORD *)(v4 + 280) = v4 + 296;
  *(_BYTE *)(v4 + 196) = 0;
  *(_QWORD *)(v4 + 232) = 0;
  *(_BYTE *)(v4 + 260) = 0;
  *(_QWORD *)(v4 + 288) = 0;
  *(_BYTE *)(v4 + 296) = 0;
  *(_QWORD *)(v4 + 312) = v4 + 328;
  *(_QWORD *)(v4 + 320) = 0;
  *(_BYTE *)(v4 + 328) = 0;
  *(_OWORD *)(v4 + 176) = 0;
  *(_OWORD *)(v4 + 200) = 0;
  *(_OWORD *)(v4 + 216) = 0;
  v14 = (std::thread *)(v4 + 40);
  sub_17F9A60(v15, "parallel");
  v5 = sub_1859980(v4 + 40, "threads.max", v15, 10000);
  v6 = std::thread::hardware_concurrency((std::thread *)(v4 + 40));
  *(_QWORD *)(v4 + 240) = 0;
  if ( v5 > v6 )
    v5 = v6;
  *(_DWORD *)(v4 + 64) = v5;
  *(_BYTE *)(v4 + 260) = 0;
  *(_BYTE *)(v4 + 261) = 0;
  *(_DWORD *)(v4 + 248) = 0;
  *(_QWORD *)(v4 + 264) = 0;
  *(_DWORD *)(v4 + 252) = sub_1859980(v14, "conquer.backtrack_frequency", v15, 10);
  *(_DWORD *)(v4 + 256) = sub_1859980(v14, "conquer.delay", v15, 10);
  *(_DWORD *)(v4 + 272) = 0;
  sub_1862300(v4 + 40, "override_incremental", 1);
  v7 = *(__int64 **)(v4 + 56);
  if ( v7 )
  {
    v8 = (__int64 *)v7[1];
    if ( v8 )
    {
      v9 = &v8[*((unsigned int *)v8 - 1)];
      if ( v8 >= v9 )
        goto LABEL_14;
      do
      {
        while ( 1 )
        {
          v10 = *v8;
          if ( *v8 )
          {
            v11 = *v7;
            if ( (*(_DWORD *)(v10 + 8))-- == 1 )
              break;
          }
          if ( ++v8 >= v9 )
            goto LABEL_13;
        }
        sub_15D7BC0(v11, v10);
        ++v8;
      }
      while ( v8 < v9 );
LABEL_13:
      v8 = (__int64 *)v7[1];
      if ( v8 )
LABEL_14:
        sub_186B220(v8 - 1);
    }
    sub_186B220(v7);
    *(_QWORD *)(v4 + 56) = 0;
  }
  sub_18572D0(v15);
  return v4;
}

