__int64 __fastcall sub_717300(__int64 a1, __int64 a2, int a3, void (__fastcall __noreturn *a4)())
{
  __int64 v7; // rdi
  bool v8; // zf
  unsigned __int8 v9; // al
  _QWORD *v10; // rdx
  __int64 *v11; // r12
  __int64 result; // rax

  v7 = a1 + 1648;
  *(_WORD *)(v7 + 4160) = 0;
  *(_QWORD *)(v7 - 1640) = 0;
  *(_QWORD *)(v7 - 1592) = 0;
  *(_QWORD *)(v7 - 1600) = 0;
  *(_DWORD *)(v7 - 36) = 0;
  *(_DWORD *)(v7 - 1584) = 0;
  *(_BYTE *)(v7 + 2572) = 0;
  *(_QWORD *)(v7 + 2576) = 0;
  *(_BYTE *)(v7 + 4152) = 0;
  *(_QWORD *)(v7 + 4168) = 0;
  *(_OWORD *)(v7 + 4176) = 0;
  *(_QWORD *)(v7 - 8) = 0;
  *(_QWORD *)(v7 + 1008) = 0;
  memset(
    (void *)(v7 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v7 & 0xFFFFFFF8) + 2664) >> 3));
  sub_7177A0(a1, 1);
  v8 = byte_2CA2614 == 0;
  *(_DWORD *)(a1 + 5796) = 100;
  *(_WORD *)(a1 + 1634) = 0;
  byte_2CA25C2 = 0;
  unk_2CA25C1 = 0;
  if ( v8 )
  {
    signal(2, (__sighandler_t)((char *)&dword_0 + 1));
    signal(2, (__sighandler_t)((char *)&dword_0 + 1));
    byte_2CA2614 = 1;
    if ( a4 )
      goto LABEL_3;
LABEL_8:
    a4 = off_2C57CC0;
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_8;
LABEL_3:
  qword_2CA2608 = (__int64 (__fastcall *)(_QWORD, _QWORD))a4;
  v9 = 0;
  dword_2CA2610 = 0;
  v10 = qword_2CA2620;
  *(_DWORD *)a1 = a3;
  *(_BYTE *)(a1 + 1616) = 0;
  while ( *v10 )
  {
    ++v9;
    ++v10;
    *(_BYTE *)(a1 + 1616) = v9;
    if ( v9 == 16 )
    {
      dword_2CA2610 = 3;
      sub_7172B0(3, 0);
    }
  }
  ++byte_2CA2615;
  qword_2CA2620[v9] = a1;
  v11 = (__int64 *)operator new(0x38u);
  sub_715C80(v11);
  *(_QWORD *)(a1 + 16) = v11;
  result = sub_715080(a1, a2);
  *(_BYTE *)(a1 + 5800) = result;
  return result;
}

