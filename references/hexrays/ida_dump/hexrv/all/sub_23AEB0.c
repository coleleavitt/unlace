__int64 __fastcall sub_23AEB0(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rax
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-78h] BYREF
  int v12; // [rsp+8h] [rbp-70h]
  __int64 v13; // [rsp+10h] [rbp-68h]
  __int128 v14; // [rsp+18h] [rbp-60h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int128 v16; // [rsp+30h] [rbp-48h]
  unsigned int v17; // [rsp+40h] [rbp-38h]
  unsigned __int64 v18; // [rsp+48h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  v18 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 520);
  if ( !v5 )
    goto LABEL_14;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v5 + 48);
    if ( !v6 )
      break;
    if ( *(_QWORD *)(v6 + 24) == a2 )
      goto LABEL_8;
LABEL_4:
    v5 = *(_QWORD *)(v5 + 8);
    if ( !v5 )
      goto LABEL_14;
  }
  if ( a2 < *(_QWORD *)(v5 + 32) || a2 >= *(_QWORD *)(v5 + 40) )
    goto LABEL_4;
LABEL_8:
  v7 = *(_DWORD *)(v5 + 72);
  if ( v7 == -1 )
    goto LABEL_14;
  v11 = (__int64 (__fastcall **)())&off_4B22C8;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  v17 = v7;
  v14 = 0;
  v16 = 0;
  v8 = sub_250E80(&v11, a1 + 16, 0);
  v11 = off_4AE778;
  if ( v8 )
  {
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
LABEL_14:
    if ( a3 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 824LL);
      v7 = *(_DWORD *)(v9 + 8) + 1;
      *(_DWORD *)(v9 + 8) = v7;
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  else
  {
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
  }
  return v7;
}
