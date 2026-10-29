__int64 __fastcall sub_9D4FE0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // eax
  unsigned __int8 **v6; // rax
  __int64 *v7; // r13
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  char v13; // [rsp+18h] [rbp-30h]

  v5 = *(_DWORD *)(a3 + 48);
  if ( v5 )
  {
    if ( v5 != 2 )
    {
      v9 = 1;
      if ( v5 == 3 || *(_QWORD *)(a3 + 32) || *(_QWORD *)a3 )
        return v9;
LABEL_3:
      v11 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v6 = (unsigned __int8 **)sub_A2E0C0(a1, &v11, 2259, 0);
      v7 = (__int64 *)v6;
      if ( v6 )
      {
        sub_9B5410(v6, a4);
        v8 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
        v13 = 1;
        v12 = v8;
        sub_839C90(v7, &v12);
      }
      else
      {
        sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
      }
      return 0;
    }
    if ( !*(_QWORD *)(a3 + 24) )
      goto LABEL_3;
  }
  else if ( !*(_QWORD *)(a3 + 24) )
  {
    goto LABEL_3;
  }
  return 1;
}

