__int64 __fastcall sub_4EF160(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v4; // al
  int v5; // r9d
  unsigned int v6; // r15d
  int i; // eax
  int v9; // r9d
  _BYTE v10[4]; // [rsp+0h] [rbp-6088h] BYREF
  char v11; // [rsp+4h] [rbp-6084h] BYREF
  char v12; // [rsp+5h] [rbp-6083h]
  __int64 v13; // [rsp+2028h] [rbp-4060h]
  int v14; // [rsp+2034h] [rbp-4054h]
  _BYTE v15[4096]; // [rsp+4040h] [rbp-2048h] BYREF
  char v16[4104]; // [rsp+5040h] [rbp-1048h] BYREF
  unsigned __int64 v17; // [rsp+6048h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v4 = qisdir(a1);
  if ( a3 <= 9 && v4 == 1 )
  {
    qmakepath((unsigned int)v15, 4096, a1, (unsigned int)"*", 0, v5);
    v13 = 0;
    v14 = 0;
    for ( i = qfindfirst(v15, v10, 0x4000); !i; i = qfindnext(v10) )
    {
      if ( v11 != 46 || v12 != 46 && v12 )
      {
        qmakepath((unsigned int)v16, 4096, a1, (unsigned int)&v11, 0, v9);
        if ( (v10[1] & 0x40) != 0 )
        {
          v6 = sub_4EF160(v16, a2, a3 + 1);
          if ( v6 )
          {
            qfindclose(v10);
            return v6;
          }
        }
        else
        {
          sub_4EE960(a2, v16, a3);
        }
      }
    }
    v6 = 0;
    qfindclose(v10);
  }
  else
  {
    return 0;
  }
  return v6;
}
