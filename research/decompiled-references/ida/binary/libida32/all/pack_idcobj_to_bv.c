__int64 __fastcall pack_idcobj_to_bv(_BYTE *a1, _QWORD *a2, __int64 a3, unsigned int *a4, int a5)
{
  __int64 v7; // rdi
  unsigned int v8; // esi
  char v9; // r10
  unsigned int v10; // ecx
  _BYTE *v11; // rsi
  __int64 result; // rax
  int v13[2]; // [rsp+0h] [rbp-68h] BYREF
  int v14; // [rsp+8h] [rbp-60h]
  char v15; // [rsp+Ch] [rbp-5Ch]
  int v16[2]; // [rsp+10h] [rbp-58h]
  int v17[2]; // [rsp+18h] [rbp-50h]
  int v18[2]; // [rsp+20h] [rbp-48h] BYREF
  void *ptr; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  int v21[2]; // [rsp+38h] [rbp-30h]
  int v22; // [rsp+40h] [rbp-28h]
  int v23[2]; // [rsp+48h] [rbp-20h]
  int v24; // [rsp+50h] [rbp-18h]
  int v25[2]; // [rsp+58h] [rbp-10h]

  *(_QWORD *)v25 = __readfsqword(0x28u);
  if ( !a3 )
    return 3;
  v7 = *(_QWORD *)(a3 + 8);
  if ( a4 )
  {
    v8 = *a4;
    if ( *a4 == -1 )
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
    v8 = *(_QWORD *)(a3 + 8);
    v9 = 0;
  }
  *(_QWORD *)v17 = a3;
  v14 = v7;
  *(_QWORD *)v16 = a4;
  *(_QWORD *)v13 = &off_2B04D70;
  v22 = a5 | 1;
  *(_QWORD *)v23 = qword_2CA1698;
  *(_QWORD *)v18 = &off_2B04CC0;
  v10 = v8;
  v11 = a1;
  v15 = v9;
  ptr = nullptr;
  LODWORD(v20) = 0;
  *(_QWORD *)v21 = v13;
  v24 = 0;
  result = sub_5712E0((__int64)v18, a1, a2, v10, 0);
  if ( (_DWORD)result )
    return set_qerrno((unsigned int)v24, v11);
  return result;
}

