__int64 __fastcall sub_FC6420(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rdx
  int v4; // eax
  const char *v6; // [rsp+8h] [rbp-80h] BYREF
  __m128 v7; // [rsp+10h] [rbp-78h] BYREF
  char v8; // [rsp+20h] [rbp-68h]
  double v9; // [rsp+28h] [rbp-60h]
  __int64 (__fastcall **v10)(); // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+38h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-48h]
  _BYTE *v13; // [rsp+50h] [rbp-38h]
  char v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+5Ch] [rbp-2Ch]
  __int64 v16; // [rsp+60h] [rbp-28h]

  v2 = a1;
  v16 = a2;
  v11 = 2;
  v14 = 0;
  v15 = 1;
  v13 = nullptr;
  v12 = 0;
  v10 = &off_2BEBEE0;
  sub_227B8B0(&v10, 0, 0, 0);
  if ( a1 < 0 )
  {
    if ( *((_BYTE **)&v12 + 1) == v13 )
      sub_227BF10(&v10, "-", 1);
    else
      *v13++ = 45;
    v2 = -a1;
  }
  if ( v2 > 0xE8D4A50FFFLL )
  {
    v3 = &unk_2411A80;
    v4 = -727379968;
    goto LABEL_13;
  }
  if ( v2 > 999999999 )
  {
    v3 = &unk_2411A90;
    v4 = 1000000000;
    goto LABEL_13;
  }
  if ( v2 > 999999 )
  {
    v3 = &unk_2411AA0;
    v4 = 1000000;
    goto LABEL_13;
  }
  v3 = &unk_2411AB0;
  v4 = 1000;
  if ( v2 > 999 )
  {
LABEL_13:
    v8 = v3[8];
    v6 = "%0.2f%c";
    v7 = _mm_loadh_ps((const double *)&v6);
    v9 = (double)(int)v2 / (double)v4;
    sub_227C560(&v10, &v7);
    goto LABEL_7;
  }
  sub_227B930(&v10, v2);
LABEL_7:
  v10 = (__int64 (__fastcall **)())&unk_2C76288;
  return sub_227B7A0(&v10);
}
