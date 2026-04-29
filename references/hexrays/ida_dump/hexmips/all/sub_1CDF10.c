__int64 __fastcall sub_1CDF10(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  int v4; // eax
  unsigned int v6; // ebx
  int v8; // r15d
  int v9; // eax
  _QWORD *v10; // [rsp+8h] [rbp-70h]
  _QWORD v11[2]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v12[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]

  v4 = *(_DWORD *)a3;
  v13 = __readfsqword(0x28u);
  v11[0] = 0;
  v11[1] = 0;
  if ( v4 != 2 )
  {
    if ( v4 != 3 )
      goto LABEL_3;
LABEL_11:
    v12[2] = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, *((unsigned __int16 *)a3 + 4));
    v12[0] = 1;
    v12[1] = a4;
    sub_120F80(a2, (unsigned __int8 *)v12);
    sub_118BA0((__int64)v12);
    goto LABEL_8;
  }
  copy_argloc(v11, a3);
  if ( !(unsigned __int8)optimize_argloc(v11, a4, 0) )
    goto LABEL_4;
  v4 = v11[0];
  a3 = v11;
  if ( LODWORD(v11[0]) == 3 )
    goto LABEL_11;
LABEL_3:
  if ( v4 == 4 && (a4 & 1) == 0 )
  {
    v10 = a3;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, *((unsigned __int16 *)a3 + 4));
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, *((unsigned __int16 *)v10 + 5));
    sub_1210A0(a2, v8, v9, (int)a4 / 2);
LABEL_8:
    v6 = 1;
    goto LABEL_5;
  }
LABEL_4:
  v6 = 0;
LABEL_5:
  cleanup_argloc(v11);
  return v6;
}
