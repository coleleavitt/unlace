__int64 __fastcall sub_73B120(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdx
  int v6; // eax
  __int64 v8; // rax
  void *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64, unsigned __int64); // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // r9d
  void (__fastcall *v19)(__int64, __int64); // rax
  char v20[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v21; // [rsp+1008h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  *(_DWORD *)a1 = -1;
  v3 = *a2;
  if ( *a2 )
  {
    if ( (unsigned __int8)qfileexist(*a2, a2) )
    {
      if ( *(_BYTE *)(a1 + 8) )
      {
        v4 = 2;
        v5 = 0xFFFFFFFFLL;
      }
      else
      {
        v4 = 0;
        v5 = 0;
      }
      v6 = qopen_shared(v3, v4, v5);
    }
    else
    {
      v6 = qcreate(v3, 438);
    }
    if ( v6 != -1 )
      goto LABEL_7;
    goto LABEL_16;
  }
  if ( !qtmpnam(v20) )
  {
    v13 = 26;
    v16 = *__errno_location();
    v19 = *(void (__fastcall **)(__int64, __int64))(a1 + 16);
    if ( !v19 )
      goto LABEL_22;
    goto LABEL_20;
  }
  v8 = qstrdup(v20);
  v9 = (void *)v8;
  if ( !v8 )
  {
    v13 = 2;
    v16 = *__errno_location();
    v19 = *(void (__fastcall **)(__int64, __int64))(a1 + 16);
    if ( !v19 )
LABEL_22:
      off_2C81BC0(v13, v16, v14, v15, v17, v18);
LABEL_20:
    v19(v13, v16);
    return v21 - __readfsqword(0x28u);
  }
  v6 = qcreate(v8, 438);
  if ( v6 != -1 )
  {
    *a2 = v9;
LABEL_7:
    *(_DWORD *)a1 = v6;
    return v21 - __readfsqword(0x28u);
  }
  qfree(v9);
LABEL_16:
  v11 = *__errno_location();
  v12 = *(__int64 (__fastcall **)(__int64, __int64, unsigned __int64))(a1 + 16);
  if ( v12 )
    return v12(26, v11, v21 - __readfsqword(0x28u));
  else
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))off_2C81BC0)(26, v11, v10);
}
