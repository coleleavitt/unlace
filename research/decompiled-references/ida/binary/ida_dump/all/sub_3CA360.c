unsigned __int64 __fastcall sub_3CA360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 (__fastcall **v13)(); // [rsp+0h] [rbp-168h] BYREF
  int v14; // [rsp+8h] [rbp-160h]
  __int64 v15; // [rsp+10h] [rbp-158h]
  __int128 v16; // [rsp+18h] [rbp-150h]
  __int64 v17; // [rsp+28h] [rbp-140h]
  __int128 v18; // [rsp+30h] [rbp-138h]
  __int64 (__fastcall ***v19)(); // [rsp+40h] [rbp-128h]
  __int64 v20; // [rsp+48h] [rbp-120h]
  __int64 v21; // [rsp+50h] [rbp-118h]
  __int64 (__fastcall **v22)(); // [rsp+60h] [rbp-108h] BYREF
  __int64 v23; // [rsp+68h] [rbp-100h]
  __int128 v24; // [rsp+70h] [rbp-F8h]
  char v25; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v26; // [rsp+84h] [rbp-E4h]
  __int64 v27; // [rsp+90h] [rbp-D8h]
  __int128 v28; // [rsp+98h] [rbp-D0h]
  __int64 v29; // [rsp+A8h] [rbp-C0h]
  __int128 v30; // [rsp+B0h] [rbp-B8h]
  __int64 v31; // [rsp+C0h] [rbp-A8h]
  __int128 v32; // [rsp+C8h] [rbp-A0h]
  __int64 v33; // [rsp+D8h] [rbp-90h]
  __int128 v34; // [rsp+E0h] [rbp-88h]
  int v35; // [rsp+F0h] [rbp-78h]
  __int64 v36; // [rsp+F8h] [rbp-70h]
  __int128 v37; // [rsp+100h] [rbp-68h]
  __int64 v38; // [rsp+110h] [rbp-58h]
  __int64 v39; // [rsp+118h] [rbp-50h]
  __int128 v40; // [rsp+120h] [rbp-48h]
  unsigned __int64 v41; // [rsp+138h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  v22 = off_4EC8C0;
  v26 = 0xFFFFFFFF00000000LL;
  v38 = a2;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v24 = 0;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v37 = 0;
  v39 = 0;
  v14 = 2;
  v15 = 0;
  v17 = 0;
  v13 = off_4E8C58;
  v19 = &v22;
  v20 = 0;
  v21 = 0;
  v40 = 0;
  v16 = 0;
  v18 = 0;
  sub_255A80((__int64 *)&v13, a1, 0);
  sub_3CA110((__int64)&v22, 1u, a3);
  sub_3C9120(&v13);
  v22 = off_4EC8C0;
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree();
  }
  v22 = off_4EBC98;
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  v4 = v29;
  if ( v29 )
  {
    v5 = v30;
    if ( (_QWORD)v30 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v4 + 24 * v6);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v4 = v29;
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  v8 = v27;
  if ( v27 )
  {
    v9 = v28;
    if ( (_QWORD)v28 )
    {
      v10 = 0;
      do
      {
        v11 = (_QWORD *)(v8 + 24 * v10);
        if ( *v11 )
        {
          v11[1] = 0;
          qfree();
          v8 = v27;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  v22 = (__int64 (__fastcall **)())&unk_4EC808;
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  return v41 - __readfsqword(0x28u);
}
