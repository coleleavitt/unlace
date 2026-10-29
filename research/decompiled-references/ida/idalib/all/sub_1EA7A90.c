__int64 __fastcall sub_1EA7A90(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  unsigned int v11; // eax
  __int64 *v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ebx

  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 112LL))(*(_QWORD *)(a1 + 8));
  if ( !(_BYTE)v11 )
  {
    v14 = v11;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 112LL))(*(_QWORD *)(a1 + 16)) )
      return v14;
    if ( !a4 )
      goto LABEL_5;
    goto LABEL_9;
  }
  v12 = *(__int64 **)(a1 + 8);
  v13 = *v12;
  if ( a4 )
  {
    v14 = (*(__int64 (**)(void))(v13 + 120))();
    if ( !(_BYTE)v14 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 112LL))(*(_QWORD *)(a1 + 16)) )
        return v14;
      goto LABEL_9;
    }
    v12 = *(__int64 **)(a1 + 8);
    v13 = *v12;
  }
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD, _QWORD, _QWORD))(v13 + 128))(
          v12,
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 112LL))(*(_QWORD *)(a1 + 16)) )
  {
    if ( !a4 )
    {
LABEL_5:
      v14 |= (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 128LL))(
               *(_QWORD *)(a1 + 16),
               a2,
               a3,
               a4,
               a5,
               a6);
      return v14;
    }
LABEL_9:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 120LL))(*(_QWORD *)(a1 + 16)) )
      return v14;
    goto LABEL_5;
  }
  return v14;
}
