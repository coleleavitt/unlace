__int64 *__fastcall sub_5A2B00(__int64 a1)
{
  void *v2; // rbx
  __int64 (__fastcall *v3)(void (__fastcall ***)(_QWORD)); // rdx
  void **v4; // rbx
  void **v5; // r13
  void *v6; // rbp
  void *v7; // rdi
  __int64 (__fastcall *v8)(void (__fastcall ***)(_QWORD)); // rdx
  void (__fastcall ***v9)(_QWORD); // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 *result; // rax

  v2 = *(void **)(a1 + 104);
  *(_QWORD *)a1 = &off_1C52390;
  v3 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v2 + 16LL);
  if ( v3 == sub_4C9C30 )
  {
    (**(void (__fastcall ***)(void *))v2)(v2);
    sub_186B220(v2);
  }
  else
  {
    v3((void (__fastcall ***)(_QWORD))v2);
  }
  v4 = *(void ***)(a1 + 112);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v5 != v4 )
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( !*v4 )
          goto LABEL_7;
        v7 = *v4;
        v8 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v6 + 16LL);
        if ( v8 == sub_4C9C10 )
        {
          (**(void (__fastcall ***)(void *))v6)(v7);
          sub_186B220(v6);
LABEL_7:
          if ( ++v4 == v5 )
            break;
        }
        else
        {
          v8((void (__fastcall ***)(_QWORD))v7);
          if ( ++v4 == v5 )
            break;
        }
      }
    }
  }
  v9 = *(void (__fastcall ****)(_QWORD))(a1 + 152);
  if ( v9 )
  {
    (**v9)(*(_QWORD *)(a1 + 152));
    sub_186B220(v9);
  }
  sub_4CFE00(*(void (****)(void))(a1 + 144));
  v10 = *(_QWORD *)(a1 + 136);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(_QWORD *)(a1 + 120);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *(_QWORD *)(a1 + 112);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *(_QWORD *)(a1 + 80);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = *(_QWORD *)(a1 + 72);
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = *(_QWORD *)(a1 + 64);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 48);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(_QWORD *)(a1 + 32);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = *(_QWORD *)(a1 + 16);
  result = qword_1C665B0;
  *(_QWORD *)a1 = qword_1C665B0;
  if ( v19 )
    return (__int64 *)sub_186B220((void *)(v19 - 8));
  return result;
}

