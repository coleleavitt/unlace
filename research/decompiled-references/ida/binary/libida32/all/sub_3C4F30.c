unsigned __int64 __fastcall sub_3C4F30(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  _QWORD *v6; // r14
  int v7; // eax
  int v8; // eax
  int v10; // [rsp+0h] [rbp-38h] BYREF
  int v11; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v6 = *(_QWORD **)(a1 + 1480);
  v12 = __readfsqword(0x28u);
  v7 = 0;
  if ( a3 != -1 )
    v7 = a3 + sub_614FB0(*v6, 29) + 1;
  v10 = v7;
  v8 = -1;
  if ( a2 != -1 )
    v8 = a2 + sub_614FB0(*v6, 29);
  v11 = v8;
  sub_79B440(&v11, a1, 3, &v10, 4, 65);
  if ( a4 )
    sub_3FE080(v6, a2, a3, 3);
  return v12 - __readfsqword(0x28u);
}

