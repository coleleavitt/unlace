__int64 __fastcall sub_405AE0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v7; // r12d
  __int64 *v8; // rbx
  _DWORD *v9; // rax
  _DWORD *v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // [rsp+Ch] [rbp-4Ch] BYREF
  char s[32]; // [rsp+10h] [rbp-48h] BYREF

  if ( a3 == 3 )
  {
    if ( (unsigned int)sub_46FB10(a2, *(_QWORD *)(a4 + 8), &v12) != 1
      && (unsigned int)sub_47C180(a2, *(_QWORD *)(a4 + 16), &v12) != 1 )
    {
      sub_4AE1A0(&qword_65A450);
      sprintf(s, "rechan%d", ++dword_65A448);
      sub_4AE230(&qword_65A450);
      v6 = *(_QWORD *)(a4 + 8);
      v7 = v12;
      v8 = (__int64 *)sub_40FB00(72);
      v8[1] = v7;
      *v8 = 0;
      v8[3] = v6;
      v8[2] = a2;
      v8[7] = sub_48DF10(s, 0xFFFFFFFF);
      v8[8] = 0;
      v8[4] = sub_48DF10("seek", 0xFFFFFFFF);
      v8[5] = sub_48DF10("read", 0xFFFFFFFF);
      v9 = (_DWORD *)sub_48DF10("write", 0xFFFFFFFF);
      v10 = (_DWORD *)v8[3];
      v8[6] = (__int64)v9;
      ++*v10;
      ++*(_DWORD *)v8[4];
      ++*(_DWORD *)v8[5];
      ++*v9;
      ++*(_DWORD *)v8[7];
      v11 = sub_4600C0(&off_6531E0, s, v8, v12);
      *v8 = v11;
      sub_45D6E0(a2, v11);
      sub_464490(a2, *v8, "-buffering", "none");
      sub_464490(a2, *v8, "-blocking", 5292757);
      sub_48B860(a2, s, 1);
      return 0;
    }
  }
  else
  {
    sub_458930(a2, 1, a4, "command mode");
  }
  return 1;
}

