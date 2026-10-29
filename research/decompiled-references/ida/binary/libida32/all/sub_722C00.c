__int64 __fastcall sub_722C00(
        __int64 a1,
        __int64 a2,
        int a3,
        void (__fastcall __noreturn *a4)(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6))
{
  __int64 v7; // rdi
  bool v8; // zf
  unsigned __int8 v9; // al
  _QWORD *v10; // rdx
  __int64 *v11; // r12
  __int64 result; // rax

  v7 = a1 + 1648;
  *(_DWORD *)(v7 - 36) = 0;
  *(_QWORD *)(v7 - 1640) = 0;
  *(_QWORD *)(v7 - 1592) = 0;
  *(_QWORD *)(v7 - 1600) = 0;
  *(_DWORD *)(v7 - 1584) = 0;
  *(_BYTE *)(v7 + 2572) = 0;
  *(_QWORD *)(v7 + 2576) = 0;
  *(_BYTE *)(v7 + 4156) = 0;
  *(_DWORD *)(v7 + 4160) = 0;
  *(_QWORD *)(v7 + 4168) = 0;
  *(_OWORD *)(v7 + 4176) = 0;
  *(_QWORD *)(v7 - 8) = 0;
  *(_QWORD *)(v7 + 1008) = 0;
  memset(
    (void *)(v7 & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8 * ((unsigned __int64)((unsigned int)a1 - (v7 & 0xFFFFFFF8) + 2664) >> 3));
  sub_724A50(a1, 1);
  v8 = byte_2CA273C == 0;
  *(_DWORD *)(a1 + 5800) = 100;
  *(_WORD *)(a1 + 1634) = 0;
  byte_2CA26CA = 0;
  unk_2CA26C8 = 0;
  if ( v8 )
  {
    signal(2, (__sighandler_t)((char *)&dword_0 + 1));
    signal(2, (__sighandler_t)((char *)&dword_0 + 1));
    byte_2CA273C = 1;
    if ( a4 )
      goto LABEL_3;
LABEL_8:
    a4 = off_2C57CC0;
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_8;
LABEL_3:
  qword_2CA2730 = (__int64 (__fastcall *)(_QWORD, _QWORD))a4;
  v9 = 0;
  dword_2CA2738 = 0;
  v10 = qword_2CA2740;
  *(_DWORD *)a1 = a3;
  *(_BYTE *)(a1 + 1616) = 0;
  while ( *v10 )
  {
    ++v9;
    ++v10;
    *(_BYTE *)(a1 + 1616) = v9;
    if ( v9 == 16 )
    {
      dword_2CA2738 = 3;
      sub_722BC0(3, 0);
    }
  }
  ++byte_2CA273D;
  qword_2CA2740[v9] = a1;
  v11 = (__int64 *)operator new(0x38u);
  sub_71EC20(v11);
  *(_QWORD *)(a1 + 16) = v11;
  result = sub_71BCE0(a1, a2);
  *(_BYTE *)(a1 + 5804) = result;
  return result;
}

