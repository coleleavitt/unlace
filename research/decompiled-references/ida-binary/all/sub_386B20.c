__int64 __fastcall sub_386B20(int a1, __int64 a2)
{
  void (__fastcall **v3)(__int64, __int64, _QWORD **); // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  void (__fastcall *v6)(__int64, __int64, int *); // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  _QWORD *v9; // rdi
  void (__fastcall **v10)(__int64, __int64, _QWORD **); // rax
  __int64 v11; // rbp
  __int64 v12; // rdi
  int v13; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD *v14; // [rsp+10h] [rbp-38h] BYREF
  __int128 v15; // [rsp+18h] [rbp-30h]
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  qword_8CF2E8 = a2;
  if ( a1 == -1 )
  {
    v13 = (unsigned __int16)word_8CF308;
    v6 = *(void (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a2 + 8LL);
    if ( byte_8CF2E0 )
      v6(a2, 1, &v13);
    else
      v6(a2, 3, (int *)&word_8CF308);
    if ( !qword_8CF2E8 )
      return 1;
    v7 = *(unsigned __int16 *)(qword_8CF2F0 + 2LL * (unsigned __int16)word_8CF308);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_8CF2E8 + 56LL))(qword_8CF2E8, 2);
    v15 = 0;
    v14 = nullptr;
    v14 = (_QWORD *)qvector_reserve(&v14, 0, 1, 8);
    v8 = qword_8CF2E8;
    v14[(_QWORD)v15] = v7;
    *(_QWORD *)&v15 = v15 + 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v8 + 8LL))(v8, 2, &v14);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_8CF2E8 + 48LL))(qword_8CF2E8, 2);
    v9 = v14;
    if ( !v14 )
      return 1;
    goto LABEL_19;
  }
  if ( (unsigned int)(a1 + 3) <= 1 )
  {
    qword_8CF2E8 = 0;
    return 1;
  }
  if ( a1 != 1 )
  {
    if ( a1 == 3 )
    {
      if ( a2 )
      {
        v3 = *(void (__fastcall ***)(__int64, __int64, _QWORD **))a2;
        v14 = nullptr;
        v15 = 0;
        (*v3)(a2, 2, &v14);
        if ( (_QWORD)v15 )
          *(_WORD *)(qword_8CF2F0 + 2LL * (unsigned __int16)word_8CF308) = *v14;
        if ( v14 )
        {
          *(_QWORD *)&v15 = 0;
          qfree(v14, (_BYTE *)&dword_0 + 2);
        }
      }
      (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 3, &word_8CF308);
      if ( qword_8CF2E8 )
      {
        v4 = *(unsigned __int16 *)(qword_8CF2F0 + 2LL * (unsigned __int16)word_8CF308);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_8CF2E8 + 56LL))(qword_8CF2E8, 2);
        v15 = 0;
        v14 = nullptr;
        v14 = (_QWORD *)qvector_reserve(&v14, 0, 1, 8);
        v5 = qword_8CF2E8;
        v14[(_QWORD)v15] = v4;
        *(_QWORD *)&v15 = v15 + 1;
        (*(void (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v5 + 8LL))(v5, 2, &v14);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_8CF2E8 + 48LL))(qword_8CF2E8, 2);
        if ( v14 )
        {
          *(_QWORD *)&v15 = 0;
          qfree(v14, (_BYTE *)&dword_0 + 2);
        }
      }
    }
    return 1;
  }
  if ( a2 )
  {
    v10 = *(void (__fastcall ***)(__int64, __int64, _QWORD **))a2;
    v14 = nullptr;
    v15 = 0;
    (*v10)(a2, 2, &v14);
    if ( (_QWORD)v15 )
      *(_WORD *)(qword_8CF2F0 + 2LL * (unsigned __int16)word_8CF308) = *v14;
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14, (_BYTE *)&dword_0 + 2);
    }
  }
  (**(void (__fastcall ***)(__int64, __int64, int *))a2)(a2, 1, &v13);
  word_8CF308 = v13;
  if ( qword_8CF2E8 )
  {
    v11 = *(unsigned __int16 *)(qword_8CF2F0 + 2LL * (unsigned __int16)v13);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_8CF2E8 + 56LL))(qword_8CF2E8, 2);
    v15 = 0;
    v14 = nullptr;
    v14 = (_QWORD *)qvector_reserve(&v14, 0, 1, 8);
    v12 = qword_8CF2E8;
    v14[(_QWORD)v15] = v11;
    *(_QWORD *)&v15 = v15 + 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD **))(*(_QWORD *)v12 + 8LL))(v12, 2, &v14);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_8CF2E8 + 48LL))(qword_8CF2E8, 2);
    v9 = v14;
    if ( v14 )
    {
LABEL_19:
      *(_QWORD *)&v15 = 0;
      qfree(v9, (_BYTE *)&dword_0 + 2);
    }
  }
  return 1;
}
