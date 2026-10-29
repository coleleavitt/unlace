unsigned __int64 __fastcall sub_3BDEF0(_QWORD *a1, int a2, int a3)
{
  int v3; // ebx
  __int64 v4; // rsi
  int v6; // [rsp+Ch] [rbp-2Ch] BYREF
  int v7; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v3 = a2;
  v8 = __readfsqword(0x28u);
  v6 = a3 + 1;
  if ( a2 != -1 )
    v3 = sub_614FB0(*a1, 29) + a2;
  v4 = *a1;
  v7 = v3;
  sub_79B440(&v7, v4, 16, &v6, 4, 65);
  return v8 - __readfsqword(0x28u);
}

