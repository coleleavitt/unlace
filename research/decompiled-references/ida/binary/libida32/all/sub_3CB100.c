unsigned __int64 __fastcall sub_3CB100(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v7; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v13; // rbx
  unsigned int v14; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v15; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned int v16; // [rsp+10h] [rbp-28h] BYREF
  int v17; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v15 = a2;
  v14 = a3;
  v18 = __readfsqword(0x28u);
  if ( a3 )
  {
    if ( (unsigned __int8)sub_3C9DC0(a1 + 179, &v15, &v14, 0xCu) )
    {
      v13 = *a1;
      v17 = ea2node(v15);
      v16 = a3;
      sub_79B440(&v17, v13, 8, &v16, 4, 65);
    }
  }
  else
  {
    v4 = a1[181];
    v5 = a1 + 180;
    v7 = (__int64)v5;
    if ( v4 )
    {
      do
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v4 + 16);
          v10 = *(_QWORD *)(v4 + 24);
          if ( *(_DWORD *)(v4 + 32) >= a2 )
            break;
          v4 = *(_QWORD *)(v4 + 24);
          if ( !v10 )
            goto LABEL_7;
        }
        v7 = v4;
        v4 = *(_QWORD *)(v4 + 16);
      }
      while ( v9 );
LABEL_7:
      if ( v5 != (_QWORD *)v7 && a2 >= *(_DWORD *)(v7 + 32) )
      {
        sub_3B6130((__int64)(a1 + 179), v7, 13);
        v11 = *a1;
        v17 = ea2node(a2);
        sub_79B4D0(&v17, v11, 8, 65);
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}

