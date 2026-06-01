__int64 __fastcall sub_CDCF50(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 v5; // rbp
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rdx
  _QWORD *v10; // rdi
  _QWORD **v11; // rdi
  __int64 v12; // rax

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v2 = *a2;
    v3 = (*(_DWORD *)(a1 + 816))-- == 1;
    *(_QWORD *)(a1 + 1240) = v2;
    if ( v3 )
    {
      v5 = *(_QWORD *)(a1 + 808);
      v6 = *(_QWORD **)(a1 + 408);
      v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 96LL);
      if ( v7 == sub_CCC500 )
      {
        v8 = (_QWORD *)v6[3];
        v9 = *(__int64 (**)(void))(*v8 + 96LL);
        if ( (char *)v9 != (char *)v7 )
          goto LABEL_10;
        v10 = (_QWORD *)v8[3];
        v7 = *(__int64 (__fastcall **)(__int64))(*v10 + 96LL);
        if ( (char *)v7 == (char *)v9 )
        {
          v11 = (_QWORD **)v10[3];
          v9 = (__int64 (*)(void))(*v11)[12];
          if ( (char *)v9 == (char *)v7 )
          {
            v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11[3] + 96LL))(v11[3]);
LABEL_8:
            *(_QWORD *)(v12 + 8) = v5;
            *(_QWORD *)(a1 + 808) = 0;
            return 1;
          }
LABEL_10:
          v12 = v9();
          goto LABEL_8;
        }
      }
      v12 = ((__int64 (*)(void))v7)();
      goto LABEL_8;
    }
  }
  return 1;
}

