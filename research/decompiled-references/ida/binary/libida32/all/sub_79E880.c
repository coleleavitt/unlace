__int64 __fastcall sub_79E880(unsigned int *a1, unsigned __int8 *a2)
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
  sub_79FD90(&ptr, a2[8]);
  (*(void (__fastcall **)(unsigned __int8 *, void **, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, &ptr, a1[27]);
  v2 = a2[8];
  v3 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)a1 + 16LL);
  if ( v3 != sub_79E220 )
  {
    v4 = v3((__int64)a1, a2[8], (__int64)&ptr);
    goto LABEL_4;
  }
  if ( !v9 || !(unsigned int)sub_79F460(a1, &ptr) )
  {
    v4 = sub_79FBE0(a1, v2);
LABEL_4:
    v5 = (unsigned int *)v4;
    goto LABEL_5;
  }
  v5 = nullptr;
LABEL_5:
  v6 = sub_79E760((__int64)a1, v5);
  qfree(v5);
  if ( ptr )
  {
    v9 = 0;
    qfree(ptr);
  }
  return v6;
}

