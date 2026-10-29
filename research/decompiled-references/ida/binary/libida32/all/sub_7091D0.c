__int64 __fastcall sub_7091D0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int8 (__fastcall *v10)(void **, char *); // rdx
  unsigned int v11; // ebx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v3 = a1[1];
  v15 = __readfsqword(0x28u);
  qmutex_lock(v3);
  if ( a2 )
  {
    v5 = a1[4];
    if ( v5 )
    {
      v6 = 0;
      while ( *(_QWORD *)(a1[3] + 8 * v6) != a2 )
      {
        if ( v5 == ++v6 )
          goto LABEL_16;
      }
      goto LABEL_6;
    }
LABEL_16:
    v11 = 0;
    goto LABEL_14;
  }
  v6 = sub_7090D0(a1);
  if ( v6 == -1 )
    goto LABEL_16;
LABEL_6:
  if ( a1[2] != v6 )
  {
    a1[2] = v6;
    *((_BYTE *)a1 + 48) = 1;
    if ( a3 )
    {
      v7 = *a1;
      v8 = *(_QWORD *)(*(_QWORD *)(a1[3] + 8 * v6) + 16LL);
      LODWORD(ptr) = -1;
      sub_79BC40(&ptr, v7, "$ type parser", 0);
      sub_79B440(&ptr, *a1, 0xFFFFFFFFLL, v8, 0, 83);
      v6 = a1[2];
    }
    v9 = a1[3];
    ptr = nullptr;
    v14 = 0;
    v10 = *(unsigned __int8 (__fastcall **)(void **, char *))(*(_QWORD *)(v9 + 8 * v6) + 64LL);
    if ( v10 && v10(&ptr, "VERSION") && (unsigned __int64)v14 > 1 )
      sub_365330();
    sub_365330();
  }
  v11 = 1;
LABEL_14:
  qmutex_unlock(v3);
  return v11;
}

