__int64 __fastcall sub_3DC350(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // r12d
  int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v3 = *((unsigned __int8 *)a1 + 2233);
  v12 = __readfsqword(0x28u);
  if ( (_BYTE)v3 )
    return sub_3FC4A0(a2, a1 + 239, a3, 1, 0, 0);
  v6 = sub_3B90A0(a1, a3);
  v7 = *a2;
  v8 = *a1;
  v11 = v6;
  v9 = sub_79B840(&v11, v8, v7, 120);
  v10 = v9;
  if ( v9 == -1 )
  {
    *a2 = -1;
  }
  else
  {
    v3 = 1;
    *a2 = sub_3B9110(a1, v9);
    *((_BYTE *)a2 + 4) = sub_79B3A0(&v11, *a1, v10, 4216);
  }
  return v3;
}

