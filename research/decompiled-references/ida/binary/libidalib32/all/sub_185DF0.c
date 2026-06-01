TView *__fastcall sub_185DF0(TGroup *this, char a2, __int64 a3, unsigned int *a4, unsigned int a5)
{
  unsigned __int64 v7; // r12
  unsigned int v8; // ebp
  unsigned __int64 v9; // rdx
  char *v10; // rax
  int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rax
  TView *v14; // rbx
  char *v15; // rdx
  unsigned int v17; // [rsp+4h] [rbp-6Ch]
  __m128i v18; // [rsp+8h] [rbp-68h] BYREF
  char *s; // [rsp+18h] [rbp-58h] BYREF
  __int128 v20; // [rsp+20h] [rbp-50h]
  unsigned __int64 v21; // [rsp+30h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  s = nullptr;
  v20 = 0;
  if ( !(unsigned __int8)sub_184C00((__int64)this, a3, a2, (const char **)&s, 1u) )
    goto LABEL_22;
  v7 = (int)*a4;
  v8 = *a4;
  v9 = TScreen::screenWidth - 2;
  if ( !(_QWORD)v20 )
  {
    if ( v7 >= v9 )
      LODWORD(v7) = TScreen::screenWidth - 3;
    goto LABEL_20;
  }
  v7 = v7 + v20 - 1;
  if ( v7 >= v9 )
    LODWORD(v7) = TScreen::screenWidth - 3;
  v10 = strchr(s, 10);
  if ( !v10 )
  {
LABEL_20:
    v17 = a5 + 1;
    goto LABEL_11;
  }
  v11 = 1;
  do
  {
    ++v11;
    v10 = strchr(v10 + 1, 10);
  }
  while ( v10 );
  v12 = a5 + v11;
  if ( !v11 )
    v12 = a5 + 1;
  v17 = v12;
LABEL_11:
  v13 = operator new(0x50u);
  v14 = (TView *)v13;
  if ( (_QWORD)v20 )
    v15 = s;
  else
    v15 = (char *)s1;
  v18 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(a5)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v17)));
  TStaticText::TStaticText(v13, &v18, v15);
  if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v14) )
  {
    TGroup::insert(this, v14);
    *a4 = v7;
    goto LABEL_15;
  }
LABEL_22:
  v14 = nullptr;
LABEL_15:
  if ( s )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return v14;
}

