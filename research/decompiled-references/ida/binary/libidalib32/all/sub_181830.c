unsigned __int64 __fastcall sub_181830(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  int v4; // eax
  __int64 v5; // r13
  int v6; // eax
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-158h]
  __int64 v10; // [rsp+18h] [rbp-140h]
  __int64 *v11; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+88h] [rbp-D0h]
  __int128 v13; // [rsp+90h] [rbp-C8h]
  __int64 v14; // [rsp+A0h] [rbp-B8h]
  __int128 v15; // [rsp+A8h] [rbp-B0h]
  __int128 v16; // [rsp+B8h] [rbp-A0h]
  __int128 v17; // [rsp+C8h] [rbp-90h]
  __int128 v18; // [rsp+D8h] [rbp-80h]
  int v19; // [rsp+E8h] [rbp-70h]
  __int64 v20; // [rsp+F0h] [rbp-68h]
  __int64 v21; // [rsp+F8h] [rbp-60h]
  int v22; // [rsp+100h] [rbp-58h]
  unsigned __int64 v23; // [rsp+108h] [rbp-50h]
  unsigned __int64 v24; // [rsp+118h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v2 = sub_17F6B0(a1 + 151, a2);
  if ( v2 == -1 || !(a1[154] + (v2 << 7)) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 224))(a1);
    v9 = 0;
    v5 = v4;
    v10 = 0;
    if ( v4 )
    {
      v9 = qvector_reserve();
      if ( v5 )
        v10 = qvector_reserve();
    }
    if ( (a1[220] & 2) == 0 && !*(_BYTE *)(qword_2553C0 + 80) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 224))(a1);
      v7 = v6;
      v11 = a1 + 151;
      v13 = 0;
      v15 = 0;
      v12 = 0;
      v14 = 0;
      v19 = -1;
      v20 = 12;
      v21 = -1;
      v22 = -1;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      if ( v6 )
      {
        v12 = qvector_reserve();
        if ( *((_QWORD *)&v15 + 1) < v7 )
          v14 = qvector_reserve();
      }
      v8 = *a1;
      v23 = v7;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 **, unsigned __int64))(v8 + 88))(a1, &v11, a2) )
        sub_181440((__int64)(a1 + 151), a2, (__int64)&v11);
      if ( (_QWORD)v16 )
      {
        *((_QWORD *)&v16 + 1) = 0;
        qfree();
      }
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree();
      }
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree();
      }
    }
    if ( v10 )
      qfree();
    if ( v9 )
      qfree();
  }
  return v24 - __readfsqword(0x28u);
}

