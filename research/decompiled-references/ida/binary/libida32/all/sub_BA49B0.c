__int64 __fastcall sub_BA49B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  int v4; // eax
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD v10[4]; // [rsp+0h] [rbp-20h] BYREF

  v4 = *(_DWORD *)a2 & 0x7FFFFFFF;
  v10[3] = v3;
  v10[1] = v2;
  switch ( v4 )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
      return 1;
    case 1:
      v8 = *a1;
      if ( (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD, unsigned __int64))(v8 + 136))(
                 a1,
                 *(_QWORD *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL),
                 (*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL) + 8);
      else
        return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v8 + 128))(a1, *(_QWORD *)(a2 + 8));
    case 6:
    case 7:
      v9 = (_QWORD *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL);
      if ( *v9 && !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 88))(a1, *v9, v9[1]) )
        return 0;
      sub_EFED50(v10, *(_QWORD *)(a2 + 8));
      return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 120))(a1, v10[0]);
    case 8:
      return (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*a1 + 96))(
               a1,
               *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFCLL);
    case 9:
      v6 = *(_QWORD *)(a2 + 8);
      v7 = v6 + 24LL * *(unsigned int *)(a2 + 4);
      if ( v6 == v7 )
        return 1;
      break;
    default:
      return 1;
  }
  while ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 104))(a1, v6) )
  {
    v6 += 24;
    if ( v7 == v6 )
      return 1;
  }
  return 0;
}

