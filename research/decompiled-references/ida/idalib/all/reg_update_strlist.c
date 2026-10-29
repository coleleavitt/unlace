unsigned __int64 __fastcall reg_update_strlist(
        const char *a1,
        const char *a2,
        __int64 a3,
        char *a4,
        unsigned __int8 a5)
{
  __int64 v9; // r14
  int v10; // r9d
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  _QWORD v14[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !(unsigned __int8)qgetenv("IDA_NO_HISTORY") && (unsigned __int64)(a3 - 1) <= 0x3E7 )
  {
    v14[0] = 0;
    sub_854530((__int64)v14, nullptr, a1, 5);
    v9 = v14[0];
    sub_853260((__int64)v14, a2, a3, a4, a5, v10);
    sub_8509A0(v9);
    v11 = *(_DWORD *)(v9 + 5728);
    *(_QWORD *)(v9 + 5720) = 0;
    if ( v11 )
    {
      v12 = v11 - 1;
      *(_DWORD *)(v9 + 5728) = v12;
      if ( !v12 )
      {
        v13 = *(unsigned int *)(v9 + 5712);
        if ( (_DWORD)v13 != -1 )
        {
          qclose(v13);
          *(_DWORD *)(v9 + 5712) = -1;
        }
        qmutex_unlock(*(_QWORD *)v9);
      }
    }
  }
  return v15 - __readfsqword(0x28u);
}
