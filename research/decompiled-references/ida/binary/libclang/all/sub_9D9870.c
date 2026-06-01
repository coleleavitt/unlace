__int64 __fastcall sub_9D9870(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rax
  bool v5; // bp
  unsigned __int8 **v6; // rax
  unsigned int v7; // ecx
  _QWORD v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a3 + 48);
  if ( v3 )
  {
    if ( v3 != 2 )
    {
      v7 = 1;
      if ( v3 == 3 || *(_QWORD *)(a3 + 32) || *(_QWORD *)a3 )
        return v7;
LABEL_3:
      v9[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v4 = sub_A2C990(v9);
      if ( v4 )
      {
        v5 = 0;
        if ( (*(_WORD *)v4 & 0x1FF) == 0x63 )
          v5 = (*(_BYTE *)(v4 + 2) & 8) != 0;
      }
      else
      {
        v5 = 0;
      }
      if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
      {
        v6 = (unsigned __int8 **)sub_A2E0C0(a1, v9, 2286, 0);
        if ( v6 )
          sub_9B5410(v6, v5);
        return 0;
      }
      else
      {
        sub_A2E0C0(a1, v9, 110, 0);
        return 0;
      }
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

