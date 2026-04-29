unsigned __int64 __fastcall sub_3C61E0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 (__fastcall **v19)(); // [rsp+0h] [rbp-168h] BYREF
  int v20; // [rsp+8h] [rbp-160h]
  __int64 v21; // [rsp+10h] [rbp-158h]
  __int128 v22; // [rsp+18h] [rbp-150h]
  __int64 v23; // [rsp+28h] [rbp-140h]
  __int128 v24; // [rsp+30h] [rbp-138h]
  __int64 (__fastcall ***v25)(); // [rsp+40h] [rbp-128h]
  __int64 v26; // [rsp+48h] [rbp-120h]
  __int64 v27; // [rsp+50h] [rbp-118h]
  __int64 (__fastcall **v28)(); // [rsp+60h] [rbp-108h] BYREF
  __int64 v29; // [rsp+68h] [rbp-100h]
  __int128 v30; // [rsp+70h] [rbp-F8h]
  char v31; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v32; // [rsp+84h] [rbp-E4h]
  __int64 v33; // [rsp+90h] [rbp-D8h]
  __int128 v34; // [rsp+98h] [rbp-D0h]
  __int64 v35; // [rsp+A8h] [rbp-C0h]
  __int128 v36; // [rsp+B0h] [rbp-B8h]
  __int64 v37; // [rsp+C0h] [rbp-A8h]
  __int128 v38; // [rsp+C8h] [rbp-A0h]
  __int64 v39; // [rsp+D8h] [rbp-90h]
  __int128 v40; // [rsp+E0h] [rbp-88h]
  int v41; // [rsp+F0h] [rbp-78h]
  __int64 v42; // [rsp+F8h] [rbp-70h]
  __int128 v43; // [rsp+100h] [rbp-68h]
  __int64 v44; // [rsp+110h] [rbp-58h]
  __int64 v45; // [rsp+118h] [rbp-50h]
  __int128 v46; // [rsp+120h] [rbp-48h]
  unsigned __int64 v47; // [rsp+138h] [rbp-30h]

  v47 = __readfsqword(0x28u);
  v28 = off_4D97A0;
  v32 = 0xFFFFFFFF00000000LL;
  v44 = a2;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v30 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  v40 = 0;
  v43 = 0;
  v45 = 0;
  v20 = 2;
  v21 = 0;
  v23 = 0;
  v19 = off_4D5D58;
  v25 = &v28;
  v26 = 0;
  v27 = 0;
  v46 = 0;
  v22 = 0;
  v24 = 0;
  sub_251E00((__int64 *)&v19, a1, 0);
  sub_3C5F90((__int64)&v28, 1u, a3, a4, v6, v7);
  sub_3C4FA0(&v19);
  v28 = off_4D97A0;
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  v28 = off_4D8B78;
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  v8 = v35;
  if ( v35 )
  {
    v9 = v36;
    if ( (_QWORD)v36 )
    {
      v10 = 0;
      do
      {
        v11 = (__int64 *)(v8 + 24 * v10);
        v12 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v12);
          v8 = v35;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v36 = 0;
    qfree(v8);
  }
  v13 = v33;
  if ( v33 )
  {
    v14 = v34;
    if ( (_QWORD)v34 )
    {
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v13 + 24 * v15);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17);
          v13 = v33;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v34 = 0;
    qfree(v13);
  }
  v28 = (__int64 (__fastcall **)())&unk_4D96E8;
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  return v47 - __readfsqword(0x28u);
}
