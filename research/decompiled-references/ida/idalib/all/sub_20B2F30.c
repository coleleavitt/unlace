unsigned __int64 __fastcall sub_20B2F30(_WORD *a1, unsigned int a2, _QWORD *a3)
{
  unsigned __int64 v3; // r11
  unsigned __int8 v5; // al
  __int64 v6; // rax
  _QWORD *v7; // rbx
  unsigned __int64 result; // rax
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rdx

  v3 = (unsigned __int64)a1;
  v5 = *((_BYTE *)a1 - 16);
  if ( (v5 & 2) != 0 )
    v6 = *((_QWORD *)a1 - 4);
  else
    v6 = (__int64)&a1[-4 * ((v5 >> 2) & 0xF) - 8];
  v7 = (_QWORD *)(v6 + 8LL * a2);
  result = 0;
  v9 = (_QWORD *)*v7;
  if ( (*a1 & 0x7F00) != 0 )
    v3 = 0;
  if ( v9 )
    result = sub_20A0850((__int64)v7, v9);
  *v7 = a3;
  if ( a3 )
  {
    v10 = 1;
    if ( v3 )
      v10 = v3 & 0xFFFFFFFFFFFFFFFCLL | 1;
    return sub_20B2EE0((__int64)v7, a3, v10);
  }
  return result;
}
