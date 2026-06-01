__int64 __fastcall sub_2187B70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int64 *v7; // r13
  __int64 *v8; // r15
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v12; // [rsp+0h] [rbp-98h]
  __int64 v13; // [rsp+28h] [rbp-70h] BYREF
  __int64 v14; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+38h] [rbp-60h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-58h] BYREF
  char v17; // [rsp+50h] [rbp-48h]

  sub_216E690((__int64)v16, (_QWORD *)(a1 + 56), a3, a4, a5, a6);
  v6 = (_QWORD *)v16[0];
  if ( (v17 & 1) == 0 || (v16[0] = 0, !v6) )
  {
LABEL_11:
    sub_20EAA70(v16);
    return (a2 - (__int64)v6) >> 6;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v6 + 48LL))(v6, &unk_2D0AA9B) )
  {
    v7 = (__int64 *)v6[2];
    if ( (__int64 *)v6[1] != v7 )
    {
      v8 = (__int64 *)v6[1];
      v9 = 0;
      do
      {
        while ( 1 )
        {
          v10 = *v8;
          *v8 = 0;
          v12 = v10;
          (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 48LL))(v10, &unk_2D0AA9C);
          v15 = v9;
          v14 = v12;
          sub_AEA4D0(&v13, &v15, &v14);
          v9 = v13;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
          if ( !v14 )
            break;
          ++v8;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          if ( v7 == v8 )
            goto LABEL_10;
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
LABEL_10:
    (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    v6 = (_QWORD *)v16[0];
    goto LABEL_11;
  }
  (*(void (__fastcall **)(_QWORD *, void *))(*v6 + 48LL))(v6, &unk_2D0AA9C);
  return sub_2187CD0();
}
