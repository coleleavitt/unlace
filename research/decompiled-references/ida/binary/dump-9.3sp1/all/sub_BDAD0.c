__int64 __fastcall sub_BDAD0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[16]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v5[5]; // [rsp+10h] [rbp-78h] BYREF
  char v6; // [rsp+38h] [rbp-50h]
  __int64 v7; // [rsp+40h] [rbp-48h]
  __int64 v8; // [rsp+48h] [rbp-40h]
  __int64 v9; // [rsp+50h] [rbp-38h]
  __int64 v10; // [rsp+58h] [rbp-30h]
  unsigned __int64 v11; // [rsp+68h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v5[0] = &off_4DC158;
  v7 = a1;
  v8 = a1 + 64;
  v10 = a3;
  memset(&v5[1], 0, 32);
  v6 = 0;
  v9 = a1 + 16;
  if ( (unsigned int)sub_11E9B0(a2, v5, 0, 0) )
    return 0;
  if ( *(_BYTE *)a2 == 4 )
  {
    sub_15BC70(*(_QWORD *)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), 0, 0, 0, 0, 0);
    if ( **(_DWORD **)(a2 + 8) == 4 )
    {
      sub_123A40(v4);
      sub_11CA10(a2, v4);
      sub_11CDA0(v4);
    }
  }
  return 1;
}
