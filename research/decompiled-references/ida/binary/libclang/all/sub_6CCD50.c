__int64 __fastcall sub_6CCD50(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // r10
  __int64 v12; // rax
  unsigned int v13; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v14; // [rsp+0h] [rbp-E8h]
  __int64 v16; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+30h] [rbp-B8h] BYREF

  v13 = a5;
  ptr[1] = (void *)0x2000000000LL;
  ptr[0] = v19;
  sub_B037D0(ptr, a1, a2, a3, a4);
  v16 = 0;
  v6 = sub_25AC3A0(a1 + 119, ptr, &v16, &off_47D0640);
  v7 = v13;
  if ( !v6 )
  {
    v10 = a1[274];
    a1[284] += 32LL;
    v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1[275] >= v11 + 32 && v10 )
    {
      a1[274] = v11 + 32;
    }
    else
    {
      v12 = sub_6A76A0((__int64)(a1 + 274), 32, 3);
      v7 = v13;
      v11 = v12;
    }
    v14 = v11;
    sub_B03610(v11, *(_QWORD *)(a2 + 8), *(unsigned int *)(a2 + 4), a3, a4, v7);
    sub_25AC200(a1 + 119, v14 + 8, v16, &off_47D0640);
  }
  sub_B03940(&v17);
  v8 = v17;
  if ( ptr[0] != v19 )
    free(ptr[0]);
  return v8;
}

