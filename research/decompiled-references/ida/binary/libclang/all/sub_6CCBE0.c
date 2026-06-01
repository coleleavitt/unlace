__int64 __fastcall sub_6CCBE0(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v16[184]; // [rsp+40h] [rbp-B8h] BYREF

  ptr[1] = (void *)0x2000000000LL;
  ptr[0] = v16;
  sub_B03450(ptr, a2, a3);
  v13 = 0;
  if ( !sub_25AC3A0(a1 + 117, ptr, &v13, &off_47D0660) )
  {
    v9 = a1[274];
    a1[284] += 32LL;
    v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[275] >= v10 + 32 && v9 )
      a1[274] = v10 + 32;
    else
      v10 = sub_6A76A0((__int64)(a1 + 274), 32, 3);
    v11 = 0;
    if ( BYTE4(a5) )
    {
      v11 = a5 + 1;
      LOWORD(v11) = (a5 + 1) & 0x7FFF;
    }
    *(_QWORD *)(v10 + 16) = a2;
    *(_QWORD *)(v10 + 24) = a3;
    *(_QWORD *)(v10 + 8) = 0;
    *(_DWORD *)v10 = (v11 << 17) | (8 * a4) & 0x1FFF8 | 3;
    sub_25AC200(a1 + 117, v10 + 8, v13, &off_47D0660);
  }
  sub_B03940(&v14);
  v7 = v14;
  if ( ptr[0] != v16 )
    free(ptr[0]);
  return v7;
}

