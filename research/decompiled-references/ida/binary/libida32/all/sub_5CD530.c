__int64 __fastcall sub_5CD530(__int64 a1, double a2, double a3)
{
  __int64 v3; // rsi
  char *v5; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  char *v11; // [rsp+8h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+10h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 112);
  v12[1] = __readfsqword(0x28u);
  v5 = sub_5CD490(a1, v3, &v11, 1);
  if ( !v5 || (unsigned __int8)((*v5 & 0xF) - 2) > 5u && (*v5 & 0x3F) != 0x2D )
    return set_qerrno(80, v3);
  v7 = *(_QWORD *)(a1 + 240);
  v12[0] = (__int64)v5;
  v8 = sub_552550(v7, v12, nullptr, a2, a3);
  if ( (v8 & (v8 - 1)) != 0 || v8 > 8 )
    return set_qerrno(81, v12);
  v9 = *(_QWORD *)(a1 + 392);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 16 * v9 - 16);
  if ( v9 )
    *(_QWORD *)(a1 + 392) = v9 - 1;
  if ( 8 * v8 < v10 )
    return set_qerrno(81, v12);
  if ( !v10 )
  {
    if ( **(_QWORD **)(a1 + 104) )
      return set_qerrno(1500, v12);
    LOBYTE(v10) = -1;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 112) + 187LL) = v10;
  return 0;
}

