__int64 __fastcall sub_AB3140(__int64 *a1)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v3; // r12
  unsigned int *v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned int *v8; // rbp
  unsigned int v9; // eax
  __int64 v10[9]; // [rsp+10h] [rbp-48h] BYREF

  sub_15B6110(a1[2]);
  result = *(unsigned int *)(a1[2] + 400);
  if ( (_DWORD)result == 1 )
  {
    v3 = *a1;
    v4 = (unsigned int *)sub_186B270(0x1C0u);
    sub_B31730(v4, *a1);
    return sub_8F1E10(v3, v4);
  }
  if ( (unsigned int)result <= 1 )
  {
    v5 = *a1;
    v6 = sub_186B270(0x40u);
    v7 = a1[1];
    v8 = (unsigned int *)v6;
    sub_180C5A0(v10, "array");
    v9 = sub_15DA4C0(v7 + 560, v10);
    sub_ADA4E0(v8, *a1, v9, "no array");
    return sub_8F1E10(v5, v8);
  }
  if ( (_DWORD)result == 2 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v10, "The model-based array theory solver is deprecated");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v10);
    sub_233E40((__int64)v10);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( (_DWORD)result == 3 )
  {
    v3 = *a1;
    v4 = (unsigned int *)sub_186B270(0x260u);
    sub_BD5DB0(v4, *a1);
    return sub_8F1E10(v3, v4);
  }
  return result;
}

