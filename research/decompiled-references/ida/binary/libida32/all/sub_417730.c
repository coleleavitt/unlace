unsigned __int64 __fastcall sub_417730(__int64 a1, __int64 a2, int *a3, unsigned int a4)
{
  _QWORD *v5; // rax
  int v6; // r12d
  int v8; // eax
  int v9; // edx
  _DWORD v11[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v5 = *(_QWORD **)(a2 + 1480);
  v6 = *a3;
  v12 = __readfsqword(0x28u);
  v8 = v6 + sub_614FB0(*v5, 29);
  v9 = v8 + a3[1] - *a3;
  v11[0] = v8;
  v11[1] = v9;
  sub_7975D0(a2, v11, a4);
  return v12 - __readfsqword(0x28u);
}

