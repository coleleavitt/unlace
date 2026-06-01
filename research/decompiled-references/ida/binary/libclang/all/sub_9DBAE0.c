__int64 __fastcall sub_9DBAE0(__int64 a1, __int64 a2, _QWORD *a3, int a4, unsigned int a5)
{
  unsigned __int64 v6; // r12
  _QWORD *v7; // rbx
  __int64 v8; // r15
  unsigned int v9; // ebx
  unsigned __int8 v10; // al
  int v11; // r12d
  int v12; // eax
  unsigned __int8 **v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  char v20; // [rsp+18h] [rbp-40h]

  v6 = a5;
  v7 = a3;
  v8 = *a3;
  if ( v8 == sub_2575D20(a1, a2, a3) )
    v7 = (_QWORD *)v7[1];
  if ( (*((_BYTE *)v7 + 20) & 7) == 1 )
  {
    v18 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v14 = (unsigned __int8 **)sub_A2E1B0(a1, &v18, 2209, 0);
    v15 = (__int64 *)v14;
    if ( v14 )
    {
      sub_9B5410(v14, 1);
      v16 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
      v20 = 1;
      v19 = v16;
      sub_839C90(v15, &v19);
    }
    else
    {
      sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
    }
    return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  else
  {
    v9 = sub_A1AD60(a1);
    if ( !(_BYTE)v9 )
    {
      if ( (a4 & 0x10) != 0 )
      {
        if ( (~((unsigned int)v6 >> 3) & 7) != 0 )
        {
LABEL_7:
          v10 = v6;
          v11 = v6 & 0x100;
          v12 = v10 >> 6;
          if ( v12 == 3 )
          {
            if ( v11 )
              goto LABEL_9;
          }
          else if ( v12 | v11 )
          {
LABEL_9:
            v19 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
            sub_A2E0C0(a1, &v19, 2210, 0);
            return v9;
          }
          return 1;
        }
        if ( (v6 & 0x104) != 0 )
        {
          v19 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
          sub_A2E0C0(a1, &v19, 2208, 0);
          return v9;
        }
      }
      else
      {
        if ( !a4 )
          return 1;
        if ( (~((unsigned int)v6 >> 3) & 7) != 0 )
          goto LABEL_7;
        if ( (v6 & 0x104) != 0 )
          goto LABEL_9;
      }
      LOBYTE(v6) = (unsigned __int8)v6 >> 6;
      v17 = 9;
      if ( !_bittest64(&v17, v6) )
        goto LABEL_9;
      return 1;
    }
  }
  return v9;
}

