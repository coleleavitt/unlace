__int64 __fastcall pack_idcobj_to_idb(_BYTE *a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int v5[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v6; // [rsp+8h] [rbp-60h]
  int v7; // [rsp+10h] [rbp-58h]
  int v8[2]; // [rsp+20h] [rbp-48h] BYREF
  void *ptr; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  int v11[2]; // [rsp+38h] [rbp-30h]
  int v12; // [rsp+40h] [rbp-28h]
  int v13[2]; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+50h] [rbp-18h]
  int v15[2]; // [rsp+58h] [rbp-10h]

  *(_QWORD *)v15 = __readfsqword(0x28u);
  v12 = a4 | 1;
  v6 = a3;
  *(_QWORD *)v5 = &off_2B2ECD0;
  LOBYTE(v7) = 0;
  *(_QWORD *)v13 = qword_2CCB598;
  *(_QWORD *)v8 = &off_2B2EC80;
  *(_QWORD *)v11 = v5;
  ptr = nullptr;
  v10 = 0;
  v14 = 0;
  result = sub_58A9F0((__int64)v8, a1, a2, a3, 0);
  if ( (_DWORD)result )
    return set_qerrno((unsigned int)v14);
  return result;
}
