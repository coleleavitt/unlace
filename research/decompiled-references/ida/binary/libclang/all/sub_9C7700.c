__int64 __fastcall sub_9C7700(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // eax
  unsigned __int64 v8; // r15
  __int64 v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rbp
  __int64 v17; // r13
  unsigned __int64 v18; // r14
  unsigned __int8 **v19; // rax
  unsigned __int8 **v20; // rbx
  int v22; // r8d
  int v23; // edx
  int v24; // r9d
  _BYTE v25[120]; // [rsp+10h] [rbp-78h] BYREF

  v7 = *(_DWORD *)(a3 + 48);
  if ( v7 == 1 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(a3 + 24) + 16LL);
    v14 = *(_DWORD *)a3 + *(_QWORD *)(a3 + 32);
  }
  else
  {
    if ( (unsigned int)(v7 - 2) <= 1 )
      BUG();
    v8 = *(_QWORD *)a3;
    v9 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 32LL);
    v10 = *(_DWORD *)(v9 + 16);
    if ( v7 || (v11 = sub_8E5480(a3), v12 = *(_DWORD *)(v11 + 12), v13 = v11, v12 == -1) )
    {
      v14 = v8;
    }
    else
    {
      v14 = -1;
      if ( v8 != 0xFFFFFFFF && *(unsigned int *)(v9 + 20) >= v8 )
      {
        v22 = *(_DWORD *)(a3 + 32);
        v14 = v8;
        v23 = v8;
        if ( v22 != -1 )
        {
          v24 = 0;
          if ( v8 != v22 )
          {
            v24 = 32;
            if ( *(_QWORD *)(v13 + 32) )
              v24 = 16;
          }
          v23 = v8 - v22 - v24;
        }
        if ( v12 && v12 == v23 )
          v14 = -1;
      }
    }
  }
  if ( a4 >= v14 || (v15 = 1, v14 - a4 < v10) )
  {
    v16 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v17 = sub_B167E0(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2);
    sub_A1BF70(v25, *(_QWORD *)(a3 + 24));
    v18 = sub_8E8FB0((__int64)v25);
    sub_A1C0C0(v25);
    v19 = (unsigned __int8 **)sub_A2E240(a1, v16, 2216, 0);
    v20 = v19;
    if ( v19 )
    {
      sub_9B5660(v19, v18);
      sub_9B5660(v20, v17);
    }
    return 0;
  }
  return v15;
}

