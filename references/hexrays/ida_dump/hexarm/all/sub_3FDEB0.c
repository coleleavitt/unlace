__int64 sub_3FDEB0(__int64 *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // [rsp-8h] [rbp-178h]
  _BYTE *v16; // [rsp+0h] [rbp-170h] BYREF
  __int64 v17; // [rsp+8h] [rbp-168h] BYREF
  __int16 v18; // [rsp+10h] [rbp-160h]
  char v19; // [rsp+12h] [rbp-15Eh]
  __int64 v20; // [rsp+20h] [rbp-150h] BYREF
  __int128 v21; // [rsp+28h] [rbp-148h]
  gcc_va_list va; // [rsp+38h] [rbp-138h] BYREF
  _BYTE v23[72]; // [rsp+50h] [rbp-120h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp-D8h]
  __int64 v25; // [rsp+B8h] [rbp-B8h]
  __int64 v26; // [rsp+C0h] [rbp-B0h]
  __int64 v27; // [rsp+C8h] [rbp-A8h]

  va_start(va, a3);
  v25 = va_arg(va, _QWORD);
  v26 = va_arg(va, _QWORD);
  v3 = v26;
  v27 = va_arg(va, _QWORD);
  v4 = v27;
  va_end(va);
  v24 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a2 + 745) )
  {
    sub_CF9B0(0x7D5u, 0, 0, 0, 1, 0, 0);
    *(_BYTE *)(a2 + 745) = 1;
    v3 = v15;
  }
  va_start(va, a3);
  qvsnprintf(v23, 64, a3, va, v3, v4);
  v18 = 0;
  v16 = v23;
  v19 = 48;
  v17 = 0;
  v20 = 0;
  v21 = 0;
  v7 = sub_CF9B0(0x7D5u, &v20, &v16, 0, 1, 0, 0);
  v8 = v20;
  v9 = 0;
  if ( v7 > 0 )
  {
    v10 = *a1;
    v9 = 1;
    *a1 = *(_QWORD *)(v20 + 8);
    *(_QWORD *)(v8 + 8) = v10;
  }
  if ( v8 )
  {
    v11 = v21;
    if ( (_QWORD)v21 )
    {
      v12 = 0;
      do
      {
        v13 = 3 * v12++;
        clear_tinfo_t(v8 + 8 * v13 + 8);
        v8 = v20;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v21 = 0;
    qfree(v8);
  }
  clear_tinfo_t(&v17);
  return v9;
}
