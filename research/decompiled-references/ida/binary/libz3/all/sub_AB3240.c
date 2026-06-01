__int64 __fastcall sub_AB3240(__int64 *a1, __int64 a2)
{
  char **exception; // rbx
  __int64 result; // rax
  __int64 v4; // r12
  unsigned int *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned int *v9; // rbp
  unsigned int v10; // eax
  __int64 v11[9]; // [rsp+10h] [rbp-48h] BYREF

  sub_15B6120(a1[2], a2);
  result = *(unsigned int *)(a1[2] + 400);
  if ( (_DWORD)result == 1 )
  {
    v4 = *a1;
    v5 = (unsigned int *)sub_186B270(0x1C0u);
    sub_B31730(v5, *a1);
    return sub_8F1E10(v4, v5);
  }
  if ( (unsigned int)result <= 1 )
  {
    v6 = *a1;
    v7 = sub_186B270(0x40u);
    v8 = a1[1];
    v9 = (unsigned int *)v7;
    sub_180C5A0(v11, "array");
    v10 = sub_15DA4C0(v8 + 560, v11);
    sub_ADA4E0(v9, *a1, v10, "no array");
    return sub_8F1E10(v6, v9);
  }
  if ( (_DWORD)result == 2 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v11, "The model-based array theory solver is deprecated");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v11);
    sub_233E40((__int64)v11);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( (_DWORD)result == 3 )
  {
    v4 = *a1;
    v5 = (unsigned int *)sub_186B270(0x260u);
    sub_BD5DB0(v5, *a1);
    return sub_8F1E10(v4, v5);
  }
  return result;
}

