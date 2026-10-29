unsigned __int64 __fastcall sub_40A080(__int64 a1, int a2, int a3, int a4, int *a5)
{
  unsigned int v6; // eax
  unsigned int ***v8; // rdx
  unsigned int **v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned int *v12; // r8
  _QWORD *v13; // rbp
  __int64 v14; // r12
  unsigned int *v15; // r15
  char v16; // al
  __int64 v17; // rcx
  void *v18; // rdi
  unsigned __int16 *v19; // r14
  char *v20; // rdx
  char *v21; // rbx
  int v22; // [rsp+14h] [rbp-64h]
  char *v23; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( !a2 )
  {
    v6 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v8 = *((unsigned int ****)a5 + 1);
      *((_QWORD *)a5 + 1) = v8 + 1;
    }
    else
    {
      v8 = (unsigned int ***)(*((_QWORD *)a5 + 2) + v6);
      *a5 = v6 + 8;
    }
    v9 = *v8;
    v10 = *(_QWORD *)(switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a4 + 16)) + 1480);
    v11 = switch_dbctx(*(int *)(*(_QWORD *)(a1 + 8) + 4LL * a3 + 16));
    v12 = *v9;
    v13 = *(_QWORD **)(v11 + 1480);
    v14 = (__int64)&(*v9)[2 * (_QWORD)v9[1]];
    if ( v12 != (unsigned int *)v14 )
    {
      v15 = v12;
      while ( 1 )
      {
        ptr = nullptr;
        v25 = 0;
        v16 = sub_409DB0(v10, (__int64 *)&ptr, *v15, v15[1] - *v15);
        v18 = ptr;
        if ( v16 )
        {
          v19 = (unsigned __int16 *)ptr;
          v20 = (char *)ptr + 28 * v25;
          v21 = v20 - 28;
          if ( *(_DWORD *)ptr < *v15 )
            v19 = (unsigned __int16 *)((char *)ptr + 28);
          if ( v21 >= (char *)v19 )
            break;
        }
        if ( ptr )
          goto LABEL_8;
LABEL_9:
        v15 += 2;
        if ( (unsigned int *)v14 == v15 )
          return v26 - __readfsqword(0x28u);
      }
      v23 = (char *)ptr + 28 * v25;
      v22 = *((_DWORD *)v20 - 7);
      if ( v15[1] >= v22 + (unsigned int)calc_fixup_size(*((unsigned __int16 *)v20 - 12), &ptr, v20, v17)
        || (v21 = v23 - 56, v23 - 56 >= (char *)v19) )
      {
        do
        {
          sub_4099C0(v13, *(_DWORD *)v19, v19 + 2);
          v19 += 14;
        }
        while ( v21 >= (char *)v19 );
      }
      v18 = ptr;
      if ( !ptr )
        goto LABEL_9;
LABEL_8:
      *(_QWORD *)&v25 = 0;
      qfree(v18);
      goto LABEL_9;
    }
  }
  return v26 - __readfsqword(0x28u);
}

