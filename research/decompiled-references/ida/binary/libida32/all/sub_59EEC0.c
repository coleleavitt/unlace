__int64 __fastcall sub_59EEC0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int *v5; // rax
  unsigned int v6; // edx
  unsigned int v8; // edx
  unsigned __int64 *v9; // rax
  char v10; // [rsp+6h] [rbp-112h] BYREF
  char v11; // [rsp+7h] [rbp-111h] BYREF
  int v12; // [rsp+8h] [rbp-110h] BYREF
  unsigned int v13; // [rsp+Ch] [rbp-10Ch] BYREF
  _QWORD v14[3]; // [rsp+10h] [rbp-108h] BYREF
  char v15; // [rsp+28h] [rbp-F0h] BYREF
  unsigned __int64 v16; // [rsp+E8h] [rbp-30h] BYREF

  v3 = a1[2];
  v16 = __readfsqword(0x28u);
  v12 = 0;
  v13 = a3;
  if ( *(char *)(v3 + 10) < 0 )
  {
    v10 = 1;
    v11 = 1;
    if ( sub_375980(0x2Du, &v13, &v10, &v11) == 1 )
    {
      v8 = v13;
      if ( v13 != -1 )
      {
        if ( v10 )
        {
          v14[0] = -1;
          v14[2] = 0;
          v14[1] = 0xFFFFFFFFLL;
          v9 = (unsigned __int64 *)&v15;
          do
          {
            *(_WORD *)v9 = 0;
            v9 += 3;
            *((_WORD *)v9 - 11) = 0;
            *((_WORD *)v9 - 10) = 0;
            *((_DWORD *)v9 - 1) = 0;
            *((_WORD *)v9 - 9) = 0;
            *(v9 - 2) = 0;
            *((_DWORD *)v9 - 2) = 0;
          }
          while ( &v16 != v9 );
          if ( (int)sub_559920(a1, (__int64)v14, v8, 0) <= 0 || sub_375980(0x51u, &v12, v14) != 1 )
            v12 = 0;
        }
      }
    }
  }
  v5 = sub_59ED40(a1, a2, a3);
  v6 = 0;
  if ( v5 )
    v6 = v5[1];
  return v6 + v12;
}

