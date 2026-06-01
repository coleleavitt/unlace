unsigned __int64 __fastcall sub_41D4A0(__int64 a1, int a2, int a3, int a4, int *a5)
{
  unsigned int v6; // eax
  unsigned __int64 ***v8; // rdx
  unsigned __int64 **v9; // r14
  __int64 v10; // r13
  _QWORD *v11; // r12
  __int64 v12; // rbp
  unsigned __int64 *v13; // r15
  char v14; // al
  void *v15; // rdi
  unsigned __int16 *v16; // r14
  char *v17; // rdx
  char *v18; // rbx
  __int64 v19; // rsi
  char *v20; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( !a2 )
  {
    v6 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v8 = *((unsigned __int64 ****)a5 + 1);
      *((_QWORD *)a5 + 1) = v8 + 1;
    }
    else
    {
      v8 = (unsigned __int64 ***)(*((_QWORD *)a5 + 2) + v6);
      *a5 = v6 + 8;
    }
    v9 = *v8;
    v10 = *(_QWORD *)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a4 + 16)) + 1672);
    v11 = *(_QWORD **)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a3 + 16)) + 1672);
    v12 = (__int64)&(*v9)[2 * (_QWORD)v9[1]];
    if ( *v9 != (unsigned __int64 *)v12 )
    {
      v13 = *v9;
      while ( 1 )
      {
        ptr = nullptr;
        v22 = 0;
        v14 = sub_41D1C0(v10, (__int64 *)&ptr, *v13, v13[1] - *v13);
        v15 = ptr;
        if ( v14 )
        {
          v16 = (unsigned __int16 *)ptr;
          v17 = (char *)ptr + 48 * v22;
          v18 = v17 - 48;
          if ( *(_QWORD *)ptr < *v13 )
            v16 = (unsigned __int16 *)((char *)ptr + 48);
          if ( v18 >= (char *)v16 )
            break;
        }
        if ( ptr )
          goto LABEL_8;
LABEL_9:
        v13 += 2;
        if ( (unsigned __int64 *)v12 == v13 )
          return v23 - __readfsqword(0x28u);
      }
      v20 = (char *)ptr + 48 * v22;
      v19 = *((_QWORD *)v17 - 6);
      if ( v13[1] >= v19 + (int)calc_fixup_size(*((_WORD *)v17 - 20)) || (v18 = v20 - 96, v20 - 96 >= (char *)v16) )
      {
        do
        {
          sub_41CDC0(v11, *(_QWORD *)v16, v16 + 4);
          v16 += 24;
        }
        while ( v18 >= (char *)v16 );
      }
      v15 = ptr;
      if ( !ptr )
        goto LABEL_9;
LABEL_8:
      *(_QWORD *)&v22 = 0;
      qfree(v15);
      goto LABEL_9;
    }
  }
  return v23 - __readfsqword(0x28u);
}
