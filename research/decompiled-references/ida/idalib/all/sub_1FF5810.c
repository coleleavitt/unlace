_QWORD *__fastcall sub_1FF5810(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 (__fastcall *v4)(); // r13
  __int64 v5; // r15
  __int64 v6; // rbx
  _QWORD *v7; // rax
  void *v9[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v10; // [rsp+10h] [rbp-88h] BYREF
  void *v11; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v12[26]; // [rsp+30h] [rbp-68h] BYREF

  sub_22A4A80(v9);
  sub_22B9ED0(&v11, v9);
  if ( v12[7] == 15 )
    v4 = sub_22142C0;
  else
    v4 = sub_2211220;
  if ( v11 != v12 )
    operator delete(v11);
  if ( v9[0] != &v10 )
    operator delete(v9[0]);
  v5 = *a2;
  v6 = *a3;
  *a2 = 0;
  *a3 = 0;
  v7 = (_QWORD *)operator new(0x20u);
  *v7 = &off_2BE4D18;
  v7[1] = v5;
  v7[2] = v4;
  v7[3] = v6;
  *a1 = v7;
  return a1;
}
