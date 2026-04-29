__int64 __fastcall sub_32BEF0(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  __int64 *v6; // r12
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 i; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  __int128 v18; // [rsp+8h] [rbp-60h]
  __int128 v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+28h] [rbp-40h]
  int v21; // [rsp+30h] [rbp-38h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v4 = *a1;
  v22 = __readfsqword(0x28u);
  v17 = 0;
  v6 = &v17;
  v20 = 0;
  v21 = 1;
  v18 = 0;
  v19 = 0;
  get_tinfo_details(v4, 13, &v17);
  v7 = v18;
  v8 = v17;
  v9 = v17 + 144 * v18;
  if ( v9 != v17 )
  {
    for ( i = v17; v9 != i; i += 144 )
    {
      v11 = *(_QWORD *)i >> 3;
      if ( a3 < v11 )
        break;
      LOBYTE(v6) = a3 != a2 && *(_QWORD *)(i + 8) >> 3 != 0;
      if ( (_BYTE)v6 && a3 - 1 >= v11 && (*(_QWORD *)(i + 8) >> 3) + v11 - 1 >= a2 && (*(_BYTE *)(i + 133) & 0x30) != 0 )
        goto LABEL_8;
    }
  }
  LODWORD(v6) = 0;
LABEL_8:
  if ( v17 )
  {
    if ( (_QWORD)v18 )
    {
      v12 = 0;
      do
      {
        v13 = (_QWORD *)(v8 + 144 * v12);
        clear_tinfo_t(v13 + 8);
        v14 = v13[5];
        if ( v14 )
        {
          v13[6] = 0;
          qfree(v14);
        }
        v15 = v13[2];
        if ( v15 )
        {
          v13[3] = 0;
          qfree(v15);
        }
        ++v12;
        v8 = v17;
      }
      while ( v7 != v12 );
    }
    *(_QWORD *)&v18 = 0;
    qfree(v8);
  }
  return (unsigned int)v6;
}
