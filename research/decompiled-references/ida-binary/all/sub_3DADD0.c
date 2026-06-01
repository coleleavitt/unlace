__int64 __fastcall copycontent_watch_ah_t__::vfunc_1(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax
  __int64 *v4; // rdi
  __int64 v5; // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[3] = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 != 33 )
  {
    result = 6;
    if ( v2 != 32 )
      return result;
LABEL_5:
    v4 = (__int64 *)QT::QAbstractItemView::model(*(QT::QAbstractItemView **)a2);
    v5 = *v4;
    v6[0] = -1;
    v6[1] = 0;
    v6[2] = 0;
    return (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *))(v5 + 136))(v4, v6) == 0 ? 7 : 3;
  }
  result = 6;
  if ( *(_BYTE *)(a1 + 12) )
    goto LABEL_5;
  return result;
}
