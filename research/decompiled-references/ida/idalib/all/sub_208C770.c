__int64 __fastcall sub_208C770(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 (__fastcall **v8)(); // [rsp+0h] [rbp-68h] BYREF
  int v9; // [rsp+8h] [rbp-60h]
  __int128 v10; // [rsp+10h] [rbp-58h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  char v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+2Ch] [rbp-3Ch]
  __int64 v14; // [rsp+30h] [rbp-38h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v14 = a1;
  v8 = &off_2BEBE68;
  v9 = 0;
  v12 = 0;
  v13 = 1;
  v11 = 0;
  v10 = 0;
  sub_227B8B0(&v8, 0, 0, 0);
  v2 = *(int *)(a2 + 420);
  v3 = *(_QWORD *)(a2 + 80);
  if ( (_DWORD)v2 == -1 )
    v2 = *(unsigned int *)(a2 + 88);
  v4 = v3 + 80 * v2;
  while ( v4 != v3 )
  {
    v5 = *(_QWORD *)(v3 + 40);
    v6 = *(_QWORD *)(v3 + 32);
    v3 += 80;
    sub_227BF10(&v8, v6, v5);
  }
  v8 = &off_2BEBE68;
  sub_227B7A0(&v8);
  return a1;
}
