__int64 __fastcall sub_3DA0D0(double a1)
{
  _QWORD *v1; // rdx
  __int64 v3; // r12
  QT::QAbstractScrollArea *v4; // rbx
  _QWORD *v5; // rbp
  const char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  double v11; // xmm0_8
  QT::QAbstractScrollArea *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 (__fastcall **v16)(); // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( dword_8BDE64 >= 0 )
  {
    v1 = *((_QWORD **)qword_8D0C80 + 91);
    if ( (unsigned __int64)dword_8BDE64 < v1[1] )
    {
      v3 = 8LL * dword_8BDE64;
      netnode_supdel(qword_8D0C88, *(_QWORD *)(*v1 + v3), 321);
      v4 = qword_8D0C80;
      v5 = *((_QWORD **)qword_8D0C80 + 91);
      memmove((void *)(v3 + *v5), (const void *)(v3 + *v5 + 8), 8LL * v5[1]-- - v3 - 8);
      v6 = *((const char **)v4 + 115);
      v16 = watchplace_t___vtable;
      v17 = 0x22B00000000LL;
      v7 = *(_QWORD *)(*((_QWORD *)v4 + 91) + 8LL);
      LODWORD(v17) = 0x7FFFFFFF;
      HIDWORD(v17) = ((_DWORD)v7 == 0) + (_DWORD)v7 - 1;
      sub_1EB140(v4, v6, (__int64)&v16);
      v10 = sub_1EB5B0((__int64)qword_8D0C80, (__int64)v6, v8, v9, a1);
      v11 = (*(double (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 152LL))(v10, 0, 0);
      v12 = qword_8D0C80;
      v15 = sub_1F3B50((__int64)qword_8D0C80, 0, v13, v14, v11);
      if ( v15 && (unsigned __int64)*(unsigned int *)(v15 + 12) < *(_QWORD *)(*((_QWORD *)v12 + 91) + 8LL) )
        dword_8BDE64 = *(_DWORD *)(v15 + 12);
      else
        dword_8BDE64 = -1;
    }
  }
  return 1;
}
