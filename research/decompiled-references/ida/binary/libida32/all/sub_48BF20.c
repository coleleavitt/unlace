unsigned __int64 __fastcall sub_48BF20(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  bool v6; // zf
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  int v11; // r12d
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  _DWORD *v16; // rax
  unsigned int *v17; // rsi
  _DWORD *ptr; // [rsp+8h] [rbp-90h]
  _DWORD *v19; // [rsp+10h] [rbp-88h]
  _DWORD *v21; // [rsp+20h] [rbp-78h] BYREF
  __int128 v22; // [rsp+28h] [rbp-70h]
  _DWORD *v23; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+50h] [rbp-48h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 8) == 0;
  v26 = __readfsqword(0x28u);
  if ( !v6 || *(_QWORD *)(a3 + 8) )
  {
    v21 = nullptr;
    v22 = 0;
    sub_482460(a1, (__int64)&v21, (unsigned int **)a2, a4, a5);
    v8 = v22;
    v25 = 0;
    ptr = v21;
    if ( a5 == 2 )
    {
      v9 = *(_QWORD *)(a3 + 8);
      if ( v9 )
      {
        v16 = (_DWORD *)qalloc_or_throw(4 * v9, (const char *)&v21);
        v17 = *(unsigned int **)a3;
        v19 = v16;
        v10 = v8;
        memcpy(v16, v17, 4 * v9);
        v25 = v9;
        if ( v9 >= v8 )
          v10 = v9;
        goto LABEL_7;
      }
      v19 = nullptr;
      v10 = v22;
      if ( (_QWORD)v22 )
      {
LABEL_7:
        v11 = 0;
        v12 = 0;
        while ( 1 )
        {
          while ( v12 >= v8 )
          {
            if ( v12 < v9 )
            {
              v13 = v19[v12];
LABEL_10:
              if ( v13 && a5 != 2 )
                sub_48BA20(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 120LL, a5, a4, v13, 0, 0);
            }
LABEL_13:
            v12 = ++v11;
            if ( v11 >= v10 )
              goto LABEL_18;
          }
          v14 = ptr[v12];
          if ( v12 < v9 )
          {
            v13 = v19[v12];
            if ( v14 )
              goto LABEL_17;
            goto LABEL_10;
          }
          v13 = 0;
          if ( !v14 )
            goto LABEL_13;
LABEL_17:
          sub_48BA20(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 120LL, a4, a5, v14, v13, 0);
          v12 = ++v11;
          if ( v11 >= v10 )
            goto LABEL_18;
        }
      }
    }
    else
    {
      v23 = nullptr;
      v24 = 0;
      sub_482460(a1, (__int64)&v23, (unsigned int **)a3, a5, a4);
      v9 = v24;
      v10 = v24;
      v19 = v23;
      if ( v8 >= v24 )
        v10 = v8;
      if ( v10 )
        goto LABEL_7;
LABEL_18:
      if ( v19 )
        qfree(v19);
    }
    if ( ptr )
      qfree(ptr);
  }
  return v26 - __readfsqword(0x28u);
}

