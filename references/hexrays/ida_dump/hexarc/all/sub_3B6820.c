__int64 __fastcall sub_3B6820(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        double a7)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 880LL);
  switch ( *(_DWORD *)(v8 + 8) )
  {
    case 1:
      result = (unsigned __int8)sub_391510(a2, *(_QWORD *)(v8 + 16), a3, a4, a5);
      break;
    case 2:
      result = (unsigned __int8)sub_38F680(a2, (__int64 *)(v8 + 32), *(_DWORD *)(v8 + 16));
      break;
    case 3:
      result = (unsigned __int8)sub_38F900(a2, *(_QWORD *)(v8 + 16), a7, a3, a4, a5, a6);
      break;
    case 4:
      result = (unsigned __int8)sub_393DD0(a2);
      break;
    case 5:
      sub_384830(a2);
      v9 = sub_3BE030(*(_QWORD *)(a2 + 24) + 1312LL);
      result = 0;
      if ( v9 )
        result = (unsigned __int8)sub_3B6280(*(_QWORD *)(a1 + 16), a2, 1u, v10, v11, v12);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
