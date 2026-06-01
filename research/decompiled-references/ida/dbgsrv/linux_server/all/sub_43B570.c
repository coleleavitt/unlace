/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43B570
// Address: 0x000000000043B570

//----- (000000000043B570) ----------------------------------------------------
unsigned __int64 __fastcall sub_43B570(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  unsigned __int64 v4; // rax
  const void *v6; // r15
  size_t v8; // rax
  size_t v11; // r12
  unsigned __int8 *v12; // rdi
  unsigned __int64 v13; // r12
  _BYTE *v14; // r15
  unsigned __int8 *v15; // rdi
  unsigned int v16; // r12d
  __int64 (__fastcall *v17)(); // rax
  void *v18; // rdi
  unsigned __int64 v19; // rdx
  void *v20; // rdi
  unsigned __int64 v21; // rdx
  unsigned int v22; // [rsp+0h] [rbp-68h]
  unsigned __int64 v23; // [rsp+0h] [rbp-68h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 168);
  if ( v4 < (unsigned __int64)a3 )
  {
    v6 = *(const void **)(a1 + 160);
    if ( v4 < (unsigned __int64)v6 )
      goto LABEL_24;
    v8 = v4 - (_QWORD)v6;
    ptr = nullptr;
    v11 = v8;
    v25 = 0;
    if ( !v8 )
      goto LABEL_5;
    v20 = nullptr;
    v21 = v8 + 1;
    if ( v8 != -1 )
    {
      v23 = v8 + 1;
      ptr = sub_481540((__int64)&ptr, nullptr, v21, 1u);
      v21 = v23;
      v20 = ptr;
    }
    *(_QWORD *)&v25 = v21;
    memmove(v20, v6, v11);
    *((_BYTE *)ptr + v11) = 0;
    if ( (_QWORD)v25 )
      v12 = (unsigned __int8 *)ptr;
    else
LABEL_5:
      v12 = (unsigned __int8 *)s1;
    v22 = sub_4799E0(v12);
    if ( ptr )
    {
      *(_QWORD *)&v25 = 0;
      j__free(ptr);
    }
    v13 = *(_QWORD *)(a1 + 168);
    if ( (unsigned __int64)a3 < v13 )
LABEL_24:
      sub_43B550();
    ptr = nullptr;
    v25 = 0;
    v14 = &a3[-v13];
    if ( a3 == (_BYTE *)v13 )
      goto LABEL_10;
    v18 = nullptr;
    v19 = (unsigned __int64)(v14 + 1);
    if ( v14 != (_BYTE *)-1LL )
    {
      ptr = sub_481540((__int64)&ptr, nullptr, v19, 1u);
      v19 = (unsigned __int64)(v14 + 1);
      v18 = ptr;
    }
    *(_QWORD *)&v25 = v19;
    memmove(v18, (const void *)v13, (size_t)&a3[-v13]);
    v14[(_QWORD)ptr] = 0;
    if ( !(_QWORD)v25 )
LABEL_10:
      v15 = (unsigned __int8 *)s1;
    else
      v15 = (unsigned __int8 *)ptr;
    v16 = sub_4799E0(v15);
    if ( ptr )
    {
      *(_QWORD *)&v25 = 0;
      j__free(ptr);
    }
    v17 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 16LL);
    if ( v17 != nullsub_7 )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))v17)(a2, v22, v16, a4);
    *(_QWORD *)(a1 + 168) = a3;
  }
  return v26 - __readfsqword(0x28u);
}
// 43B4E0: using guessed type __int64 __fastcall nullsub_7();
