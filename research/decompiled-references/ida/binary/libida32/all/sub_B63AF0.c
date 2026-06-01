__int64 __fastcall sub_B63AF0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v16[23]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a1 + 792;
  v16[0] = a2;
  v14 = 0;
  ptr[0] = v16;
  ptr[1] = (void *)0x2000000002LL;
  v4 = sub_21FF620(a1 + 792, ptr, &v14, &off_2B21360);
  if ( !v4 || (v7 = v4 - 8, v4 == 8) )
  {
    v10 = *(_QWORD **)a1;
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 2352LL);
    v10[304] += 32LL;
    v7 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v10[295] >= v7 + 32 && v11 )
    {
      v10[294] = v7 + 32;
      v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v12 = sub_962430((__int64)(v10 + 294), 32, 32, 3, v5, v6);
      v7 = v12;
    }
    *(_DWORD *)v12 = 1;
    *(_QWORD *)(v12 + 8) = 0;
    v13 = v14;
    *(_QWORD *)(v12 + 16) = a2;
    *(_QWORD *)(v12 + 24) = 0;
    sub_21FF4D0(v3, v12 + 8, v13, &off_2B21360);
  }
  v8 = v7 | 7;
  if ( ptr[0] != v16 )
    free(ptr[0]);
  return v8;
}

