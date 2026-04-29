__int64 __fastcall sub_333610(unsigned __int64 *a1, __int64 a2, _QWORD *a3, unsigned __int64 a4, int a5)
{
  unsigned int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rsi
  char v12; // al
  _QWORD v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  v8 = sub_1364D0((__int64)a3, a5, a4);
  if ( !(_BYTE)v8 )
    return 0;
  v9 = v8;
  if ( *(_DWORD *)(a2 + 60) == a5 )
  {
    v13[0] = 0;
    v12 = sub_32C960(a3, v13, a4, 1);
    v10 = v13[0];
    if ( v12 )
      goto LABEL_4;
    return 0;
  }
  v10 = a3[11] - a3[13];
  v13[0] = v10;
LABEL_4:
  *a1 = sub_1CAFA0((__int64)a3, v10, a4);
  return v9;
}
