__int64 __fastcall sub_7922F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-C0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v15[21]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = a1 + 40;
  v15[0] = a2;
  ptr[0] = v15;
  ptr[1] = (void *)0x2000000002LL;
  v13 = 0;
  v5 = sub_25AC3A0(a1 + 40, ptr, &v13, off_47DA830);
  if ( v5 )
  {
    v6 = v5 | 5;
  }
  else
  {
    v8 = *(_QWORD **)a1;
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 2192LL);
    v8[284] += 24LL;
    v10 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v8[275] >= v10 + 24 && v9 )
    {
      v8[274] = v10 + 24;
      v11 = (_QWORD *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v11 = (_QWORD *)sub_790230((__int64)(v8 + 274), 24, 3);
      v10 = (unsigned __int64)v11;
    }
    *v11 = 0;
    v12 = v13;
    v6 = v10 | 5;
    v11[1] = a2;
    v11[2] = 0;
    sub_25AC200(v2, v11, v12, off_47DA830);
  }
  if ( ptr[0] != v15 )
    free(ptr[0]);
  return v6;
}

