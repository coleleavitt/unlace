unsigned __int64 __fastcall edit_type_form_data_t__::vfunc_4(__int64 a1, __int64 *a2)
{
  char v2; // al
  unsigned int *v3; // rbx
  unsigned int *v4; // r14
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rdx
  char v10; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v2 = *(_BYTE *)(a1 + 296);
  v11 = __readfsqword(0x28u);
  switch ( v2 )
  {
    case 29:
      goto LABEL_11;
    case 45:
      v9 = a1 + 268;
LABEL_10:
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 8))(a2, 100, v9);
      break;
    case 13:
LABEL_11:
      v9 = a1 + 264;
      goto LABEL_10;
    case 61:
      (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 48))(a2, 10);
      break;
  }
  v3 = *(unsigned int **)(a1 + 272);
  v4 = &v3[*(_QWORD *)(a1 + 280)];
  while ( v4 != v3 )
  {
    v5 = *v3;
    v6 = *a2;
    v10 = 0;
    ++v3;
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64, char *))(v6 + 120))(a2, 100, v5, 1, &v10);
    v7 = *a2;
    v10 = 0;
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64, char *))(v7 + 120))(a2, 100, v5, 2, &v10);
  }
  return v11 - __readfsqword(0x28u);
}
