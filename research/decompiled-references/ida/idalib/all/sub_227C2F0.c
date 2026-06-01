__off_t __fastcall sub_227C2F0(__int64 *a1, unsigned __int8 *a2, size_t a3, __off_t a4)
{
  __int64 (*v8)(void); // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __off_t v11; // rbp
  __int64 v12; // rax
  std::_V2 *v13; // rdi
  __off_t v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  std::_V2 *v18; // rdi
  __off_t result; // rax
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rbp

  v8 = *(__int64 (**)(void))(*a1 + 80);
  if ( (char *)v8 == (char *)sub_A1EA60 )
    v9 = a1[11];
  else
    v9 = v8();
  v10 = a1[2];
  v11 = v9 + a1[4] - v10;
  if ( v10 != a1[4] )
  {
    v12 = *a1;
    a1[4] = v10;
    (*(void (__fastcall **)(__int64 *))(v12 + 72))(a1);
  }
  v13 = (std::_V2 *)*((unsigned int *)a1 + 12);
  v14 = lseek((int)v13, a4, 0);
  a1[11] = v14;
  if ( v14 == -1 )
  {
    v20 = std::_V2::generic_category(v13);
    v21 = *__errno_location();
    a1[10] = v20;
    *((_DWORD *)a1 + 18) = v21;
  }
  sub_227BF10(a1, a2, a3);
  v15 = a1[4];
  v16 = a1[2];
  if ( v15 != v16 )
  {
    v17 = *a1;
    a1[4] = v16;
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v17 + 72))(a1, v16, v15 - v16);
  }
  v18 = (std::_V2 *)*((unsigned int *)a1 + 12);
  result = lseek((int)v18, v11, 0);
  a1[11] = result;
  if ( result == -1 )
  {
    v22 = std::_V2::generic_category(v18);
    result = (unsigned int)*__errno_location();
    a1[10] = v22;
    *((_DWORD *)a1 + 18) = result;
  }
  return result;
}
