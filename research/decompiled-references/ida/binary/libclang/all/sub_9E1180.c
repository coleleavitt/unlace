__int64 __fastcall sub_9E1180(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned __int8 **v4; // rax
  __int64 *v5; // r12
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h] BYREF
  char v11; // [rsp+18h] [rbp-20h]

  v3 = *(_DWORD *)(a3 + 48);
  if ( v3 )
  {
    if ( v3 != 2 )
    {
      v7 = 1;
      if ( v3 == 3 || *(_QWORD *)(a3 + 32) || *(_QWORD *)a3 )
        return v7;
LABEL_3:
      v9 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v4 = (unsigned __int8 **)sub_A2E0C0(a1, &v9, 2259, 0);
      v5 = (__int64 *)v4;
      if ( v4 )
      {
        sub_9B5410(v4, 2);
        v6 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
        v11 = 1;
        v10 = v6;
        sub_839C90(v5, &v10);
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

