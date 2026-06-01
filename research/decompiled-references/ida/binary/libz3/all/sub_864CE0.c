__int64 __fastcall sub_864CE0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 440) + 24LL * (unsigned int)a2;
  switch ( *(_DWORD *)v3 )
  {
    case 0:
      result = sub_861930(a1, **(_QWORD **)(v3 + 8));
      break;
    case 1:
      result = sub_862110(a1, a2, v3, a3);
      break;
    case 2:
      result = sub_862B60(a1, **(_QWORD **)(v3 + 8), **(_QWORD **)(v3 + 16));
      break;
    case 3:
      result = sub_864C70(a1, v3);
      break;
    case 4:
      result = sub_862FF0(a1, **(_QWORD **)(v3 + 8), **(_QWORD **)(v3 + 16));
      break;
    default:
      sub_1872CE0("");
      sub_1873130(114, 72);
  }
  return result;
}

