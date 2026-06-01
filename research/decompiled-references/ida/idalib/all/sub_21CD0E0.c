__int64 *__fastcall sub_21CD0E0(__int64 *a1, _QWORD **a2, __int64 a3)
{
  _QWORD *v3; // r12
  __int64 v4; // rax
  _DWORD **v6; // rbx
  _DWORD **v7; // r13
  __int64 i; // rbp
  _DWORD *v9; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  _DWORD *v15; // [rsp+28h] [rbp-50h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17[8]; // [rsp+38h] [rbp-40h] BYREF

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
            v11 = *(_QWORD *)(a3 + 8);
            **(_DWORD **)a3 = v9[2];
            sub_9EE8A0(v11, (__int64)(v9 + 4));
            v12 = *(_QWORD *)v9;
            v15 = nullptr;
            (*(void (__fastcall **)(_DWORD *))(v12 + 8))(v9);
          }
          else
          {
            v15 = v9;
          }
          v16 = i;
          sub_AEA4D0(v17, &v16, (__int64 *)&v15);
          i = v17[0];
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
          if ( !v15 )
            break;
          ++v6;
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15);
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
      v13 = *(_QWORD *)(a3 + 8);
      **(_DWORD **)a3 = *((_DWORD *)v3 + 2);
      sub_9EE8A0(v13, (__int64)(v3 + 2));
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
