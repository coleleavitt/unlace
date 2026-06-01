unsigned __int64 __fastcall sub_470690(__int64 a1, void *a2)
{
  int v2; // eax
  __int64 v5; // rsi
  int v6; // edx
  __int64 v7; // rsi
  int v9; // [rsp+0h] [rbp-198h] BYREF
  void *v10; // [rsp+8h] [rbp-190h]
  void *ptr; // [rsp+10h] [rbp-188h]
  int v12[4]; // [rsp+18h] [rbp-180h]
  void *v13; // [rsp+28h] [rbp-170h]
  __int128 v14; // [rsp+30h] [rbp-168h]
  void *v15; // [rsp+40h] [rbp-158h]
  __int128 v16; // [rsp+48h] [rbp-150h]
  void *v17; // [rsp+58h] [rbp-140h]
  __int128 v18; // [rsp+60h] [rbp-138h]
  void *v19; // [rsp+70h] [rbp-128h]
  __int128 v20; // [rsp+78h] [rbp-120h]
  int v21; // [rsp+88h] [rbp-110h]
  void *v22; // [rsp+90h] [rbp-108h]
  __int128 v23; // [rsp+98h] [rbp-100h]
  void *v24; // [rsp+A8h] [rbp-F0h]
  __int128 v25; // [rsp+B0h] [rbp-E8h]
  void *v26; // [rsp+C0h] [rbp-D8h]
  __int128 v27; // [rsp+C8h] [rbp-D0h]
  void *v28; // [rsp+D8h] [rbp-C0h]
  __int128 v29; // [rsp+E0h] [rbp-B8h]
  int v30; // [rsp+F0h] [rbp-A8h]
  void *v31; // [rsp+F8h] [rbp-A0h]
  __int128 v32; // [rsp+100h] [rbp-98h]
  void *v33; // [rsp+110h] [rbp-88h]
  __int128 v34; // [rsp+118h] [rbp-80h]
  void *v35; // [rsp+128h] [rbp-70h]
  __int128 v36; // [rsp+130h] [rbp-68h]
  void *v37; // [rsp+140h] [rbp-58h]
  __int128 v38; // [rsp+148h] [rbp-50h]
  int v39; // [rsp+158h] [rbp-40h]
  int v40; // [rsp+160h] [rbp-38h]
  int v41; // [rsp+164h] [rbp-34h]
  __int64 v42; // [rsp+168h] [rbp-30h]
  unsigned __int64 v43; // [rsp+178h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 12);
  v43 = __readfsqword(0x28u);
  v9 = 0;
  v10 = (void *)-1LL;
  ptr = nullptr;
  v13 = nullptr;
  v15 = nullptr;
  v17 = nullptr;
  v19 = nullptr;
  v21 = -1;
  v22 = nullptr;
  v24 = nullptr;
  v26 = nullptr;
  v28 = nullptr;
  *(_OWORD *)v12 = 0;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  v20 = 0;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v30 = -1;
  v5 = *(_QWORD *)(a1 + 32);
  v31 = nullptr;
  v33 = nullptr;
  v35 = nullptr;
  v37 = nullptr;
  v39 = -1;
  v40 = -1;
  v41 = v2;
  v42 = -1;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v38 = 0;
  sub_46F710(&v9, v5, (__int64)a2);
  if ( (v9 & ~unk_23AD870) == 0 )
  {
    if ( !under_debugger )
      interr(2150);
    BUG();
  }
  v9 &= unk_23AD870;
  if ( ptr )
  {
    *(_QWORD *)v12 = 0;
    qfree(ptr);
    ptr = nullptr;
    *(_QWORD *)&v12[2] = 0;
  }
  v6 = *(_DWORD *)(a1 + 12);
  v7 = *(_QWORD *)(a1 + 32);
  v40 = -1;
  sub_46FF00((__int64)&v9, v7, v6, a2);
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
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
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
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
  if ( ptr )
  {
    *(_QWORD *)v12 = 0;
    qfree(ptr);
  }
  return v43 - __readfsqword(0x28u);
}
