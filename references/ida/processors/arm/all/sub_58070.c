_QWORD *__fastcall sub_58070(__int64 *a1)
{
  __int64 module_data; // rax
  _QWORD *v2; // rsi
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  _QWORD *result; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  module_data = get_module_data();
  v2 = (_QWORD *)*a1;
  v3 = module_data;
  v4 = a1[2];
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 24) + 4LL) & 1) != 0 )
  {
    if ( v4 <= 0xE )
    {
      v7 = qvector_reserve((__int64)a1, (__int64)v2, 15, 1);
      *a1 = v7;
      v2 = (_QWORD *)v7;
    }
    a1[1] = 15;
    *v2 = 0x675F7362613A2001LL;
    *(_QWORD *)((char *)v2 + 6) = 0x732520023A32675FLL;
    result = (_QWORD *)*a1;
    *(_BYTE *)(*a1 + 14) = 0;
  }
  else
  {
    if ( v4 <= 0xF )
    {
      v6 = qvector_reserve((__int64)a1, (__int64)v2, 16, 1);
      *a1 = v6;
      v2 = (_QWORD *)v6;
    }
    a1[1] = 16;
    *v2 = 0x3244524F57200128LL;
    *(_QWORD *)((char *)v2 + 7) = 0x2929732528200232LL;
    result = (_QWORD *)*a1;
    *(_BYTE *)(*a1 + 15) = 0;
  }
  return result;
}
