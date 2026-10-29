__int64 __fastcall sub_443EC0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rax
  char has_common; // r14
  char v6; // al
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  unsigned __int64 v12; // rbx
  int v13; // ebp
  __int64 v14; // [rsp+18h] [rbp-90h] BYREF
  __int64 v15; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-80h] BYREF
  __int64 v17; // [rsp+30h] [rbp-78h] BYREF
  __int64 v18; // [rsp+38h] [rbp-70h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v20; // [rsp+48h] [rbp-60h]
  __int64 v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+60h] [rbp-48h]
  unsigned __int64 v23; // [rsp+68h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v1 = switch_dbctx(*(int *)(a1 + 364));
  v2 = switch_dbctx(*(int *)(a1 + 360));
  ptr = nullptr;
  v3 = v2;
  v20 = 0;
  v21 = 0;
  v22 = -1;
  rangeset_t_add2((int)&ptr);
  rangeset_t_add2((int)&ptr);
  v4 = *(_QWORD **)(v1 + 1480);
  v17 = 0;
  sub_6141A0(*v4, 26, &v17, 8);
  v18 = 0;
  v14 = v17;
  sub_6141A0(**(_QWORD **)(v3 + 1480), 26, &v18, 8);
  v15 = v18;
  has_common = rangeset_t_has_common(&ptr, &v14, 0);
  v6 = rangeset_t_has_common(&ptr, &v15, 0);
  if ( has_common || v6 || *(_BYTE *)(a1 + 308) )
  {
    v8 = HIDWORD(v14) - v14;
    v9 = HIDWORD(v15) - v15;
    if ( (_DWORD)v15 != (_DWORD)v14 )
    {
      if ( v8 >= v9 && has_common != 1 )
        sub_443D70();
      if ( v9 >= v8 && v6 != 1 )
        sub_443D70();
    }
    if ( v9 < v8 )
      v9 = HIDWORD(v14) - v14;
    while ( 1 )
    {
      v10 = sub_41A560((__int64)&ptr, v9);
      v11 = v10;
      if ( v10 == -1 )
        break;
      if ( (unsigned __int8)sub_440900(v3, (__int64)&ptr, v10, v9)
        && (unsigned __int8)sub_440900(v1, (__int64)&ptr, v11, v9) )
      {
        LODWORD(v12) = v11 + v9;
        goto LABEL_21;
      }
    }
    v16 = sub_41A680();
    v11 = v16;
    v12 = HIDWORD(v16);
    v13 = sub_4405E0(v3, (unsigned int *)&v15);
    if ( (unsigned int)v12 - v11 < v13 + (unsigned int)sub_4405E0(v1, (unsigned int *)&v14) )
      sub_375320(
        (__int64)"Failed to find enough room in the address space\n"
                 "for housekeeping purposes. Please delete or shrink\n"
                 "some segments.\n"
                 "At least 0x%a continuous free addresses are necessary.",
        0.0);
LABEL_21:
    switch_dbctx(*(int *)(v3 + 88));
    v16 = __PAIR64__(v12, v11);
    sub_443DF0(v3, &v16);
  }
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree(ptr);
  }
  return 1;
}

