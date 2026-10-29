unsigned __int64 __fastcall sub_18B1C0(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  bool v4; // zf
  const char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  char *v11; // rdi
  __int64 v12; // rax
  const char *v13; // rsi
  QT::QLineEdit *v14; // r13
  const char *v15; // r14
  unsigned __int64 v16; // rdx
  size_t v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rdi
  __int64 v32; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+8h] [rbp-A0h]
  __int64 v34; // [rsp+20h] [rbp-88h] BYREF
  __int128 v35; // [rsp+28h] [rbp-80h]
  const char *v36; // [rsp+40h] [rbp-68h] BYREF
  __int128 v37; // [rsp+48h] [rbp-60h]
  void *ptr[3]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 96);
  if ( !v3 )
    return v39 - __readfsqword(0x28u);
  v4 = *(_QWORD *)(v3 + 40) == 0;
  v32 = 0;
  v33 = 0;
  v6 = &s1;
  if ( !v4 )
    v6 = *(const char **)(v3 + 32);
  sub_4B16A0(&v32, v6, 1);
  if ( (_QWORD)v33 )
  {
    v10 = *(_QWORD *)(a1 + 96);
    if ( *(_DWORD *)(v10 + 124) != 3 )
    {
      v11 = (char *)&s1;
      if ( *(_QWORD *)(v10 + 40) )
        v11 = *(char **)(v10 + 32);
      sub_4B19C0(v11);
    }
    sub_1864C0(a1, 1);
    v12 = *(_QWORD *)(a1 + 96);
    v34 = 0;
    v13 = &s1;
    v35 = 0;
    if ( *(_QWORD *)(v12 + 40) )
      v13 = *(const char **)(v12 + 32);
    sub_4B16A0(&v34, v13, 0);
    v36 = nullptr;
    v37 = 0;
    sub_532CD0(&v36, &v34, 0);
    v14 = *(QT::QLineEdit **)(a1 + 136);
    if ( (_QWORD)v37 )
    {
      v17 = v37 - 1;
      v15 = v36;
      v16 = (unsigned __int64)(v37 - 1) >> 63;
      if ( !v36 )
        goto LABEL_35;
    }
    else
    {
      v15 = &s1;
      LOBYTE(v16) = 0;
      v17 = 0;
      if ( !&s1 )
        goto LABEL_35;
    }
    if ( !(_BYTE)v16 )
    {
LABEL_14:
      QT::QString::fromUtf8(ptr, v17, v15);
      QT::QLineEdit::setText(v14, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      sub_18AE10(a1, 0.0, a3);
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v36, ptr, v18, v19, v20);
      }
      v21 = v34;
      if ( v34 )
      {
        v22 = v35;
        if ( (_QWORD)v35 )
        {
          v23 = 0;
          do
          {
            v24 = (__int64 *)(v21 + 24 * v23);
            v25 = *v24;
            if ( *v24 )
            {
              v24[1] = 0;
              qfree(v25, ptr, v21, v19, v20);
              v21 = v34;
            }
            ++v23;
          }
          while ( v22 != v23 );
        }
        *(_QWORD *)&v35 = 0;
        qfree(v21, ptr, v21, v19, v20);
      }
      v26 = v32;
      if ( v32 )
      {
        v27 = v33;
        if ( (_QWORD)v33 )
        {
          v28 = 0;
          do
          {
            v29 = (__int64 *)(v26 + 24 * v28);
            v30 = *v29;
            if ( *v29 )
            {
              v29[1] = 0;
              qfree(v30, ptr, v26, v19, v20);
              v26 = v32;
            }
            ++v28;
          }
          while ( v27 != v28 );
        }
        *(_QWORD *)&v33 = 0;
        qfree(v26, ptr, v26, v19, v20);
      }
      return v39 - __readfsqword(0x28u);
    }
LABEL_35:
    v17 = 0;
    if ( v15 )
      v17 = strlen(v15);
    goto LABEL_14;
  }
  if ( v32 )
    qfree(v32, v6, v7, v8, v9);
  return v39 - __readfsqword(0x28u);
}
