__int64 *__fastcall sub_21CCE70(__int64 *a1, _QWORD **a2, __int64 a3)
{
  _QWORD *v3; // r12
  __int64 v4; // rax
  _DWORD **v6; // rbx
  _DWORD **v7; // r13
  __int64 i; // rbp
  _DWORD *v9; // r14
  __int64 v11; // rax
  _DWORD *v12; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v4 = *v3;
    *a2 = nullptr;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(v4 + 48))(v3, &unk_2D0AA9B) )
    {
      v6 = (_DWORD **)v3[1];
      v7 = (_DWORD **)v3[2];
      for ( i = 0; v7 != v6; ++v6 )
      {
        while ( 1 )
        {
          v9 = *v6;
          *v6 = nullptr;
          if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, void *))(*(_QWORD *)v9 + 48LL))(v9, &unk_2CFF1A0) )
          {
            *(_DWORD *)(*(_QWORD *)a3 + 8LL) = v9[2];
            sub_9EE8A0(*(_QWORD *)a3 + 16LL, (__int64)(v9 + 4));
            v11 = *(_QWORD *)v9;
            v12 = nullptr;
            (*(void (__fastcall **)(_DWORD *))(v11 + 8))(v9);
          }
          else
          {
            v12 = v9;
          }
          v13 = i;
          sub_AEA4D0(v14, &v13, (__int64 *)&v12);
          i = v14[0];
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          if ( !v12 )
            break;
          ++v6;
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( v7 == v6 )
            goto LABEL_10;
        }
      }
LABEL_10:
      *a1 = i;
      (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v3 + 48LL))(v3, &unk_2CFF1A0) )
    {
      *(_DWORD *)(*(_QWORD *)a3 + 8LL) = *((_DWORD *)v3 + 2);
      sub_9EE8A0(*(_QWORD *)a3 + 16LL, (__int64)(v3 + 2));
      *a1 = 0;
      (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
    }
    else
    {
      *a1 = (__int64)v3;
    }
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}
