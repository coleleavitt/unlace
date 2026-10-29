void __fastcall sub_1EBF0A0(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rbp
  __int64 *v3; // rbx
  __int64 *v4; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+28h] [rbp-60h] BYREF
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h] BYREF
  __int64 v12; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13[8]; // [rsp+48h] [rbp-40h] BYREF

  v2 = *a2;
  *a2 = nullptr;
  v9 = a1;
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v2 + 48LL))(v2, &unk_2D0AA9B) )
    {
      v3 = (__int64 *)v2[1];
      v4 = (__int64 *)v2[2];
      v5 = 0;
      if ( v3 == v4 )
      {
LABEL_10:
        v7 = *v2;
        v12 = v5;
        (*(void (__fastcall **)(_QWORD *))(v7 + 8))(v2);
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v6 = *v3;
            *v3 = 0;
            v12 = v6;
            sub_1EAD7B0(&v11, &v12, &v9);
            v13[0] = v5;
            sub_AEA4D0(&v10, v13, &v11);
            v5 = v10;
            if ( v13[0] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 8LL))(v13[0]);
            if ( v11 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
            if ( !v12 )
              break;
            ++v3;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
            if ( v4 == v3 )
              goto LABEL_10;
          }
          ++v3;
        }
        while ( v4 != v3 );
        v8 = *v2;
        v12 = v5;
        (*(void (__fastcall **)(_QWORD *))(v8 + 8))(v2);
      }
    }
    else
    {
      v13[0] = (__int64)v2;
      sub_1EAD7B0(&v12, v13, &v9);
      if ( v13[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13[0] + 8LL))(v13[0]);
    }
  }
}
