__int64 __fastcall sub_211BF80(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  int v6; // eax
  _QWORD *v7; // r14
  __int64 (*v8)(); // rdx
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r12
  void (*v15)(); // rax
  __int64 v16; // rsi
  _QWORD v17[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v18; // [rsp+20h] [rbp-38h]

  v3 = a1[1];
  v4 = *(_QWORD *)(v3 + 152);
  if ( *(_DWORD *)(v4 + 312) == 4 && (v6 = *(_DWORD *)(v4 + 320)) != 0 && v6 != 6 )
  {
    v7 = (_QWORD *)a1[13];
    if ( !v7 || v7[1] )
    {
      v18 = 259;
      v17[0] = ".seh_ directive must appear within an active frame";
      return sub_2100A30(v3, a2, (__int64)v17);
    }
    else
    {
      if ( v7[12] )
      {
        v17[0] = "Not all chained regions terminated!";
        v18 = 259;
        sub_2100A30(v3, a2, (__int64)v17);
      }
      v8 = *(__int64 (**)())(*a1 + 88LL);
      v9 = 1;
      if ( v8 != sub_2119CA0 )
        v9 = ((__int64 (__fastcall *)(_QWORD *))v8)(a1);
      v10 = v7[2] == 0;
      v7[1] = v9;
      if ( v10 )
        v7[2] = v9;
      v11 = a1[10];
      v12 = a1[14];
      v13 = *a1;
      v14 = (a1[11] - v11) >> 3;
      if ( v12 != v14 )
      {
        while ( 1 )
        {
          v15 = *(void (**)())(v13 + 24);
          if ( v15 == nullsub_1427 )
          {
            if ( ++v12 == v14 )
              return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v13 + 176))(a1, v7[8], 0);
          }
          else
          {
            v16 = *(_QWORD *)(v11 + 8 * v12++);
            ((void (__fastcall *)(_QWORD *, __int64))v15)(a1, v16);
            v13 = *a1;
            if ( v12 == v14 )
              return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v13 + 176))(a1, v7[8], 0);
          }
          v11 = a1[10];
        }
      }
      return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v13 + 176))(a1, v7[8], 0);
    }
  }
  else
  {
    v17[0] = ".seh_* directives are not supported on this target";
    v18 = 259;
    return sub_2100A30(v3, a2, (__int64)v17);
  }
}
