unsigned __int64 __fastcall sub_4DFB70(_QWORD *a1, const char *a2)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  _QWORD *v4; // r12
  __int64 v5; // rbx
  _QWORD *v7; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-C0h] BYREF
  __int128 v9; // [rsp+10h] [rbp-B8h]
  __int64 v10; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+28h] [rbp-A0h]
  __int128 v12; // [rsp+38h] [rbp-90h]
  __int128 v13; // [rsp+48h] [rbp-80h]
  __int128 v14; // [rsp+58h] [rbp-70h]
  int v15; // [rsp+68h] [rbp-60h]
  __int64 v16; // [rsp+70h] [rbp-58h]
  __int64 v17; // [rsp+78h] [rbp-50h]
  __int64 v18; // [rsp+80h] [rbp-48h]
  unsigned __int64 i; // [rsp+88h] [rbp-40h]
  unsigned __int64 v20; // [rsp+98h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( a1[192] == a1[145] )
  {
    v2 = (*(__int64 (**)(void))(*a1 + 288LL))();
    v8 = 0;
    v3 = v2;
    v9 = 0;
    v11 = 0;
    v7 = a1 + 141;
    v10 = 0;
    v15 = -1;
    v16 = 12;
    v17 = -1;
    v18 = -1;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    if ( v2 )
    {
      a2 = nullptr;
      v8 = qvector_reserve(&v8, 0, v2, 24);
      if ( *((_QWORD *)&v11 + 1) < v3 )
      {
        a2 = (const char *)v10;
        v10 = qvector_reserve(&v10, v10, v3, 16);
      }
    }
    v4 = (_QWORD *)a1[191];
    for ( i = v3; v4; v4 = (_QWORD *)*v4 )
    {
      v5 = v4[2];
      (*(void (__fastcall **)(_QWORD *, _QWORD **, _QWORD))(*a1 + 112LL))(a1, &v7, v4[1]);
      v5 <<= 7;
      sub_4D8660(v5 + a1[144], (const char *)&v7);
      a2 = (const char *)(v5 + a1[144]);
      sub_4D86D0((__int64)&v7, (__int64)a2);
    }
    if ( (_QWORD)v12 )
    {
      *((_QWORD *)&v12 + 1) = 0;
      qfree(v12, a2);
    }
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v10, a2);
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8, a2);
    }
  }
  return v20 - __readfsqword(0x28u);
}
