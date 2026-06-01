__int64 __fastcall sub_19EC0(unsigned int *a1, unsigned __int8 *a2)
{
  unsigned int v2; // ebp
  __int64 (__fastcall *v3)(__int64, unsigned __int8, __int64); // rax
  __int64 v4; // rax
  unsigned int *v5; // rbp
  __int64 v6; // rbx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  sub_1AEF0(&ptr, a2[8]);
  (*(void (__fastcall **)(unsigned __int8 *, void **, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, &ptr, a1[27]);
  v2 = a2[8];
  v3 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v3 != sub_19B60 )
  {
    v4 = v3((__int64)a1, a2[8], (__int64)&ptr);
    goto LABEL_4;
  }
  if ( !v9 || !(unsigned int)sub_1A5C0(a1, &ptr) )
  {
    v4 = sub_1AD40(a1, v2);
LABEL_4:
    v5 = (unsigned int *)v4;
    goto LABEL_5;
  }
  v5 = nullptr;
LABEL_5:
  v6 = sub_19DA0((__int64)a1, v5);
  j__free(v5);
  if ( ptr )
  {
    v9 = 0;
    j__free(ptr);
  }
  return v6;
}

