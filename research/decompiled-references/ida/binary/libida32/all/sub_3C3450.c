__int64 __fastcall sub_3C3450(_QWORD *a1, __int64 a2, _DWORD *a3, unsigned __int8 *a4, __int64 a5)
{
  __int64 v5; // r15
  int v7; // eax
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r14
  int v11; // ebx
  unsigned int v13; // [rsp+Ch] [rbp-5Ch]
  unsigned __int8 *v14; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-50h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v5 = a2;
  v16 = __readfsqword(0x28u);
  v14 = a4;
  v15 = (unsigned __int64)&a4[a5];
  if ( (dword_2CA24C8 & 0x2000) != 0 )
    v7 = 0;
  else
    v7 = unpack_dd(&v14);
  if ( a3 )
    *a3 = v7;
  v8 = sub_6180E0(*a1);
  if ( (unsigned __int64)v14 >= v15 )
    return 0;
  v9 = *v14++;
  v13 = (unsigned __int8)v9;
  if ( (unsigned __int8)v9 > 0x20u )
    return 0;
  if ( (_BYTE)v9 )
  {
    v10 = a2 + 4 * v9;
    do
    {
      v11 = v8 + unpack_dd(&v14);
      if ( v11 != -1 )
        v11 -= sub_614FB0(*a1, 29);
      v5 += 4;
      *(_DWORD *)(v5 - 4) = v11;
    }
    while ( v5 != v10 );
  }
  return v13;
}

