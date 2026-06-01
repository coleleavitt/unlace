unsigned __int64 __fastcall sub_2B55D0(
        QT::QAbstractScrollArea **a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rsi
  int v9; // r13d
  const char *v10; // rsi
  void (*v11)(); // rax
  char v13; // al
  __int64 v14; // [rsp+10h] [rbp-68h] BYREF
  __int64 v15; // [rsp+18h] [rbp-60h]
  int v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  __int128 v19; // [rsp+38h] [rbp-40h]
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]

  v7 = *(_QWORD *)(a2 + 72);
  v20 = __readfsqword(0x28u);
  v16 = 0;
  v14 = 56;
  v15 = -1;
  v17 = -1;
  v18 = 0;
  v19 = 0;
  if ( (unsigned __int8)get_node_info(&v14, v7, a3, a4, a5, a6) )
  {
    v13 = (_DWORD)v15 != -1;
    if ( HIDWORD(v15) != -1 )
      v13 |= 2u;
    if ( v17 != -1 )
      v13 |= 4u;
    if ( (unsigned __int64)v19 > 1 )
      goto LABEL_16;
    if ( v16 )
      v13 |= 0x10u;
    if ( (v13 & 0xC) != 0 )
LABEL_16:
      v9 = 2;
    else
      v9 = (v13 & 3) != 0;
  }
  else
  {
    v9 = 0;
  }
  v10 = (const char *)a3;
  del_node_info(*(_QWORD *)(a2 + 72), a3);
  v11 = *((void (**)())*a1 + 104);
  if ( v11 != nullsub_78 )
  {
    v10 = (const char *)a2;
    ((void (__fastcall *)(QT::QAbstractScrollArea **, __int64, _QWORD, __int64))v11)(a1, a2, a3, 0xFFFFFFFFLL);
  }
  if ( v9 == 1 )
  {
    v10 = nullptr;
    sub_1F4880(a1[2], 0);
  }
  else if ( v9 == 2 )
  {
    v10 = nullptr;
    (*((void (__fastcall **)(QT::QAbstractScrollArea **, _QWORD, _QWORD))*a1 + 19))(a1, 0, 0);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, v10);
  }
  return v20 - __readfsqword(0x28u);
}
