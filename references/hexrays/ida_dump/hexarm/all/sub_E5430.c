__int64 __fastcall sub_E5430(int *a1, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v13; // [rsp+0h] [rbp-98h] BYREF
  __int128 v14; // [rsp+8h] [rbp-90h]
  __int64 v15; // [rsp+18h] [rbp-80h]
  __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+28h] [rbp-70h] BYREF
  __int128 v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+48h] [rbp-50h]
  char v21; // [rsp+58h] [rbp-40h]
  unsigned __int64 v22; // [rsp+68h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v14 = 0;
  v18 = 0;
  v20 = 0;
  if ( (a3 & 0xFFFFFF0F) != 0 || a3 == 192 )
  {
    HIDWORD(v15) = a3;
    LOBYTE(a3) = -64;
  }
  v21 = a3;
  copy_tinfo_t(&v16, a2);
  v3 = calc_retloc(&v13);
  if ( (_BYTE)v3 )
  {
    v4 = v18;
    *(_QWORD *)&v18 = *((_QWORD *)a1 + 1);
    v5 = *a1;
    *((_QWORD *)a1 + 1) = v4;
    LODWORD(v4) = v17;
    LODWORD(v17) = v5;
    *a1 = v4;
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  cleanup_argloc(&v17);
  clear_tinfo_t(&v16);
  v6 = v13;
  if ( v13 )
  {
    v7 = v14;
    if ( (_QWORD)v14 )
    {
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v6 + 80 * v8);
        clear_tinfo_t(v9 + 8);
        v10 = v9[5];
        if ( v10 )
        {
          v9[6] = 0;
          qfree(v10);
        }
        v11 = v9[2];
        if ( v11 )
        {
          v9[3] = 0;
          qfree(v11);
        }
        ++v8;
        cleanup_argloc(v9);
        v6 = v13;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v14 = 0;
    qfree(v6);
  }
  return v3;
}
