__int64 __fastcall sub_4CABE0(__int64 *a1, int a2, char a3, unsigned int *a4)
{
  unsigned int v4; // eax
  int v7; // edi
  __int64 result; // rax
  unsigned int v9; // eax
  __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // rbp
  unsigned __int8 v13; // al
  unsigned int i; // r12d
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-78h]
  int v19; // [rsp+1Ch] [rbp-5Ch] BYREF
  _BYTE v20[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v4 = a4[3];
  if ( (v4 & 0x40) != 0 )
  {
LABEL_3:
    v7 = a3 & 0xF;
    if ( v7 != 15 )
    {
LABEL_4:
      result = 0;
      if ( v7 > 8 )
        return result;
      v9 = sub_4CA080(v7);
      v10 = *a1;
      v11 = v9;
      v12 = sub_4CA9F0(v20, 18, a4);
      v19 = sub_3B90A0(*(_QWORD **)(v10 + 1480), a2);
      sub_79B440(&v19, v10, v11, v20, v12, 83);
      return 1;
    }
LABEL_12:
    for ( i = 9; i != 12; ++i )
    {
      v15 = *a1;
      v18 = sub_4CA9F0(v20, 18, a4);
      v16 = sub_3B90A0(*(_QWORD **)(v15 + 1480), a2);
      v17 = i;
      v19 = v16;
      sub_79B440(&v19, v15, v17, v20, v18, 83);
    }
    return 1;
  }
  v13 = v4 & 0x4F;
  if ( v13 <= 2u )
  {
    if ( v13 )
      goto LABEL_3;
  }
  else if ( (unsigned __int8)(v13 - 9) <= 1u )
  {
    goto LABEL_3;
  }
  result = 0;
  if ( *a4 != -1 )
  {
    v7 = a3 & 0xF;
    if ( v7 != 15 )
      goto LABEL_4;
    goto LABEL_12;
  }
  return result;
}

