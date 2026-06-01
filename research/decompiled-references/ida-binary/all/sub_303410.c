__int64 __fastcall sub_303410(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64, unsigned __int8); // rax
  char v7; // r13

  sub_53A660();
  *(_QWORD *)a1 = &ida_dialog_exec_ctl_t___vtable;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = -1;
  sub_277730((_DWORD *)(a1 + 60), -1);
  result = *(unsigned int *)(a1 + 40);
  if ( (result & 0x10000) == 0 )
  {
    if ( (result & 0x20000) == 0 )
      return result;
LABEL_8:
    result = set_ida_state(2);
    *(_DWORD *)(a1 + 56) = result;
    return result;
  }
  v3 = operator new(0x10u);
  v4 = QT::QCoreApplication::self;
  *(_QWORD *)v3 = QT::QCoreApplication::self;
  v5 = v4 + 2;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(v4[2] + 128LL);
  if ( v6 == IDAApplication__::vfunc_16 )
  {
    if ( qword_8CD748 )
    {
      v7 = sub_30EEE0();
      sub_30EEF0(qword_8CD748, 0);
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    v7 = v6((__int64)v5, 0);
  }
  result = *(unsigned int *)(a1 + 40);
  *(_BYTE *)(v3 + 8) = v7;
  *(_QWORD *)(a1 + 48) = v3;
  if ( (result & 0x20000) != 0 )
    goto LABEL_8;
  return result;
}
