__int64 __fastcall sub_3C86B0(unsigned __int8 **a1, __int64 a2, __int64 *a3, unsigned __int8 *a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int8 **v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r14
  char v14; // al
  char v16; // al
  unsigned int v17; // eax
  __int64 v18; // rdx
  bool v19; // zf
  unsigned int v20; // [rsp+Ch] [rbp-5Ch]
  unsigned __int8 *v21; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v6 = a2;
  v23 = __readfsqword(0x28u);
  v21 = a4;
  v8 = (unsigned int)dword_2CCC3C8;
  v22 = (unsigned __int64)&a4[a5];
  v9 = 0;
  if ( (dword_2CCC3C8 & 0x2000) == 0 )
  {
    BYTE1(v8) = BYTE1(dword_2CCC3C8) & 0x20;
    v16 = is_cvt64(a1, a2, v8);
    a2 = v22;
    if ( v16 )
    {
      v17 = unpack_dd(&v21);
      v18 = v17;
      v19 = v17 == -1;
      v9 = -1;
      if ( !v19 )
        v9 = v18;
    }
    else
    {
      v9 = unpack_dq(&v21);
    }
  }
  if ( a3 )
    *a3 = v9;
  v10 = (unsigned __int8 **)*a1;
  v11 = sub_634EF0(*a1);
  if ( (unsigned __int64)v21 >= v22 )
    return 0;
  v12 = *v21++;
  v20 = (unsigned __int8)v12;
  if ( (unsigned __int8)v12 > 0x20u )
    return 0;
  if ( (_BYTE)v12 )
  {
    v13 = v6 + 8 * v12;
    while ( 1 )
    {
      v14 = is_cvt64(v10, a2, v12);
      v10 = &v21;
      if ( v14 )
      {
        a2 = (unsigned int)unpack_dd(&v21) + (unsigned int)v11;
        if ( a2 == 0xFFFFFFFFLL )
          goto LABEL_12;
LABEL_9:
        v10 = a1;
        v6 += 8;
        *(_QWORD *)(v6 - 8) = sub_3B9E20(a1, a2);
        if ( v6 == v13 )
          return v20;
      }
      else
      {
        a2 = v11 + unpack_dq(&v21);
        if ( a2 != -1 )
          goto LABEL_9;
LABEL_12:
        v6 += 8;
        *(_QWORD *)(v6 - 8) = -1;
        if ( v6 == v13 )
          return v20;
      }
    }
  }
  return v20;
}
