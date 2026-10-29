__int64 sub_16ECC0()
{
  __int64 v1; // r12
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( dword_25031C >= 0 && (unsigned __int64)dword_25031C < *(_QWORD *)(*(_QWORD *)(qword_254370 + 752) + 8LL) )
  {
    v1 = 4LL * dword_25031C;
    netnode_supdel();
    v2 = qword_254370;
    v3 = *(_QWORD **)(qword_254370 + 752);
    memmove((void *)(v1 + *v3), (const void *)(v1 + *v3 + 4), 4LL * v3[1]-- - v1 - 4);
    v4 = *(_QWORD *)(v2 + 880);
    v9 = off_2346F8;
    v10 = 0x22B00000000LL;
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 752) + 8LL);
    LODWORD(v10) = 0x7FFFFFFF;
    HIDWORD(v10) = ((_DWORD)v5 == 0) + (_DWORD)v5 - 1;
    sub_15DA50(v2, v4, (__int64)&v9);
    v6 = sub_15E0E0(qword_254370);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, 0, 0);
    v7 = qword_254370;
    v8 = sub_1635F0(qword_254370, 0);
    if ( v8 && (unsigned __int64)*(unsigned int *)(v8 + 12) < *(_QWORD *)(*(_QWORD *)(v7 + 752) + 8LL) )
      dword_25031C = *(_DWORD *)(v8 + 12);
    else
      dword_25031C = -1;
  }
  return 1;
}

