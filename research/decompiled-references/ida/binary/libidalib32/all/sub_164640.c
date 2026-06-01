__int64 __fastcall sub_164640(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r13
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // r13
  int v9; // eax
  TView ***v10; // r13
  TView *v11; // r12
  __int64 v13; // rcx
  __m128i v14; // [rsp+10h] [rbp-128h] BYREF
  __int64 (**v15)(); // [rsp+20h] [rbp-118h]
  int v16; // [rsp+28h] [rbp-110h]
  int v17; // [rsp+2Ch] [rbp-10Ch]
  __int64 v18; // [rsp+30h] [rbp-108h] BYREF
  __int128 v19; // [rsp+38h] [rbp-100h]
  __int128 v20; // [rsp+48h] [rbp-F0h]
  __int128 v21; // [rsp+58h] [rbp-E0h]
  __int64 v22; // [rsp+68h] [rbp-D0h]
  __int128 v23; // [rsp+70h] [rbp-C8h]
  __int64 v24; // [rsp+80h] [rbp-B8h]
  __int64 v25; // [rsp+88h] [rbp-B0h]
  int v26; // [rsp+90h] [rbp-A8h]
  __int128 v27; // [rsp+98h] [rbp-A0h]
  __int64 v28; // [rsp+A8h] [rbp-90h]
  __int64 v29; // [rsp+B0h] [rbp-88h]
  char v30; // [rsp+B8h] [rbp-80h]
  __int128 v31; // [rsp+BCh] [rbp-7Ch]
  _BYTE v32[40]; // [rsp+D0h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+F8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
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
      v13 = 0;
      while ( qword_2531E0[v13] )
      {
        if ( ++v13 == 26 )
          return 0;
      }
      LODWORD(v1) = v13;
      qsnprintf();
      goto LABEL_8;
    }
    while ( 1 )
    {
      v3 = qword_2531E0[v1];
      if ( !v3 )
        break;
      if ( v1-- == 0 )
        return 0;
    }
    if ( (unsigned int)v1 <= 0x19 )
    {
      qsnprintf();
LABEL_8:
      v14.m128i_i64[0] = TView::getExtent(TProgram::deskTop);
      v14.m128i_i64[1] = v4;
      if ( !(_DWORD)v1 )
        v14.m128i_i32[3] -= 2;
      v25 = 0xFFFFFFFFLL;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      v27 = 0;
      v18 = 0;
      v22 = 0;
      v24 = 0;
      v28 = 0;
      v29 = 0;
      HIWORD(v25) = word_2440C8;
      v26 = 1;
      v30 = 0;
      v23 = 0;
      v31 = 0;
      sub_15B5F0((__int64)&v18, &v14, 0);
      HIWORD(v25) = word_2440C8;
      v5 = getinf();
      v16 = -1;
      v15 = off_22FD98;
      v17 = v5;
      if ( (_QWORD)v27 )
      {
        qfree();
        *(_QWORD *)&v27 = 0;
      }
      *(_QWORD *)&v27 = idaplace_t__clone();
      v6 = qalloc_or_throw();
      v7 = getinf();
      *(_DWORD *)(v6 + 8) = 0;
      *(_QWORD *)v6 = off_22FD98;
      *(_DWORD *)(v6 + 12) = v7;
      *((_QWORD *)&v27 + 1) = v6;
      v8 = qalloc_or_throw();
      v9 = getinf();
      *(_DWORD *)(v8 + 8) = 0x7FFFFFFF;
      *(_QWORD *)v8 = off_22FD98;
      *(_DWORD *)(v8 + 12) = v9;
      v28 = v8;
      v10 = (TView ***)operator new(0x4C0u);
      sub_1645A0((__int64)v10, v32, (const __m128i *)&v18, v1);
      v11 = (TView *)operator new(0xC8u);
      sub_164370(v11, (__int64)&v14, v10);
      if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v11) )
      {
        TGroup::insert(TProgram::deskTop, v11);
        qword_2531E0[(int)v1] = v11;
      }
      v3 = (*(__int64 (__fastcall **)(TView *))(*(_QWORD *)v11 + 232LL))(v11);
      qfree();
      *((_QWORD *)&v27 + 1) = 0;
      qfree();
      v28 = 0;
      if ( (_QWORD)v27 )
        qfree();
    }
  }
  return v3;
}

