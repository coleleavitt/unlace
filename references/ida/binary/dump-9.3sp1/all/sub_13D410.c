__int64 __fastcall sub_13D410(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebp
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r12
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // [rsp+8h] [rbp-C0h]
  __int64 v14[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+20h] [rbp-A8h] BYREF
  char v16; // [rsp+28h] [rbp-A0h]
  __int64 v17; // [rsp+30h] [rbp-98h]
  __int128 v18; // [rsp+38h] [rbp-90h]
  __int128 v19; // [rsp+48h] [rbp-80h]
  __int64 v20; // [rsp+58h] [rbp-70h]
  int v21; // [rsp+60h] [rbp-68h]
  __int64 v22; // [rsp+68h] [rbp-60h]
  __int128 v23; // [rsp+70h] [rbp-58h]
  int v24; // [rsp+80h] [rbp-48h]
  unsigned __int64 v25; // [rsp+88h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 1496);
  v25 = __readfsqword(0x28u);
  *(_QWORD *)(v3 + 1344) = a1;
  *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 1352LL) = 0;
  sub_1AED00();
  v5 = sub_373100(a1, a2, a3);
  if ( !v5 )
  {
    v16 = 0;
    v18 = 0;
    v15 = off_4DD9D8;
    v17 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v21 = 64;
    v14[0] = 0;
    v14[1] = 0;
    v19 = 0;
    v23 = 0;
    v5 = sub_1D60C0(a1, &v15, v14, a3);
    if ( !v5 )
    {
      v5 = sub_381200(a1, &v15, v14);
      if ( !v5 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1504) + 16LL))(*(_QWORD *)(a1 + 1504), a1);
        v5 = sub_1DF1C0(a1, v13, &v15, v14, a3);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        if ( !v5 )
          v5 = sub_1382E0(a1);
      }
    }
    qfree(v14[0]);
    v7 = v22;
    v15 = off_4DD9D8;
    if ( v22 )
    {
      v8 = v23;
      if ( (_QWORD)v23 )
      {
        v9 = 0;
        do
        {
          v10 = (_QWORD *)(v7 + (v9 << 6));
          v11 = v10[5];
          if ( v11 )
          {
            v10[6] = 0;
            qfree(v11);
          }
          v12 = v10[2];
          if ( v12 )
          {
            v10[3] = 0;
            qfree(v12);
          }
          ++v9;
          v7 = v22;
        }
        while ( v8 != v9 );
      }
      *(_QWORD *)&v23 = 0;
      qfree(v7);
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
  }
  return v5;
}
