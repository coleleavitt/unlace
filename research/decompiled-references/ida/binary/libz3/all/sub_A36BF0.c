__int64 __fastcall sub_A36BF0(__int64 a1, unsigned int *a2, unsigned int **a3)
{
  unsigned int v3; // ebp
  unsigned int *v5; // r13
  int v6; // r8d
  int v7; // r9d
  char *v8; // rbp
  char *v9; // r15
  void *v10; // r12
  void *v11; // r12
  void *v12; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // eax
  int *v18; // [rsp+0h] [rbp-258h]
  _BYTE *v19; // [rsp+8h] [rbp-250h]
  int v20; // [rsp+10h] [rbp-248h] BYREF
  int v21; // [rsp+18h] [rbp-240h]
  int v22; // [rsp+20h] [rbp-238h] BYREF
  int v23; // [rsp+28h] [rbp-230h]
  char v24[16]; // [rsp+30h] [rbp-228h] BYREF
  char v25[16]; // [rsp+40h] [rbp-218h] BYREF
  char v26[24]; // [rsp+50h] [rbp-208h] BYREF
  char v27[16]; // [rsp+68h] [rbp-1F0h] BYREF
  char v28[40]; // [rsp+78h] [rbp-1E0h] BYREF
  int v29[4]; // [rsp+A0h] [rbp-1B8h] BYREF
  char v30[40]; // [rsp+B0h] [rbp-1A8h] BYREF
  char v31[56]; // [rsp+D8h] [rbp-180h] BYREF
  void *ptr; // [rsp+110h] [rbp-148h] BYREF
  __int64 v33; // [rsp+118h] [rbp-140h]
  _BYTE v34[312]; // [rsp+120h] [rbp-138h] BYREF

  v3 = 0;
  if ( *((_DWORD *)a3 + 2) == 1 )
  {
    v5 = *a3;
    v19 = v34;
    ptr = v34;
    v18 = &v20;
    v33 = 0x1000000000LL;
    sub_9EB220((__int64)&v20, a1, (__int64)a2, (__int64)&ptr);
    sub_B28AA0(v24, a1 + 712, &v20, 0, 0);
    v8 = (char *)ptr + 16 * (unsigned int)v33;
    if ( v8 != ptr )
    {
      v9 = (char *)ptr;
      do
      {
        if ( *(unsigned int **)v9 != v5 )
          sub_9B25C0(
            a1,
            *(_QWORD *)v9,
            *((_DWORD *)v9 + 2),
            (unsigned int)v24,
            v6,
            v7,
            (_DWORD)v18,
            (char)v19,
            v20,
            v21,
            v22,
            v23,
            v24[0]);
        v9 += 16;
      }
      while ( v8 != v9 );
    }
    v3 = 0;
    if ( !(unsigned __int8)sub_B2E770(v24) )
    {
      sub_9B2530((__int64)v29, a1, a2);
      sub_B2F2D0(
        (unsigned int)v29,
        (unsigned int)v24,
        v13,
        v14,
        v15,
        v16,
        (_DWORD)v18,
        (_DWORD)v19,
        v20,
        v21,
        v22,
        v23,
        v24[0]);
      v17 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v5), *(unsigned int *)(a1 + 8));
      v3 = sub_A365E0((_QWORD *)a1, v17, (__int64)v29);
      sub_25A130(v31);
      sub_25A130(v30);
    }
    v10 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v27);
    sub_182CBA0(v10, v28);
    v11 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v25);
    sub_182CBA0(v11, v26);
    v12 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v18);
    sub_182CBA0(v12, &v22);
    if ( ptr && ptr != v19 )
      sub_186B220(ptr);
  }
  return v3;
}

