__int64 __fastcall sub_7D3200(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 result; // rax
  void (*v8)(); // rcx
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 80);
  if ( !v4 )
  {
    v10 = a3;
    v9 = sub_7D0C20(a1);
    a3 = v10;
    v4 = v9;
  }
  v5 = v4 + 8;
  if ( a3 )
  {
    sub_25AC200(v5, a2, a3, off_47DA8D0);
  }
  else if ( a2 != sub_25AC4A0(v5, a2, off_47DA8D0) )
  {
    goto LABEL_8;
  }
  v6 = *(unsigned int *)(v4 + 32);
  if ( *(unsigned int *)(v4 + 36) < (unsigned __int64)(v6 + 1) )
  {
    sub_25D6060(v4 + 24, v4 + 40, v6 + 1, 8);
    v6 = *(unsigned int *)(v4 + 32);
  }
  *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v6) = a2;
  ++*(_DWORD *)(v4 + 32);
LABEL_8:
  result = sub_798D90(a1);
  if ( result )
  {
    v8 = *(void (**)())(*(_QWORD *)result + 56LL);
    if ( v8 != nullsub_69 )
      return ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))v8)(
               result,
               a1,
               *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL);
  }
  return result;
}

