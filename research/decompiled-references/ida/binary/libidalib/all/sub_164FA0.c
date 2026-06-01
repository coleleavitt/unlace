__int64 __fastcall sub_164FA0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  TView ***v9; // r13
  TView *v10; // r12
  __int64 v12; // rcx
  __m128i v13; // [rsp+10h] [rbp-138h] BYREF
  __int64 (**v14)(); // [rsp+20h] [rbp-128h]
  int v15; // [rsp+28h] [rbp-120h]
  __int64 v16; // [rsp+30h] [rbp-118h]
  __int64 v17; // [rsp+40h] [rbp-108h] BYREF
  __int128 v18; // [rsp+48h] [rbp-100h]
  __int128 v19; // [rsp+58h] [rbp-F0h]
  __int128 v20; // [rsp+68h] [rbp-E0h]
  __int64 v21; // [rsp+78h] [rbp-D0h]
  __int128 v22; // [rsp+80h] [rbp-C8h]
  __int64 v23; // [rsp+90h] [rbp-B8h]
  __int64 v24; // [rsp+98h] [rbp-B0h]
  int v25; // [rsp+A0h] [rbp-A8h]
  __int128 v26; // [rsp+A8h] [rbp-A0h]
  __int64 v27; // [rsp+B8h] [rbp-90h]
  __int64 v28; // [rsp+C0h] [rbp-88h]
  char v29; // [rsp+C8h] [rbp-80h]
  __int128 v30; // [rsp+CCh] [rbp-7Ch]
  _BYTE v31[40]; // [rsp+E0h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+108h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( (unsigned int)lowMemory() )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)TProgram::application + 72LL))(TProgram::application);
    return 0;
  }
  else
  {
    v1 = 25;
    if ( !a1 )
    {
      v12 = 0;
      while ( qword_2543A0[v12] )
      {
        if ( ++v12 == 26 )
          return 0;
      }
      LODWORD(v1) = v12;
      qsnprintf();
      goto LABEL_8;
    }
    while ( 1 )
    {
      v3 = qword_2543A0[v1];
      if ( !v3 )
        break;
      if ( v1-- == 0 )
        return 0;
    }
    if ( (unsigned int)v1 <= 0x19 )
    {
      qsnprintf();
LABEL_8:
      v13.m128i_i64[0] = TView::getExtent(TProgram::deskTop);
      v13.m128i_i64[1] = v4;
      if ( !(_DWORD)v1 )
        v13.m128i_i32[3] -= 2;
      v24 = 0xFFFFFFFFLL;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v26 = 0;
      v17 = 0;
      v21 = 0;
      v23 = 0;
      v27 = 0;
      v28 = 0;
      HIWORD(v24) = word_245114;
      v25 = 1;
      v29 = 0;
      v22 = 0;
      v30 = 0;
      sub_15BEB0((__int64)&v17, &v13, 0);
      HIWORD(v24) = word_245114;
      v16 = getinf();
      v15 = -1;
      v14 = off_230E18;
      if ( (_QWORD)v26 )
      {
        qfree();
        *(_QWORD *)&v26 = 0;
      }
      *(_QWORD *)&v26 = idaplace_t__clone();
      v5 = qalloc_or_throw();
      v6 = getinf();
      *(_DWORD *)(v5 + 8) = 0;
      *(_QWORD *)v5 = off_230E18;
      *(_QWORD *)(v5 + 16) = v6;
      *((_QWORD *)&v26 + 1) = v5;
      v7 = qalloc_or_throw();
      v8 = getinf();
      *(_DWORD *)(v7 + 8) = 0x7FFFFFFF;
      *(_QWORD *)v7 = off_230E18;
      *(_QWORD *)(v7 + 16) = v8;
      v27 = v7;
      v9 = (TView ***)operator new(0x4C8u);
      sub_164F10((__int64)v9, v31, (const __m128i *)&v17, v1);
      v10 = (TView *)operator new(0xC8u);
      sub_164CD0(v10, (__int64)&v13, v9);
      if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v10) )
      {
        TGroup::insert(TProgram::deskTop, v10);
        qword_2543A0[(int)v1] = v10;
      }
      v3 = (*(__int64 (__fastcall **)(TView *))(*(_QWORD *)v10 + 232LL))(v10);
      qfree();
      *((_QWORD *)&v26 + 1) = 0;
      qfree();
      v27 = 0;
      if ( (_QWORD)v26 )
        qfree();
    }
  }
  return v3;
}

