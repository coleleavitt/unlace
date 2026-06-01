__int64 __fastcall sub_FC6310(unsigned int a1, __int64 a2)
{
  char *v3; // rsi
  __int64 v4; // rdi
  unsigned int v5; // edx
  _WORD *v6; // rdx
  __int64 (__fastcall **v8)(); // [rsp+0h] [rbp-58h] BYREF
  int v9; // [rsp+8h] [rbp-50h]
  __int128 v10; // [rsp+10h] [rbp-48h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  char v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+2Ch] [rbp-2Ch]
  __int64 v14; // [rsp+30h] [rbp-28h]

  v14 = a2;
  v10 = 0;
  v8 = &off_2BEBEE0;
  v9 = 2;
  v12 = 0;
  v13 = 1;
  v11 = 0;
  sub_227B8B0(&v8, 0, 0, 0);
  v3 = "th";
  v4 = sub_227B910(&v8, a1);
  if ( a1 % 0x64 - 11 > 2 )
  {
    v3 = "nd";
    v5 = a1 % 0xA;
    if ( a1 % 0xA != 2 )
    {
      v3 = "rd";
      if ( v5 != 3 )
      {
        v3 = "st";
        if ( v5 != 1 )
          v3 = "th";
      }
    }
  }
  v6 = *(_WORD **)(v4 + 32);
  if ( *(_QWORD *)(v4 + 24) - (_QWORD)v6 <= 1u )
  {
    sub_227BF10(v4, v3, 2);
  }
  else
  {
    *v6 = *(_WORD *)v3;
    *(_QWORD *)(v4 + 32) += 2LL;
  }
  v8 = (__int64 (__fastcall **)())&unk_2C76288;
  return sub_227B7A0(&v8);
}
