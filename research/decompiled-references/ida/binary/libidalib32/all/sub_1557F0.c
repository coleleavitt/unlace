_QWORD *__fastcall sub_1557F0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  char *v7; // rbx
  unsigned int v9; // eax
  _QWORD v10[2]; // [rsp+0h] [rbp-118h] BYREF
  __int16 v11; // [rsp+10h] [rbp-108h]
  _QWORD v12[7]; // [rsp+20h] [rbp-F8h] BYREF
  char v13; // [rsp+58h] [rbp-C0h] BYREF
  char v14; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v15; // [rsp+D8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+E0h] [rbp-38h]
  unsigned __int64 v17; // [rsp+F8h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  sub_1554C0((__int64)v12, a2);
  LODWORD(v10[0]) = a3;
  v5 = sub_198260(v12, v10);
  v6 = v15;
  if ( v5 < 0 )
    goto LABEL_3;
  if ( v5 >= v16 )
    goto LABEL_3;
  v9 = *(_DWORD *)(v15 + 4 * v5);
  if ( !v9 )
    goto LABEL_3;
  *a1 = 0;
  v11 = 257;
  v10[1] = v9;
  v10[0] = get_idati();
  if ( !(unsigned __int8)create_tinfo() )
  {
    clear_tinfo_t();
    v6 = v15;
LABEL_3:
    *a1 = 0;
    goto LABEL_4;
  }
  v6 = v15;
LABEL_4:
  v12[0] = off_2341C0;
  if ( v6 )
  {
    v16 = 0;
    qfree();
  }
  v7 = &v14;
  v12[0] = &stru_235898;
  do
  {
    if ( *(_QWORD *)v7 )
    {
      *((_QWORD *)v7 + 1) = 0;
      qfree();
    }
    v7 -= 24;
  }
  while ( &v13 != v7 );
  return a1;
}

