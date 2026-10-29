__int64 __fastcall sub_CA6600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned int v9; // r15d
  __int64 v11; // [rsp+8h] [rbp-70h] BYREF
  __int64 (__fastcall **v12)(); // [rsp+10h] [rbp-68h] BYREF
  __int64 v13; // [rsp+18h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+30h] [rbp-48h]
  unsigned int v17; // [rsp+34h] [rbp-44h]
  char v18; // [rsp+38h] [rbp-40h]

  v5 = (unsigned __int64 *)(a2 + 16);
  v6 = *(_QWORD *)(a1 + 552);
  v13 = a1;
  v14 = v6;
  *(_QWORD *)(a1 + 552) = &v12;
  v12 = &off_2B21658;
  v7 = *(unsigned int *)(a2 + 4);
  v15 = 0;
  v8 = a2 + 8 * v7 + 16;
  v16 = 1;
  v18 = 0;
  if ( v8 == a2 + 16 )
  {
LABEL_8:
    v9 = 1;
  }
  else
  {
    while ( 1 )
    {
      v9 = sub_CA5C60(a1, *v5, a3, a4, a5);
      if ( !(_BYTE)v9 )
        break;
      if ( (unsigned __int64 *)v8 == ++v5 )
      {
        if ( !v18 )
          goto LABEL_8;
        v11 = 4;
        v9 = sub_C97CD0((__int64)&v12, 0);
        sub_C807C0(v13, v17, &v11);
        break;
      }
    }
  }
  v12 = &off_2B21658;
  sub_C974D0((__int64)&v12);
  return v9;
}

