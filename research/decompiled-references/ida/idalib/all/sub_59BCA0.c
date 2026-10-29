__int64 __fastcall sub_59BCA0(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // al
  unsigned __int64 *v7; // rcx
  bool v8; // r13
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int64 *v18; // [rsp+8h] [rbp-70h]
  unsigned __int64 v19; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v20[9]; // [rsp+30h] [rbp-48h] BYREF

  v20[1] = __readfsqword(0x28u);
  v18 = sub_505D70((__int64)(a1 + 203), a2);
  v6 = sub_631C90(*a1, 10, 0x100000);
  v7 = v18;
  if ( v6 )
  {
    v8 = 0;
    v9 = 4;
    if ( !*((_BYTE *)v18 + 43) )
      goto LABEL_3;
    v17 = sub_3BDA80((__int64)a1, a2);
    v7 = v18;
    v8 = v17 == 8;
  }
  else
  {
    v8 = 0;
  }
  v9 = 4;
  if ( *((_BYTE *)v7 + 43) == 2 )
    v9 = 8;
LABEL_3:
  v10 = a2;
  v11 = 1;
  v12 = a2 + a3;
  if ( *((_BYTE *)v7 + 184) == 2 && (*(_BYTE *)(qword_2CCB598 + 940) & 8) != 0 )
  {
    v12 &= ~1uLL;
    v11 = 2;
    v10 = (a2 + 1) & 0xFFFFFFFFFFFFFFFELL;
  }
  if ( v10 >= v12 )
    return -1;
  while ( 1 )
  {
    if ( a4 == v10 )
      goto LABEL_8;
    v19 = v10;
    if ( sub_3792E0(0x43u, -1, v10, 1, &v19) > 0 )
      break;
    if ( v8 && v12 >= v9 + v10 && (v10 & (v9 - 1)) == 0 )
    {
      v13 = v9 == 8 ? sub_3BEF70(a1, v10) : (unsigned int)sub_3BEEF0(a1, v10);
      if ( sub_4E37A0(a1, v20, v10, -1, v13, v9) )
      {
        v15 = sub_3BE900(a1, v20[0], 4);
        v16 = v15 & 0x600;
        if ( v16 == 1536 )
        {
          if ( (v15 & 0x10000000) != 0 )
            return v10 - a2;
        }
        else if ( v16 == 1024 && (v15 & 0xF0000000) == 0x50000000 )
        {
          return v10 - a2;
        }
      }
    }
LABEL_8:
    v10 += v11;
    if ( v10 >= v12 )
      return -1;
  }
  remember_problem(13, v10, 0);
  return v10 - a2;
}
