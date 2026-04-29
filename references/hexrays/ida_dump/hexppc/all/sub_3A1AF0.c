__int64 __fastcall sub_3A1AF0(__int64 a1, int *a2, __int64 a3, double a4)
{
  _QWORD *v5; // rax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(__int64, __int64); // rdx
  int v8; // eax
  void (***v9)(void); // rdi
  bool v10; // zf
  void (*v11)(void); // rdx
  void (__fastcall ***v12)(_QWORD); // rdi
  _DWORD *v14; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v15[5]; // [rsp+10h] [rbp-28h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( a3 == -1 )
    return 0;
  v5 = (_QWORD *)sub_388540(a1, (unsigned int)(*a2 - 1), a3, a4);
  if ( (unsigned __int64)v5 > 1 && *v5 == a3 )
    return 0;
  (*(void (__fastcall **)(_DWORD **, _QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 216)
                                                                                              + 1360LL)
                                                                                + 48LL))(
    &v14,
    *(_QWORD *)(*(_QWORD *)(a1 + 216) + 1360LL),
    a3,
    1,
    3,
    1);
  if ( !v14 )
  {
    return 0;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
    if ( (_BYTE)v6 )
    {
      v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL);
      if ( v7 == sub_39EDD0 )
        (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)v14 + 24LL))(v15);
      else
        ((void (__fastcall *)(_QWORD *))v7)(v15);
      if ( v15[0] )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 24LL))(v15[0]);
        if ( v8 <= 0 || *a2 == v8 )
          v6 = 0;
        else
          *a2 = v8;
        v9 = (void (***)(void))v15[0];
        if ( v15[0] )
        {
          v10 = (*(_DWORD *)(v15[0] + 8LL))-- == 1;
          if ( v10 )
          {
            v11 = **v9;
            if ( (char *)v11 == (char *)sub_39EB60 )
              (*v9)[20]();
            else
              v11();
          }
        }
      }
      else
      {
        v6 = 0;
      }
    }
    v12 = (void (__fastcall ***)(_QWORD))v14;
    if ( v14 )
    {
      v10 = v14[2]-- == 1;
      if ( v10 )
        (**v12)(v12);
    }
  }
  return v6;
}
