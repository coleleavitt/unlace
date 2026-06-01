unsigned __int64 __fastcall sub_45C280(__int64 a1, unsigned int a2)
{
  int v4; // eax
  __int64 v5; // rsi
  int v6; // edx
  __int64 v7; // rsi
  int v9[2]; // [rsp+0h] [rbp-188h] BYREF
  void *ptr; // [rsp+8h] [rbp-180h]
  __int64 v11[2]; // [rsp+10h] [rbp-178h]
  void *v12; // [rsp+20h] [rbp-168h]
  __int128 v13; // [rsp+28h] [rbp-160h]
  void *v14; // [rsp+38h] [rbp-150h]
  __int128 v15; // [rsp+40h] [rbp-148h]
  void *v16; // [rsp+50h] [rbp-138h]
  __int128 v17; // [rsp+58h] [rbp-130h]
  void *v18; // [rsp+68h] [rbp-120h]
  __int128 v19; // [rsp+70h] [rbp-118h]
  int v20; // [rsp+80h] [rbp-108h]
  void *v21; // [rsp+88h] [rbp-100h]
  __int128 v22; // [rsp+90h] [rbp-F8h]
  void *v23; // [rsp+A0h] [rbp-E8h]
  __int128 v24; // [rsp+A8h] [rbp-E0h]
  void *v25; // [rsp+B8h] [rbp-D0h]
  __int128 v26; // [rsp+C0h] [rbp-C8h]
  void *v27; // [rsp+D0h] [rbp-B8h]
  __int128 v28; // [rsp+D8h] [rbp-B0h]
  int v29; // [rsp+E8h] [rbp-A0h]
  void *v30; // [rsp+F0h] [rbp-98h]
  __int128 v31; // [rsp+F8h] [rbp-90h]
  void *v32; // [rsp+108h] [rbp-80h]
  __int128 v33; // [rsp+110h] [rbp-78h]
  void *v34; // [rsp+120h] [rbp-68h]
  __int128 v35; // [rsp+128h] [rbp-60h]
  void *v36; // [rsp+138h] [rbp-50h]
  __int128 v37; // [rsp+140h] [rbp-48h]
  int v38; // [rsp+150h] [rbp-38h]
  int v39; // [rsp+158h] [rbp-30h]
  int v40; // [rsp+15Ch] [rbp-2Ch]
  int v41; // [rsp+160h] [rbp-28h]
  unsigned __int64 v42; // [rsp+168h] [rbp-20h]

  v42 = __readfsqword(0x28u);
  *(_OWORD *)v11 = 0;
  *(_QWORD *)v9 = 0xFFFFFFFF00000000LL;
  ptr = nullptr;
  v12 = nullptr;
  v14 = nullptr;
  v16 = nullptr;
  v4 = *(_DWORD *)(a1 + 12);
  v18 = nullptr;
  v20 = -1;
  v21 = nullptr;
  v23 = nullptr;
  v25 = nullptr;
  v27 = nullptr;
  v13 = 0;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v29 = -1;
  v5 = *(_QWORD *)(a1 + 32);
  v30 = nullptr;
  v32 = nullptr;
  v34 = nullptr;
  v36 = nullptr;
  v38 = -1;
  v39 = -1;
  v40 = v4;
  v41 = -1;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v37 = 0;
  sub_45B310(v9, v5, a2);
  if ( (v9[0] & ~unk_2389830) == 0 )
  {
    if ( !under_debugger )
      interr(2150);
    BUG();
  }
  v9[0] &= unk_2389830;
  if ( ptr )
  {
    v11[0] = 0;
    qfree(ptr);
    ptr = nullptr;
    v11[1] = 0;
  }
  v6 = *(_DWORD *)(a1 + 12);
  v7 = *(_QWORD *)(a1 + 32);
  v39 = -1;
  sub_45BAF0((__int64)v9, v7, v6, a2);
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  if ( ptr )
  {
    v11[0] = 0;
    qfree(ptr);
  }
  return v42 - __readfsqword(0x28u);
}

