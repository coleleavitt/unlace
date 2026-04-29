__int64 __fastcall sub_36CC20(__int64 a1, int a2)
{
  int v2; // ebx
  _DWORD *v3; // rdi
  char v4; // al
  char v5; // al
  unsigned int v6; // r13d
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  _DWORD *v14; // [rsp+8h] [rbp-98h] BYREF
  __int128 v15; // [rsp+10h] [rbp-90h]
  __int64 v16; // [rsp+20h] [rbp-80h]
  __int64 v17; // [rsp+28h] [rbp-78h]
  __int64 v18; // [rsp+30h] [rbp-70h]
  __int128 v19; // [rsp+38h] [rbp-68h]
  __int64 v20; // [rsp+48h] [rbp-58h]
  __int128 v21; // [rsp+50h] [rbp-50h]
  char v22; // [rsp+60h] [rbp-40h]
  unsigned __int64 v23; // [rsp+70h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v2 = a2;
  v22 = 16;
  v15 = 0;
  v14 = nullptr;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v19 = 0;
  v21 = 0;
  v14 = (_DWORD *)qvector_reserve((__int64)&v14, 0, 1, 80);
  v3 = &v14[20 * v15];
  *v3 = 0;
  v3 += 16;
  *((_QWORD *)v3 - 7) = 0;
  *((_QWORD *)v3 - 6) = 0;
  *((_QWORD *)v3 - 3) = 0;
  *(_QWORD *)v3 = 0;
  v3[2] = 0;
  *(_OWORD *)(v3 - 10) = 0;
  *((_OWORD *)v3 - 1) = 0;
  *(_QWORD *)&v15 = v15 + 1;
  copy_tinfo_t();
  copy_tinfo_t();
  clear_tinfo_t();
  v4 = v22 & 0xF;
  if ( (a2 & 0xFFFFFF0F) != 0 || a2 == 192 )
  {
    v5 = v4 | 0xC0;
  }
  else
  {
    v5 = a2 | v4;
    v2 = 0;
  }
  HIDWORD(v16) = v2;
  v22 = v5;
  v6 = 1;
  if ( (unsigned __int8)calc_arglocs() )
    LOBYTE(v6) = *v14 != 1;
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v7 = (__int64)v14;
  if ( v14 )
  {
    v8 = v15;
    if ( (_QWORD)v15 )
    {
      v9 = 0;
      do
      {
        v10 = (_QWORD *)(v7 + 80 * v9);
        clear_tinfo_t();
        v11 = v10[5];
        if ( v11 )
        {
          v10[6] = 0;
          qfree(v11);
        }
        v12 = v10[2];
        if ( v12 )
        {
          v10[3] = 0;
          qfree(v12);
        }
        ++v9;
        cleanup_argloc();
        v7 = (__int64)v14;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v15 = 0;
    qfree(v7);
  }
  return v6;
}
