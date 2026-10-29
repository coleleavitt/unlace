__int64 __fastcall sub_792430(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+8h] [rbp-C0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v14[21]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a1 + 792;
  v14[0] = a2;
  ptr[0] = v14;
  ptr[1] = (void *)0x2000000002LL;
  v12 = 0;
  v4 = sub_25AC3A0(a1 + 792, ptr, &v12, &off_47DA810);
  v5 = (v4 - 8) | 7;
  if ( !v4 )
  {
    v7 = *(_QWORD **)a1;
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 2192LL);
    v7[284] += 32LL;
    v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7[275] >= v9 + 32 && v8 )
    {
      v7[274] = v9 + 32;
      v10 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v10 = sub_790230((__int64)(v7 + 274), 32, 3);
      v9 = v10;
    }
    *(_QWORD *)(v10 + 16) = a2;
    v5 = v9 | 7;
    *(_DWORD *)v10 = 1;
    *(_QWORD *)(v10 + 8) = 0;
    v11 = v12;
    *(_QWORD *)(v10 + 24) = 0;
    sub_25AC200(v3, v10 + 8, v11, &off_47DA810);
  }
  if ( ptr[0] != v14 )
    free(ptr[0]);
  return v5;
}

