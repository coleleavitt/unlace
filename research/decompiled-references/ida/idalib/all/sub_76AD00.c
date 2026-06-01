__int64 __fastcall sub_76AD00(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v12; // [rsp+8h] [rbp-40h] BYREF
  int v13; // [rsp+Ch] [rbp-3Ch] BYREF
  int v14; // [rsp+10h] [rbp-38h] BYREF
  int v15; // [rsp+14h] [rbp-34h] BYREF
  int v16; // [rsp+18h] [rbp-30h] BYREF
  int v17; // [rsp+1Ch] [rbp-2Ch] BYREF
  int v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+24h] [rbp-24h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v12 = sub_767F90(nullptr, (__int64)a2, a3, a4, a5);
  if ( !(_WORD)v12 )
    sub_76E6C0(0, a2, v5, v6);
  v13 = sub_76A7D0(nullptr, a2, v5, v6, v7);
  v14 = sub_769BC0(0, a2, v8, v9, v10);
  if ( (dword_2CD44CC & 0xA0) == 0 )
  {
    sub_76FCD0(&v19, 544106784, 4);
    v17 = v19;
    if ( (dword_2CD44CC & 0x400000) != 0 )
      sub_76FCD0(&v19, &stru_203A20, 3);
    else
      sub_76F8C0(&v19, 58);
    v15 = v19;
    v16 = sub_771320(&v15, &v13);
    v18 = sub_771320(&v16, &v17);
    v19 = sub_771320(&v18, &v14);
    sub_770B70(&v12, &v19);
  }
  return v12;
}
