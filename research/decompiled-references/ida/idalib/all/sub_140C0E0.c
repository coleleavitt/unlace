__int64 __fastcall sub_140C0E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // r14d
  int v4; // ebp
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-78h] BYREF
  int v7; // [rsp+8h] [rbp-70h]
  __int128 v8; // [rsp+10h] [rbp-68h]
  _BYTE *v9; // [rsp+20h] [rbp-58h]
  char v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+2Ch] [rbp-4Ch]
  __int64 v12; // [rsp+30h] [rbp-48h]

  v2 = 0;
  v3 = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v12 = a1;
  v7 = 0;
  v10 = 0;
  v11 = 1;
  v9 = nullptr;
  v8 = 0;
  v6 = &off_2BEBE68;
  sub_227B8B0(&v6, 0, 0, 0);
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 )
  {
    while ( 1 )
    {
      ++v3;
      sub_227BF10(&v6, *(_QWORD *)(v2 + *(_QWORD *)a2), *(_QWORD *)(v2 + *(_QWORD *)a2 + 8));
      if ( v3 == v4 )
        break;
      if ( *((_BYTE **)&v8 + 1) == v9 )
        sub_227BF10(&v6, ".", 1);
      else
        *v9++ = 46;
      v2 += 40;
    }
  }
  v6 = &off_2BEBE68;
  sub_227B7A0(&v6);
  return a1;
}
