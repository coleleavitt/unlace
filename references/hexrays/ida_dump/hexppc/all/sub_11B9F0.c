bool __fastcall sub_11B9F0(_BYTE *a1, __int64 a2, char a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // eax
  _BYTE *v7; // rdx
  _QWORD v9[4]; // [rsp+0h] [rbp-88h] BYREF
  _DWORD *v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+28h] [rbp-60h]
  char v12; // [rsp+30h] [rbp-58h]
  _QWORD v13[5]; // [rsp+40h] [rbp-48h] BYREF
  char v14; // [rsp+68h] [rbp-20h]
  _QWORD *v15; // [rsp+70h] [rbp-18h]
  unsigned __int64 v16; // [rsp+78h] [rbp-10h]

  v16 = __readfsqword(0x28u);
  v9[0] = &off_4CA978;
  memset(&v9[1], 0, 24);
  v11 = a2;
  v12 = a3;
  v10 = a1;
  if ( a3 )
  {
    if ( sub_116BA0(a2, 0, 0, (__int64)a1, a5, a6) )
      return 1;
    v7 = v10;
    v6 = *v10;
    if ( *v10 == 2 )
      return 1;
  }
  else
  {
    v6 = *(_DWORD *)a1;
    v7 = a1;
  }
  if ( (unsigned int)(v6 - 56) <= 1 && (v7[64] != 8 || (*(_BYTE *)(*((_QWORD *)v7 + 9) + 280LL) & 0x30) == 0) )
    return 1;
  memset(&v13[1], 0, 32);
  v14 = 0;
  v13[0] = &off_4CA838;
  v15 = v9;
  return (unsigned int)sub_11AEC0(a1, (__int64)v13) != 0;
}
