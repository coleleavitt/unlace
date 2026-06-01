__int64 __fastcall sub_A72130(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rdi
  void (*v10)(); // rax

  sub_A6DB20(a1);
  sub_A6E640((__int64)a1);
  sub_A6DBF0(a1);
  sub_A71460((__int64)a1);
  sub_A6DF90((__int64)a1);
  v7 = *(__int64 **)(a1[1] + 8680);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    while ( v8 != v7 )
    {
      while ( 1 )
      {
        v9 = *v7;
        v10 = *(void (**)())(*(_QWORD *)*v7 + 328LL);
        if ( v10 != nullsub_529 )
          break;
        if ( v8 == ++v7 )
          goto LABEL_7;
      }
      ++v7;
      a2 = (__int64)a1;
      ((void (__fastcall *)(__int64, __int64 *))v10)(v9, a1);
    }
  }
LABEL_7:
  sub_A6E700(a1, a2, v3, v4, v5, v6);
  return a1[9];
}

