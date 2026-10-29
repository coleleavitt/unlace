__int64 __fastcall sub_8A1C30(__int64 a1, _BYTE *a2)
{
  __int64 v3; // r13
  char v5; // si
  unsigned __int8 v6; // r14
  __int64 v7; // r15
  unsigned int *(__fastcall *v8)(__int64, unsigned __int8, __int64); // rax
  __int64 v9; // rax
  unsigned int *v10; // rbp
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  void *v15; // rdi
  _QWORD *v17; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 296);
  v20 = __readfsqword(0x28u);
  qmutex_lock(v3);
  v5 = a2[8];
  *(_BYTE *)(a1 + 312) = v5;
  sub_79FD90((__int64 *)&ptr, v5);
  (*(void (__fastcall **)(_BYTE *, void **, __int64))(*(_QWORD *)a2 + 16LL))(a2, &ptr, 8);
  v6 = a2[8];
  v7 = 1705691;
  v8 = *(unsigned int *(__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v8 == sub_8A1B60 )
  {
    do
    {
      while ( 1 )
      {
        v9 = sub_79E220(a1, v6, (__int64)&ptr);
        v10 = (unsigned int *)v9;
        if ( !v9 )
          break;
        if ( !*(_BYTE *)(a1 + 69) )
          goto LABEL_8;
        v11 = *(unsigned __int8 *)(v9 + 4);
        if ( (_BYTE)v11 != 12 )
        {
          v12 = (unsigned int)(v11 - 91);
          if ( (unsigned __int8)v12 > 0x14u || !_bittest64(&v7, v12) )
            goto LABEL_8;
        }
        v13 = sub_79E760(a1, v10);
        if ( !v13 )
          goto LABEL_8;
        v17 = (_QWORD *)v13;
        qfree(v10);
        sub_8A0120((__int64 *)a1, v17);
        v19 = 0;
      }
    }
    while ( v19 && *(_QWORD *)(a1 + 256) && (unsigned __int8)sub_8A1470(a1) );
    v14 = 0;
  }
  else
  {
    v10 = v8(a1, a2[8], (__int64)&ptr);
    if ( v10 )
    {
LABEL_8:
      v14 = sub_79E760(a1, v10);
      qfree(v10);
    }
    else
    {
      v14 = 0;
    }
  }
  v15 = ptr;
  *(_BYTE *)(a1 + 312) = 10;
  if ( v15 )
  {
    v19 = 0;
    qfree(v15);
  }
  qmutex_unlock(v3);
  return v14;
}

