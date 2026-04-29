unsigned __int64 __fastcall sub_3CA360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 (__fastcall **v15)(); // [rsp+0h] [rbp-168h] BYREF
  int v16; // [rsp+8h] [rbp-160h]
  __int64 v17; // [rsp+10h] [rbp-158h]
  __int128 v18; // [rsp+18h] [rbp-150h]
  __int64 v19; // [rsp+28h] [rbp-140h]
  __int128 v20; // [rsp+30h] [rbp-138h]
  __int64 (__fastcall ***v21)(); // [rsp+40h] [rbp-128h]
  __int64 v22; // [rsp+48h] [rbp-120h]
  __int64 v23; // [rsp+50h] [rbp-118h]
  __int64 (__fastcall **v24)(); // [rsp+60h] [rbp-108h] BYREF
  __int64 v25; // [rsp+68h] [rbp-100h]
  __int128 v26; // [rsp+70h] [rbp-F8h]
  char v27; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v28; // [rsp+84h] [rbp-E4h]
  __int64 v29; // [rsp+90h] [rbp-D8h]
  __int128 v30; // [rsp+98h] [rbp-D0h]
  __int64 v31; // [rsp+A8h] [rbp-C0h]
  __int128 v32; // [rsp+B0h] [rbp-B8h]
  __int64 v33; // [rsp+C0h] [rbp-A8h]
  __int128 v34; // [rsp+C8h] [rbp-A0h]
  __int64 v35; // [rsp+D8h] [rbp-90h]
  __int128 v36; // [rsp+E0h] [rbp-88h]
  int v37; // [rsp+F0h] [rbp-78h]
  __int64 v38; // [rsp+F8h] [rbp-70h]
  __int128 v39; // [rsp+100h] [rbp-68h]
  __int64 v40; // [rsp+110h] [rbp-58h]
  __int64 v41; // [rsp+118h] [rbp-50h]
  __int128 v42; // [rsp+120h] [rbp-48h]
  unsigned __int64 v43; // [rsp+138h] [rbp-30h]

  v43 = __readfsqword(0x28u);
  v24 = off_4EC8C0;
  v28 = 0xFFFFFFFF00000000LL;
  v40 = a2;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v26 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v39 = 0;
  v41 = 0;
  v16 = 2;
  v17 = 0;
  v19 = 0;
  v15 = off_4E8C58;
  v21 = &v24;
  v22 = 0;
  v23 = 0;
  v42 = 0;
  v18 = 0;
  v20 = 0;
  sub_255A80((__int64 *)&v15, a1, 0);
  sub_3CA110((__int64)&v24, 1, a3);
  sub_3C9120(&v15);
  v24 = off_4EC8C0;
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  v24 = off_4EBC98;
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  v4 = v31;
  if ( v31 )
  {
    v5 = v32;
    if ( (_QWORD)v32 )
    {
      v6 = 0;
      do
      {
        v7 = (__int64 *)(v4 + 24 * v6);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8);
          v4 = v31;
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v32 = 0;
    qfree(v4);
  }
  v9 = v29;
  if ( v29 )
  {
    v10 = v30;
    if ( (_QWORD)v30 )
    {
      v11 = 0;
      do
      {
        v12 = (__int64 *)(v9 + 24 * v11);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13);
          v9 = v29;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v30 = 0;
    qfree(v9);
  }
  v24 = (__int64 (__fastcall **)())&unk_4EC808;
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  return v43 - __readfsqword(0x28u);
}
