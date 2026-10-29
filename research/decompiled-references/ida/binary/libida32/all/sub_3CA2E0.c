unsigned __int64 __fastcall sub_3CA2E0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v5; // eax
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v13; // [rsp+Ch] [rbp-2Ch] BYREF
  int v14; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v13 = a2;
  v12 = a3;
  v15 = __readfsqword(0x28u);
  v5 = -1;
  if ( a2 != -1 )
    v5 = a2 + sub_614FB0(*a1, 29);
  v14 = v5;
  if ( v12 )
  {
    if ( (unsigned __int8)sub_3C9DC0(a1 + 185, &v13, &v12, 7u) )
      sub_79B440(&v14, *a1, 37, &v12, 4, 83);
  }
  else
  {
    v7 = a1[187];
    v8 = a1 + 186;
    if ( v7 )
    {
      v9 = (__int64)(a1 + 186);
      do
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(v7 + 16);
          v11 = *(_QWORD *)(v7 + 24);
          if ( *(_DWORD *)(v7 + 32) >= a2 )
            break;
          v7 = *(_QWORD *)(v7 + 24);
          if ( !v11 )
            goto LABEL_12;
        }
        v9 = v7;
        v7 = *(_QWORD *)(v7 + 16);
      }
      while ( v10 );
LABEL_12:
      if ( v8 != (_QWORD *)v9 && a2 >= *(_DWORD *)(v9 + 32) )
      {
        sub_3B6130((__int64)(a1 + 185), v9, 8);
        sub_79B4D0(&v14, *a1, 37, 83);
      }
    }
  }
  return v15 - __readfsqword(0x28u);
}

