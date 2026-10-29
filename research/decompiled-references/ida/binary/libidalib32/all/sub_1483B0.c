__int64 __fastcall sub_1483B0(int a1, __int64 a2)
{
  void (__fastcall **v3)(__int64, __int64, _QWORD **); // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, __int64, int *); // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  void (__fastcall **v9)(__int64, __int64, _QWORD **); // rax
  __int64 v10; // rbp
  __int64 v11; // rdi
  int v12; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD *v13; // [rsp+10h] [rbp-38h] BYREF
  __int128 v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  qword_252F38 = a2;
  if ( a1 == -1 )
  {
    v12 = (unsigned __int16)word_252F58;
    v6 = *(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a2 + 8LL);
    if ( byte_252F30 )
      v6(a2, 1, &v12);
    else
      v6(a2, 3, (int *)&word_252F58);
    if ( !qword_252F38 )
      return 1;
    v7 = *(unsigned __int16 *)(qword_252F40 + 2LL * (unsigned __int16)word_252F58);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_252F38 + 56LL))(qword_252F38, 2);
    v14 = 0;
    v13 = nullptr;
    v13 = (_QWORD *)qvector_reserve();
    v8 = qword_252F38;
    v13[(_QWORD)v14] = v7;
    *(_QWORD *)&v14 = v14 + 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v8 + 8LL))(v8, 2, &v13);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_252F38 + 48LL))(qword_252F38, 2);
    if ( !v13 )
      return 1;
    goto LABEL_19;
  }
  if ( (unsigned int)(a1 + 3) <= 1 )
  {
    qword_252F38 = 0;
    return 1;
  }
  if ( a1 != 1 )
  {
    if ( a1 == 3 )
    {
      if ( a2 )
      {
        v3 = *(void (__fastcall ***)(__int64, __int64, _QWORD **))a2;
        v13 = nullptr;
        v14 = 0;
        (*v3)(a2, 2, &v13);
        if ( (_QWORD)v14 )
          *(_WORD *)(qword_252F40 + 2LL * (unsigned __int16)word_252F58) = *v13;
        if ( v13 )
        {
          *(_QWORD *)&v14 = 0;
          qfree();
        }
      }
      (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 3, &word_252F58);
      if ( qword_252F38 )
      {
        v4 = *(unsigned __int16 *)(qword_252F40 + 2LL * (unsigned __int16)word_252F58);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_252F38 + 56LL))(qword_252F38, 2);
        v14 = 0;
        v13 = nullptr;
        v13 = (_QWORD *)qvector_reserve();
        v5 = qword_252F38;
        v13[(_QWORD)v14] = v4;
        *(_QWORD *)&v14 = v14 + 1;
        (*(void (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v5 + 8LL))(v5, 2, &v13);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_252F38 + 48LL))(qword_252F38, 2);
        if ( v13 )
        {
          *(_QWORD *)&v14 = 0;
          qfree();
        }
      }
    }
    return 1;
  }
  if ( a2 )
  {
    v9 = *(void (__fastcall ***)(__int64, __int64, _QWORD **))a2;
    v13 = nullptr;
    v14 = 0;
    (*v9)(a2, 2, &v13);
    if ( (_QWORD)v14 )
      *(_WORD *)(qword_252F40 + 2LL * (unsigned __int16)word_252F58) = *v13;
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
  }
  (**(void (__fastcall ***)(__int64, __int64, int *))a2)(a2, 1, &v12);
  word_252F58 = v12;
  if ( qword_252F38 )
  {
    v10 = *(unsigned __int16 *)(qword_252F40 + 2LL * (unsigned __int16)v12);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_252F38 + 56LL))(qword_252F38, 2);
    v14 = 0;
    v13 = nullptr;
    v13 = (_QWORD *)qvector_reserve();
    v11 = qword_252F38;
    v13[(_QWORD)v14] = v10;
    *(_QWORD *)&v14 = v14 + 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v11 + 8LL))(v11, 2, &v13);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_252F38 + 48LL))(qword_252F38, 2);
    if ( v13 )
    {
LABEL_19:
      *(_QWORD *)&v14 = 0;
      qfree();
    }
  }
  return 1;
}

