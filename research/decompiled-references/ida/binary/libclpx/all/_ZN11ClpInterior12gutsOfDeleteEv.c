void __fastcall ClpInterior::gutsOfDelete(ClpInterior *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  ClpLsqr *v9; // rbp
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  void *v31; // rdi
  void *v32; // rdi
  __int64 v33; // rdi

  v2 = *((void **)this + 94);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 97);
  *((_QWORD *)this + 94) = 0;
  *((_QWORD *)this + 95) = 0;
  *((_QWORD *)this + 96) = 0;
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 100);
  *((_QWORD *)this + 97) = 0;
  *((_QWORD *)this + 98) = 0;
  *((_QWORD *)this + 99) = 0;
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 101);
  *((_QWORD *)this + 100) = 0;
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)this + 102);
  *((_QWORD *)this + 101) = 0;
  if ( v6 )
    operator delete[](v6);
  v7 = *((void **)this + 103);
  *((_QWORD *)this + 102) = 0;
  if ( v7 )
    operator delete[](v7);
  v8 = *((void **)this + 104);
  *((_QWORD *)this + 103) = 0;
  if ( v8 )
    operator delete[](v8);
  v9 = *((ClpLsqr **)this + 105);
  *((_QWORD *)this + 104) = 0;
  if ( v9 )
  {
    ClpLsqr::~ClpLsqr(v9);
    operator delete(v9);
  }
  v10 = *((void **)this + 138);
  *((_QWORD *)this + 105) = 0;
  *((_QWORD *)this + 106) = 0;
  if ( v10 )
    operator delete[](v10);
  v11 = *((void **)this + 139);
  *((_QWORD *)this + 138) = 0;
  if ( v11 )
    operator delete[](v11);
  v12 = *((void **)this + 146);
  *((_QWORD *)this + 139) = 0;
  if ( v12 )
    operator delete[](v12);
  v13 = *((void **)this + 140);
  *((_QWORD *)this + 146) = 0;
  if ( v13 )
    operator delete[](v13);
  v14 = *((void **)this + 141);
  *((_QWORD *)this + 140) = 0;
  if ( v14 )
    operator delete[](v14);
  v15 = *((void **)this + 142);
  *((_QWORD *)this + 141) = 0;
  if ( v15 )
    operator delete[](v15);
  v16 = *((void **)this + 145);
  *((_QWORD *)this + 142) = 0;
  if ( v16 )
    operator delete[](v16);
  v17 = *((void **)this + 147);
  *((_QWORD *)this + 145) = 0;
  if ( v17 )
    operator delete[](v17);
  v18 = *((void **)this + 148);
  *((_QWORD *)this + 147) = 0;
  if ( v18 )
    operator delete[](v18);
  v19 = *((void **)this + 149);
  *((_QWORD *)this + 148) = 0;
  if ( v19 )
    operator delete[](v19);
  v20 = *((void **)this + 150);
  *((_QWORD *)this + 149) = 0;
  if ( v20 )
    operator delete[](v20);
  v21 = *((void **)this + 151);
  *((_QWORD *)this + 150) = 0;
  if ( v21 )
    operator delete[](v21);
  v22 = *((void **)this + 152);
  *((_QWORD *)this + 151) = 0;
  if ( v22 )
    operator delete[](v22);
  v23 = *((void **)this + 153);
  *((_QWORD *)this + 152) = 0;
  if ( v23 )
    operator delete[](v23);
  v24 = *((void **)this + 154);
  *((_QWORD *)this + 153) = 0;
  if ( v24 )
    operator delete[](v24);
  v25 = *((void **)this + 155);
  *((_QWORD *)this + 154) = 0;
  if ( v25 )
    operator delete[](v25);
  v26 = *((void **)this + 156);
  *((_QWORD *)this + 155) = 0;
  if ( v26 )
    operator delete[](v26);
  v27 = *((void **)this + 157);
  *((_QWORD *)this + 156) = 0;
  if ( v27 )
    operator delete[](v27);
  v28 = *((void **)this + 158);
  *((_QWORD *)this + 157) = 0;
  if ( v28 )
    operator delete[](v28);
  v29 = *((void **)this + 143);
  *((_QWORD *)this + 158) = 0;
  if ( v29 )
    operator delete[](v29);
  v30 = *((void **)this + 144);
  *((_QWORD *)this + 143) = 0;
  if ( v30 )
    operator delete[](v30);
  v31 = *((void **)this + 159);
  *((_QWORD *)this + 144) = 0;
  if ( v31 )
    operator delete[](v31);
  v32 = *((void **)this + 160);
  *((_QWORD *)this + 159) = 0;
  if ( v32 )
    operator delete[](v32);
  v33 = *((_QWORD *)this + 161);
  *((_QWORD *)this + 160) = 0;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 48LL))(v33);
}

