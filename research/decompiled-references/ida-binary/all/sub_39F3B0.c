__int64 __fastcall sub_39F3B0(
        __int64 a1,
        QT::QPainter *a2,
        __int64 a3,
        signed int a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  int v15; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v10 = sub_39B280(a1, a5, &v15, 1);
  if ( v10 )
  {
    v11 = *(unsigned __int16 *)(v10 + 8) - 3;
    if ( (unsigned __int64)v15 < *(_QWORD *)(a3 + 8) )
      v12 = *(_DWORD *)(*(_QWORD *)a3 + 84LL * v15 + 80);
    else
      v12 = *(_DWORD *)(a3 + 44);
    sub_39F270(a1, a2, a4, v12, v11, a6, a7, a8);
    sub_39B470(a1, a2, v12, v11, 2, a6);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v11;
}
