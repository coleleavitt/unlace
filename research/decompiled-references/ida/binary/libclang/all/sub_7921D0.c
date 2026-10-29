__int64 __fastcall sub_7921D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rbp
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-C0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v16[21]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = a1 + 24;
  v4 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = 0;
  v5 = v4 & 0xFFFFFFFFFFFFFFF0LL;
  ptr[0] = v16;
  v16[0] = v5;
  ptr[1] = (void *)0x2000000002LL;
  v6 = sub_25AC3A0(a1 + 24, ptr, &v14, off_47DA830);
  if ( v6 )
  {
    v7 = v6 | 4;
  }
  else
  {
    v9 = *(_QWORD **)a1;
    v10 = *(_QWORD *)(*(_QWORD *)a1 + 2192LL);
    v9[284] += 24LL;
    v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v9[275] >= v11 + 24 && v10 )
    {
      v9[274] = v11 + 24;
      v12 = (_QWORD *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v12 = (_QWORD *)sub_790230((__int64)(v9 + 274), 24, 3);
      v11 = (unsigned __int64)v12;
    }
    *v12 = 0;
    v13 = v14;
    v7 = v11 | 4;
    v12[1] = v5;
    v12[2] = 0;
    sub_25AC200(v2, v12, v13, off_47DA830);
  }
  if ( ptr[0] != v16 )
    free(ptr[0]);
  return v7;
}

