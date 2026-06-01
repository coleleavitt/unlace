__int64 __fastcall sub_5820A0(__int64 *a1, __int64 a2, int a3, int a4)
{
  char v6; // al
  unsigned int *v7; // rcx
  bool v8; // r13
  int v9; // r14d
  unsigned int v10; // r15d
  int v11; // r12d
  unsigned int v12; // ebx
  unsigned int v13; // r8d
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  unsigned int *v18; // [rsp+8h] [rbp-60h]
  unsigned int v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v18 = sub_4EE820((__int64)(a1 + 194), a2);
  v6 = sub_615160(*a1, 10, &stru_100000);
  v7 = v18;
  if ( v6 )
  {
    v8 = 0;
    v9 = 4;
    if ( !*((_BYTE *)v18 + 23) )
      goto LABEL_3;
    v17 = sub_3B8DF0((__int64)a1, (unsigned int)a2);
    v7 = v18;
    v8 = v17 == 8;
  }
  else
  {
    v8 = 0;
  }
  v9 = 4;
  if ( *((_BYTE *)v7 + 23) == 2 )
    v9 = 8;
LABEL_3:
  v10 = a2;
  v11 = 1;
  v12 = a2 + a3;
  if ( *((_BYTE *)v7 + 96) == 2 && (*(_BYTE *)(qword_2CA1698 + 772) & 8) != 0 )
  {
    v12 &= ~1u;
    v11 = 2;
    v10 = (a2 + 1) & 0xFFFFFFFE;
  }
  if ( v10 >= v12 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( a4 == v10 )
      goto LABEL_8;
    v19 = v10;
    if ( sub_375980(0x43u, 0xFFFFFFFFLL, v10, 1, &v19) > 0 )
      break;
    if ( v8 && v12 >= v9 + v10 && (v10 & (v9 - 1)) == 0 )
    {
      v13 = v9 == 8 ? sub_3BA0E0(a1, v10) : sub_3BA060(a1, v10);
      if ( (unsigned int)sub_4CBF10(a1, &v20, v10, -1, v13, v9) )
      {
        v15 = sub_3B9AA0((__int64)a1, v20, 4);
        v16 = v15 & 0x600;
        if ( v16 == 1536 )
        {
          if ( (v15 & 0x10000000) != 0 )
            return v10 - (unsigned int)a2;
        }
        else if ( v16 == 1024 && (v15 & 0xF0000000) == 0x50000000 )
        {
          return v10 - (unsigned int)a2;
        }
      }
    }
LABEL_8:
    v10 += v11;
    if ( v10 >= v12 )
      return 0xFFFFFFFFLL;
  }
  remember_problem(13, v10, 0);
  return v10 - (unsigned int)a2;
}

