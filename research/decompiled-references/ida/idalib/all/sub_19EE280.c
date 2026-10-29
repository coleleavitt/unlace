__int64 __fastcall sub_19EE280(__int64 a1, _QWORD *a2, char *a3, int a4)
{
  bool v4; // zf
  __int64 v6; // r15
  char v7; // r13
  __int64 v8; // rbx
  char v9; // r12
  __int64 v10; // rax
  int v11; // [rsp+Ch] [rbp-6Ch] BYREF
  unsigned __int8 v12[8]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v13; // [rsp+18h] [rbp-60h]
  _QWORD v14[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *((_QWORD *)a3 + 1) == 0;
  v11 = a4;
  if ( !v4 )
    return 0;
  v6 = a2[1];
  v14[1] = a1;
  v14[0] = &v11;
  v7 = *a3;
  v14[2] = a3;
  if ( !v6 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_BYTE *)(*a2 + v8);
    if ( !a2[3] )
      break;
    v10 = *(_QWORD *)(a2[2] + 8 * v8);
    v12[0] = *(_BYTE *)(*a2 + v8);
    v13 = v10;
    if ( !v10 )
      goto LABEL_6;
LABEL_11:
    if ( ++v8 == v6 )
      return 0;
  }
  v12[0] = *(_BYTE *)(*a2 + v8);
  v13 = 0;
LABEL_6:
  if ( (unsigned __int8)sub_F5ED00(v12) != v7 && (v9 || v7 != 3) && (v9 != 3 || v7) )
    goto LABEL_11;
  return sub_19EDA40((__int64)v14, (__int64)v12);
}
