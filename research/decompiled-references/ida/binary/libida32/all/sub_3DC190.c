__int64 __fastcall sub_3DC190(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  int v6; // eax
  __int64 v7; // rsi
  unsigned int v8; // eax
  int v9; // ebp
  int v10; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v3 = *((unsigned __int8 *)a1 + 2233);
  v11 = __readfsqword(0x28u);
  if ( (_BYTE)v3 )
    return sub_3FC400(a2, a1 + 239, a3, 1, 0, 0);
  v6 = sub_3B90A0(a1, a3);
  v7 = *a1;
  v10 = v6;
  v8 = sub_79B7E0(&v10, v7, 120);
  v9 = v8;
  if ( v8 != -1 )
  {
    v3 = 1;
    *(_BYTE *)(a2 + 4) = sub_79B3A0(&v10, *a1, v8, 4216);
    v9 = sub_3B9110(a1, v9);
  }
  *(_DWORD *)a2 = v9;
  return v3;
}

