_QWORD *__fastcall sub_2159760(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD *v14; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-B0h]
  char v16; // [rsp+20h] [rbp-A8h]
  _QWORD *v17[2]; // [rsp+30h] [rbp-98h] BYREF
  char *v18; // [rsp+40h] [rbp-88h]
  __int64 v19; // [rsp+48h] [rbp-80h]
  __int64 v20; // [rsp+50h] [rbp-78h]
  _QWORD v21[2]; // [rsp+60h] [rbp-68h] BYREF
  char *v22; // [rsp+70h] [rbp-58h]
  __int64 v23; // [rsp+80h] [rbp-48h]

  (*(void (__fastcall **)(_QWORD **, _QWORD *, __int64))(*a2 + 64LL))(&v14, a2, a4);
  if ( (v16 & 1) != 0 )
  {
    v8 = v14;
    v14 = nullptr;
    v17[0] = v8;
    sub_A05760(v21, v17);
    if ( v17[0] )
      (*(void (__fastcall **)(_QWORD *))(*v17[0] + 8LL))(v17[0]);
    v9 = sub_215DEC0(a2[1]);
    v17[1] = (_QWORD *)(&dword_40 + 3);
    LOWORD(v20) = 773;
    v17[0] = "remaining size of archive too small for next archive member header ";
    v13 = a3 - v9;
    v18 = "at offset ";
    v21[0] = v17;
    v22 = (char *)&v13;
    LOWORD(v23) = 2818;
    sub_2158040(a1, (__int64)v17, 2818, v10, v11, v12, (char)v17);
  }
  else
  {
    v21[0] = "remaining size of archive too small for next archive member header ";
    v18 = (char *)v14;
    v22 = "for ";
    LOWORD(v23) = 773;
    v21[1] = 67;
    v17[0] = v21;
    v19 = v15;
    LOWORD(v20) = 1282;
    sub_2158040(a1, 1282, v15, 773, v5, v6, (char)v21);
  }
  sub_111DFC0((__int64 *)&v14);
  return a1;
}
