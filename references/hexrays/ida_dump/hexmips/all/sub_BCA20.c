unsigned __int64 __fastcall sub_BCA20(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  int v8; // r9d
  const char *v9; // r8
  _BYTE *v11; // rsi
  _BYTE *v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-70h] BYREF
  __int128 v14; // [rsp+8h] [rbp-68h]
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+28h] [rbp-48h]
  unsigned __int64 v17; // [rsp+38h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  v13 = 0;
  v15 = 0;
  v14 = 0;
  v16 = 0;
  if ( !(unsigned __int8)print_tinfo(&v15, 0, 0, 0, 0, a3, 0, 0) )
  {
    v11 = (_BYTE *)v15;
    if ( *((_QWORD *)&v16 + 1) <= 1u )
    {
      v15 = qvector_reserve(&v15, v15, 2, 1);
      v11 = (_BYTE *)v15;
    }
    *(_QWORD *)&v16 = 2;
    *v11 = 63;
    *(_BYTE *)(v15 + 1) = 0;
  }
  if ( !(unsigned __int8)print_tinfo(&v13, 0, 0, 0, 0, a5, 0, 0) )
  {
    v12 = (_BYTE *)v13;
    if ( *((_QWORD *)&v14 + 1) <= 1u )
    {
      v13 = qvector_reserve(&v13, v13, 2, 1);
      v12 = (_BYTE *)v13;
    }
    *(_QWORD *)&v14 = 2;
    *v12 = 63;
    *(_BYTE *)(v13 + 1) = 0;
  }
  v9 = s1;
  if ( (_QWORD)v14 )
    LODWORD(v9) = v13;
  sub_32C190(a1, a2, 32, a4, (_DWORD)v9, v8);
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
  return v17 - __readfsqword(0x28u);
}
