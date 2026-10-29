__int64 *__fastcall sub_10FA4A0(__int64 *a1, _QWORD **a2, __int64 **a3)
{
  _QWORD *v3; // r12
  __int64 v4; // rax
  __int64 *v6; // rbx
  __int64 *v7; // r13
  __int64 i; // rbp
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v12; // rdi
  __int64 v14; // [rsp+28h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v4 = *v3;
    *a2 = nullptr;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(v4 + 48))(v3, &unk_2CE0B7B) )
    {
      v6 = (__int64 *)v3[1];
      v7 = (__int64 *)v3[2];
      for ( i = 0; v7 != v6; ++v6 )
      {
        while ( 1 )
        {
          v9 = *v6;
          *v6 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 48LL))(v9, &unk_2CE0B7C) )
          {
            v10 = **a3;
            **a3 = v9;
            if ( v10 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
            v14 = 0;
          }
          else
          {
            v14 = v9;
          }
          v15 = i;
          sub_AC6790(v16, &v15, &v14);
          i = v16[0];
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          if ( !v14 )
            break;
          ++v6;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          if ( v7 == v6 )
            goto LABEL_12;
        }
      }
LABEL_12:
      *a1 = i;
      (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v3 + 48LL))(v3, &unk_2CE0B7C) )
    {
      v12 = **a3;
      **a3 = (__int64)v3;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = 0;
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

