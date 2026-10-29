__int64 __fastcall sub_206E080(unsigned int a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // r12d
  int v4; // r12d
  int v5; // r12d
  int v6; // r12d
  int v7; // r12d
  int v8; // r12d
  int v9; // r12d
  int v10; // r12d
  int v11; // r12d
  int v12; // r12d
  int v13; // r12d
  int v14; // r12d
  int v15; // r12d
  int v16; // r12d
  int v17; // r12d
  int v18; // r12d
  int v19; // r12d
  int v20; // r12d
  int v21; // r12d
  int v22; // r12d
  int v23; // r12d
  int v24; // r12d
  int v25; // r12d
  int v26; // r12d
  int v27; // r12d
  int v28; // r12d
  int v29; // r12d
  int v30; // r12d
  int v31; // r12d
  int v32; // r12d
  int v33; // r12d
  int v34; // r12d
  int v35; // r12d

  v2 = a1;
  v3 = a1 & 3;
  if ( (a1 & 3) != 0 )
  {
    if ( v3 == 1 )
    {
      sub_206E030(a2, 1);
    }
    else if ( v3 == 2 )
    {
      sub_206E030(a2, 2);
    }
    else
    {
      sub_206E030(a2, 3);
    }
    v2 = (v3 ^ 0x3FFFFFFF) & a1;
  }
  v4 = v2 & 0x30000;
  if ( (v2 & 0x30000) != 0 )
  {
    if ( v4 == (_DWORD)&stru_10000 )
    {
      sub_206E030(a2, (int)&stru_10000);
    }
    else if ( v4 == (_DWORD)&stru_20000 )
    {
      sub_206E030(a2, (int)&stru_20000);
    }
    else
    {
      sub_206E030(a2, 196608);
    }
    v2 &= v4 ^ 0x3FFFFFFF;
  }
  if ( (v2 & 0x24) == 0x24 )
  {
    v2 &= 0x3FFFFFDBu;
    sub_206E030(a2, 36);
  }
  if ( (v2 & 1) != 0 )
  {
    v2 &= 0x3FFFFFFEu;
    sub_206E030(a2, 1);
  }
  v5 = v2 & 2;
  if ( (v2 & 2) != 0 )
  {
    sub_206E030(a2, v5);
    v2 &= v5 ^ 0x3FFFFFFF;
  }
  v6 = v2 & 3;
  if ( (v2 & 3) != 0 )
  {
    sub_206E030(a2, v6);
    v2 &= v6 ^ 0x3FFFFFFF;
  }
  v7 = v2 & 4;
  if ( (v2 & 4) != 0 )
  {
    sub_206E030(a2, v7);
    v2 &= v7 ^ 0x3FFFFFFF;
  }
  v8 = v2 & 8;
  if ( (v2 & 8) != 0 )
  {
    sub_206E030(a2, v8);
    v2 &= v8 ^ 0x3FFFFFFF;
  }
  v9 = v2 & 0x10;
  if ( (v2 & 0x10) != 0 )
  {
    sub_206E030(a2, v9);
    v2 &= v9 ^ 0x3FFFFFFF;
  }
  v10 = v2 & 0x20;
  if ( (v2 & 0x20) != 0 )
  {
    sub_206E030(a2, v10);
    v2 &= v10 ^ 0x3FFFFFFF;
  }
  v11 = v2 & 0x40;
  if ( (v2 & 0x40) != 0 )
  {
    sub_206E030(a2, v11);
    v2 &= v11 ^ 0x3FFFFFFF;
  }
  v12 = v2 & 0x80;
  if ( (v2 & 0x80) != 0 )
  {
    sub_206E030(a2, v12);
    v2 &= v12 ^ 0x3FFFFFFF;
  }
  v13 = v2 & 0x100;
  if ( (v2 & 0x100) != 0 )
  {
    sub_206E030(a2, v13);
    v2 &= v13 ^ 0x3FFFFFFF;
  }
  v14 = v2 & 0x200;
  if ( (v2 & 0x200) != 0 )
  {
    sub_206E030(a2, v14);
    v2 &= v14 ^ 0x3FFFFFFF;
  }
  v15 = v2 & 0x400;
  if ( (v2 & 0x400) != 0 )
  {
    sub_206E030(a2, v15);
    v2 &= v15 ^ 0x3FFFFFFF;
  }
  v16 = v2 & 0x800;
  if ( (v2 & 0x800) != 0 )
  {
    sub_206E030(a2, v16);
    v2 &= v16 ^ 0x3FFFFFFF;
  }
  v17 = v2 & 0x1000;
  if ( (v2 & 0x1000) != 0 )
  {
    sub_206E030(a2, v17);
    v2 &= v17 ^ 0x3FFFFFFF;
  }
  v18 = v2 & 0x2000;
  if ( (v2 & 0x2000) != 0 )
  {
    sub_206E030(a2, v18);
    v2 &= v18 ^ 0x3FFFFFFF;
  }
  v19 = v2 & 0x4000;
  if ( (v2 & 0x4000) != 0 )
  {
    sub_206E030(a2, v19);
    v2 &= v19 ^ 0x3FFFFFFF;
  }
  v20 = v2 & 0x8000;
  if ( (v2 & 0x8000) != 0 )
  {
    sub_206E030(a2, v20);
    v2 &= v20 ^ 0x3FFFFFFF;
  }
  v21 = v2 & 0x10000;
  if ( (v2 & 0x10000) != 0 )
  {
    sub_206E030(a2, v21);
    v2 &= v21 ^ 0x3FFFFFFF;
  }
  v22 = v2 & 0x20000;
  if ( (v2 & 0x20000) != 0 )
  {
    sub_206E030(a2, v22);
    v2 &= v22 ^ 0x3FFFFFFF;
  }
  v23 = v2 & 0x30000;
  if ( (v2 & 0x30000) != 0 )
  {
    sub_206E030(a2, v23);
    v2 &= v23 ^ 0x3FFFFFFF;
  }
  v24 = v2 & 0x40000;
  if ( (v2 & 0x40000) != 0 )
  {
    sub_206E030(a2, v24);
    v2 &= v24 ^ 0x3FFFFFFF;
  }
  v25 = v2 & 0x80000;
  if ( (v2 & 0x80000) != 0 )
  {
    sub_206E030(a2, v25);
    v2 &= v25 ^ 0x3FFFFFFF;
  }
  v26 = v2 & 0x100000;
  if ( (v2 & 0x100000) != 0 )
  {
    sub_206E030(a2, v26);
    v2 &= v26 ^ 0x3FFFFFFF;
  }
  v27 = v2 & 0x400000;
  if ( (v2 & 0x400000) != 0 )
  {
    sub_206E030(a2, v27);
    v2 &= v27 ^ 0x3FFFFFFF;
  }
  v28 = v2 & 0x800000;
  if ( (v2 & 0x800000) != 0 )
  {
    sub_206E030(a2, v28);
    v2 &= v28 ^ 0x3FFFFFFF;
  }
  v29 = v2 & 0x1000000;
  if ( (v2 & 0x1000000) != 0 )
  {
    sub_206E030(a2, v29);
    v2 &= v29 ^ 0x3FFFFFFF;
  }
  v30 = v2 & 0x2000000;
  if ( (v2 & 0x2000000) != 0 )
  {
    sub_206E030(a2, v30);
    v2 &= v30 ^ 0x3FFFFFFF;
  }
  v31 = v2 & 0x4000000;
  if ( (v2 & 0x4000000) != 0 )
  {
    sub_206E030(a2, v31);
    v2 &= v31 ^ 0x3FFFFFFF;
  }
  v32 = v2 & 0x8000000;
  if ( (v2 & 0x8000000) != 0 )
  {
    sub_206E030(a2, v32);
    v2 &= v32 ^ 0x3FFFFFFF;
  }
  v33 = v2 & 0x10000000;
  if ( (v2 & 0x10000000) != 0 )
  {
    sub_206E030(a2, v33);
    v2 &= v33 ^ 0x3FFFFFFF;
  }
  v34 = v2 & 0x20000000;
  if ( (v2 & 0x20000000) != 0 )
  {
    sub_206E030(a2, v34);
    v2 &= v34 ^ 0x3FFFFFFF;
  }
  v35 = v2 & 0x24;
  if ( (v2 & 0x24) == 0 )
    return v2;
  sub_206E030(a2, v35);
  return (v35 ^ 0x3FFFFFFF) & v2;
}
