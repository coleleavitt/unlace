__int64 __fastcall sub_3B90A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 872LL);
  switch ( *(_DWORD *)(v3 + 8) )
  {
    case 1:
      result = (unsigned __int8)sub_3939F0(a2, *(_QWORD *)(v3 + 16));
      break;
    case 2:
      result = (unsigned __int8)sub_392450(a2, v3 + 32, *(unsigned int *)(v3 + 16));
      break;
    case 3:
      result = (unsigned __int8)sub_3926D0(a2, *(_QWORD *)(v3 + 16));
      break;
    case 4:
      result = (unsigned __int8)sub_396890(a2);
      break;
    case 5:
      sub_387930(a2);
      v4 = sub_3C0830(*(_QWORD *)(a2 + 24) + 1312LL);
      result = 0;
      if ( v4 )
        result = (unsigned __int8)sub_3B8B00(*(_QWORD *)(a1 + 16), a2, 1u, v5, v6, v7);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
