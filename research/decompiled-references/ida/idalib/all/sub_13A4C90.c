__int64 __fastcall sub_13A4C90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rdx
  __int64 v4; // rax
  _BYTE *v5; // rdx
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-68h] BYREF
  int v12; // [rsp+8h] [rbp-60h]
  __int128 v13; // [rsp+10h] [rbp-58h]
  __int64 v14; // [rsp+20h] [rbp-48h]
  char v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+2Ch] [rbp-3Ch]
  __int64 v17; // [rsp+30h] [rbp-38h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v17 = a1;
  v13 = 0;
  v11 = &off_2BEBE68;
  v12 = 0;
  v15 = 0;
  v16 = 1;
  v14 = 0;
  sub_227B8B0(&v11, 0, 0, 0);
  v2 = sub_227BF10(&v11, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  v3 = *(_BYTE **)(v2 + 32);
  if ( *(_BYTE **)(v2 + 24) == v3 )
  {
    v2 = sub_227BF10(v2, ":", 1);
  }
  else
  {
    *v3 = 58;
    ++*(_QWORD *)(v2 + 32);
  }
  v4 = sub_227B910(v2, *(unsigned int *)(a2 + 40));
  v5 = *(_BYTE **)(v4 + 32);
  if ( *(_BYTE **)(v4 + 24) == v5 )
  {
    v4 = sub_227BF10(v4, ":", 1);
  }
  else
  {
    *v5 = 58;
    ++*(_QWORD *)(v4 + 32);
  }
  v6 = sub_227B910(v4, *(unsigned int *)(a2 + 44));
  v7 = *(_BYTE **)(v6 + 32);
  if ( *(_BYTE **)(v6 + 24) == v7 )
  {
    v6 = sub_227BF10(v6, ":", 1);
  }
  else
  {
    *v7 = 58;
    ++*(_QWORD *)(v6 + 32);
  }
  v8 = sub_227B930(v6, *(unsigned __int8 *)(a2 + 48));
  v9 = *(_BYTE **)(v8 + 32);
  if ( *(_BYTE **)(v8 + 24) == v9 )
  {
    v8 = sub_227BF10(v8, ":", 1);
  }
  else
  {
    *v9 = 58;
    ++*(_QWORD *)(v8 + 32);
  }
  sub_227BF10(v8, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64));
  v11 = &off_2BEBE68;
  sub_227B7A0(&v11);
  return a1;
}
