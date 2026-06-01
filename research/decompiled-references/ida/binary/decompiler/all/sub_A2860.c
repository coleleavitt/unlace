_QWORD *__fastcall sub_A2860(__int64 a1, __int64 a2, char a3)
{
  int v3; // r12d
  unsigned int v4; // r12d
  _QWORD *v6; // rax
  _QWORD *v8; // [rsp+0h] [rbp-88h]
  _QWORD *v9; // [rsp+0h] [rbp-88h]
  __int64 v10; // [rsp+8h] [rbp-80h]
  _BYTE v11[16]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v12[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( (a3 & 1) == 0 )
    return 0;
  v3 = *(_DWORD *)(a2 + 36);
  if ( (v3 & 1) != 0 )
    return 0;
  v4 = v3 >> 1;
  if ( !(unsigned __int8)sub_11A640(v4) )
    return 0;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_121540(v11, a2 + 32);
  sub_121540(v12, a2 + 32);
  if ( (unsigned __int8)sub_124DA0(v11, v10, v4, 0) && (unsigned __int8)sub_125340(v12, v10, v4, 0) )
  {
    v6 = (_QWORD *)a2;
    if ( (a3 & 2) == 0 )
    {
      sub_11A5D0(a2 + 32, v11);
      sub_A1D70((__int64)v13, v10, *(_QWORD *)(a2 + 24), a2 + 64, (int)v4, 1);
      v9 = sub_A24B0(a1, a2, 1, (__int64)v12, a2 + 48, (__int64)v13);
      sub_11A960(v13);
      v6 = v9;
    }
  }
  else
  {
    v6 = 0;
  }
  v8 = v6;
  sub_11A960(v12);
  sub_11A960(v11);
  return v8;
}
