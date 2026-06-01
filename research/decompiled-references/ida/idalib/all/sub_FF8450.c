char __fastcall sub_FF8450(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // r15
  unsigned int v7; // eax
  int v8; // eax
  char result; // al
  unsigned int v10; // eax
  int v11; // eax
  _DWORD *v12; // r13
  int v13; // r15d
  unsigned int v14; // eax
  int v15; // eax
  int v16; // r13d
  unsigned int v17; // eax
  int v18; // eax
  __int64 *v19[8]; // [rsp+8h] [rbp-40h] BYREF

  sub_FF7E30(v19, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  v6 = v19[0];
  v7 = sub_2244B30(a2, a3);
  v8 = sub_2244E60(a1, a2, a3, v7);
  if ( v8 == -1 )
    sub_FF7E30(v19, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  else
    sub_FF7E30(v19, (__int64 *)(*(_QWORD *)a1 + 8LL * v8), 1);
  result = 0;
  if ( v19[0] != v6 )
  {
    v10 = sub_2244B30(a2, a3);
    v11 = sub_2244E60(a1, a2, a3, v10);
    if ( v11 == -1 )
      sub_FF7E30(v19, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
    else
      sub_FF7E30(v19, (__int64 *)(*(_QWORD *)a1 + 8LL * v11), 1);
    v12 = (_DWORD *)*v19[0];
    if ( (unsigned int)sub_FEAA90(a4) >= v12[3] )
    {
      v13 = v12[4];
      v14 = sub_FEAA90(a4);
      if ( v14 == 120 )
      {
        v15 = 4;
      }
      else if ( v14 > 0x78 )
      {
        if ( v14 == 200 )
        {
          v15 = 8;
        }
        else
        {
          if ( v14 != 300 )
            return sub_FF86D0();
          v15 = 16;
        }
      }
      else if ( v14 == 100 )
      {
        v15 = 1;
      }
      else
      {
        if ( v14 != 110 )
          return sub_FF86D0();
        v15 = 2;
      }
      if ( (v15 & v13) != 0 )
        return sub_FF8060(a1, a2, a3, a4);
    }
    if ( (unsigned int)sub_FEAA90(a4) < v12[3] )
      return sub_FF7F20(a1, a2, a3);
    v16 = v12[5];
    v17 = sub_FEAA90(a4);
    if ( v17 == 120 )
    {
      v18 = 4;
      goto LABEL_31;
    }
    if ( v17 <= 0x78 )
    {
      if ( v17 != 100 )
      {
        if ( v17 == 110 )
        {
          v18 = 2;
          goto LABEL_31;
        }
        return sub_FF86D0();
      }
      v18 = 1;
LABEL_31:
      if ( (v18 & v16) == 0 )
        return sub_FF7F20(a1, a2, a3);
      return sub_FF8060(a1, a2, a3, a4);
    }
    if ( v17 == 200 )
    {
      v18 = 8;
      goto LABEL_31;
    }
    if ( v17 == 300 )
    {
      v18 = 16;
      goto LABEL_31;
    }
    return sub_FF86D0();
  }
  return result;
}
