__int64 *__fastcall sub_21CF1D0(__int64 *a1, _QWORD **a2)
{
  _QWORD *v2; // r12
  __int64 v3; // rax
  _DWORD **v4; // rbx
  _DWORD **v5; // r13
  __int64 i; // rbp
  _DWORD *v7; // r14
  _DWORD *v9; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11[8]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *a2;
  if ( *a2 )
  {
    v3 = *v2;
    *a2 = nullptr;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(v3 + 48))(v2, &unk_2D0AA9B) )
    {
      v4 = (_DWORD **)v2[1];
      v5 = (_DWORD **)v2[2];
      for ( i = 0; v5 != v4; ++v4 )
      {
        while ( 1 )
        {
          v7 = *v4;
          *v4 = nullptr;
          if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, void *))(*(_QWORD *)v7 + 48LL))(v7, &unk_2CFF1A0)
            && v7[2] == 13 )
          {
            v9 = nullptr;
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
          }
          else
          {
            v9 = v7;
          }
          v10 = i;
          sub_AEA4D0(v11, &v10, (__int64 *)&v9);
          i = v11[0];
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
          if ( !v9 )
            break;
          ++v4;
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
          if ( v5 == v4 )
            goto LABEL_11;
        }
      }
LABEL_11:
      *a1 = i;
      (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v2 + 48LL))(v2, &unk_2CFF1A0)
           && *((_DWORD *)v2 + 2) == 13 )
    {
      *a1 = 0;
      (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
    }
    else
    {
      *a1 = (__int64)v2;
    }
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}
