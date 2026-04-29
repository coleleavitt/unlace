__int64 __fastcall sub_13D410(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebp
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r12
  _QWORD *v10; // rbx
  __int64 v11; // [rsp+8h] [rbp-C0h]
  _QWORD v12[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 (__fastcall **v13)(); // [rsp+20h] [rbp-A8h] BYREF
  char v14; // [rsp+28h] [rbp-A0h]
  __int64 v15; // [rsp+30h] [rbp-98h]
  __int128 v16; // [rsp+38h] [rbp-90h]
  __int128 v17; // [rsp+48h] [rbp-80h]
  __int64 v18; // [rsp+58h] [rbp-70h]
  int v19; // [rsp+60h] [rbp-68h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  __int128 v21; // [rsp+70h] [rbp-58h]
  int v22; // [rsp+80h] [rbp-48h]
  unsigned __int64 v23; // [rsp+88h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 1496);
  v23 = __readfsqword(0x28u);
  *(_QWORD *)(v3 + 1344) = a1;
  *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 1352LL) = 0;
  sub_1AED00();
  v5 = sub_373100(a1, a2, a3);
  if ( !v5 )
  {
    v14 = 0;
    v16 = 0;
    v13 = off_4DD9D8;
    v15 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v19 = 64;
    v12[0] = 0;
    v12[1] = 0;
    v17 = 0;
    v21 = 0;
    v5 = sub_1D60C0(a1, &v13, v12, a3);
    if ( !v5 )
    {
      v5 = sub_381200(a1, &v13, v12);
      if ( !v5 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1504) + 16LL))(*(_QWORD *)(a1 + 1504), a1);
        v5 = sub_1DF1C0(a1, v11, &v13, v12, a3);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        if ( !v5 )
          v5 = sub_1382E0(a1);
      }
    }
    qfree();
    v7 = v20;
    v13 = off_4DD9D8;
    if ( v20 )
    {
      v8 = v21;
      if ( (_QWORD)v21 )
      {
        v9 = 0;
        do
        {
          v10 = (_QWORD *)(v7 + (v9 << 6));
          if ( v10[5] )
          {
            v10[6] = 0;
            qfree();
          }
          if ( v10[2] )
          {
            v10[3] = 0;
            qfree();
          }
          ++v9;
          v7 = v20;
        }
        while ( v8 != v9 );
      }
      *(_QWORD *)&v21 = 0;
      qfree();
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
  }
  return v5;
}
