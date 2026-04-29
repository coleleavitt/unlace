__int64 __fastcall sub_23CA10(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v2 = *(_DWORD *)(a2 + 8);
  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  if ( v2 == 64 )
  {
    sub_1CE5D0(&v7, *(_QWORD *)(a2 + 24), 0, 0);
    v5 = v7;
    goto LABEL_7;
  }
  if ( v2 == 68 )
  {
    v5 = *(_QWORD *)(a2 + 24);
LABEL_7:
    v6 = sub_339AF0(a1, v5);
    goto LABEL_8;
  }
  if ( v2 != 48 )
    return 0;
  v6 = sub_23CA10(a1, *(_QWORD *)(a2 + 24));
LABEL_8:
  v3 = v6;
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v3;
}
