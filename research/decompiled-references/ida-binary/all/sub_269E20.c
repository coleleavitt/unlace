__int64 __fastcall sub_269E20(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __m128 v8; // xmm4
  __m128 v9; // xmm5
  char v10; // al
  unsigned int v11; // eax
  char *v12; // r14
  unsigned int v13; // ebx
  const char *p_dest; // rsi
  char *v15; // rax
  char v17; // r9
  char *v18; // r15
  size_t v19; // rax
  char v20; // r9
  size_t v21; // r8
  void *v22; // rdi
  size_t v23; // r15
  const char *v24; // [rsp-8h] [rbp-C8h]
  char v25; // [rsp+8h] [rbp-B8h]
  size_t v26; // [rsp+8h] [rbp-B8h]
  char v27; // [rsp+10h] [rbp-B0h]
  size_t v28; // [rsp+10h] [rbp-B0h]
  bool v29; // [rsp+1Fh] [rbp-A1h]
  char v30; // [rsp+2Bh] [rbp-95h] BYREF
  __int16 v31; // [rsp+2Ch] [rbp-94h] BYREF
  __int16 v32; // [rsp+2Eh] [rbp-92h] BYREF
  char *s; // [rsp+30h] [rbp-90h] BYREF
  __int128 v34; // [rsp+38h] [rbp-88h]
  void *dest; // [rsp+50h] [rbp-70h] BYREF
  __int128 v36; // [rsp+58h] [rbp-68h]
  __int64 v37; // [rsp+68h] [rbp-58h]
  __int64 v38; // [rsp+70h] [rbp-50h]
  __int128 v39; // [rsp+78h] [rbp-48h]
  unsigned __int64 v40; // [rsp+88h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  dest = nullptr;
  v37 = 0;
  v38 = 0;
  v36 = 0;
  v39 = 0;
  if ( (get_merge_state() & 3) != 0 )
    v10 = is_diff_merge_mode() + 3;
  else
    v10 = 1 - ((dword_8CC5F0 == 0) - 1);
  v30 = v10;
  v31 = 0;
  v32 = 1;
  s = nullptr;
  v34 = 0;
  v11 = sub_1697D0(
          (int)"Save current desktop\n"
               "@0:1420[]\n"
               "\n"
               "%/%*<#The desktop name#~N~ame:q1:200:50::><...:B2::::>\n"
               "<#Save as the default desktop#~D~efault:C>3> <##Save in#Where to save the desktop#D~a~tabase:R><~R~egistry:R>4>",
          (__int64)sub_26AE00,
          (__int64)&v30,
          (__int64)&s,
          (__int64)sub_264A10,
          (__int64)&v31,
          (__m128)0LL,
          a2,
          a3,
          a4,
          v8,
          v9,
          a7,
          a8,
          (char)&v32);
  v12 = s;
  v13 = v11;
  p_dest = v24;
  v15 = s;
  if ( v13 == 1 )
  {
    if ( v31 )
    {
      if ( *((_QWORD *)&v34 + 1) <= 7u )
      {
        p_dest = s;
        v15 = (char *)qvector_reserve(&s, s, 8, 1);
        s = v15;
      }
      *(_QWORD *)&v34 = 8;
      *(_DWORD *)v15 = 1634100548;
      *(_DWORD *)(v15 + 3) = 1953264993;
      v32 = 1;
      s[7] = 0;
      v12 = s;
      v29 = 0;
    }
    else
    {
      v29 = v32 == 0;
    }
    v17 = v30;
    v18 = v12;
    if ( (_QWORD)v34 )
    {
      if ( !v12 )
      {
        *(_QWORD *)&v36 = 0;
        BYTE1(v37) = v30;
        LOBYTE(v37) = v29;
        goto LABEL_24;
      }
      v27 = v30;
      v19 = strlen(v12);
      v20 = v27;
      v21 = v19;
      if ( !v19 )
      {
        *(_QWORD *)&v36 = 0;
        BYTE1(v37) = v27;
        LOBYTE(v37) = v29;
        goto LABEL_23;
      }
      v22 = dest;
      v23 = v19 + 1;
      if ( *((_QWORD *)&v36 + 1) < v19 + 1 )
      {
        v26 = v19;
        dest = (void *)qvector_reserve(&dest, dest, v19 + 1, 1);
        v21 = v26;
        v22 = dest;
        v20 = v27;
      }
      p_dest = v12;
      *(_QWORD *)&v36 = v23;
      v25 = v20;
      v28 = v21;
      memmove(v22, v12, v21);
      v17 = v25;
      *((_BYTE *)dest + v28) = 0;
      v18 = s;
    }
    else
    {
      *(_QWORD *)&v36 = 0;
    }
    BYTE1(v37) = v17;
    LOBYTE(v37) = v29;
    if ( !v18 )
    {
LABEL_24:
      BYTE8(v34) = 0;
      s = nullptr;
      *(_QWORD *)&v34 = 0;
      (*(void (__fastcall **)(_QWORD *, char **, bool))(*QT::QCoreApplication::self + 408LL))(
        QT::QCoreApplication::self,
        &s,
        !v29);
      p_dest = (const char *)&dest;
      sub_268730((__int64)&s, (__int64)&dest, v37);
      jvalue_t_clear(&s);
      goto LABEL_7;
    }
LABEL_23:
    *(_QWORD *)&v34 = 0;
    qfree(v18, p_dest);
    v29 = v37;
    goto LABEL_24;
  }
  if ( s )
  {
    *(_QWORD *)&v34 = 0;
    qfree(s, v24);
  }
  v13 = 0;
LABEL_7:
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38, p_dest);
  }
  if ( dest )
  {
    *(_QWORD *)&v36 = 0;
    qfree(dest, p_dest);
  }
  return v13;
}
