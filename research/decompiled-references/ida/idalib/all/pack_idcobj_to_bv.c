__int64 __fastcall pack_idcobj_to_bv(_BYTE *a1, _QWORD *a2, __int64 a3, int *a4, int a5)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  char v9; // r10
  __int64 result; // rax
  int v11[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v12; // [rsp+8h] [rbp-70h]
  int v13; // [rsp+10h] [rbp-68h]
  int v14[2]; // [rsp+18h] [rbp-60h]
  int v15[2]; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  int v17[2]; // [rsp+38h] [rbp-40h]
  int v18[2]; // [rsp+40h] [rbp-38h]
  int v19[2]; // [rsp+48h] [rbp-30h]
  int v20; // [rsp+50h] [rbp-28h]
  int v21[2]; // [rsp+58h] [rbp-20h]
  int v22; // [rsp+60h] [rbp-18h]
  int v23[2]; // [rsp+68h] [rbp-10h]

  *(_QWORD *)v23 = __readfsqword(0x28u);
  if ( !a3 )
    return 3;
  v7 = *(_QWORD *)(a3 + 8);
  if ( a4 )
  {
    v8 = *a4;
    if ( (_DWORD)v8 == -1 )
    {
      v9 = 1;
      v8 = 0;
    }
    else
    {
      v9 = 0;
      a4 = nullptr;
    }
  }
  else
  {
    v8 = (int)v7;
    v9 = 0;
  }
  *(_QWORD *)v15 = a3;
  v12 = v7;
  *(_QWORD *)v14 = a4;
  *(_QWORD *)v11 = &off_2B2ED30;
  v20 = a5 | 1;
  *(_QWORD *)v21 = qword_2CCB598;
  v16 = (__int64)&off_2B2EC80;
  LOBYTE(v13) = v9;
  *(_QWORD *)v17 = 0;
  *(_QWORD *)v18 = 0;
  *(_QWORD *)v19 = v11;
  v22 = 0;
  result = sub_58A9F0((__int64)&v16, a1, a2, v8, 0);
  if ( (_DWORD)result )
    return set_qerrno((unsigned int)v22);
  return result;
}
