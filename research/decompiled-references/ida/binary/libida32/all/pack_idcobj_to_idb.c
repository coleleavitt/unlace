__int64 __fastcall pack_idcobj_to_idb(_BYTE *a1, _QWORD *a2, unsigned int a3, int a4)
{
  __int64 result; // rax
  int v5[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-50h]
  char v7; // [rsp+Ch] [rbp-4Ch]
  int v8[2]; // [rsp+10h] [rbp-48h] BYREF
  int v9[2]; // [rsp+18h] [rbp-40h]
  int v10; // [rsp+20h] [rbp-38h]
  void *ptr; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  int v13[2]; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]
  int v15[2]; // [rsp+48h] [rbp-10h]

  *(_QWORD *)v15 = __readfsqword(0x28u);
  LODWORD(v12) = a4 | 1;
  v6 = a3;
  *(_QWORD *)v5 = &off_2B04D10;
  v7 = 0;
  *(_QWORD *)v13 = qword_2CA1698;
  *(_QWORD *)v8 = &off_2B04CC0;
  v10 = 0;
  *(_QWORD *)v9 = 0;
  ptr = v5;
  v14 = 0;
  result = sub_5712E0((__int64)v8, a1, a2, a3, 0);
  if ( (_DWORD)result )
    return set_qerrno((unsigned int)v14, a1);
  return result;
}

