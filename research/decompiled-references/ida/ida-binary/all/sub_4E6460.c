__int64 __fastcall sub_4E6460(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r8
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r8

  *(_QWORD *)(a1 + 32) = 0x100000000LL;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 1064) = 0;
  *(_QWORD *)a1 = &unk_894498;
  *(_OWORD *)(a1 + 16) = 0;
  QT::QObject::QObject((QT::QObject *)(a1 + 1072), nullptr);
  *(_QWORD *)(a1 + 1088) = a1;
  *(_QWORD *)(a1 + 1072) = &quick_filter_input_monitor_t___vtable;
  QT::QObject::QObject((QT::QObject *)(a1 + 1096), nullptr);
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1096) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)(a1 + 1096), 0, 0.0, v4, v5, v6);
  sub_4E60B0(a1 + 1128, a1);
  v7 = xmmword_8D1E68;
  result = a1 + 1640;
  *(_DWORD *)(a1 + 1640) = 0;
  *(_QWORD *)(a1 + 1656) = a1 + 1640;
  v9 = qword_8D1E60;
  *(_QWORD *)(a1 + 1648) = 0;
  *(_QWORD *)(a1 + 1664) = a1 + 1640;
  *(_QWORD *)(a1 + 1672) = 0;
  *(_DWORD *)(a1 + 1680) = 0;
  *(_QWORD *)(a1 + 1688) = -1;
  *(_DWORD *)(a1 + 1696) = -1;
  *(_QWORD *)(a1 + 1704) = 0;
  *(_QWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1752) = 0;
  *(_QWORD *)(a1 + 1760) = 0;
  *(_QWORD *)(a1 + 1800) = -1;
  *(_QWORD *)(a1 + 1808) = 0;
  *(_QWORD *)(a1 + 1816) = 0;
  *(_QWORD *)(a1 + 1824) = -1;
  *(_DWORD *)(a1 + 1832) = 0;
  *(_DWORD *)(a1 + 1840) = 0;
  *(_QWORD *)(a1 + 1848) = 0;
  *(_QWORD *)(a1 + 1872) = 0;
  *(_OWORD *)(a1 + 1712) = 0;
  *(_OWORD *)(a1 + 1736) = 0;
  *(_OWORD *)(a1 + 1768) = 0;
  *(_OWORD *)(a1 + 1784) = 0;
  *(_OWORD *)(a1 + 1856) = 0;
  if ( v7 )
  {
    v10 = (_QWORD *)v9;
    v11 = 0;
    while ( 1 )
    {
      v12 = v10;
      if ( !*v10 )
        break;
      ++v11;
      v10 += 2;
      if ( v7 == v11 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( *((_QWORD *)&xmmword_8D1E68 + 1) < (unsigned __int64)(v7 + 1) )
    {
      result = qvector_reserve(&qword_8D1E60, v9, v7 + 1, 16);
      qword_8D1E60 = result;
      v7 = xmmword_8D1E68;
      v9 = result;
    }
    v12 = (_QWORD *)(v9 + 16 * v7);
    *(_OWORD *)v12 = 0;
    *(_QWORD *)&xmmword_8D1E68 = xmmword_8D1E68 + 1;
  }
  *v12 = a2;
  v12[1] = a1;
  *(_DWORD *)(a1 + 1680) |= 1u;
  return result;
}
