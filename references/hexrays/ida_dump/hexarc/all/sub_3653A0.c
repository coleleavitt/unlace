__int64 __fastcall sub_3653A0(__int64 a1, int a2)
{
  int v3; // ebx
  _DWORD *v4; // rdi
  char v5; // al
  char v6; // al
  unsigned int v7; // r13d
  _DWORD *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v15; // [rsp+0h] [rbp-A0h] BYREF
  _DWORD *v16; // [rsp+8h] [rbp-98h] BYREF
  __int128 v17; // [rsp+10h] [rbp-90h]
  __int64 v18; // [rsp+20h] [rbp-80h]
  __int64 v19; // [rsp+28h] [rbp-78h] BYREF
  __int64 v20; // [rsp+30h] [rbp-70h] BYREF
  __int128 v21; // [rsp+38h] [rbp-68h]
  __int64 v22; // [rsp+48h] [rbp-58h]
  __int128 v23; // [rsp+50h] [rbp-50h]
  char v24; // [rsp+60h] [rbp-40h]
  unsigned __int64 v25; // [rsp+70h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v3 = a2;
  v24 = 16;
  v17 = 0;
  v16 = nullptr;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v21 = 0;
  v23 = 0;
  v16 = (_DWORD *)qvector_reserve(&v16, 0, 1, 80);
  v4 = &v16[20 * v17];
  *v4 = 0;
  v4 += 16;
  *((_QWORD *)v4 - 7) = 0;
  *((_QWORD *)v4 - 6) = 0;
  *((_QWORD *)v4 - 3) = 0;
  *(_QWORD *)v4 = 0;
  v4[2] = 0;
  *(_OWORD *)(v4 - 10) = 0;
  *((_OWORD *)v4 - 1) = 0;
  *(_QWORD *)&v17 = v17 + 1;
  copy_tinfo_t(v4, a1);
  v15 = 1;
  copy_tinfo_t(&v19, &v15);
  clear_tinfo_t(&v15);
  v5 = v24 & 0xF;
  if ( (a2 & 0xFFFFFF0F) != 0 || a2 == 192 )
  {
    v6 = v5 | 0xC0;
  }
  else
  {
    v6 = a2 | v5;
    v3 = 0;
  }
  HIDWORD(v18) = v3;
  v24 = v6;
  v7 = 1;
  if ( (unsigned __int8)calc_arglocs(&v16) )
    LOBYTE(v7) = *v16 != 1;
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  cleanup_argloc(&v20);
  clear_tinfo_t(&v19);
  v8 = v16;
  if ( v16 )
  {
    v9 = v17;
    if ( (_QWORD)v17 )
    {
      v10 = 0;
      do
      {
        v11 = &v8[20 * v10];
        clear_tinfo_t(v11 + 8);
        v12 = v11[5];
        if ( v12 )
        {
          v11[6] = 0;
          qfree(v12);
        }
        v13 = v11[2];
        if ( v13 )
        {
          v11[3] = 0;
          qfree(v13);
        }
        ++v10;
        cleanup_argloc(v11);
        v8 = v16;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v17 = 0;
    qfree(v8);
  }
  return v7;
}
