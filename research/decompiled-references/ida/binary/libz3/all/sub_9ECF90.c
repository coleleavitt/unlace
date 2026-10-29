__int64 __fastcall sub_9ECF90(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rbx
  unsigned int **v4; // rbx
  __int64 v5; // rdx
  unsigned int **v6; // r15
  __int64 v7; // r14
  unsigned int v8; // ebp
  unsigned int v9; // eax
  int v11; // [rsp+4h] [rbp-174h]
  _BYTE v12[16]; // [rsp+10h] [rbp-168h] BYREF
  _BYTE v13[16]; // [rsp+20h] [rbp-158h] BYREF
  void *ptr; // [rsp+30h] [rbp-148h] BYREF
  __int64 v15; // [rsp+38h] [rbp-140h]
  _BYTE v16[312]; // [rsp+40h] [rbp-138h] BYREF

  ptr = v16;
  v15 = 0x1000000000LL;
  sub_9ECB60((__int64)v12, a2, a3, (__int64)&ptr);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v3, v13);
  v4 = (unsigned int **)ptr;
  v5 = 16LL * (unsigned int)v15;
  v6 = (unsigned int **)((char *)ptr + v5);
  if ( (char *)ptr + v5 == ptr )
  {
    v11 = 0;
    v7 = 0;
    v8 = 0;
  }
  else
  {
    v11 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      if ( ((_BYTE)v4[1] & 1) != 0 )
      {
        v9 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8656LL) + 8LL * **v4), *(unsigned int *)(a2 + 8));
        if ( !*(_QWORD *)(*(_QWORD *)(a2 + 744) + 8LL * v9) && !*(_QWORD *)(*(_QWORD *)(a2 + 752) + 8LL * v9) )
        {
          ++v8;
          v7 = (__int64)*v4;
          v11 = *((_DWORD *)v4 + 2);
          if ( v8 > 1 )
            break;
        }
      }
      v4 += 2;
    }
    while ( v6 != v4 );
    v4 = (unsigned int **)ptr;
  }
  *(_DWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 16) = v11;
  if ( v4 != (unsigned int **)v16 && v4 )
    sub_186B220(v4);
  return a1;
}

