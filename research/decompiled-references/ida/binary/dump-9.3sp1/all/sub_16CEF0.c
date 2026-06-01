__int64 __fastcall sub_16CEF0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v7; // r14d
  __int64 v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+10h] [rbp-90h]
  __int128 v12; // [rsp+18h] [rbp-88h]
  _QWORD v13[3]; // [rsp+30h] [rbp-70h] BYREF
  char v14; // [rsp+48h] [rbp-58h]
  __int64 v15; // [rsp+50h] [rbp-50h]
  char v16; // [rsp+58h] [rbp-48h]
  __int64 v17; // [rsp+60h] [rbp-40h]
  __int64 v18; // [rsp+68h] [rbp-38h]
  int v19; // [rsp+70h] [rbp-30h]
  unsigned __int64 v20; // [rsp+78h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  v18 = a2;
  v19 = a4;
  v13[1] = 0;
  v13[2] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v13[0] = &off_4DDDA0;
  v17 = a3;
  sub_127FE0(a1, (__int64)&v10, a3, 0, a5, a6, 0, 0, 0, 0, 0);
  if ( (unsigned int)sub_129C50((_QWORD *)a1, &v10, *(_QWORD *)(a1 + 48), 0, (__int64)v13) || !*(_QWORD *)(a2 + 8) )
    goto LABEL_3;
  v7 = sub_64880(&v10);
  if ( !(_BYTE)v7 || (_QWORD)v12 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
    if ( !v9 )
    {
LABEL_3:
      v7 = 0;
      goto LABEL_4;
    }
    v7 = sub_17C4E0(v9, (unsigned int)&v10, *(_DWORD *)(a1 + 72), -1, 0, 0, 2, 1) ^ 1;
  }
LABEL_4:
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  qfree(v10);
  return v7;
}
