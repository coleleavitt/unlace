__int64 __fastcall sub_1AD830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, const char *a6)
{
  int *v11; // rax
  int *v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // r13d
  __int64 v20; // r15
  __int64 v21; // rbp
  __int64 *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rbp
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 (__fastcall **v31)(); // [rsp+0h] [rbp-148h] BYREF
  __int64 v32; // [rsp+8h] [rbp-140h]
  __int128 v33; // [rsp+10h] [rbp-138h]
  __int64 v34; // [rsp+20h] [rbp-128h]
  __int64 v35; // [rsp+28h] [rbp-120h]
  __int64 v36; // [rsp+30h] [rbp-118h]
  __m128i v37; // [rsp+38h] [rbp-110h]
  int v38; // [rsp+48h] [rbp-100h]
  _BYTE v39[96]; // [rsp+50h] [rbp-F8h] BYREF
  int v40; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-90h]
  __int64 v42; // [rsp+C0h] [rbp-88h]
  __int64 v43; // [rsp+C8h] [rbp-80h]
  char v44; // [rsp+D0h] [rbp-78h]
  __int64 v45; // [rsp+D8h] [rbp-70h]
  __int128 v46; // [rsp+E0h] [rbp-68h]
  __int64 v47; // [rsp+F0h] [rbp-58h]
  __int128 v48; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v49; // [rsp+108h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v35 = a1;
  v33 = -1;
  v31 = (__int64 (__fastcall **)())&stru_86F6A0;
  v11 = (int *)v39;
  v12 = &v40;
  v32 = 0x3FF000004LL;
  v34 = 0;
  LODWORD(v36) = 2;
  v38 = -1;
  v37 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_85CBC0), (__m128i)(unsigned __int64)off_85CBB0);
  do
  {
    *(_QWORD *)v11 = 0;
    v11 += 6;
    *((_OWORD *)v11 - 1) = 0;
  }
  while ( v11 != &v40 );
  v40 = 0;
  v13 = HIDWORD(v32);
  if ( ((HIDWORD(v32) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v32) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a6, a4, HIDWORD(v32), 0.0);
      BUG();
    }
    v13 = HIDWORD(v32) & 0xFE07FFFF;
    BYTE3(v32) = ((HIDWORD(v32) >> 19) & 0x3F) - 1;
    HIDWORD(v32) &= 0xFE07FFFF;
  }
  v41 = a2;
  v42 = a3;
  v43 = a4;
  v44 = a5;
  v45 = 0;
  v47 = 0;
  v31 = strpath_chooser_t___vtable;
  v38 = 52;
  v46 = 0;
  v48 = 0;
  v14 = sub_1AD6F0(&v31, (__int64)a6, a4, v13);
  v18 = v47;
  v31 = strpath_chooser_t___vtable;
  v19 = v14;
  if ( v47 )
  {
    v20 = v48;
    if ( (_QWORD)v48 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v18 + 24 * v21);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23, a6, v18, v15, v16, v17, v31, v32, v33, v34, v35, v36, *(_OWORD *)&v37);
          v18 = v47;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v48 = 0;
    qfree(v18, a6);
  }
  v24 = v45;
  if ( v45 )
  {
    v25 = v46;
    if ( (_QWORD)v46 )
    {
      v26 = 0;
      do
      {
        v27 = (__int64 *)(v24 + 24 * v26);
        v28 = *v27;
        if ( *v27 )
        {
          v27[1] = 0;
          qfree(v28, a6);
          v24 = v45;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v46 = 0;
    qfree(v24, a6);
  }
  v31 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v29 = *((_QWORD *)v12 - 3);
    v12 -= 6;
    if ( v29 )
    {
      *((_QWORD *)v12 + 1) = 0;
      qfree(v29, a6);
    }
  }
  while ( v12 != (int *)v39 );
  return v19;
}
