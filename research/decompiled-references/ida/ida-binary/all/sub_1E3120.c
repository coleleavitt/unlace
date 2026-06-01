unsigned __int64 __fastcall sub_1E3120(__int64 a1, __int64 a2)
{
  int v2; // r13d
  _DWORD *v3; // rax
  __int64 v4; // r11
  unsigned int v5; // edx
  __int64 v7; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+Ch] [rbp-6Ch]
  int v9; // [rsp+14h] [rbp-64h]
  _BYTE v10[40]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_1E1330((__int64)&v7, a1, 0);
  v2 = v8;
  if ( (_DWORD)v8 != -1 )
  {
    sub_531CA0(v10, a2, 0, 1);
    sub_534680(&qword_8CB410, &off_85DB80, 9, 0);
    sub_539A10(a2, &qword_8CB410);
    sub_1E2640(a1, a2, 0xFFFFFFFF, v2);
    v3 = sub_1E0240(*(_QWORD *)(a1 + 728), v8);
    if ( v3 == *(_DWORD **)(v4 + 8) || v9 < 0 || (unsigned __int64)v9 >= *((_QWORD *)v3 + 3) )
      v5 = -1;
    else
      v5 = *(_DWORD *)(*((_QWORD *)v3 + 2) + 4LL * v9);
    sub_1E2640(a1, a2, v5, v2);
    sub_5392E0(a2, 0, 1);
    sub_531D60(v10);
  }
  sub_1E2F40(a1, a2);
  sub_5392E0(a2, 0, 1);
  sub_1E1BF0(a1, a2);
  sub_531CA0(v10, a2, 0, 1);
  sub_534680(&qword_8CB3F0, &off_85DB40, 2, 0);
  sub_539A10(a2, &qword_8CB3F0);
  sub_531D60(v10);
  return v11 - __readfsqword(0x28u);
}
