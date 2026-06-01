__int64 __fastcall sub_3BD290(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  unsigned int v6; // r13d
  bool v7; // zf
  int v8; // eax
  void *v9; // rax
  unsigned int v10; // esi
  unsigned int v12; // eax
  unsigned int v13; // eax
  _DWORD v14[3]; // [rsp+0h] [rbp-68h] BYREF
  char v15; // [rsp+Ch] [rbp-5Ch]
  __int64 (__fastcall **v16[11])(_QWORD, _QWORD *, __int64); // [rsp+10h] [rbp-58h] BYREF

  v3 = a2;
  v16[5] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))__readfsqword(0x28u);
  v5 = sub_4EE820(a1 + 1552, a2);
  if ( !v5 )
    return v3;
  v6 = *(_DWORD *)(v5 + 4);
  if ( (a3 & 1) != 0 )
  {
    v13 = sub_4087C0(a1, (unsigned int)a2);
    if ( v6 > v13 )
      v6 = v13;
  }
  v7 = *(_QWORD *)(a1 + 768) == 0;
  v15 = 0;
  v8 = -1;
  v14[2] = 0;
  v14[1] = a3;
  if ( v7 )
    v8 = (sub_3B9AA0(a1, a2, 1) >> 8) & 1;
  v14[0] = v8;
  v9 = sub_3B3450;
  if ( (a3 & 0xE) != 0 )
    v9 = sub_3B3550;
  v10 = a2 + 1;
  if ( v3 != -1 )
  {
    v16[1] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))a1;
    v16[0] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))&off_2AFCFD8;
    v16[2] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))v9;
    v16[3] = (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))v14;
    if ( v10 < v6 )
    {
      v12 = sub_3B3AD0((_QWORD *)a1, v10, v6, 0, v16);
      if ( v6 > v12 )
        v6 = v12;
      if ( v15 )
        return v3;
    }
  }
  return v6;
}

