__int64 __fastcall sub_17C8B0(TView **a1, int a2, int a3, char a4, const char **a5, const char *a6)
{
  size_t v9; // r14
  char *v10; // rax
  size_t v11; // rdx
  _BYTE *v12; // rsi
  __int64 v13; // r12
  size_t v14; // r14
  const char *v15; // rsi
  const char *v16; // r14
  __int64 v17; // rax
  __int64 v18; // r12
  const char *v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // r15d
  TView *v22; // r13
  _QWORD *v23; // r14
  void *v27; // [rsp+18h] [rbp-78h] BYREF
  __int128 v28; // [rsp+20h] [rbp-70h]
  __int64 (__fastcall **v29)(); // [rsp+38h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-50h]
  int v31; // [rsp+48h] [rbp-48h]
  unsigned __int64 v32; // [rsp+50h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v28 = 0;
  v27 = nullptr;
  if ( a6 )
  {
    v9 = strlen(a6);
    v27 = (void *)qvector_reserve();
    *(_QWORD *)&v28 = v9 + 1;
    memmove(v27, a6, v9);
    *((_BYTE *)v27 + v9) = 0;
  }
  if ( a4 )
  {
    v10 = a5[5] ? (char *)a5[4] : &byte_251020;
    if ( *v10 != 3 )
    {
      v11 = v28;
      v12 = v27;
      if ( (_QWORD)v28 )
      {
        v13 = v28 + 1;
        v14 = v28 - 1;
        if ( *((_QWORD *)&v28 + 1) >= (unsigned __int64)(v28 + 1) )
          goto LABEL_9;
      }
      else
      {
        if ( *((_QWORD *)&v28 + 1) > 1u )
        {
          *(_QWORD *)&v28 = 2;
          *((_BYTE *)v27 + 1) = 0;
LABEL_26:
          *(_BYTE *)v27 = 3;
          goto LABEL_11;
        }
        v14 = 0;
        v13 = 2;
      }
      v27 = (void *)qvector_reserve();
      v12 = v27;
      v11 = v14 + 1;
LABEL_9:
      *(_QWORD *)&v28 = v13;
      v12[v11] = 0;
      if ( v14 )
      {
        memmove((char *)v27 + 1, v27, v14);
        *(_BYTE *)v27 = 3;
        goto LABEL_11;
      }
      goto LABEL_26;
    }
  }
LABEL_11:
  sub_17BCA0((__int64)&v27, "\n\n", "\n \n");
  if ( (_QWORD)v28 )
    v15 = (const char *)v27;
  else
    v15 = s1;
  v16 = sub_17C430((__int64)a5, v15);
  v17 = operator new(0xB0u);
  v18 = v17;
  if ( a5[1] )
    v19 = *a5;
  else
    v19 = s1;
  v29 = nullptr;
  v30 = _mm_add_epi32(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(TScreen::screenWidth), _mm_cvtsi32_si128(TScreen::screenHeight)),
          _mm_loadl_epi64((const __m128i *)&qword_1C8188)).m128i_u64[0];
  TDialog::TDialog(v17, &v29, v19);
  if ( TFileList::getKey((TFileList *)TProgram::application, (const char *)v18) )
  {
    *(_WORD *)(v18 + 24) |= 0x300u;
    sub_17BFA0((TView *)v18, a2, a3, v16, 0);
    v20 = *(_QWORD *)(v18 + 152);
    v31 = 0;
    v30 = v20;
    v29 = &off_234BE0;
    TGroup::forEach((TGroup *)v18, (void (*)(TView *, void *))sub_17BC70, &v29);
    v21 = v31;
    if ( a1 )
    {
      v22 = (TView *)operator new(0x58u);
      v23 = (_QWORD *)operator new(0x10u);
      *v23 = newStr("~D~on't display again");
      v23[1] = 0;
      LODWORD(v29) = 3;
      HIDWORD(v29) = v21 + 1;
      LODWORD(v30) = 28;
      HIDWORD(v30) = v21 + 2;
      TCluster::TCluster(v22, &v29, v23);
      *a1 = v22;
      *(_QWORD *)v22 = &off_23D258;
      TGroup::insert((TGroup *)v18, v22);
    }
  }
  else
  {
    v18 = 0;
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  return v18;
}

